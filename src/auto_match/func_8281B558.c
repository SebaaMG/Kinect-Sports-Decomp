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


ulonglong fn_8281B558(int param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = 1;
  if ((param_3 & 0xffffffff) != 0) {
    uVar4 = param_3;
  }
  lVar5 = param_2;
  uVar6 = uVar4;
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
    lVar5 = param_2 - (ulonglong)*(uint *)(param_1 + 0x78);
    uVar6 = ((ulonglong)*(uint *)(param_1 + 0x78) & 0x7fffffff) * 2 + uVar4;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x10))(param_1,lVar5);
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0) {
    uVar2 = 0;
  }
  else {
    if (((*(uint *)(param_1 + 0xc) & 2) != 0) && ((uVar6 & 0xffffffff) < (uVar1 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar6 + lVar5,0xee,uVar1 - uVar6);
    }
    uVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_1,lVar5,uVar6);
    if (uVar2 == 0) {
      if (*(code **)(param_1 + 0x20) != (code *)0x0) {
        uVar2 = (**(code **)(param_1 + 0x20))(param_1,param_2,uVar4);
      }
    }
    else {
      *(int *)(param_1 + 0x30) = ((int)uVar6 - (int)uVar1) + *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) - (int)uVar6) + (int)uVar1;
      if (((*(uint *)(param_1 + 0xc) & 1) != 0) && ((uVar1 & 0xffffffff) < (uVar6 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2 + uVar1,0xcc,uVar6 - uVar1);
      }
      if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(uint *)(param_1 + 0x78) + uVar2 + uVar4,0xdd);
      }
      uVar3 = *(uint *)(param_1 + 0x50);
      if ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x50)) {
        uVar3 = (uint)uVar2;
      }
      *(uint *)(param_1 + 0x50) = uVar3;
      uVar3 = *(uint *)(param_1 + 0x54);
      if ((ulonglong)*(uint *)(param_1 + 0x54) < (uVar2 & 0xffffffff)) {
        uVar3 = (uint)uVar2;
      }
      *(uint *)(param_1 + 0x54) = uVar3;
      uVar3 = *(uint *)(param_1 + 0x44);
      if ((uVar4 & 0xffffffff) < (ulonglong)uVar3) {
        uVar3 = (uint)uVar4;
      }
      *(uint *)(param_1 + 0x44) = uVar3;
      uVar6 = uVar4;
      if ((uVar4 & 0xffffffff) <= (ulonglong)*(uint *)(param_1 + 0x48)) {
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
      }
      *(int *)(param_1 + 0x48) = (int)uVar6;
      if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
        uVar2 = (**(code **)(param_1 + 0x1c))(param_1,param_2,uVar4,uVar2);
      }
    }
  }
  return uVar2;
}

