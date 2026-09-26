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
extern int fn_829C08B8();
extern int fn_829C09A8();


void fn_829C1940(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ushort *puVar11;
  short *psVar12;
  int iVar14;
  byte bVar17;
  ushort uVar16;
  uint uVar15;
  ulonglong uVar13;
  int iVar18;
  longlong lVar19;
  ushort *puVar20;
  int iVar21;
  ushort auStack_70 [56];
  
  puVar20 = (ushort *)*param_2;
  iVar18 = -1;
  iVar14 = 0;
  iVar9 = ((int *)param_2[2])[3];
  iVar3 = *(int *)param_2[2];
  *(undefined4 *)(param_1 + 0x1448) = 0;
  *(undefined4 *)(param_1 + 0x144c) = 0x23d;
  puVar11 = puVar20;
  iVar21 = iVar9;
  if (0 < iVar9) {
    do {
      if (*puVar11 == 0) {
        puVar11[1] = 0;
      }
      else {
        iVar18 = *(int *)(param_1 + 0x1448);
        *(int *)(param_1 + 0x1448) = iVar18 + 1;
        *(int *)((iVar18 + 0x2d6) * 4 + param_1) = iVar14;
        *(undefined1 *)(iVar14 + param_1 + 0x1450) = 0;
        iVar18 = iVar14;
      }
      iVar14 = iVar14 + 1;
      iVar21 = iVar21 + -1;
      puVar11 = puVar11 + 2;
    } while (iVar21 != 0);
  }
  if (*(int *)(param_1 + 0x1448) < 2) {
    do {
      if (iVar18 < 2) {
        iVar21 = iVar18 + 1;
        iVar18 = iVar21;
      }
      else {
        iVar21 = 0;
      }
      iVar14 = *(int *)(param_1 + 0x1448);
      *(int *)(param_1 + 0x1448) = iVar14 + 1;
      *(int *)((iVar14 + 0x2d6) * 4 + param_1) = iVar21;
      puVar20[iVar21 * 2] = 1;
      *(undefined1 *)(param_1 + 0x1450 + iVar21) = 0;
      *(int *)(param_1 + 0x16a0) = *(int *)(param_1 + 0x16a0) + -1;
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x16a4) =
             *(int *)(param_1 + 0x16a4) - (uint)*(ushort *)(iVar21 * 4 + iVar3 + 2);
      }
    } while (*(int *)(param_1 + 0x1448) < 2);
  }
  param_2[1] = iVar18;
  uVar15 = *(uint *)(param_1 + 0x1448);
  for (lVar19 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      0 < (int)lVar19; lVar19 = lVar19 + -1) {
    param_1 = fn_829C08B8(param_1,puVar20,lVar19);
  }
  iVar3 = param_1 + 0x1450;
  puVar11 = puVar20 + iVar9 * 2;
  do {
    iVar21 = *(int *)(param_1 + 0xb58);
    uVar5 = *(undefined4 *)((*(int *)(param_1 + 0x1448) + 0x2d5) * 4 + param_1);
    *(int *)(param_1 + 0x1448) = *(int *)(param_1 + 0x1448) + -1;
    *(undefined4 *)(param_1 + 0xb58) = uVar5;
    iVar8 = fn_829C08B8(param_1,puVar20,1);
    iVar14 = *(int *)(iVar8 + 0xb58);
    iVar4 = *(int *)(iVar8 + 0x144c);
    *(int *)(iVar8 + 0x144c) = iVar4 + -1;
    *(int *)((iVar4 + 0x2d4) * 4 + iVar8) = iVar21;
    iVar4 = *(int *)(iVar8 + 0x144c);
    *(int *)(iVar8 + 0x144c) = iVar4 + -1;
    *(int *)((iVar4 + 0x2d4) * 4 + iVar8) = iVar14;
    *puVar11 = puVar20[iVar14 * 2] + puVar20[iVar21 * 2];
    bVar1 = *(byte *)(iVar3 + iVar14);
    bVar2 = *(byte *)(iVar3 + iVar21);
    bVar17 = bVar1;
    if (bVar1 <= bVar2) {
      bVar17 = bVar2;
    }
    *(byte *)(iVar3 + iVar9) = bVar17 + 1;
    (puVar20 + iVar14 * 2)[1] = (ushort)iVar9;
    (puVar20 + iVar21 * 2)[1] = (ushort)iVar9;
    puVar11 = puVar11 + 2;
    *(int *)(iVar8 + 0xb58) = iVar9;
    iVar9 = iVar9 + 1;
    param_1 = fn_829C08B8(iVar8,puVar20,1,bVar2,bVar1);
  } while (1 < *(int *)(param_1 + 0x1448));
  iVar9 = *(int *)(param_1 + 0x144c);
  *(int *)(param_1 + 0x144c) = iVar9 + -1;
  *(undefined4 *)((iVar9 + 0x2d4) * 4 + param_1) = *(undefined4 *)(param_1 + 0xb58);
  iVar9 = fn_829C09A8(param_1,param_2);
  uVar16 = 0;
  puVar11 = auStack_70;
  psVar12 = (short *)(iVar9 + 0xb32);
  lVar19 = 0xf;
  do {
    psVar12 = psVar12 + 1;
    uVar16 = (*psVar12 + uVar16) * 2;
    puVar11 = puVar11 + 1;
    *puVar11 = uVar16;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  if (-1 < iVar18) {
    iVar18 = iVar18 + 1;
    do {
      uVar15 = (uint)puVar20[1];
      if (puVar20[1] != 0) {
        uVar13 = (ulonglong)auStack_70[uVar15];
        auStack_70[uVar15] = auStack_70[uVar15] + 1;
        uVar7 = 0;
        do {
          uVar10 = uVar7;
          uVar6 = uVar13 & 1;
          uVar13 = uVar13 >> 1;
          uVar15 = uVar15 - 1;
          uVar7 = (uVar6 | uVar10 & 0x7fffffff) << 1;
        } while (uVar15 != 0);
        *puVar20 = (ushort)uVar6 | (ushort)uVar10;
      }
      iVar18 = iVar18 + -1;
      puVar20 = puVar20 + 2;
    } while (iVar18 != 0);
  }
  return;
}

