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
extern int fn_82F691F0();
extern int fn_82F6E248();


void fn_82829620(int param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x2c);
  if ((param_4 & 0xffffffff) < uVar3) {
    bVar1 = (param_5 & 0xffffffff) < uVar3;
  }
  else {
    bVar1 = (uint)param_5 < (uint)param_4;
    uVar3 = param_4;
  }
  uVar4 = (uint)uVar3;
  if (!bVar1) {
    uVar4 = (uint)param_5;
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  uVar3 = (*(uint *)(param_1 + 0x14) + param_4) - 1 & ~(param_4 - 1);
  lVar5 = ((uVar3 + param_3 + param_5) - 1 & ~(param_5 - 1)) - uVar3;
  uVar2 = fn_82F6E248(lVar5,param_4);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,lVar5);
}

