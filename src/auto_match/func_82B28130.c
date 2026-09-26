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
extern int fn_82AD1270();
extern int fn_82B25248();


void fn_82B28130(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = *(uint *)(param_2 + 8);
  uVar7 = uVar6 >> 7 & 0x7f;
  if ((uVar7 < 0x10) || (bVar3 = true, 0x12 < uVar7)) {
    bVar3 = false;
  }
  if (((bVar3) || (uVar7 == 2)) || (bVar3 = false, uVar7 == 0xc)) {
    bVar3 = true;
  }
  if ((bVar3) && (param_3 == 4)) {
    iVar8 = 0;
    if (0x100000 < (uVar6 & 0x380000)) {
      iVar8 = *(int *)(param_2 + 0x34);
    }
    for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      if (((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) && ((*puVar1 & 0x1f) != 4))
      goto LAB_82b28284;
    }
    iVar4 = *(int *)(param_2 + 0x30);
    if ((*(uint *)(*(int *)(*(int *)(param_2 + 0x2c) + 0xc) + 8) & 0x3f80) == 16000) {
      iVar4 = *(int *)(param_2 + 0x2c);
    }
    fn_82AD1270(iVar4,4);
    if (iVar8 != 0) {
      fn_82AD1270(iVar8,4);
    }
    for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
        *puVar1 = *puVar1 & 0xffffffe0;
      }
    }
    for (iVar8 = *(int *)(param_2 + 4); iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
      if (*(int *)(iVar8 + 0x10) != 0) {
        fn_82B25248(param_1,*(int *)(iVar8 + 0x10),param_4);
      }
    }
  }
  else {
LAB_82b28284:
    if ((uVar7 == 1) || (bVar3 = false, uVar7 == 0xc)) {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    if (param_3 != 4) {
      return;
    }
    if ((uVar7 < 0x10) || (bVar3 = true, 0x12 < uVar7)) {
      bVar3 = false;
    }
    if ((bVar3) && (uVar7 != 0x12)) {
      return;
    }
    for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      if (((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) && ((*puVar1 & 0x1f) != 4)) {
        return;
      }
    }
    uVar7 = uVar6 >> 0x13 & 7;
    iVar8 = 0;
    uVar6 = 0;
    uVar2 = *(undefined4 *)((uVar7 + 10) * 4 + param_2);
    if (uVar7 == 1) {
      return;
    }
    piVar5 = (int *)(param_2 + 0x2c);
    do {
      if ((iVar8 == 0) || ((*(uint *)(*(int *)(iVar8 + 0xc) + 8) & 0x3f80) != 16000)) {
        iVar8 = *piVar5;
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 < uVar7 - 1);
    if (iVar8 == 0) {
      return;
    }
    fn_82AD1270(iVar8,4);
    fn_82AD1270(uVar2,4);
    for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
        *puVar1 = *puVar1 & 0xffffffe0;
      }
    }
    for (iVar8 = *(int *)(param_2 + 4); iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
      if (*(int *)(iVar8 + 0x10) != 0) {
        fn_82B25248(param_1,*(int *)(iVar8 + 0x10),param_4);
      }
    }
  }
  uVar6 = *(uint *)(param_2 + 0xc) & 0xcccc;
  if ((*(uint *)(param_2 + 0xc) & 0xffff) != uVar6) {
    *(short *)(param_2 + 0xe) = (short)uVar6;
    fn_82B25248(param_1,param_2,param_4);
  }
  return;
}

