require('dbproto')

local msg = dbproto.msgnew('dbproto.UserData')
msg.uid = 333
print('msgnew', msg)
print('msgnew userdata.uid', msg.uid)
local msg = dbproto.msgnew('dbproto.UserData')

print('dbproto', dbproto)
print('dbproto.UserData', dbproto.UserData)
local user = dbproto.UserData.new()
print('user.uname', user.uname)
user.uname = 'aaa'
print('user.uname', user.uname)
local achieve_data = dbproto.AchieveData:new()
print('achieve_data', achieve_data)
local achieve = achieve_data:add_achieves()
print('achieve', achieve)
achieve.id = 3
local testtable = {}
for i = 1, 10000000 do
    testtable.hello = i
end
local achieve1 = achieve_data:get_achieves(0)
achieve1:add_value(1)
achieve1:add_value(2)
print('achieve1 debugstring')
print(achieve1:debug_string())
print('achieve1 tostring', achieve1:tostring())
print('achieve1 tostring len', string.len(achieve1:tostring()))
print('achieve1 bytesize', achieve1:bytesize())
print('achieve1 msgname', achieve1:msgname())
print('achieve1', achieve1)
print('achieve1 id', achieve1.id)
local achieve2 = dbproto.Achieve:new()
print('achieve2 parse_from_string', achieve2:parse_from_string(achieve1:tostring()))
print('achieve2 debugstring')
print(achieve2:debug_string())
print('achieves size', achieve_data:achieves_size())
achieve_data:del_achieves(0)
print('achieves size', achieve_data:achieves_size())
achieve_data:del_achieves(0)
