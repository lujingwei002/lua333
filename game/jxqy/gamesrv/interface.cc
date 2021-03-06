/*
** Lua binding: gamesrv
** Generated automatically by tolua++-1.0.92 on Tue Oct 27 04:46:47 2015.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_gamesrv_open (lua_State* tolua_S);

#include "item/interface.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"dbproto::PlayerData");
}

/* function: Item::add_item */
#ifndef TOLUA_DISABLE_tolua_gamesrv_Item_add_item00
static int tolua_gamesrv_Item_add_item00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"dbproto::PlayerData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  dbproto::PlayerData* playerdata = ((dbproto::PlayerData*)  tolua_tousertype(tolua_S,1,0));
  int itemid = ((int)  tolua_tonumber(tolua_S,2,0));
  int itemcount = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   int tolua_ret = (int)  Item::add_item(playerdata,itemid,itemcount);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add_item'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_gamesrv_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"Item",0);
  tolua_beginmodule(tolua_S,"Item");
   tolua_function(tolua_S,"add_item",tolua_gamesrv_Item_add_item00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 extern "C"{
 TOLUA_API int luaopen_gamesrv (lua_State* tolua_S) {
 return tolua_gamesrv_open(tolua_S);
};
}
#endif

