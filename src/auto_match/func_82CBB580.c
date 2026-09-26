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
extern int fn_82CBA440();


void fn_82CBB580(undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  
  fn_82CBA440();
  fn_82CBA440(param_1,param_2 + 8,param_3,param_4 + 8,param_5,param_6,param_7,param_8);
  lVar1 = (param_3 & 0x1fffffff) * 8 + param_2 + 8;
  param_4 = (param_5 & 0x1fffffff) * 8 + param_4;
  fn_82CBA440(param_1,lVar1,param_3,param_4 + 8,param_5,param_6,param_7,param_8);
  fn_82CBA440(param_1,lVar1 + -8,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

