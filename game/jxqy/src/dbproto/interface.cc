/*
** Lua binding: dbproto
** Generated automatically by tolua++-1.0.92 on Wed Oct 28 02:14:42 2015.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_dbproto_open (lua_State* tolua_S);

#include "dbproto.h"
using namespace std;
using namespace google::protobuf;
#define TOLUA_RELEASE

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_dbproto__AchieveData (lua_State* tolua_S)
{
 dbproto::AchieveData* self = (dbproto::AchieveData*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__UserData__Hello (lua_State* tolua_S)
{
 dbproto::UserData::Hello* self = (dbproto::UserData::Hello*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__TaskData (lua_State* tolua_S)
{
 dbproto::TaskData* self = (dbproto::TaskData*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__Friend (lua_State* tolua_S)
{
 dbproto::Friend* self = (dbproto::Friend*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__PlayerData (lua_State* tolua_S)
{
 dbproto::PlayerData* self = (dbproto::PlayerData*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__Achieve (lua_State* tolua_S)
{
 dbproto::Achieve* self = (dbproto::Achieve*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__UserData (lua_State* tolua_S)
{
 dbproto::UserData* self = (dbproto::UserData*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__FriendData (lua_State* tolua_S)
{
 dbproto::FriendData* self = (dbproto::FriendData*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_dbproto__Task (lua_State* tolua_S)
{
 dbproto::Task* self = (dbproto::Task*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"dbproto::AchieveData");
 tolua_usertype(tolua_S,"dbproto::UserData::Hello");
 tolua_usertype(tolua_S,"dbproto::TaskData");
 tolua_usertype(tolua_S,"dbproto::Friend");
 tolua_usertype(tolua_S,"dbproto::PlayerData");
 tolua_usertype(tolua_S,"dbproto::Achieve");
 tolua_usertype(tolua_S,"dbproto::UserData");
 tolua_usertype(tolua_S,"dbproto::FriendData");
 tolua_usertype(tolua_S,"dbproto::Task");
}

/* method: new of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_new00
static int tolua_dbproto_dbproto_Task_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::Task* tolua_ret = (dbproto::Task*)  new dbproto::Task();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Task");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_new00_local
static int tolua_dbproto_dbproto_Task_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::Task* tolua_ret = (dbproto::Task*)  new dbproto::Task();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::Task");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_delete00
static int tolua_dbproto_dbproto_Task_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_clear00
static int tolua_dbproto_dbproto_Task_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_debug_string00
static int tolua_dbproto_dbproto_Task_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_msgname00
static int tolua_dbproto_dbproto_Task_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_bytesize00
static int tolua_dbproto_dbproto_Task_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Task_tostring of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_tostring00
static int tolua_dbproto_dbproto_Task_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Task_tostring'",NULL);
#endif
  {
return dbproto_Task_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Task_parse_from_string of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_parse_from_string00
static int tolua_dbproto_dbproto_Task_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Task_parse_from_string'",NULL);
#endif
  {
return dbproto_Task_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Task_parse_from_buf of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_parse_from_buf00
static int tolua_dbproto_dbproto_Task_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Task_parse_from_buf'",NULL);
#endif
  {
return dbproto_Task_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Task_serialize of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_serialize00
static int tolua_dbproto_dbproto_Task_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Task_serialize'",NULL);
#endif
  {
return dbproto_Task_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__Task_id
static int tolua_get_dbproto__Task_id(lua_State* tolua_S)
{
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__Task_id
static int tolua_set_dbproto__Task_id(lua_State* tolua_S)
{
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_id(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_value of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_add_value00
static int tolua_dbproto_dbproto_Task_add_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  int32 value = ((int32)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_value'",NULL);
#endif
  {
   self->add_value(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_value of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_set_value00
static int tolua_dbproto_dbproto_Task_set_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  int32 value = ((int32)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_value'",NULL);
#endif
  {
   self->set_value(index,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: value of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_value00
static int tolua_dbproto_dbproto_Task_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'value'",NULL);
#endif
  {
   int32 tolua_ret = (int32)  self->value(index);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: value_size of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_value_size00
static int tolua_dbproto_dbproto_Task_value_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'value_size'",NULL);
#endif
  {
   int tolua_ret = (int)  self->value_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'value_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear_value of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_clear_value00
static int tolua_dbproto_dbproto_Task_clear_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear_value'",NULL);
#endif
  {
   self->clear_value();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Task_del_value of class  dbproto::Task */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Task_del_value00
static int tolua_dbproto_dbproto_Task_del_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Task",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Task* self = (dbproto::Task*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Task_del_value'",NULL);
#endif
  {
   dbproto_Task_del_value(self,L,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_new00
static int tolua_dbproto_dbproto_UserData_Hello_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::UserData::Hello* tolua_ret = (dbproto::UserData::Hello*)  new dbproto::UserData::Hello();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::UserData::Hello");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_new00_local
static int tolua_dbproto_dbproto_UserData_Hello_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::UserData::Hello* tolua_ret = (dbproto::UserData::Hello*)  new dbproto::UserData::Hello();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::UserData::Hello");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_delete00
static int tolua_dbproto_dbproto_UserData_Hello_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_clear00
static int tolua_dbproto_dbproto_UserData_Hello_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_debug_string00
static int tolua_dbproto_dbproto_UserData_Hello_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_msgname00
static int tolua_dbproto_dbproto_UserData_Hello_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_bytesize00
static int tolua_dbproto_dbproto_UserData_Hello_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_Hello_tostring of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_tostring00
static int tolua_dbproto_dbproto_UserData_Hello_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_Hello_tostring'",NULL);
#endif
  {
return dbproto_UserData_Hello_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_Hello_parse_from_string of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_parse_from_string00
static int tolua_dbproto_dbproto_UserData_Hello_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_Hello_parse_from_string'",NULL);
#endif
  {
return dbproto_UserData_Hello_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_Hello_parse_from_buf of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_parse_from_buf00
static int tolua_dbproto_dbproto_UserData_Hello_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_Hello_parse_from_buf'",NULL);
#endif
  {
return dbproto_UserData_Hello_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_Hello_serialize of class  Hello */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_Hello_serialize00
static int tolua_dbproto_dbproto_UserData_Hello_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData::Hello",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_Hello_serialize'",NULL);
#endif
  {
return dbproto_UserData_Hello_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: str of class  Hello */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__UserData__Hello_str
static int tolua_get_dbproto__UserData__Hello_str(lua_State* tolua_S)
{
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'str'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->str());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: str of class  Hello */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__UserData__Hello_str
static int tolua_set_dbproto__UserData__Hello_str(lua_State* tolua_S)
{
  dbproto::UserData::Hello* self = (dbproto::UserData::Hello*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'str'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_str(((string)  tolua_tocppstring(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_new00
static int tolua_dbproto_dbproto_UserData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::UserData* tolua_ret = (dbproto::UserData*)  new dbproto::UserData();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::UserData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_new00_local
static int tolua_dbproto_dbproto_UserData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::UserData* tolua_ret = (dbproto::UserData*)  new dbproto::UserData();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::UserData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_delete00
static int tolua_dbproto_dbproto_UserData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_clear00
static int tolua_dbproto_dbproto_UserData_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_debug_string00
static int tolua_dbproto_dbproto_UserData_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_msgname00
static int tolua_dbproto_dbproto_UserData_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_bytesize00
static int tolua_dbproto_dbproto_UserData_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_tostring of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_tostring00
static int tolua_dbproto_dbproto_UserData_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_tostring'",NULL);
#endif
  {
return dbproto_UserData_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_parse_from_string of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_parse_from_string00
static int tolua_dbproto_dbproto_UserData_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_parse_from_string'",NULL);
#endif
  {
return dbproto_UserData_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_parse_from_buf of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_parse_from_buf00
static int tolua_dbproto_dbproto_UserData_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_parse_from_buf'",NULL);
#endif
  {
return dbproto_UserData_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_UserData_serialize of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_UserData_serialize00
static int tolua_dbproto_dbproto_UserData_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::UserData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_UserData_serialize'",NULL);
#endif
  {
return dbproto_UserData_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: money of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__UserData_money
static int tolua_get_dbproto__UserData_money(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'money'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->money());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: money of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__UserData_money
static int tolua_set_dbproto__UserData_money(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'money'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_money(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uid of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__UserData_uid
static int tolua_get_dbproto__UserData_uid(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uid());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uid of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__UserData_uid
static int tolua_set_dbproto__UserData_uid(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uid(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: last_login_time of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__UserData_last_login_time
static int tolua_get_dbproto__UserData_last_login_time(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'last_login_time'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->last_login_time());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: last_login_time of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__UserData_last_login_time
static int tolua_set_dbproto__UserData_last_login_time(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'last_login_time'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_last_login_time(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uname of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__UserData_uname
static int tolua_get_dbproto__UserData_uname(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uname'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->uname());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uname of class  dbproto::UserData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__UserData_uname
static int tolua_set_dbproto__UserData_uname(lua_State* tolua_S)
{
  dbproto::UserData* self = (dbproto::UserData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uname'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uname(((string)  tolua_tocppstring(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_new00
static int tolua_dbproto_dbproto_FriendData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::FriendData* tolua_ret = (dbproto::FriendData*)  new dbproto::FriendData();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::FriendData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_new00_local
static int tolua_dbproto_dbproto_FriendData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::FriendData* tolua_ret = (dbproto::FriendData*)  new dbproto::FriendData();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::FriendData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_delete00
static int tolua_dbproto_dbproto_FriendData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_clear00
static int tolua_dbproto_dbproto_FriendData_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_debug_string00
static int tolua_dbproto_dbproto_FriendData_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_msgname00
static int tolua_dbproto_dbproto_FriendData_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_bytesize00
static int tolua_dbproto_dbproto_FriendData_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_FriendData_tostring of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_tostring00
static int tolua_dbproto_dbproto_FriendData_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_FriendData_tostring'",NULL);
#endif
  {
return dbproto_FriendData_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_FriendData_parse_from_string of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_parse_from_string00
static int tolua_dbproto_dbproto_FriendData_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_FriendData_parse_from_string'",NULL);
#endif
  {
return dbproto_FriendData_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_FriendData_parse_from_buf of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_parse_from_buf00
static int tolua_dbproto_dbproto_FriendData_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_FriendData_parse_from_buf'",NULL);
#endif
  {
return dbproto_FriendData_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_FriendData_serialize of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_serialize00
static int tolua_dbproto_dbproto_FriendData_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_FriendData_serialize'",NULL);
#endif
  {
return dbproto_FriendData_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_friends of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_add_friends00
static int tolua_dbproto_dbproto_FriendData_add_friends00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_friends'",NULL);
#endif
  {
   dbproto::Friend* tolua_ret = (dbproto::Friend*)  self->add_friends();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Friend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_friends'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mutable_friends of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_get_friends00
static int tolua_dbproto_dbproto_FriendData_get_friends00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mutable_friends'",NULL);
#endif
  {
   dbproto::Friend* tolua_ret = (dbproto::Friend*)  self->mutable_friends(index);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Friend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_friends'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: friends_size of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_friends_size00
static int tolua_dbproto_dbproto_FriendData_friends_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'friends_size'",NULL);
#endif
  {
   int tolua_ret = (int)  self->friends_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'friends_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear_friends of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_clear_friends00
static int tolua_dbproto_dbproto_FriendData_clear_friends00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear_friends'",NULL);
#endif
  {
   self->clear_friends();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear_friends'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_FriendData_del_friends of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_FriendData_del_friends00
static int tolua_dbproto_dbproto_FriendData_del_friends00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::FriendData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* ls =  tolua_S;
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_FriendData_del_friends'",NULL);
#endif
  {
   dbproto_FriendData_del_friends(self,ls,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_friends'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uid of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__FriendData_uid
static int tolua_get_dbproto__FriendData_uid(lua_State* tolua_S)
{
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uid());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uid of class  dbproto::FriendData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__FriendData_uid
static int tolua_set_dbproto__FriendData_uid(lua_State* tolua_S)
{
  dbproto::FriendData* self = (dbproto::FriendData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uid(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_new00
static int tolua_dbproto_dbproto_Friend_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::Friend* tolua_ret = (dbproto::Friend*)  new dbproto::Friend();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Friend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_new00_local
static int tolua_dbproto_dbproto_Friend_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::Friend* tolua_ret = (dbproto::Friend*)  new dbproto::Friend();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::Friend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_delete00
static int tolua_dbproto_dbproto_Friend_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_clear00
static int tolua_dbproto_dbproto_Friend_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_debug_string00
static int tolua_dbproto_dbproto_Friend_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_msgname00
static int tolua_dbproto_dbproto_Friend_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_bytesize00
static int tolua_dbproto_dbproto_Friend_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Friend_tostring of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_tostring00
static int tolua_dbproto_dbproto_Friend_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Friend_tostring'",NULL);
#endif
  {
return dbproto_Friend_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Friend_parse_from_string of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_parse_from_string00
static int tolua_dbproto_dbproto_Friend_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Friend_parse_from_string'",NULL);
#endif
  {
return dbproto_Friend_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Friend_parse_from_buf of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_parse_from_buf00
static int tolua_dbproto_dbproto_Friend_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Friend_parse_from_buf'",NULL);
#endif
  {
return dbproto_Friend_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Friend_serialize of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Friend_serialize00
static int tolua_dbproto_dbproto_Friend_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Friend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Friend_serialize'",NULL);
#endif
  {
return dbproto_Friend_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uname of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__Friend_uname
static int tolua_get_dbproto__Friend_uname(lua_State* tolua_S)
{
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uname'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->uname());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uname of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__Friend_uname
static int tolua_set_dbproto__Friend_uname(lua_State* tolua_S)
{
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uname'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uname(((string)  tolua_tocppstring(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uid of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__Friend_uid
static int tolua_get_dbproto__Friend_uid(lua_State* tolua_S)
{
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uid());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uid of class  dbproto::Friend */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__Friend_uid
static int tolua_set_dbproto__Friend_uid(lua_State* tolua_S)
{
  dbproto::Friend* self = (dbproto::Friend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uid(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_new00
static int tolua_dbproto_dbproto_TaskData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::TaskData* tolua_ret = (dbproto::TaskData*)  new dbproto::TaskData();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::TaskData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_new00_local
static int tolua_dbproto_dbproto_TaskData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::TaskData* tolua_ret = (dbproto::TaskData*)  new dbproto::TaskData();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::TaskData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_delete00
static int tolua_dbproto_dbproto_TaskData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_clear00
static int tolua_dbproto_dbproto_TaskData_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_debug_string00
static int tolua_dbproto_dbproto_TaskData_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_msgname00
static int tolua_dbproto_dbproto_TaskData_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_bytesize00
static int tolua_dbproto_dbproto_TaskData_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_TaskData_tostring of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_tostring00
static int tolua_dbproto_dbproto_TaskData_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_TaskData_tostring'",NULL);
#endif
  {
return dbproto_TaskData_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_TaskData_parse_from_string of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_parse_from_string00
static int tolua_dbproto_dbproto_TaskData_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_TaskData_parse_from_string'",NULL);
#endif
  {
return dbproto_TaskData_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_TaskData_parse_from_buf of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_parse_from_buf00
static int tolua_dbproto_dbproto_TaskData_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_TaskData_parse_from_buf'",NULL);
#endif
  {
return dbproto_TaskData_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_TaskData_serialize of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_serialize00
static int tolua_dbproto_dbproto_TaskData_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_TaskData_serialize'",NULL);
#endif
  {
return dbproto_TaskData_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_tasks of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_add_tasks00
static int tolua_dbproto_dbproto_TaskData_add_tasks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_tasks'",NULL);
#endif
  {
   dbproto::Task* tolua_ret = (dbproto::Task*)  self->add_tasks();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Task");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_tasks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mutable_tasks of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_get_tasks00
static int tolua_dbproto_dbproto_TaskData_get_tasks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mutable_tasks'",NULL);
#endif
  {
   dbproto::Task* tolua_ret = (dbproto::Task*)  self->mutable_tasks(index);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Task");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_tasks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tasks_size of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_tasks_size00
static int tolua_dbproto_dbproto_TaskData_tasks_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tasks_size'",NULL);
#endif
  {
   int tolua_ret = (int)  self->tasks_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tasks_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear_tasks of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_clear_tasks00
static int tolua_dbproto_dbproto_TaskData_clear_tasks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear_tasks'",NULL);
#endif
  {
   self->clear_tasks();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear_tasks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_TaskData_del_tasks of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_TaskData_del_tasks00
static int tolua_dbproto_dbproto_TaskData_del_tasks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::TaskData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* ls =  tolua_S;
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_TaskData_del_tasks'",NULL);
#endif
  {
   dbproto_TaskData_del_tasks(self,ls,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_tasks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uid of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__TaskData_uid
static int tolua_get_dbproto__TaskData_uid(lua_State* tolua_S)
{
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uid());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uid of class  dbproto::TaskData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__TaskData_uid
static int tolua_set_dbproto__TaskData_uid(lua_State* tolua_S)
{
  dbproto::TaskData* self = (dbproto::TaskData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uid(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_new00
static int tolua_dbproto_dbproto_PlayerData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::PlayerData* tolua_ret = (dbproto::PlayerData*)  new dbproto::PlayerData();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::PlayerData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_new00_local
static int tolua_dbproto_dbproto_PlayerData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::PlayerData* tolua_ret = (dbproto::PlayerData*)  new dbproto::PlayerData();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::PlayerData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_delete00
static int tolua_dbproto_dbproto_PlayerData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_clear00
static int tolua_dbproto_dbproto_PlayerData_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_debug_string00
static int tolua_dbproto_dbproto_PlayerData_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_msgname00
static int tolua_dbproto_dbproto_PlayerData_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_bytesize00
static int tolua_dbproto_dbproto_PlayerData_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_PlayerData_tostring of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_tostring00
static int tolua_dbproto_dbproto_PlayerData_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_PlayerData_tostring'",NULL);
#endif
  {
return dbproto_PlayerData_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_PlayerData_parse_from_string of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_parse_from_string00
static int tolua_dbproto_dbproto_PlayerData_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_PlayerData_parse_from_string'",NULL);
#endif
  {
return dbproto_PlayerData_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_PlayerData_parse_from_buf of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_parse_from_buf00
static int tolua_dbproto_dbproto_PlayerData_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_PlayerData_parse_from_buf'",NULL);
#endif
  {
return dbproto_PlayerData_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_PlayerData_serialize of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_PlayerData_serialize00
static int tolua_dbproto_dbproto_PlayerData_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_PlayerData_serialize'",NULL);
#endif
  {
return dbproto_PlayerData_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uid of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__PlayerData_uid
static int tolua_get_dbproto__PlayerData_uid(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uid());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uid of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__PlayerData_uid
static int tolua_set_dbproto__PlayerData_uid(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uid(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: userdata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__PlayerData_userdata_ptr
static int tolua_get_dbproto__PlayerData_userdata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userdata'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->mutable_userdata(),"dbproto::UserData");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: userdata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__PlayerData_userdata_ptr
static int tolua_set_dbproto__PlayerData_userdata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'userdata'",NULL);
  if (!tolua_isusertype(tolua_S,2,"dbproto::UserData",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_allocated_userdata(((dbproto::UserData*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: taskdata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__PlayerData_taskdata_ptr
static int tolua_get_dbproto__PlayerData_taskdata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'taskdata'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->mutable_taskdata(),"dbproto::TaskData");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: taskdata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__PlayerData_taskdata_ptr
static int tolua_set_dbproto__PlayerData_taskdata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'taskdata'",NULL);
  if (!tolua_isusertype(tolua_S,2,"dbproto::TaskData",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_allocated_taskdata(((dbproto::TaskData*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: achievedata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__PlayerData_achievedata_ptr
static int tolua_get_dbproto__PlayerData_achievedata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'achievedata'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->mutable_achievedata(),"dbproto::AchieveData");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: achievedata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__PlayerData_achievedata_ptr
static int tolua_set_dbproto__PlayerData_achievedata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'achievedata'",NULL);
  if (!tolua_isusertype(tolua_S,2,"dbproto::AchieveData",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_allocated_achievedata(((dbproto::AchieveData*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: frienddata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__PlayerData_frienddata_ptr
static int tolua_get_dbproto__PlayerData_frienddata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frienddata'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)self->mutable_frienddata(),"dbproto::FriendData");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: frienddata of class  dbproto::PlayerData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__PlayerData_frienddata_ptr
static int tolua_set_dbproto__PlayerData_frienddata_ptr(lua_State* tolua_S)
{
  dbproto::PlayerData* self = (dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'frienddata'",NULL);
  if (!tolua_isusertype(tolua_S,2,"dbproto::FriendData",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_allocated_frienddata(((dbproto::FriendData*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_new00
static int tolua_dbproto_dbproto_AchieveData_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::AchieveData* tolua_ret = (dbproto::AchieveData*)  new dbproto::AchieveData();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::AchieveData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_new00_local
static int tolua_dbproto_dbproto_AchieveData_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::AchieveData* tolua_ret = (dbproto::AchieveData*)  new dbproto::AchieveData();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::AchieveData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_delete00
static int tolua_dbproto_dbproto_AchieveData_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_clear00
static int tolua_dbproto_dbproto_AchieveData_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_debug_string00
static int tolua_dbproto_dbproto_AchieveData_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_msgname00
static int tolua_dbproto_dbproto_AchieveData_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_bytesize00
static int tolua_dbproto_dbproto_AchieveData_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_AchieveData_tostring of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_tostring00
static int tolua_dbproto_dbproto_AchieveData_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_AchieveData_tostring'",NULL);
#endif
  {
return dbproto_AchieveData_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_AchieveData_parse_from_string of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_parse_from_string00
static int tolua_dbproto_dbproto_AchieveData_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_AchieveData_parse_from_string'",NULL);
#endif
  {
return dbproto_AchieveData_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_AchieveData_parse_from_buf of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_parse_from_buf00
static int tolua_dbproto_dbproto_AchieveData_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_AchieveData_parse_from_buf'",NULL);
#endif
  {
return dbproto_AchieveData_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_AchieveData_serialize of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_serialize00
static int tolua_dbproto_dbproto_AchieveData_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_AchieveData_serialize'",NULL);
#endif
  {
return dbproto_AchieveData_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_achieves of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_add_achieves00
static int tolua_dbproto_dbproto_AchieveData_add_achieves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_achieves'",NULL);
#endif
  {
   dbproto::Achieve* tolua_ret = (dbproto::Achieve*)  self->add_achieves();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Achieve");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_achieves'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mutable_achieves of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_get_achieves00
static int tolua_dbproto_dbproto_AchieveData_get_achieves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mutable_achieves'",NULL);
#endif
  {
   dbproto::Achieve* tolua_ret = (dbproto::Achieve*)  self->mutable_achieves(index);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Achieve");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_achieves'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: achieves_size of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_achieves_size00
static int tolua_dbproto_dbproto_AchieveData_achieves_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'achieves_size'",NULL);
#endif
  {
   int tolua_ret = (int)  self->achieves_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'achieves_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear_achieves of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_clear_achieves00
static int tolua_dbproto_dbproto_AchieveData_clear_achieves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear_achieves'",NULL);
#endif
  {
   self->clear_achieves();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear_achieves'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_AchieveData_del_achieves of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_AchieveData_del_achieves00
static int tolua_dbproto_dbproto_AchieveData_del_achieves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::AchieveData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
  lua_State* ls =  tolua_S;
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_AchieveData_del_achieves'",NULL);
#endif
  {
   dbproto_AchieveData_del_achieves(self,ls,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_achieves'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: uid of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__AchieveData_uid
static int tolua_get_dbproto__AchieveData_uid(lua_State* tolua_S)
{
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->uid());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: uid of class  dbproto::AchieveData */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__AchieveData_uid
static int tolua_set_dbproto__AchieveData_uid(lua_State* tolua_S)
{
  dbproto::AchieveData* self = (dbproto::AchieveData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'uid'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_uid(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_new00
static int tolua_dbproto_dbproto_Achieve_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::Achieve* tolua_ret = (dbproto::Achieve*)  new dbproto::Achieve();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"dbproto::Achieve");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_new00_local
static int tolua_dbproto_dbproto_Achieve_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   dbproto::Achieve* tolua_ret = (dbproto::Achieve*)  new dbproto::Achieve();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"dbproto::Achieve");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_delete00
static int tolua_dbproto_dbproto_Achieve_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_clear00
static int tolua_dbproto_dbproto_Achieve_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DebugString of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_debug_string00
static int tolua_dbproto_dbproto_Achieve_debug_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DebugString'",NULL);
#endif
  {
   string tolua_ret = (string)  self->DebugString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTypeName of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_msgname00
static int tolua_dbproto_dbproto_Achieve_msgname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTypeName'",NULL);
#endif
  {
   string tolua_ret = (string)  self->GetTypeName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'msgname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ByteSize of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_bytesize00
static int tolua_dbproto_dbproto_Achieve_bytesize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ByteSize'",NULL);
#endif
  {
   int tolua_ret = (int)  self->ByteSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bytesize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Achieve_tostring of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_tostring00
static int tolua_dbproto_dbproto_Achieve_tostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Achieve_tostring'",NULL);
#endif
  {
return dbproto_Achieve_tostring(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Achieve_parse_from_string of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_parse_from_string00
static int tolua_dbproto_dbproto_Achieve_parse_from_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Achieve_parse_from_string'",NULL);
#endif
  {
return dbproto_Achieve_parse_from_string(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Achieve_parse_from_buf of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_parse_from_buf00
static int tolua_dbproto_dbproto_Achieve_parse_from_buf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Achieve_parse_from_buf'",NULL);
#endif
  {
return dbproto_Achieve_parse_from_buf(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_from_buf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Achieve_serialize of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_serialize00
static int tolua_dbproto_dbproto_Achieve_serialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Achieve_serialize'",NULL);
#endif
  {
return dbproto_Achieve_serialize(self,L);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'serialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: id of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_get_dbproto__Achieve_id
static int tolua_get_dbproto__Achieve_id(lua_State* tolua_S)
{
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->id());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: id of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_set_dbproto__Achieve_id
static int tolua_set_dbproto__Achieve_id(lua_State* tolua_S)
{
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'id'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_id(((int32)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: add_value of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_add_value00
static int tolua_dbproto_dbproto_Achieve_add_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  int32 value = ((int32)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add_value'",NULL);
#endif
  {
   self->add_value(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_value of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_set_value00
static int tolua_dbproto_dbproto_Achieve_set_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  int32 value = ((int32)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_value'",NULL);
#endif
  {
   self->set_value(index,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: value of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_value00
static int tolua_dbproto_dbproto_Achieve_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'value'",NULL);
#endif
  {
   int32 tolua_ret = (int32)  self->value(index);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: value_size of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_value_size00
static int tolua_dbproto_dbproto_Achieve_value_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'value_size'",NULL);
#endif
  {
   int tolua_ret = (int)  self->value_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'value_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear_value of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_clear_value00
static int tolua_dbproto_dbproto_Achieve_clear_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear_value'",NULL);
#endif
  {
   self->clear_value();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dbproto_Achieve_del_value of class  dbproto::Achieve */
#ifndef TOLUA_DISABLE_tolua_dbproto_dbproto_Achieve_del_value00
static int tolua_dbproto_dbproto_Achieve_del_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::Achieve",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::Achieve* self = (dbproto::Achieve*)  tolua_tousertype(tolua_S,1,0);
  lua_State* L =  tolua_S;
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dbproto_Achieve_del_value'",NULL);
#endif
  {
   dbproto_Achieve_del_value(self,L,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'del_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_dbproto_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Task","dbproto::Task","",tolua_collect_dbproto__Task);
   #else
   tolua_cclass(tolua_S,"Task","dbproto::Task","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Task");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_Task_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_Task_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_Task_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_Task_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_Task_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_Task_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_Task_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_Task_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_Task_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_Task_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_Task_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_Task_serialize00);
    tolua_variable(tolua_S,"id",tolua_get_dbproto__Task_id,tolua_set_dbproto__Task_id);
    tolua_function(tolua_S,"add_value",tolua_dbproto_dbproto_Task_add_value00);
    tolua_function(tolua_S,"set_value",tolua_dbproto_dbproto_Task_set_value00);
    tolua_function(tolua_S,"value",tolua_dbproto_dbproto_Task_value00);
    tolua_function(tolua_S,"value_size",tolua_dbproto_dbproto_Task_value_size00);
    tolua_function(tolua_S,"clear_value",tolua_dbproto_dbproto_Task_clear_value00);
    tolua_function(tolua_S,"del_value",tolua_dbproto_dbproto_Task_del_value00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"UserData","dbproto::UserData","",tolua_collect_dbproto__UserData);
   #else
   tolua_cclass(tolua_S,"UserData","dbproto::UserData","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"UserData");
    #ifdef __cplusplus
    tolua_cclass(tolua_S,"Hello","dbproto::UserData::Hello","",tolua_collect_dbproto__UserData__Hello);
    #else
    tolua_cclass(tolua_S,"Hello","dbproto::UserData::Hello","",NULL);
    #endif
    tolua_beginmodule(tolua_S,"Hello");
     tolua_function(tolua_S,"new",tolua_dbproto_dbproto_UserData_Hello_new00);
     tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_UserData_Hello_new00_local);
     tolua_function(tolua_S,".call",tolua_dbproto_dbproto_UserData_Hello_new00_local);
     tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_UserData_Hello_delete00);
     tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_UserData_Hello_clear00);
     tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_UserData_Hello_debug_string00);
     tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_UserData_Hello_msgname00);
     tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_UserData_Hello_bytesize00);
     tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_UserData_Hello_tostring00);
     tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_UserData_Hello_parse_from_string00);
     tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_UserData_Hello_parse_from_buf00);
     tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_UserData_Hello_serialize00);
     tolua_variable(tolua_S,"str",tolua_get_dbproto__UserData__Hello_str,tolua_set_dbproto__UserData__Hello_str);
    tolua_endmodule(tolua_S);
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_UserData_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_UserData_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_UserData_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_UserData_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_UserData_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_UserData_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_UserData_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_UserData_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_UserData_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_UserData_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_UserData_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_UserData_serialize00);
    tolua_variable(tolua_S,"money",tolua_get_dbproto__UserData_money,tolua_set_dbproto__UserData_money);
    tolua_variable(tolua_S,"uid",tolua_get_dbproto__UserData_uid,tolua_set_dbproto__UserData_uid);
    tolua_variable(tolua_S,"last_login_time",tolua_get_dbproto__UserData_last_login_time,tolua_set_dbproto__UserData_last_login_time);
    tolua_variable(tolua_S,"uname",tolua_get_dbproto__UserData_uname,tolua_set_dbproto__UserData_uname);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"FriendData","dbproto::FriendData","",tolua_collect_dbproto__FriendData);
   #else
   tolua_cclass(tolua_S,"FriendData","dbproto::FriendData","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"FriendData");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_FriendData_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_FriendData_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_FriendData_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_FriendData_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_FriendData_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_FriendData_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_FriendData_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_FriendData_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_FriendData_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_FriendData_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_FriendData_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_FriendData_serialize00);
    tolua_function(tolua_S,"add_friends",tolua_dbproto_dbproto_FriendData_add_friends00);
    tolua_function(tolua_S,"get_friends",tolua_dbproto_dbproto_FriendData_get_friends00);
    tolua_function(tolua_S,"friends_size",tolua_dbproto_dbproto_FriendData_friends_size00);
    tolua_function(tolua_S,"clear_friends",tolua_dbproto_dbproto_FriendData_clear_friends00);
    tolua_function(tolua_S,"del_friends",tolua_dbproto_dbproto_FriendData_del_friends00);
    tolua_variable(tolua_S,"uid",tolua_get_dbproto__FriendData_uid,tolua_set_dbproto__FriendData_uid);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Friend","dbproto::Friend","",tolua_collect_dbproto__Friend);
   #else
   tolua_cclass(tolua_S,"Friend","dbproto::Friend","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Friend");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_Friend_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_Friend_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_Friend_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_Friend_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_Friend_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_Friend_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_Friend_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_Friend_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_Friend_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_Friend_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_Friend_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_Friend_serialize00);
    tolua_variable(tolua_S,"uname",tolua_get_dbproto__Friend_uname,tolua_set_dbproto__Friend_uname);
    tolua_variable(tolua_S,"uid",tolua_get_dbproto__Friend_uid,tolua_set_dbproto__Friend_uid);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"TaskData","dbproto::TaskData","",tolua_collect_dbproto__TaskData);
   #else
   tolua_cclass(tolua_S,"TaskData","dbproto::TaskData","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"TaskData");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_TaskData_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_TaskData_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_TaskData_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_TaskData_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_TaskData_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_TaskData_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_TaskData_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_TaskData_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_TaskData_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_TaskData_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_TaskData_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_TaskData_serialize00);
    tolua_function(tolua_S,"add_tasks",tolua_dbproto_dbproto_TaskData_add_tasks00);
    tolua_function(tolua_S,"get_tasks",tolua_dbproto_dbproto_TaskData_get_tasks00);
    tolua_function(tolua_S,"tasks_size",tolua_dbproto_dbproto_TaskData_tasks_size00);
    tolua_function(tolua_S,"clear_tasks",tolua_dbproto_dbproto_TaskData_clear_tasks00);
    tolua_function(tolua_S,"del_tasks",tolua_dbproto_dbproto_TaskData_del_tasks00);
    tolua_variable(tolua_S,"uid",tolua_get_dbproto__TaskData_uid,tolua_set_dbproto__TaskData_uid);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"PlayerData","dbproto::PlayerData","",tolua_collect_dbproto__PlayerData);
   #else
   tolua_cclass(tolua_S,"PlayerData","dbproto::PlayerData","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"PlayerData");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_PlayerData_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_PlayerData_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_PlayerData_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_PlayerData_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_PlayerData_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_PlayerData_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_PlayerData_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_PlayerData_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_PlayerData_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_PlayerData_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_PlayerData_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_PlayerData_serialize00);
    tolua_variable(tolua_S,"uid",tolua_get_dbproto__PlayerData_uid,tolua_set_dbproto__PlayerData_uid);
    tolua_variable(tolua_S,"userdata",tolua_get_dbproto__PlayerData_userdata_ptr,tolua_set_dbproto__PlayerData_userdata_ptr);
    tolua_variable(tolua_S,"taskdata",tolua_get_dbproto__PlayerData_taskdata_ptr,tolua_set_dbproto__PlayerData_taskdata_ptr);
    tolua_variable(tolua_S,"achievedata",tolua_get_dbproto__PlayerData_achievedata_ptr,tolua_set_dbproto__PlayerData_achievedata_ptr);
    tolua_variable(tolua_S,"frienddata",tolua_get_dbproto__PlayerData_frienddata_ptr,tolua_set_dbproto__PlayerData_frienddata_ptr);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"AchieveData","dbproto::AchieveData","",tolua_collect_dbproto__AchieveData);
   #else
   tolua_cclass(tolua_S,"AchieveData","dbproto::AchieveData","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"AchieveData");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_AchieveData_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_AchieveData_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_AchieveData_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_AchieveData_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_AchieveData_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_AchieveData_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_AchieveData_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_AchieveData_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_AchieveData_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_AchieveData_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_AchieveData_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_AchieveData_serialize00);
    tolua_function(tolua_S,"add_achieves",tolua_dbproto_dbproto_AchieveData_add_achieves00);
    tolua_function(tolua_S,"get_achieves",tolua_dbproto_dbproto_AchieveData_get_achieves00);
    tolua_function(tolua_S,"achieves_size",tolua_dbproto_dbproto_AchieveData_achieves_size00);
    tolua_function(tolua_S,"clear_achieves",tolua_dbproto_dbproto_AchieveData_clear_achieves00);
    tolua_function(tolua_S,"del_achieves",tolua_dbproto_dbproto_AchieveData_del_achieves00);
    tolua_variable(tolua_S,"uid",tolua_get_dbproto__AchieveData_uid,tolua_set_dbproto__AchieveData_uid);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"dbproto",0);
  tolua_beginmodule(tolua_S,"dbproto");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Achieve","dbproto::Achieve","",tolua_collect_dbproto__Achieve);
   #else
   tolua_cclass(tolua_S,"Achieve","dbproto::Achieve","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Achieve");
    tolua_function(tolua_S,"new",tolua_dbproto_dbproto_Achieve_new00);
    tolua_function(tolua_S,"new_local",tolua_dbproto_dbproto_Achieve_new00_local);
    tolua_function(tolua_S,".call",tolua_dbproto_dbproto_Achieve_new00_local);
    tolua_function(tolua_S,"delete",tolua_dbproto_dbproto_Achieve_delete00);
    tolua_function(tolua_S,"clear",tolua_dbproto_dbproto_Achieve_clear00);
    tolua_function(tolua_S,"debug_string",tolua_dbproto_dbproto_Achieve_debug_string00);
    tolua_function(tolua_S,"msgname",tolua_dbproto_dbproto_Achieve_msgname00);
    tolua_function(tolua_S,"bytesize",tolua_dbproto_dbproto_Achieve_bytesize00);
    tolua_function(tolua_S,"tostring",tolua_dbproto_dbproto_Achieve_tostring00);
    tolua_function(tolua_S,"parse_from_string",tolua_dbproto_dbproto_Achieve_parse_from_string00);
    tolua_function(tolua_S,"parse_from_buf",tolua_dbproto_dbproto_Achieve_parse_from_buf00);
    tolua_function(tolua_S,"serialize",tolua_dbproto_dbproto_Achieve_serialize00);
    tolua_variable(tolua_S,"id",tolua_get_dbproto__Achieve_id,tolua_set_dbproto__Achieve_id);
    tolua_function(tolua_S,"add_value",tolua_dbproto_dbproto_Achieve_add_value00);
    tolua_function(tolua_S,"set_value",tolua_dbproto_dbproto_Achieve_set_value00);
    tolua_function(tolua_S,"value",tolua_dbproto_dbproto_Achieve_value00);
    tolua_function(tolua_S,"value_size",tolua_dbproto_dbproto_Achieve_value_size00);
    tolua_function(tolua_S,"clear_value",tolua_dbproto_dbproto_Achieve_clear_value00);
    tolua_function(tolua_S,"del_value",tolua_dbproto_dbproto_Achieve_del_value00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 extern "C"{
 TOLUA_API int luaopen_dbproto (lua_State* tolua_S) {
 return tolua_dbproto_open(tolua_S);
};
}
#endif

