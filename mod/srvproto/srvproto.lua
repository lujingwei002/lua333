module('Srvproto', package.seeall)
--[[
先在LUA实现吧，性能不好就换成C
--]]

ERR = 1

NIL_TYPE = 1
INT_TYPE = 2
STR_TYPE = 3
PROTOBUF_TYPE = 4
JSON_TYPE = 5
BSON_TYPE = 6

POST_PROTO = 1

--消息分发
--@args sockfd
--@return error, 
function dispatch(sockfd)
    --填充recvbuf
    local buf = Recvbuf.getwptr(sockfd)
    local bufremain = Recvbuf.bufremain(sockfd)
    log('bufremain(%d)', bufremain)
    local recv = Socket.recv(sockfd, buf, bufremain)
    log('recv(%d)', recv)
    if recv == 0 then
        return ERR
    end
    if recv == -1 then
        return
    end
    Recvbuf.wskip(sockfd, recv)
    --读buf
    local datalen = Recvbuf.datalen(sockfd)
    if datalen <= 4 then
        return
    end
    local plen = Recvbuf.getint32(sockfd)
    log('plen(%d) datalen(%d)', plen, datalen)
    if datalen < plen then
        return
    end
    local arfd = Ar.create(Recvbuf.getrptr(sockfd), datalen)
    local plen = Ar.readint32(arfd)
    local argcount = Ar.readint16(arfd)
    local args = {}
    log('argcount(%d)', argcount)
    for i = 1, argcount do
        local tag = Ar.readint8(arfd)
        if tag == INT_TYPE then
            local val = Ar.readint32(arfd)
            table.insert(args, val)
        elseif tag == NIL_TYPE then
            table.insert(args, nil)
        elseif tag == STR_TYPE then
            local val = Ar.readlstr(arfd)
            table.insert(args, val)
        elseif tag == JSON_TYPE then
            local val = Ar.readlstr(arfd)
            local json = Json.decode(val)
            table.insert(args, val)
        end
    --    log('tag(%d)', tag)
    end
    print(Json.encode(args))
    Recvbuf.rskip(sockfd, plen)
    Recvbuf.buf2line(sockfd)
    --分发到不同的协议层
    local proto = args[1]
    if proto == POST_PROTO then
        Postproto.dispatch(sockfd, unpack(args))
    end
end

local function calc_len(args)
    local len = 2 --arg count
    for _, v in pairs(args) do
        if type(v) == 'nil' then
            len = len + 1
        elseif type(v) == 'number' then
            len = len + 1 + 4
        elseif type(v) == 'string' then
            len = len + 1 + 2 + string.len(v)
        elseif type(v) == 'table' then
            local str = Json.encode(v)
            len = len + 1 + 2 + string.len(str)
        end
    end
    return len
end

function send(sockfd, ...)
    local args = {...}
    local plen = 4 + calc_len(args)
    log('plen(%d)', plen)
    local buf = Sendbuf.alloc(sockfd, plen)
    local arfd = Ar.create(buf, plen)
    Ar.writeint32(arfd, plen)
    Ar.writeint16(arfd, #args)
    for _, v in pairs(args) do
        if type(v) == 'nil' then
            Ar.writeint8(arfd, NIL_TYPE)
        elseif type(v) == 'number' then
            Ar.writeint8(arfd, INT_TYPE)
            Ar.writeint32(arfd, v)
        elseif type(v) == 'string' then
            Ar.writeint8(arfd, STR_TYPE)
            Ar.writelstr(arfd, v)
        elseif type(v) == 'table' then
            local str = Json.encode(v)
            Ar.writeint8(arfd, JSON_TYPE)
            Ar.writelstr(arfd, str)
        end
    end
    Sendbuf.flush(sockfd, buf, plen)
    Ar.free(arfd)
    Port.add_write_event(sockfd)
end