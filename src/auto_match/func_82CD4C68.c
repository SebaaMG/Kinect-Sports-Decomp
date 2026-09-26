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


void fn_82CD4C68(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  ,int param_7)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  
  uVar23 = param_6 - param_5;
  uVar2 = *(uint *)(param_7 + 0x390c);
  uVar10 = *(int *)(param_7 + 0x38fc) * (int)param_5;
  uVar14 = *(int *)(param_7 + 0x3910) * *(int *)(param_7 + 0x38fc);
  param_1 = *(int *)(param_7 + 0x389c) * (int)param_5 + *(int *)(param_7 + 0x38a4) + param_1;
  iVar18 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) +
           ((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0) +
           ((int)uVar10 >> 2) + (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0);
  pbVar19 = (byte *)(iVar18 + param_3);
  iVar18 = iVar18 + param_4;
  param_2 = uVar2 + uVar14 + uVar10 + param_2;
  if (0 < (longlong)uVar23) {
    iVar9 = *(int *)(param_7 + 0x38bc);
    uVar25 = uVar23;
    iVar6 = param_1;
    do {
      iVar21 = 0;
      if (0 < iVar9) {
        puVar13 = (undefined1 *)(iVar6 + -2);
        puVar15 = (undefined1 *)(param_2 + -1);
        do {
          iVar21 = iVar21 + 1;
          puVar13[2] = puVar15[1];
          puVar15 = puVar15 + 2;
          puVar13 = puVar13 + 4;
          *puVar13 = *puVar15;
          iVar9 = *(int *)(param_7 + 0x38bc);
        } while (iVar21 < iVar9);
      }
      iVar6 = *(int *)(param_7 + 0x389c) + iVar6;
      param_2 = *(int *)(param_7 + 0x38fc) + param_2;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  iVar9 = 2;
  iVar20 = ((int)uVar23 >> 1) + (uint)((int)uVar23 < 0 && (uVar23 & 1) != 0);
  iVar21 = *(int *)(param_7 + 0x38a0) + param_1;
  iVar22 = *(int *)(param_7 + 0x38a0) + iVar21;
  iVar6 = iVar18;
  pbVar17 = pbVar19;
  if (2 < iVar20) {
    iVar8 = *(int *)(param_7 + 0x38bc);
    uVar2 = iVar20 - 3U >> 1;
    lVar12 = (ulonglong)uVar2 + 1;
    iVar9 = (uVar2 + 2) * 2;
    iVar7 = iVar18;
    iVar5 = *(int *)(param_7 + 0x38fc) + iVar18;
    pbVar16 = pbVar19;
    pbVar3 = pbVar19 + *(int *)(param_7 + 0x38fc);
    do {
      pbVar17 = pbVar3;
      iVar6 = iVar5;
      iVar5 = 0;
      if (0 < iVar8) {
        puVar15 = (undefined1 *)(iVar21 + -3);
        puVar13 = (undefined1 *)(iVar22 + 3);
        iVar24 = (int)pbVar17 - (int)pbVar16;
        iVar11 = iVar6 - (int)pbVar16;
        iVar7 = iVar7 - (int)pbVar16;
        do {
          iVar5 = iVar5 + 1;
          puVar15 = puVar15 + 4;
          *puVar15 = (char)((int)((uint)pbVar16[iVar24] + (uint)pbVar16[iVar24] * 2 +
                                  (uint)*pbVar16 + (uint)*pbVar16 * 4 + 4) >> 3);
          puVar13[-2] = (char)((int)(((uint)pbVar16[iVar24] * 8 - (uint)pbVar16[iVar24]) +
                                     (uint)*pbVar16 + 4) >> 3);
          puVar13[iVar21 - iVar22] =
               (char)((int)((uint)pbVar16[iVar7] + (uint)pbVar16[iVar7] * 4 +
                            (uint)pbVar16[iVar11] + (uint)pbVar16[iVar11] * 2 + 4) >> 3);
          pbVar3 = pbVar16 + iVar7;
          pbVar4 = pbVar16 + iVar11;
          pbVar16 = pbVar16 + 1;
          *puVar13 = (char)((int)(((uint)*pbVar4 * 8 - (uint)*pbVar4) + (uint)*pbVar3 + 4) >> 3);
          puVar13 = puVar13 + 4;
          iVar8 = *(int *)(param_7 + 0x38bc);
        } while (iVar5 < iVar8);
      }
      iVar21 = *(int *)(param_7 + 0x38a0) + iVar22;
      iVar22 = *(int *)(param_7 + 0x38a0) + iVar21;
      lVar12 = lVar12 + -1;
      iVar7 = iVar6;
      iVar5 = *(int *)(param_7 + 0x38fc) + iVar6;
      pbVar16 = pbVar17;
      pbVar3 = pbVar17 + *(int *)(param_7 + 0x38fc);
    } while (lVar12 != 0);
  }
  if (iVar9 == iVar20) {
    iVar9 = 0;
    if (0 < *(int *)(param_7 + 0x38bc)) {
      puVar15 = (undefined1 *)(iVar21 + -1);
      do {
        puVar15[2] = pbVar17[iVar9];
        puVar13 = (undefined1 *)(iVar9 + iVar6);
        iVar9 = iVar9 + 1;
        puVar15 = puVar15 + 4;
        *puVar15 = *puVar13;
      } while (iVar9 < *(int *)(param_7 + 0x38bc));
    }
  }
  uVar2 = *(uint *)(param_7 + 0x38fc);
  iVar21 = 3;
  iVar9 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  pbVar17 = pbVar19 + iVar9;
  iVar9 = iVar9 + iVar18;
  iVar6 = *(int *)(param_7 + 0x389c) * 3 + param_1;
  iVar22 = *(int *)(param_7 + 0x38a0) + iVar6;
  if (3 < iVar20) {
    iVar8 = *(int *)(param_7 + 0x38bc);
    lVar12 = (ulonglong)(iVar20 - 4U >> 1) + 1;
    iVar21 = (int)lVar12 * 2 + 3;
    pbVar16 = pbVar17;
    iVar7 = iVar9;
    iVar5 = uVar2 + iVar9;
    pbVar3 = pbVar17 + uVar2;
    do {
      pbVar17 = pbVar3;
      iVar9 = iVar5;
      iVar5 = 0;
      if (0 < iVar8) {
        puVar15 = (undefined1 *)(iVar6 + -3);
        puVar13 = (undefined1 *)(iVar22 + 3);
        iVar24 = (int)pbVar17 - (int)pbVar16;
        iVar11 = iVar9 - (int)pbVar16;
        iVar7 = iVar7 - (int)pbVar16;
        do {
          iVar5 = iVar5 + 1;
          puVar15 = puVar15 + 4;
          *puVar15 = (char)((int)(((uint)*pbVar16 * 8 - (uint)*pbVar16) + (uint)pbVar16[iVar24] + 4)
                           >> 3);
          puVar13[-2] = (char)((int)((uint)pbVar16[iVar24] + (uint)pbVar16[iVar24] * 4 +
                                     (uint)*pbVar16 + (uint)*pbVar16 * 2 + 4) >> 3);
          puVar13[iVar6 - iVar22] =
               (char)((int)(((uint)pbVar16[iVar7] * 8 - (uint)pbVar16[iVar7]) +
                            (uint)pbVar16[iVar11] + 4) >> 3);
          pbVar3 = pbVar16 + iVar11;
          pbVar4 = pbVar16 + iVar7;
          pbVar16 = pbVar16 + 1;
          *puVar13 = (char)((int)((uint)*pbVar3 + (uint)*pbVar3 * 4 +
                                  (uint)*pbVar4 + (uint)*pbVar4 * 2 + 4) >> 3);
          puVar13 = puVar13 + 4;
          iVar8 = *(int *)(param_7 + 0x38bc);
        } while (iVar5 < iVar8);
      }
      iVar6 = *(int *)(param_7 + 0x38a0) + iVar22;
      iVar22 = *(int *)(param_7 + 0x38a0) + iVar6;
      lVar12 = lVar12 + -1;
      pbVar16 = pbVar17;
      iVar7 = iVar9;
      iVar5 = *(int *)(param_7 + 0x38fc) + iVar9;
      pbVar3 = pbVar17 + *(int *)(param_7 + 0x38fc);
    } while (lVar12 != 0);
  }
  iVar8 = *(int *)(param_7 + 0x38bc);
  iVar7 = 0;
  if (0 < iVar8) {
    pbVar16 = (byte *)(iVar6 + 3);
    iVar9 = iVar9 - (int)pbVar17;
    do {
      bVar1 = *pbVar17;
      pbVar16[-2] = bVar1;
      *pbVar16 = pbVar17[iVar9];
      if (iVar21 == iVar20) {
        pbVar16[(iVar22 - iVar6) + -2] = bVar1;
        pbVar16[iVar22 - iVar6] = *pbVar16;
      }
      iVar8 = *(int *)(param_7 + 0x38bc);
      iVar7 = iVar7 + 1;
      pbVar17 = pbVar17 + 1;
      pbVar16 = pbVar16 + 4;
    } while (iVar7 < iVar8);
  }
  uVar2 = *(uint *)(param_7 + 0x38fc);
  iVar6 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  iVar9 = 0;
  if (0 < iVar8) {
    puVar13 = (undefined1 *)(*(int *)(param_7 + 0x389c) + param_1 + -1);
    pbVar17 = (byte *)(param_1 + -1);
    iVar21 = iVar18 - (int)pbVar19;
    puVar15 = (undefined1 *)(iVar6 + iVar18 + -1);
    pbVar16 = pbVar19 + iVar6 + -1;
    do {
      iVar9 = iVar9 + 1;
      pbVar17[2] = *pbVar19;
      pbVar3 = pbVar19 + iVar21;
      pbVar19 = pbVar19 + 1;
      pbVar17 = pbVar17 + 4;
      *pbVar17 = *pbVar3;
      pbVar16 = pbVar16 + 1;
      puVar13[2] = *pbVar16;
      puVar15 = puVar15 + 1;
      puVar13 = puVar13 + 4;
      *puVar13 = *puVar15;
    } while (iVar9 < *(int *)(param_7 + 0x38bc));
  }
  return;
}

