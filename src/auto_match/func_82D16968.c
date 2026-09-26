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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAAA0();
extern int fn_82CEAB00();
extern int fn_82D16610();
extern int fn_82D166F8();
extern int fn_82D16868();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined4 * fn_82D16968(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar3;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar4 = fn_82CE5410();
  iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x1c0);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)fn_82D16868();
  }
  *puVar5 = *param_1;
  puVar5[1] = param_1[1];
  puVar5[2] = param_1[2];
  puVar5[3] = param_1[3];
  puVar10 = (undefined4 *)((uint)(param_1 + 0x34) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x34) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  piVar14 = puVar5 + 0x12;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x38) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x38) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x3c) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x3c) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x40) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x40) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x44) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x44) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((int)param_1 + in_r0 + 0x120 & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((int)puVar5 + in_r0 + 0x120 & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x4c) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x4c) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x50) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x50) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x54) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x54) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (undefined4 *)((uint)(param_1 + 0x58) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (undefined4 *)((uint)(puVar5 + 0x58) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar5[0x68] = param_1[0x68];
  puVar5[0x69] = param_1[0x69];
  puVar5[0x6a] = param_1[0x6a];
  puVar5[0x6b] = param_1[0x6b];
  *(undefined1 *)(puVar5 + 0x6d) = *(undefined1 *)(param_1 + 0x6d);
  *(undefined1 *)((int)puVar5 + 0x1b5) = *(undefined1 *)((int)param_1 + 0x1b5);
  uVar1 = param_1[0x13];
  iVar4 = fn_82CE5410();
  if ((int)(puVar5[0x14] & 0x3fffffff) < (int)uVar1) {
    uVar11 = ((ulonglong)(uint)puVar5[0x14] & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar1) {
      uVar11 = (ulonglong)uVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),piVar14,uVar11,0x40);
  }
  uVar7 = lbl_821AAD20;
  lVar12 = (ulonglong)uVar1 - (ulonglong)(uint)puVar5[0x13];
  if (0 < lVar12) {
    puVar10 = (undefined4 *)(puVar5[0x13] * 0x40 + *piVar14 + 0x34);
    do {
      if (puVar10 != (undefined4 *)0x34) {
        puVar10[-2] = uVar7;
        *puVar10 = 0xffffffff;
      }
      puVar10 = puVar10 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puVar5[0x13] = uVar1;
  iVar4 = 0;
  if (0 < (int)param_1[0x13]) {
    iVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar13 = param_1[0x12] + iVar6;
      iVar9 = *piVar14 + iVar6;
      iVar6 = iVar6 + 0x40;
      puVar10 = (undefined4 *)(iVar13 + 0x10U & 0xfffffff0);
      uVar7 = puVar10[1];
      uVar17 = puVar10[2];
      uVar18 = puVar10[3];
      puVar15 = (undefined4 *)(iVar9 + 0x10U & 0xfffffff0);
      *puVar15 = *puVar10;
      puVar15[1] = uVar7;
      puVar15[2] = uVar17;
      puVar15[3] = uVar18;
      *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar13 + 0x20);
      *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar13 + 0x24);
      *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar13 + 0x28);
      *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar13 + 0x2c);
      *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar13 + 0x30);
      *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x34);
    } while (iVar4 < (int)param_1[0x13]);
  }
  iVar4 = param_1[0x16];
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[0x17] & 0x3fffffff) < iVar4) {
    iVar9 = (puVar5[0x17] & 0x3fffffff) << 1;
    if (iVar9 <= iVar4) {
      iVar9 = iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),puVar5 + 0x15,iVar9,0x10);
  }
  puVar5[0x16] = iVar4;
  iVar4 = 0;
  if (0 < (int)param_1[0x16]) {
    iVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar10 = (undefined4 *)(iVar6 + param_1[0x15] & 0xfffffff0);
      uVar7 = puVar10[1];
      uVar17 = puVar10[2];
      uVar18 = puVar10[3];
      puVar15 = (undefined4 *)(puVar5[0x15] + iVar6 & 0xfffffff0);
      *puVar15 = *puVar10;
      puVar15[1] = uVar7;
      puVar15[2] = uVar17;
      puVar15[3] = uVar18;
      iVar6 = iVar6 + 0x10;
    } while (iVar4 < (int)param_1[0x16]);
  }
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0xffffffff;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&uStack_60,*(undefined4 *)(iVar4 + 0x10),0);
  iVar4 = param_1[10];
  if (iVar4 != 0) {
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&uStack_60,*(undefined4 *)(iVar6 + 0x10),iVar4);
    puVar10 = (undefined4 *)param_1[9];
    if (puVar10 != (undefined4 *)0x0) {
      for (puVar15 = (undefined4 *)*puVar10; puVar15 != (undefined4 *)0x0;
          puVar15 = (undefined4 *)*puVar15) {
        puVar10 = puVar15;
      }
      if (puVar10 != (undefined4 *)0x0) {
        do {
          uVar3 = fn_82D16610(puVar5 + 6,puVar10);
          iVar4 = fn_82CE5410();
          fn_82CEA160(&uStack_60,*(undefined4 *)(iVar4 + 0x10),puVar10,uVar3);
          puVar10 = (undefined4 *)puVar10[1];
        } while (puVar10 != (undefined4 *)0x0);
      }
    }
  }
  if (param_1[0x10] != 0) {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0xffffffff;
    iVar4 = fn_82CE5410();
    fn_82CEAB00(&uStack_70,*(undefined4 *)(iVar4 + 0x10),0);
    uVar7 = param_1[0x10];
    iVar4 = fn_82CE5410();
    fn_82CEAB00(&uStack_70,*(undefined4 *)(iVar4 + 0x10),uVar7);
    puVar10 = (undefined4 *)param_1[0xf];
    if (puVar10 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)*puVar10;
      while (puVar2 = puVar15, puVar2 != (undefined4 *)0x0) {
        puVar10 = puVar2;
        puVar15 = (undefined4 *)*puVar2;
      }
    }
    if (puVar10 != (undefined4 *)0x0) {
      do {
        iVar4 = fn_82D166F8(puVar5 + 0xc,puVar10);
        lVar12 = 3;
        puVar15 = (undefined4 *)(iVar4 + 4);
        do {
          uVar7 = fn_82CEA280(&uStack_60,puVar15[1],0);
          lVar12 = lVar12 + -1;
          puVar15 = puVar15 + 1;
          *puVar15 = uVar7;
        } while (lVar12 != 0);
        lVar12 = 3;
        puVar16 = (uint *)(iVar4 + 0x14);
        iVar6 = iVar4;
        do {
          uVar8 = fn_82CEA280(&uStack_70,(*puVar16 & 3) + (*puVar16 & 0xfffffffc),0);
          uVar1 = uVar8 & 0xfffffffc;
          if (uVar1 == 0) {
            iVar9 = fn_82CE5410();
            fn_82CEA160(&uStack_70,*(undefined4 *)(iVar9 + 0x10),
                              (int)puVar10 + (iVar6 - iVar4),iVar6);
          }
          else {
            fn_82CEAAA0(&uStack_70,(*puVar16 & 3) + (*puVar16 & 0xfffffffc));
            *puVar16 = (uVar8 & 3) + uVar1;
            *(int *)(((uVar8 & 3) + 5) * 4 + uVar1) = iVar6;
          }
          lVar12 = lVar12 + -1;
          puVar16 = puVar16 + 1;
          iVar6 = iVar6 + 1;
        } while (lVar12 != 0);
        puVar10 = (undefined4 *)puVar10[1];
      } while (puVar10 != (undefined4 *)0x0);
    }
    iVar4 = fn_82CE5410();
    fn_82CEA4B8(&uStack_70,*(undefined4 *)(iVar4 + 0x10));
    fn_82BA02A8(&uStack_70);
  }
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(&uStack_60,*(undefined4 *)(iVar4 + 0x10));
  fn_82BA02A8(&uStack_60);
  return puVar5;
}

