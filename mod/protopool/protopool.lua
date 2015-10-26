module('Protopool', package.seeall)

OPTIONAL = 1
REQUIRED = 2
REPEATED = 3

INT32 = 1
INT64 = 2
FLOAT = 3
STRING = 4

basetype = {
    ['int32'] = INT32, 
    ['int64'] = INT64, 
    ['float'] = FLOAT, 
    ['string'] = STRING,
}

descriptors = descriptors or {}

function import(filepath)
    print('import', filepath)
    local file = io.open(filepath, 'r')
    if not file then
        print('file', filepath, 'not found')
        return 
    end
    local cur_class_name = nil
    local cur_class_list = {}
    local cur_package_name = nil
    for line in file:lines() do
        for package_name in string.gmatch(line, 'package%s+(%w+)') do
            cur_package_name = package_name
        end
        --枚举
        for enum_name in string.gmatch(line, 'enum%s+(%w+)') do
            cur_enum_name = enum_name
            if not descriptors[cur_class_name] then
                descriptors[cur_enum_name] = {
                    field = {}, 
                    package = cur_package_name,
                    enumname = cur_enum_name,
                    type = 'enum',
                }
            end
        end
        --消息
        for message_name in string.gmatch(line, 'message%s+(%w+)') do
            --print('message', message_name)
            cur_class_list[#cur_class_list + 1] = message_name
            cur_class_name = string.join('.', cur_class_list)
            if not descriptors[cur_class_name] then
                descriptors[cur_class_name] = {
                    field = {}, 
                    package = cur_package_name,
                    classname = cur_class_name,
                    type = 'message',
                }
            end
        end
        if cur_enum_name then
            for _ in string.gmatch(line, '}') do
                local descriptor = descriptors[cur_enum_name] 
                cur_enum_name = nil
                --print(Json.encode(descriptor))
            end
        end
        if cur_class_name then
            for _ in string.gmatch(line, '}') do
                cur_class_list[#cur_class_list] = nil
                local descriptor = descriptors[cur_class_name] 
                cur_class_name = string.join('.', cur_class_list)
                if cur_class_name == '' then cur_class_name = nil end
                --print(Json.encode(descriptor))
            end
        end
        if cur_enum_name then
            for varname, varval in string.gmatch(line, '([%w_]+)%s?=%s?(%w+)') do
                local descriptor = descriptors[cur_enum_name] 
                descriptor.field[varname] = {varname = varname, varval = varval}
            end
        end
        if cur_class_name then
            for unname, vartype, varname, tag in string.gmatch(line, '(%w+)%s+(%w+)%s+([%w_]+)%s?=%s?(%w+)') do
                default = nil
                for _default in string.gmatch(line, "%[default%s?=%s?'?(%w?)'?%s?%]") do
                    default = _default
                end
                --print('varname', unname, vartype, varname, tag, default)
                local descriptor = descriptors[cur_class_name] 
                descriptor.field[varname] = {unname = unname, vartype = vartype, varname = varname, tag = tag, default = default}
                if not basetype[vartype] then
                    descriptor.field[varname].vartype = string.format('%s.%s', descriptor.package, descriptor.field[varname].vartype)
                end
            end
        end
    end
end


function get_descriptor(class_name)
    return descriptors[class_name]
end
