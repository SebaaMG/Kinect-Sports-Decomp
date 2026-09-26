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
extern float fRam8329eec0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8329EC80;


longlong fn_82BDDE08(ulonglong param_1,float *param_2,undefined4 *param_3,int *param_4,
                      longlong param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  uint *puVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar16;
  ulonglong uVar15;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint *puVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  int aiStack_d0 [52];
  
  fVar10 = fRam8329eec0;
  iVar12 = lbl_8329EC80;
  fVar9 = lbl_821AAD20;
  lVar11 = 5;
  iVar25 = (int)param_1;
  if (0 < iVar25) {
    lVar26 = param_5 + -4;
    uVar27 = param_1;
    do {
      fVar7 = fVar9;
      if (0 < iVar12) {
        lVar20 = (ulonglong)(iVar12 - 1) / 5 + 1;
        do {
          fVar5 = *param_2;
          pfVar1 = param_2 + 1;
          pfVar2 = param_2 + 2;
          pfVar3 = param_2 + 3;
          pfVar4 = param_2 + 4;
          param_2 = param_2 + 5;
          fVar7 = *pfVar4 * *pfVar4 +
                  *pfVar3 * *pfVar3 + *pfVar2 * *pfVar2 + *pfVar1 * *pfVar1 + fVar5 * fVar5 + fVar7;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      fVar7 = fVar10 * fVar7;
      iVar22 = 0;
      iVar19 = 0x40;
      lVar20 = 2;
      do {
        iVar16 = iVar19 + iVar22 >> 1;
        if (fVar7 < *(float *)(iVar16 * 4 + -0x7cd61344)) {
          iVar19 = iVar16;
          iVar16 = iVar22;
        }
        iVar21 = iVar19 + iVar16 >> 1;
        if (fVar7 < *(float *)(iVar21 * 4 + -0x7cd61344)) {
          iVar19 = iVar21;
          iVar21 = iVar16;
        }
        iVar16 = iVar19 + iVar21 >> 1;
        iVar22 = iVar16;
        if (fVar7 < *(float *)(iVar16 * 4 + -0x7cd61344)) {
          iVar22 = iVar21;
          iVar19 = iVar16;
        }
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar27 = uVar27 - 1;
      lVar26 = lVar26 + 4;
      *(int *)lVar26 = iVar22 + -0x18;
    } while (uVar27 != 0);
  }
  if (-1 < (longlong)(param_1 - 2)) {
    uVar27 = (param_1 & 0xffffffff) >> 1;
    lVar26 = (param_1 - 2 & 0x3fffffff) * 4 + param_5;
    do {
      piVar13 = (int *)lVar26;
      if (*piVar13 < piVar13[1] + -0xb) {
        *piVar13 = piVar13[1] + -0xb;
      }
      if (piVar13[-1] < *piVar13 + -0xb) {
        piVar13[-1] = *piVar13 + -0xb;
      }
      lVar26 = lVar26 + -8;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  piVar13 = (int *)param_5;
  if (*piVar13 < 1 - param_6) {
    *piVar13 = 1 - param_6;
  }
  iVar12 = 0x1f - param_6;
  if (iVar12 < *piVar13) {
    *piVar13 = iVar12;
  }
  iVar19 = *piVar13;
  iVar16 = -8 - param_6;
  iVar22 = piVar13[1];
  *param_3 = 5;
  *param_4 = iVar19 + param_6;
  if (iVar22 < iVar16) {
    piVar13[1] = iVar16;
  }
  if (iVar12 < piVar13[1]) {
    piVar13[1] = iVar12;
  }
  if (2 < iVar25) {
    lVar20 = ((param_1 - 3 & 0xffffffff) >> 1) + 1;
    lVar26 = param_5;
    do {
      piVar23 = (int *)(lVar26 + 8);
      if (*piVar23 < iVar16) {
        *piVar23 = iVar16;
      }
      if (iVar12 < *piVar23) {
        *piVar23 = iVar12;
      }
      iVar19 = (int)lVar26;
      if (*(int *)(iVar19 + 0xc) < iVar16) {
        *(int *)(iVar19 + 0xc) = iVar16;
      }
      if (iVar12 < *(int *)(iVar19 + 0xc)) {
        *(int *)(iVar19 + 0xc) = iVar12;
      }
      lVar20 = lVar20 + -1;
      lVar26 = lVar26 + 8;
    } while (lVar20 != 0);
  }
  lVar20 = 0;
  lVar26 = 0;
  uVar27 = 1;
  if (1 < iVar25) {
    if (1 < iVar25 + -1) {
      puVar14 = param_3 + 1;
      do {
        uVar15 = uVar27 - 1;
        if (0xd < (int)uVar27) {
          uVar15 = 0xc;
        }
        puVar8 = (uint *)param_5;
        uVar6 = *puVar8;
        lVar17 = (ulonglong)puVar8[1] - (ulonglong)uVar6;
        if ((int)lVar17 < -0xc) {
          lVar17 = -0xc;
        }
        uVar18 = lVar17 + 0xc;
        iVar19 = (int)uVar18;
        *(int *)(((int)aiStack_d0 - (int)param_3) + (int)puVar14) = iVar19;
        iVar12 = *(int *)((int)((uVar15 + (uVar15 & 0x7fffffff) * 2 + (longlong)(iVar19 >> 3) &
                                0xffffffff) << 2) + -0x7ce8c630);
        lVar28 = uVar6 + uVar18 + -0xc;
        puVar8[1] = (uint)lVar28;
        lVar17 = ((ulonglong)(uint)(iVar12 >> ((uint)((uVar18 & 0xffffffff) << 2) & 0x1c)) & 0xf) +
                 1;
        lVar20 = lVar20 + lVar17;
        *puVar14 = (int)lVar17;
        *(uint *)(((int)param_4 - (int)param_3) + (int)puVar14) =
             *(int *)((int)(((uVar15 + (uVar15 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                             (longlong)(iVar19 >> 1) & 0xffffffff) << 2) + -0x7ce8c560) >>
             ((uint)((uVar18 & 0xffffffff) << 4) & 0x10) & 0xffff;
        uVar15 = uVar27;
        if (0xd < (int)uVar27 + 1) {
          uVar15 = 0xc;
        }
        puVar24 = (uint *)(param_5 + 8);
        lVar28 = (ulonglong)*puVar24 - lVar28;
        if ((int)lVar28 < -0xc) {
          lVar28 = -0xc;
        }
        uVar18 = lVar28 + 0xc;
        uVar6 = puVar8[1];
        iVar19 = (int)uVar18;
        *(int *)(((int)aiStack_d0 - (int)piVar13) + (int)puVar24) = iVar19;
        iVar12 = *(int *)((int)((uVar15 + (uVar15 & 0x7fffffff) * 2 + (longlong)(iVar19 >> 3) &
                                0xffffffff) << 2) + -0x7ce8c630);
        *puVar24 = (uVar6 + iVar19) - 0xc;
        uVar27 = uVar27 + 2;
        lVar17 = ((ulonglong)(uint)(iVar12 >> ((uint)((uVar18 & 0xffffffff) << 2) & 0x1c)) & 0xf) +
                 1;
        *(int *)(((int)param_3 - (int)piVar13) + (int)puVar24) = (int)lVar17;
        lVar26 = lVar26 + lVar17;
        puVar14 = puVar14 + 2;
        *(uint *)(((int)param_4 - (int)piVar13) + (int)puVar24) =
             *(int *)((int)(((uVar15 + (uVar15 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                             (longlong)(iVar19 >> 1) & 0xffffffff) << 2) + -0x7ce8c560) >>
             ((uint)((uVar18 & 0xffffffff) << 4) & 0x10) & 0xffff;
        param_5 = param_5 + 8;
      } while ((int)uVar27 < iVar25 + -1);
    }
    if ((int)uVar27 < iVar25) {
      uVar15 = uVar27 - 1;
      if (0xd < (int)uVar27) {
        uVar15 = 0xc;
      }
      iVar12 = (int)((uVar27 & 0x3fffffff) << 2);
      uVar6 = ((int *)(iVar12 + (int)piVar13))[-1];
      lVar11 = (ulonglong)*(uint *)(iVar12 + (int)piVar13) - (ulonglong)uVar6;
      if ((int)lVar11 < -0xc) {
        lVar11 = -0xc;
      }
      uVar18 = lVar11 + 0xc;
      iVar19 = (int)uVar18;
      iVar25 = *(int *)((int)((uVar15 + (uVar15 & 0x7fffffff) * 2 + (longlong)(iVar19 >> 3) &
                              0xffffffff) << 2) + -0x7ce8c630);
      *(int *)((int)aiStack_d0 + iVar12) = iVar19;
      uVar27 = (ulonglong)(uint)(iVar25 >> ((uint)((uVar18 & 0xffffffff) << 2) & 0x1c)) & 0xf;
      *(int *)(iVar12 + (int)param_3) = (int)uVar27 + 1;
      lVar11 = uVar27 + 6;
      *(int *)(iVar12 + (int)piVar13) = uVar6 + iVar19 + -0xc;
      *(uint *)(iVar12 + (int)param_4) =
           *(int *)((int)(((uVar15 + (uVar15 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                           (longlong)(iVar19 >> 1) & 0xffffffff) << 2) + -0x7ce8c560) >>
           ((uint)((uVar18 & 0xffffffff) << 4) & 0x10) & 0xffff;
    }
    lVar11 = lVar26 + lVar20 + lVar11;
  }
  return lVar11;
}

