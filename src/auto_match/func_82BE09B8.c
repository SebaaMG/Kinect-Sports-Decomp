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
#define ZEXT48(x) ((U64)((U32)(x)))
#define BADSPACEBASE char
extern unsigned int *auStack_210;
extern int fn_82F69148();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82BE09B8(ulonglong param_1,int param_2,int *param_3,int param_4,ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar14;
  int iVar15;
  ulonglong uVar13;
  int *piVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar29;
  longlong lVar28;
  int iVar30;
  int iVar32;
  longlong lVar31;
  ulonglong uVar33;
  int aiStack_220 [4];
  undefined4 auStack_210 [12];
  int aiStack_1e0 [120];
  
  uVar11 = ZEXT48(&stack0x00000000);
  iVar10 = (int)(uVar11 - 0x280);
  *(BADSPACEBASE **)iVar10 = register0x0000000c;
  iVar12 = (int)param_1;
  *(int *)(iVar10 + 0x294) = iVar12;
  *(int *)(iVar10 + 0x29c) = param_2;
  *(int **)(iVar10 + 0x2a4) = param_3;
  *(int *)(iVar10 + 0x2b4) = (int)param_5;
  if (iVar12 == 0xe) {
    uVar24 = 0x10;
    *(undefined4 *)(iVar10 + 0x50) = 0x10;
    if (param_2 < 0x141) goto LAB_82be0a34;
    param_2 = ((param_2 + -0x140) * 5 >> 3) + 0x140;
  }
  else {
    uVar24 = 0x20;
    *(undefined4 *)(iVar10 + 0x50) = 0x20;
    if ((iVar12 != 0x1c) || (param_2 < 0x281)) goto LAB_82be0a34;
    param_2 = ((param_2 + -0x280) * 5 >> 3) + 0x280;
  }
  *(int *)(iVar10 + 0x29c) = param_2;
LAB_82be0a34:
  iVar26 = -0x20;
  iVar27 = -0x7ce8bef8;
  iVar25 = 0x20;
  *(undefined4 *)(iVar10 + 0x54) = 0xffffffe0;
  *(undefined4 *)(iVar10 + 0x58) = 0x83174108;
  do {
    iVar30 = 0;
    iVar32 = 0;
    iVar29 = 0;
    iVar15 = iVar25 + iVar26;
    iVar14 = 0;
    if (1 < iVar12) {
      puVar23 = (undefined4 *)(param_4 + 4);
      piVar16 = param_3;
      do {
        iVar9 = iVar15 - *piVar16 >> 1;
        uVar18 = (ulonglong)iVar9;
        if ((longlong)uVar18 < 0) {
          uVar18 = 0;
        }
        else if (7 < iVar9) {
          uVar18 = 7;
        }
        iVar9 = *(int *)(((int)param_3 - param_4) + (int)puVar23);
        puVar23[-1] = (int)uVar18;
        iVar9 = iVar15 - iVar9 >> 1;
        uVar19 = (ulonglong)iVar9;
        iVar30 = *(int *)((int)((uVar18 & 0xffffffff) << 2) + -0x7ce8bef8) + iVar30;
        if ((longlong)uVar19 < 0) {
          uVar19 = 0;
        }
        else if (7 < iVar9) {
          uVar19 = 7;
        }
        *puVar23 = (int)uVar19;
        iVar14 = iVar14 + 2;
        piVar16 = piVar16 + 2;
        puVar23 = puVar23 + 2;
        iVar32 = *(int *)((int)((uVar19 & 0xffffffff) << 2) + -0x7ce8bef8) + iVar32;
      } while (iVar14 < iVar12 + -1);
    }
    if (iVar14 < iVar12) {
      iVar29 = iVar15 - param_3[iVar14] >> 1;
      uVar18 = (ulonglong)iVar29;
      if ((longlong)uVar18 < 0) {
        uVar18 = 0;
      }
      else if (7 < iVar29) {
        uVar18 = 7;
      }
      *(int *)(iVar14 * 4 + param_4) = (int)uVar18;
      iVar29 = *(int *)((int)((uVar18 & 0xffffffff) << 2) + -0x7ce8bef8);
    }
    if (param_2 + -0x20 <= iVar32 + iVar30 + iVar29) {
      iVar26 = iVar15;
    }
    iVar25 = iVar25 >> 1;
  } while (iVar25 != 0);
  *(int *)(iVar10 + 0x54) = iVar26;
  iVar14 = 0;
  iVar15 = 0;
  iVar25 = 0;
  iVar29 = 0;
  if (1 < iVar12) {
    puVar23 = (undefined4 *)(param_4 + 4);
    piVar16 = param_3;
    do {
      iVar30 = iVar26 - *piVar16 >> 1;
      uVar18 = (ulonglong)iVar30;
      if ((longlong)uVar18 < 0) {
        uVar18 = 0;
      }
      else if (7 < iVar30) {
        uVar18 = 7;
      }
      iVar30 = *(int *)((int)puVar23 + ((int)param_3 - param_4));
      puVar23[-1] = (int)uVar18;
      iVar30 = iVar26 - iVar30 >> 1;
      uVar19 = (ulonglong)iVar30;
      iVar14 = *(int *)((int)((uVar18 & 0xffffffff) << 2) + -0x7ce8bef8) + iVar14;
      if ((longlong)uVar19 < 0) {
        uVar19 = 0;
      }
      else if (7 < iVar30) {
        uVar19 = 7;
      }
      *puVar23 = (int)uVar19;
      iVar29 = iVar29 + 2;
      piVar16 = piVar16 + 2;
      puVar23 = puVar23 + 2;
      iVar15 = *(int *)((int)((uVar19 & 0xffffffff) << 2) + -0x7ce8bef8) + iVar15;
    } while (iVar29 < iVar12 + -1);
  }
  if (iVar29 < iVar12) {
    iVar25 = iVar26 - param_3[iVar29] >> 1;
    uVar18 = (ulonglong)iVar25;
    if ((longlong)uVar18 < 0) {
      uVar18 = 0;
    }
    else if (7 < iVar25) {
      uVar18 = 7;
    }
    *(int *)(iVar29 * 4 + param_4) = (int)uVar18;
    iVar25 = *(int *)((int)((uVar18 & 0xffffffff) << 2) + -0x7ce8bef8);
  }
  uVar18 = 0;
  iVar25 = iVar15 + iVar14 + iVar25;
  iVar29 = 0;
  if (0 < iVar12) {
    lVar20 = (param_1 - 1 & 0xffffffff) / 7 + 1;
    puVar23 = (undefined4 *)(param_4 + 8);
    iVar12 = 0;
    do {
      uVar1 = puVar23[-2];
      uVar2 = puVar23[-1];
      uVar3 = *puVar23;
      uVar4 = puVar23[1];
      uVar5 = puVar23[2];
      uVar6 = puVar23[3];
      uVar7 = puVar23[4];
      *(undefined4 *)(iVar12 + iVar10 + 0x60) = uVar1;
      *(undefined4 *)(iVar12 + iVar10 + 0xa0) = uVar1;
      *(undefined4 *)(iVar12 + iVar10 + 100) = uVar2;
      *(undefined4 *)(iVar12 + iVar10 + 0xa4) = uVar2;
      iVar12 = iVar12 + 0x1c;
      *(undefined4 *)(((iVar10 + 0x60) - param_4) + (int)puVar23) = uVar3;
      *(undefined4 *)(((int)aiStack_1e0 - param_4) + (int)puVar23) = uVar3;
      *(undefined4 *)(((iVar10 + 100) - param_4) + (int)puVar23) = uVar4;
      *(undefined4 *)(((iVar10 + 0xa4) - param_4) + (int)puVar23) = uVar4;
      *(undefined4 *)(((iVar10 + 0x68) - param_4) + (int)puVar23) = uVar5;
      *(undefined4 *)(((iVar10 + 0xa8) - param_4) + (int)puVar23) = uVar5;
      *(undefined4 *)(((iVar10 + 0x6c) - param_4) + (int)puVar23) = uVar6;
      *(undefined4 *)(((iVar10 + 0xac) - param_4) + (int)puVar23) = uVar6;
      *(undefined4 *)(((iVar10 + 0x70) - param_4) + (int)puVar23) = uVar7;
      *(undefined4 *)(((iVar10 + 0xb0) - param_4) + (int)puVar23) = uVar7;
      puVar23 = puVar23 + 7;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    param_5 = (ulonglong)*(uint *)(iVar10 + 0x2b4);
    param_3 = *(int **)(iVar10 + 0x2a4);
    param_2 = *(int *)(iVar10 + 0x29c);
    param_1 = (ulonglong)*(uint *)(iVar10 + 0x294);
    uVar24 = (ulonglong)*(uint *)(iVar10 + 0x50);
    iVar26 = *(int *)(iVar10 + 0x54);
    iVar27 = *(int *)(iVar10 + 0x58);
  }
  lVar20 = uVar24 - 1;
  uVar19 = uVar24;
  if (0 < lVar20) {
    lVar21 = (uVar24 & 0x3fffffff) * 4 + (uVar11 - 0x1a0);
    lVar31 = lVar21 + -4;
    lVar28 = lVar20;
    iVar12 = iVar25;
    do {
      if (param_2 << 1 < iVar25 + iVar12) {
        lVar22 = (param_1 & 0x3fffffff) * 4;
        uVar13 = param_1 - 1;
        iVar14 = -99;
        lVar17 = lVar22 + (uVar11 - 0x280) + 0x9c;
        if (-1 < (longlong)uVar13) {
          iVar15 = (int)lVar17;
          uVar33 = (param_1 + 1 & 0xffffffff) >> 1;
          do {
            piVar16 = (int *)lVar17;
            if (*piVar16 < 7) {
              iVar30 = (*piVar16 * -2 -
                       *(int *)((int)param_3 + ((int)lVar22 - iVar15) + -4 + (int)piVar16)) + iVar26
              ;
              if (iVar14 < iVar30) {
                uVar18 = uVar13;
                iVar14 = iVar30;
              }
            }
            if (piVar16[-1] < 7) {
              iVar30 = (piVar16[-1] * -2 -
                       *(int *)((int)piVar16 + (int)param_3 + (-4 - (iVar10 + 0xa0)))) + iVar26;
              if (iVar14 < iVar30) {
                uVar18 = uVar13 - 1;
                iVar14 = iVar30;
              }
            }
            uVar13 = uVar13 - 2;
            lVar17 = lVar17 + -8;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
        iVar15 = (int)((uVar18 & 0xffffffff) << 2);
        lVar31 = lVar31 + 4;
        *(undefined4 *)lVar31 = (int)uVar18;
        iVar14 = *(int *)((int)aiStack_1e0 + iVar15);
        iVar30 = iVar14 + 1;
        *(int *)((int)aiStack_1e0 + iVar15) = iVar30;
        iVar25 = *(int *)(iVar30 * 4 + iVar27) + (iVar25 - *(int *)(iVar14 * 4 + iVar27));
      }
      else {
        iVar14 = 99;
        iVar15 = 0;
        if (0 < (int)param_1) {
          lVar17 = ((param_1 - 1 & 0xffffffff) >> 1) + 1;
          piVar16 = param_3;
          do {
            uVar8 = *(uint *)(((iVar10 + 0x60) - (int)param_3) + (int)piVar16);
            if ((0 < (int)uVar8) &&
               (iVar30 = (iVar26 + (uVar8 & 0x7fffffff) * -2) - *piVar16, iVar30 < iVar14)) {
              iVar29 = iVar15;
              iVar14 = iVar30;
            }
            iVar30 = *(int *)(((iVar10 + 100) - (int)param_3) + (int)piVar16);
            if (0 < iVar30) {
              iVar30 = (iVar30 * -2 - piVar16[1]) + iVar26;
              if (iVar30 < iVar14) {
                iVar29 = iVar15 + 1;
                iVar14 = iVar30;
              }
            }
            iVar15 = iVar15 + 2;
            piVar16 = piVar16 + 2;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        lVar21 = lVar21 + -4;
        *(int *)lVar21 = iVar29;
        uVar19 = uVar19 - 1;
        iVar14 = aiStack_220[iVar29];
        iVar15 = iVar14 + -1;
        aiStack_220[iVar29] = iVar15;
        iVar12 = *(int *)(iVar15 * 4 + iVar27) + (iVar12 - *(int *)(iVar14 * 4 + iVar27));
      }
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  if (0 < (int)param_1) {
    lVar31 = (param_1 - 1 & 0xffffffff) / 7 + 1;
    lVar21 = uVar11 - 0x238;
    puVar23 = (undefined4 *)(param_4 + 8);
    do {
      iVar12 = (int)lVar21;
      uVar2 = *(undefined4 *)(((int)aiStack_220 - param_4) + (int)puVar23);
      uVar3 = *(undefined4 *)(((iVar10 + 100) - param_4) + (int)puVar23);
      uVar4 = *(undefined4 *)(((iVar10 + 0x68) - param_4) + (int)puVar23);
      uVar5 = *(undefined4 *)(((iVar10 + 0x6c) - param_4) + (int)puVar23);
      uVar6 = *(undefined4 *)(((int)auStack_210 - param_4) + (int)puVar23);
      lVar21 = lVar21 + 0x1c;
      uVar1 = *(undefined4 *)lVar21;
      puVar23[-2] = *(undefined4 *)(iVar12 + 0x18);
      *puVar23 = uVar2;
      puVar23[1] = uVar3;
      puVar23[2] = uVar4;
      puVar23[-1] = uVar1;
      puVar23[3] = uVar5;
      puVar23[4] = uVar6;
      puVar23 = puVar23 + 7;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  uVar18 = 0;
  if (0 < (longlong)(uVar24 - 4)) {
    lVar31 = ((uVar24 - 5 & 0xffffffff) >> 2) + 1;
    lVar28 = (uVar19 & 0x3fffffff) * 4 + (uVar11 - 0x1a0);
    lVar21 = param_5 - 4;
    uVar18 = lVar31 * 4 & 0xfffffffc;
    do {
      puVar23 = (undefined4 *)lVar28;
      uVar19 = uVar19 + 4;
      uVar1 = puVar23[1];
      iVar10 = (int)lVar21;
      *(undefined4 *)(iVar10 + 4) = *puVar23;
      uVar2 = puVar23[2];
      *(undefined4 *)(iVar10 + 8) = uVar1;
      uVar1 = puVar23[3];
      *(undefined4 *)(iVar10 + 0xc) = uVar2;
      lVar28 = lVar28 + 0x10;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)lVar21 = uVar1;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  if ((int)uVar18 < (int)lVar20) {
    fn_82F69148((uVar18 & 0x3fffffff) * 4 + param_5,(uVar19 & 0x3fffffff) * 4 + (uVar11 - 0x1a0),
                 (lVar20 - uVar18 & 0x3fffffff) << 2);
  }
  return;
}

