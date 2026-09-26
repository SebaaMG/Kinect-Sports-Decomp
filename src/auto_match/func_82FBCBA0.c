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
extern int fn_82FC9A08();
extern int fn_82FC9C90();
extern int fn_82FC9F80();
extern int fn_82FCA218();


undefined8 fn_82FBCBA0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar4;
  longlong lVar3;
  int *piVar5;
  
  if (param_1[2] == 0) {
    if (param_1[3] != 0) {
      fn_82FCA218(param_1[3],param_2);
      if (param_1[3] != 0) {
        fn_82FC9F80();
      }
      (**(code **)(*param_2 + 8))(param_2,param_1[3]);
      param_1[3] = 0;
    }
  }
  else {
    fn_82FC9C90();
    if (param_1[2] != 0) {
      fn_82FC9A08();
    }
    (**(code **)(*param_2 + 8))(param_2,param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[9] != 0) {
    uVar2 = 0;
    if (param_1[0x40] != 0) {
      iVar4 = 0;
      do {
        iVar1 = param_1[9];
        if (*(int *)(iVar1 + iVar4 + 4) != 0) {
          (**(code **)(*param_2 + 8))(param_2);
          *(undefined4 *)(iVar1 + iVar4 + 4) = 0;
        }
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 0x10;
      } while (uVar2 < (uint)param_1[0x40]);
    }
    (**(code **)(*param_2 + 8))(param_2,param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[10] != 0) {
    uVar2 = 0;
    if (param_1[0x40] != 0) {
      iVar4 = 0;
      do {
        iVar1 = param_1[10];
        if (*(int *)(iVar4 + iVar1 + 4) != 0) {
          (**(code **)(*param_2 + 8))(param_2);
          *(undefined4 *)(iVar4 + iVar1 + 4) = 0;
        }
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 0x10;
      } while (uVar2 < (uint)param_1[0x40]);
    }
    (**(code **)(*param_2 + 8))(param_2,param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    uVar2 = 0;
    if (param_1[0x40] != 0) {
      iVar4 = 0;
      do {
        iVar1 = param_1[0xb];
        if (*(int *)(iVar1 + iVar4 + 0x18) != 0) {
          (**(code **)(*param_2 + 8))(param_2);
          *(undefined4 *)(iVar1 + iVar4 + 0x18) = 0;
        }
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (uVar2 < (uint)param_1[0x40]);
    }
    (**(code **)(*param_2 + 8))(param_2,param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_1[4] = 0;
  }
  piVar5 = param_1 + 0xc;
  lVar3 = 0xc;
  do {
    if (*piVar5 != 0) {
      (**(code **)(*param_2 + 8))(param_2);
      *piVar5 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar5 = piVar5 + 1;
  } while (lVar3 != 0);
  (**(code **)*param_1)(param_1,1);
  (**(code **)(*param_2 + 8))(param_2,param_1);
  return 1;
}

