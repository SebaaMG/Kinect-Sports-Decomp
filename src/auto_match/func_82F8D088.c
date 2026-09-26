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
extern unsigned int *auStack_70;
extern int fn_82F8BF60();
extern int fn_82F8C050();


void fn_82F8D088(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ushort *puVar9;
  short *psVar10;
  int iVar12;
  byte bVar15;
  ushort uVar14;
  uint uVar13;
  ulonglong uVar11;
  int iVar16;
  longlong lVar17;
  ushort *puVar18;
  int iVar19;
  ushort auStack_70 [56];
  
  puVar18 = (ushort *)*param_2;
  iVar16 = -1;
  iVar12 = 0;
  iVar7 = ((int *)param_2[2])[3];
  iVar1 = *(int *)param_2[2];
  *(undefined4 *)(param_1 + 0x1450) = 0;
  *(undefined4 *)(param_1 + 0x1454) = 0x23d;
  puVar9 = puVar18;
  iVar19 = iVar7;
  if (0 < iVar7) {
    do {
      if (*puVar9 == 0) {
        puVar9[1] = 0;
      }
      else {
        iVar16 = *(int *)(param_1 + 0x1450);
        *(int *)(param_1 + 0x1450) = iVar16 + 1;
        *(int *)((iVar16 + 0x2d8) * 4 + param_1) = iVar12;
        *(undefined1 *)(iVar12 + param_1 + 0x1458) = 0;
        iVar16 = iVar12;
      }
      iVar12 = iVar12 + 1;
      iVar19 = iVar19 + -1;
      puVar9 = puVar9 + 2;
    } while (iVar19 != 0);
  }
  if (*(int *)(param_1 + 0x1450) < 2) {
    do {
      if (iVar16 < 2) {
        iVar19 = iVar16 + 1;
        iVar16 = iVar19;
      }
      else {
        iVar19 = 0;
      }
      iVar12 = *(int *)(param_1 + 0x1450);
      *(int *)(param_1 + 0x1450) = iVar12 + 1;
      *(int *)((iVar12 + 0x2d8) * 4 + param_1) = iVar19;
      puVar18[iVar19 * 2] = 1;
      *(undefined1 *)(param_1 + 0x1458 + iVar19) = 0;
      *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + -1;
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x16ac) =
             *(int *)(param_1 + 0x16ac) - (uint)*(ushort *)(iVar19 * 4 + iVar1 + 2);
      }
    } while (*(int *)(param_1 + 0x1450) < 2);
  }
  param_2[1] = iVar16;
  uVar13 = *(uint *)(param_1 + 0x1450);
  for (lVar17 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0);
      0 < (int)lVar17; lVar17 = lVar17 + -1) {
    param_1 = fn_82F8BF60(param_1,puVar18,lVar17);
  }
  iVar1 = param_1 + 0x1458;
  puVar9 = puVar18 + iVar7 * 2;
  do {
    iVar19 = *(int *)(param_1 + 0xb60);
    uVar3 = *(undefined4 *)((*(int *)(param_1 + 0x1450) + 0x2d7) * 4 + param_1);
    *(int *)(param_1 + 0x1450) = *(int *)(param_1 + 0x1450) + -1;
    *(undefined4 *)(param_1 + 0xb60) = uVar3;
    iVar6 = fn_82F8BF60(param_1,puVar18,1);
    iVar12 = *(int *)(iVar6 + 0xb60);
    iVar2 = *(int *)(iVar6 + 0x1454);
    *(int *)(iVar6 + 0x1454) = iVar2 + -1;
    *(int *)((iVar2 + 0x2d6) * 4 + iVar6) = iVar19;
    iVar2 = *(int *)(iVar6 + 0x1454);
    *(int *)(iVar6 + 0x1454) = iVar2 + -1;
    *(int *)((iVar2 + 0x2d6) * 4 + iVar6) = iVar12;
    *puVar9 = puVar18[iVar12 * 2] + puVar18[iVar19 * 2];
    bVar15 = *(byte *)(iVar1 + iVar12);
    if (*(byte *)(iVar1 + iVar12) <= *(byte *)(iVar1 + iVar19)) {
      bVar15 = *(byte *)(iVar1 + iVar19);
    }
    *(byte *)(iVar1 + iVar7) = bVar15 + 1;
    (puVar18 + iVar12 * 2)[1] = (ushort)iVar7;
    (puVar18 + iVar19 * 2)[1] = (ushort)iVar7;
    puVar9 = puVar9 + 2;
    *(int *)(iVar6 + 0xb60) = iVar7;
    iVar7 = iVar7 + 1;
    param_1 = fn_82F8BF60(iVar6,puVar18,1);
  } while (1 < *(int *)(param_1 + 0x1450));
  iVar7 = *(int *)(param_1 + 0x1454);
  *(int *)(param_1 + 0x1454) = iVar7 + -1;
  *(undefined4 *)((iVar7 + 0x2d6) * 4 + param_1) = *(undefined4 *)(param_1 + 0xb60);
  iVar7 = fn_82F8C050(param_1,param_2);
  uVar14 = 0;
  puVar9 = auStack_70;
  psVar10 = (short *)(iVar7 + 0xb3a);
  lVar17 = 0xf;
  do {
    psVar10 = psVar10 + 1;
    uVar14 = (*psVar10 + uVar14) * 2;
    puVar9 = puVar9 + 1;
    *puVar9 = uVar14;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (-1 < iVar16) {
    iVar16 = iVar16 + 1;
    do {
      uVar13 = (uint)puVar18[1];
      if (puVar18[1] != 0) {
        uVar11 = (ulonglong)auStack_70[uVar13];
        auStack_70[uVar13] = auStack_70[uVar13] + 1;
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar4 = uVar11 & 1;
          uVar11 = uVar11 >> 1;
          uVar13 = uVar13 - 1;
          uVar5 = (uVar4 | uVar8 & 0x7fffffff) << 1;
        } while (uVar13 != 0);
        *puVar18 = (ushort)uVar4 | (ushort)uVar8;
      }
      iVar16 = iVar16 + -1;
      puVar18 = puVar18 + 2;
    } while (iVar16 != 0);
  }
  return;
}

