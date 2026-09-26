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
extern int fn_82F68CC0();


void fn_82ED7BB0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  fn_82F68CC0(param_2,param_3,0x10);
  fn_82F68CC0(param_2 + param_4,param_3 + param_5,0x10);
  lVar1 = param_2 + param_4 + param_4;
  lVar2 = param_3 + param_5 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar1 = lVar1 + param_4;
  lVar2 = lVar2 + param_5;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar2 = lVar2 + param_5;
  lVar1 = lVar1 + param_4;
  fn_82F68CC0(lVar1,lVar2,0x10);
  lVar2 = lVar2 + param_5;
  lVar1 = lVar1 + param_4;
  fn_82F68CC0(lVar1,lVar2,0x10);
  fn_82F68CC0(lVar1 + param_4,lVar2 + param_5,0x10);
  return;
}

