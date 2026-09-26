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
extern unsigned int *auStack_330;
extern int fn_82F4C6A0();
extern int fn_82F4CA88();


void fn_82F4D280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  undefined1 auStack_330 [816];
  
  lVar1 = (param_7 + 1U & 0x1fffffff) << 3;
  fn_82F4C6A0(param_1,param_2,auStack_330,0x18,lVar1);
  fn_82F4CA88(auStack_330,0x18,param_3,param_4,lVar1,8 - param_8);
  return;
}

