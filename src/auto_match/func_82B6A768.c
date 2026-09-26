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
extern unsigned int *auStack_a0;
extern int fn_823AA458();
extern int fn_82AB15D0();
extern int fn_82AB8598();
extern int fn_82B69A00();
extern int fn_82B69A80();
extern int fn_82B6A390();
extern int fn_82B6D908();
extern int fn_82F68CC0();
extern unsigned int lbl_820D9248;


undefined8 fn_82B6A768(undefined4 *param_1,int param_2,ulonglong param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar7;
  ulonglong uVar5;
  uint *puVar8;
  undefined4 *puVar9;
  ulonglong uVar6;
  undefined4 *puVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined1 auStack_a0 [160];
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d965c,0xffffffff820d95d8,0x61a);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9650,0xffffffff820d95d8,0x61b);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9640,0xffffffff820d95d8,0x61c);
  }
  if (param_3 == 0xffffffffffffff14) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9230,0xffffffff820d95d8,0x61f);
  }
  uVar4 = fn_82B69A00(param_1[3],0);
  if (param_4 != 0) {
    uVar4 = 0xffc;
  }
  puVar10 = (undefined4 *)param_3;
  fn_823AA458(*puVar10);
  iVar7 = fn_82AB8598();
  uVar5 = fn_82B6A390(param_2);
  puVar8 = (uint *)(*(code *)param_1[1])(*param_1,(uVar5 & 0x3fffffff) << 2);
  puVar9 = (undefined4 *)(*(code *)puVar10[0x3d])(puVar10[0x3c],uVar5);
  *puVar9 = 0xc00b2500;
  uVar13 = 0;
  puVar15 = puVar9 + 1;
  puVar14 = puVar8;
  do {
    iVar2 = (int)((uVar13 + 1 & 0xffffffff) << 2);
    puVar12 = *(uint **)(*(int *)(iVar2 + param_2) + 0x20);
    uVar6 = fn_82B69A80(uVar13);
    if ((uVar6 & uVar4) == 0) {
      *puVar15 = puVar12[1] | *(uint *)(*(int *)(iVar2 + param_2) + 0x10);
    }
    else {
      uVar6 = (ulonglong)*puVar12;
      puVar12 = puVar12 + 2;
      lVar11 = 0;
      if (uVar6 != 0) {
        do {
          if (*(uint *)(&lbl_820D9248 + (int)((uVar13 * 0x26 + lVar11 & 0xffffffff) << 2)) != 0) {
            uVar1 = *puVar12;
            *puVar14 = *(uint *)(&lbl_820D9248 + (int)((uVar13 * 0x26 + lVar11 & 0xffffffff) << 2));
            puVar14[1] = uVar1;
            puVar14 = puVar14 + 2;
          }
          lVar11 = lVar11 + 1;
          puVar12 = puVar12 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      *puVar15 = 0x10;
    }
    puVar12 = puVar15 + 1;
    if ((uVar13 & 0xffffffff) == 0) {
      puVar15[1] = 0x10;
      puVar15[2] = 0x10;
      puVar12 = puVar15 + 3;
    }
    puVar15 = puVar12;
    uVar13 = uVar13 + 1;
  } while ((uVar13 & 0xffffffff) < 6);
  puVar12 = *(uint **)(*(int *)(param_2 + 0x20) + 0x20);
  if ((uVar4 & 4) == 0) {
    if (iVar7 == 0) {
      *puVar15 = *(uint *)(*(int *)(param_2 + 0x20) + 0x10);
      puVar15 = puVar15 + 1;
      *puVar15 = puVar12[1];
    }
    else {
      *puVar15 = 0x10;
    }
  }
  else {
    uVar1 = *puVar12;
    *puVar14 = (uVar1 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    puVar14[1] = 0;
    puVar14[2] = uVar1;
    fn_82F68CC0(puVar14 + 3,puVar12 + 2,*puVar12 << 2);
    *puVar15 = 0x10;
    puVar15 = puVar15 + 1;
    *puVar15 = 0;
    puVar14 = puVar14 + 3 + uVar1;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  puVar3 = *(uint **)(iVar2 + 0x20);
  puVar12 = puVar15 + 1;
  if ((uVar4 & 8) == 0) {
    if (iVar7 == 0) {
      *puVar12 = *(uint *)(iVar2 + 0x10);
    }
    else {
      *puVar12 = 0x10;
      puVar15[2] = 0xc0012700;
      puVar12 = puVar15 + 3;
      *puVar12 = *(uint *)(iVar2 + 0x10) | 2;
    }
    puVar15 = puVar12 + 1;
    *puVar15 = puVar3[1];
  }
  else {
    uVar1 = *puVar3;
    *puVar14 = (uVar1 + 1) * 0x10000 & 0x3fff0000 | 0xc0002b00;
    puVar14[1] = 1;
    puVar14[2] = uVar1;
    fn_82F68CC0(puVar14 + 3,puVar3 + 2,*puVar3 << 2);
    *puVar12 = 0x10;
    puVar15 = puVar15 + 2;
    *puVar15 = 0;
    puVar14 = puVar14 + 3 + uVar1;
  }
  iVar7 = (int)puVar14 - (int)puVar8 >> 2;
  fn_82F68CC0(puVar15 + 1,puVar8,iVar7 << 2);
  uVar4 = (longlong)((int)(puVar15 + 1) - (int)puVar9 >> 2) + (longlong)iVar7;
  if ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9690,0xffffffff820d95d8,0x6a6);
  }
  (*(code *)puVar10[0x40])(puVar10[0x3c],uVar4,auStack_a0);
  fn_82B6D908(param_2,auStack_a0);
  (*(code *)param_1[2])(*param_1,puVar8);
  return 0;
}

