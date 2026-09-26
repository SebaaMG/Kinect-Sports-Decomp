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
extern unsigned int *auStack_20;
extern int fn_82EE0458();
extern int fn_82EE1048();


undefined8 fn_82EE17C8(int param_1,uint param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint auStack_20 [2];
  
  if (((param_3 & 0xffffffff) == 0) || (*(uint *)(param_1 + 0x254) <= (param_2 & 0xffff))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_82EE1048(param_1 + 0x48,param_2 & 0xffff,auStack_20);
    uVar1 = fn_82EE0458(param_1,((uVar2 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_20[0],
                              param_3);
  }
  return uVar1;
}

