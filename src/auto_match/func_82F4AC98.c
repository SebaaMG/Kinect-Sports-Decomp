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
extern unsigned int *auStack_430;
extern int fn_82F4A0C0();
extern int fn_82F4A850();


void fn_82F4AC98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_430 [1072];
  
  iVar1 = 1 << (param_7 + 3U & 0x3f);
  fn_82F4A0C0(param_1,param_2,auStack_430,0x20,iVar1,param_8,3);
  fn_82F4A850(auStack_430,0x20,param_3,param_4,iVar1,param_8);
  return;
}

