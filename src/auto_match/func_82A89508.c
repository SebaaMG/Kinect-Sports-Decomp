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
extern int fn_82A87148();
extern int fn_82A88F60();


void fn_82A89508(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x2c);
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar4 = *(uint *)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x40);
  uVar6 = *(uint *)(param_2 + 0x4c);
  uVar7 = *(uint *)(param_2 + 0x58);
  fn_82A88F60();
  param_4 = (ulonglong)uVar6 + (ulonglong)uVar5 + (ulonglong)uVar4 +
            (ulonglong)uVar1 + (ulonglong)uVar2 + (ulonglong)uVar3 + (ulonglong)uVar7 + param_4;
  fn_82A87148(param_3,param_4 + 0x80,0x10,param_5 + 0x2c);
  fn_82A87148(param_3,param_4 + 0x90,0x10,param_5 + 0x2e);
  return;
}

