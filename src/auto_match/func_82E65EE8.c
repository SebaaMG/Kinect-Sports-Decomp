typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E65D40();


/* WARNING: Removing unreachable block (ram,0x82e65e7c) */

longlong fn_82E65EE8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = fn_82E50BE8(param_1,0,0,0,0);
  if (lVar1 == 0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    lVar2 = fn_82E65D40(param_1,lVar1,lVar1,param_2);
    if (lVar2 < 0) {
      fn_82E4FE40(lVar1);
    }
  }
  return lVar2;
}

