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
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820FC3F8;
extern unsigned int lbl_820FC400;
extern unsigned int lbl_820FC408;
extern unsigned int lbl_820FC410;
extern unsigned int lbl_820FC418;
extern unsigned int lbl_820FC420;
extern unsigned int lbl_820FC428;
extern unsigned int lbl_820FC430;
extern unsigned int lbl_821AAD20;


void fn_82C72540(undefined8 param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar18;
  ulonglong uVar17;
  int iVar19;
  int iVar20;
  double extraout_f1;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  iVar13 = fn_82F6A538();
  dVar22 = lbl_82005730;
  if ((double)lbl_821AAD20 < param_3) {
    dVar24 = -param_3;
    dVar25 = extraout_f1 + lbl_82005730;
    dVar27 = dVar24 * lbl_820FC420;
    dVar26 = (double)((float)((double)(float)(dVar24 * lbl_820FC418) + param_3) * lbl_82002C5C);
    fVar11 = (float)(longlong)(int)(extraout_f1 + lbl_82005730);
    dVar21 = (double)(float)(dVar26 - (double)(float)(param_3 * lbl_820FC430));
    fVar1 = (float)((double)(float)(dVar26 - param_3) + param_2);
    dVar23 = extraout_f1 + lbl_82005730;
    fVar2 = (float)((double)(float)(dVar26 - (double)(float)(dVar24 * lbl_820FC428)) + param_2);
    fVar3 = (float)(dVar21 + param_2);
    fVar4 = (float)(dVar21 + param_2);
    fVar8 = (float)(longlong)(int)(extraout_f1 + lbl_82005730) + (float)(dVar24 * lbl_820FC410);
    fVar5 = (float)((double)(float)(dVar26 - (double)(float)(dVar24 * lbl_820FC418)) + param_2);
    fVar6 = (float)((double)(float)(dVar26 - (double)(float)(dVar24 * lbl_820FC400)) + param_2);
    fVar9 = (float)(longlong)(int)(extraout_f1 + lbl_82005730) + (float)(dVar24 * lbl_820FC3F8);
    fVar10 = (float)(longlong)(int)(extraout_f1 + lbl_82005730) + (float)(dVar24 * lbl_820FC408);
    fVar12 = (float)(longlong)*(int *)(iVar13 + 4);
    if (fVar1 <= (float)(longlong)*(int *)(iVar13 + 4)) {
      fVar12 = fVar1;
    }
    uVar7 = (uint)fVar12;
    uVar17 = 0;
    dVar21 = (double)lbl_82002AE0;
    if (3 < (int)uVar7) {
      iVar18 = 0;
      iVar20 = (int)((double)(float)(extraout_f1 + dVar21) + lbl_82005730);
      do {
        iVar14 = iVar18 + 0xc;
        uVar17 = uVar17 + 4;
        *(int *)(iVar18 + *(int *)(iVar13 + 0x14)) = iVar20;
        iVar19 = iVar18 + *(int *)(iVar13 + 0x14);
        iVar18 = iVar18 + 0x10;
        *(int *)(iVar19 + 4) = iVar20;
        *(int *)(iVar14 + *(int *)(iVar13 + 0x14) + -4) = iVar20;
        *(int *)(iVar14 + *(int *)(iVar13 + 0x14)) = iVar20;
      } while ((int)uVar17 < (int)(uVar7 - 3));
    }
    if ((int)uVar17 < (int)uVar7) {
      lVar15 = uVar7 - uVar17;
      lVar16 = (uVar17 & 0x3fffffff) << 2;
      uVar17 = lVar15 + uVar17;
      do {
        *(int *)((int)lVar16 + *(int *)(iVar13 + 0x14)) =
             (int)((double)(float)(extraout_f1 + dVar21) + dVar22);
        lVar16 = lVar16 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    fVar12 = (float)(longlong)*(int *)(iVar13 + 4);
    if (fVar3 <= (float)(longlong)*(int *)(iVar13 + 4)) {
      fVar12 = fVar3;
    }
    uVar7 = (uint)fVar12;
    fVar3 = (((float)(longlong)(int)dVar25 + (float)dVar27) - fVar11) / (fVar3 - fVar1);
    if ((int)uVar17 < (int)uVar7) {
      if (3 < (int)(uVar7 - (int)uVar17)) {
        lVar16 = uVar17 + 2;
        lVar15 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar20 = (int)lVar16;
          iVar19 = (int)uVar17;
          iVar18 = (int)lVar15;
          uVar17 = uVar17 + 4;
          lVar16 = lVar16 + 4;
          *(int *)(iVar18 + *(int *)(iVar13 + 0x14)) =
               (int)((double)(((float)(longlong)iVar19 - fVar1) * fVar3 + fVar11) + dVar22);
          lVar15 = lVar15 + 0x10;
          *(int *)(iVar18 + *(int *)(iVar13 + 0x14) + 4) =
               (int)((double)(((float)(longlong)(iVar20 + -1) - fVar1) * fVar3 + fVar11) + dVar22);
          *(int *)(iVar18 + 0xc + *(int *)(iVar13 + 0x14) + -4) =
               (int)((double)(((float)(longlong)iVar20 - fVar1) * fVar3 + fVar11) + dVar22);
          *(int *)(iVar18 + 0xc + *(int *)(iVar13 + 0x14)) =
               (int)((double)(((float)(longlong)(iVar20 + 1) - fVar1) * fVar3 + fVar11) + dVar22);
        } while ((int)uVar17 < (int)(uVar7 - 3));
      }
      if ((int)uVar17 < (int)uVar7) {
        lVar15 = uVar7 - uVar17;
        lVar16 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar20 = (int)uVar17;
          uVar17 = uVar17 + 1;
          *(int *)((int)lVar16 + *(int *)(iVar13 + 0x14)) =
               (int)((double)(((float)(longlong)iVar20 - fVar1) * fVar3 + fVar11) + dVar22);
          lVar16 = lVar16 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    fVar1 = (float)(longlong)*(int *)(iVar13 + 4);
    if (fVar2 <= (float)(longlong)*(int *)(iVar13 + 4)) {
      fVar1 = fVar2;
    }
    uVar7 = (uint)fVar1;
    fVar1 = (fVar9 - fVar8) / (fVar2 - fVar4);
    if ((int)uVar17 < (int)uVar7) {
      if (3 < (int)(uVar7 - (int)uVar17)) {
        lVar16 = uVar17 + 2;
        lVar15 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar19 = (int)uVar17;
          iVar20 = (int)lVar16;
          uVar17 = uVar17 + 4;
          iVar18 = (int)lVar15;
          lVar16 = lVar16 + 4;
          *(int *)(*(int *)(iVar13 + 0x14) + iVar18) =
               (int)((double)(((float)(longlong)iVar19 - fVar4) * fVar1 + fVar8) + dVar22);
          *(int *)(*(int *)(iVar13 + 0x14) + iVar18 + 4) =
               (int)((double)(((float)(longlong)(iVar20 + -1) - fVar4) * fVar1 + fVar8) + dVar22);
          lVar15 = lVar15 + 0x10;
          *(int *)(*(int *)(iVar13 + 0x14) + iVar18 + 0xc + -4) =
               (int)((double)(((float)(longlong)iVar20 - fVar4) * fVar1 + fVar8) + dVar22);
          *(int *)(*(int *)(iVar13 + 0x14) + iVar18 + 0xc) =
               (int)((double)(((float)(longlong)(iVar20 + 1) - fVar4) * fVar1 + fVar8) + dVar22);
        } while ((int)uVar17 < (int)(uVar7 - 3));
      }
      if ((int)uVar17 < (int)uVar7) {
        lVar15 = uVar7 - uVar17;
        lVar16 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar20 = (int)uVar17;
          uVar17 = uVar17 + 1;
          *(int *)(*(int *)(iVar13 + 0x14) + (int)lVar16) =
               (int)((double)(((float)(longlong)iVar20 - fVar4) * fVar1 + fVar8) + dVar22);
          lVar16 = lVar16 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    fVar3 = (fVar10 - fVar9) / (fVar5 - fVar2);
    fVar1 = (float)(longlong)*(int *)(iVar13 + 4);
    if (fVar5 <= (float)(longlong)*(int *)(iVar13 + 4)) {
      fVar1 = fVar5;
    }
    uVar7 = (uint)fVar1;
    if ((int)uVar17 < (int)uVar7) {
      if (3 < (int)(uVar7 - (int)uVar17)) {
        lVar16 = uVar17 + 2;
        lVar15 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar19 = (int)uVar17;
          iVar20 = (int)lVar16;
          iVar18 = (int)lVar15;
          uVar17 = uVar17 + 4;
          lVar16 = lVar16 + 4;
          *(int *)(*(int *)(iVar13 + 0x14) + iVar18) =
               (int)((double)(((float)(longlong)iVar19 - fVar2) * fVar3 + fVar9) + dVar22);
          *(int *)(*(int *)(iVar13 + 0x14) + iVar18 + 4) =
               (int)((double)(((float)(longlong)(iVar20 + -1) - fVar2) * fVar3 + fVar9) + dVar22);
          *(int *)(iVar18 + 0xc + *(int *)(iVar13 + 0x14) + -4) =
               (int)((double)(((float)(longlong)iVar20 - fVar2) * fVar3 + fVar9) + dVar22);
          lVar15 = lVar15 + 0x10;
          *(int *)(iVar18 + 0xc + *(int *)(iVar13 + 0x14)) =
               (int)((double)(((float)(longlong)(iVar20 + 1) - fVar2) * fVar3 + fVar9) + dVar22);
        } while ((int)uVar17 < (int)(uVar7 - 3));
      }
      if ((int)uVar17 < (int)uVar7) {
        lVar15 = uVar7 - uVar17;
        lVar16 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar20 = (int)uVar17;
          uVar17 = uVar17 + 1;
          *(int *)((int)lVar16 + *(int *)(iVar13 + 0x14)) =
               (int)((double)(((float)(longlong)iVar20 - fVar2) * fVar3 + fVar9) + dVar22);
          lVar16 = lVar16 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    iVar20 = *(int *)(iVar13 + 4);
    if ((int)uVar17 < iVar20) {
      lVar15 = (uVar17 & 0x3fffffff) << 2;
      do {
        uVar17 = uVar17 + 1;
        *(int *)((int)lVar15 + *(int *)(iVar13 + 0x14)) =
             (int)((double)(float)(extraout_f1 + dVar21) + dVar22);
        lVar15 = lVar15 + 4;
        iVar20 = *(int *)(iVar13 + 4);
      } while ((int)uVar17 < iVar20);
    }
    fVar1 = (float)(longlong)iVar20;
    if (fVar6 <= (float)(longlong)iVar20) {
      fVar1 = fVar6;
    }
    uVar7 = (uint)fVar1;
    uVar17 = 0;
    if (3 < (int)uVar7) {
      iVar18 = 0;
      iVar20 = (int)(extraout_f1 + dVar22);
      do {
        iVar14 = iVar18 + 0xc;
        uVar17 = uVar17 + 4;
        *(int *)(*(int *)(iVar13 + 0x18) + iVar18) = iVar20;
        iVar19 = *(int *)(iVar13 + 0x18) + iVar18;
        iVar18 = iVar18 + 0x10;
        *(int *)(iVar19 + 4) = iVar20;
        *(int *)(*(int *)(iVar13 + 0x18) + iVar14 + -4) = iVar20;
        *(int *)(*(int *)(iVar13 + 0x18) + iVar14) = iVar20;
      } while ((int)uVar17 < (int)(uVar7 - 3));
    }
    if ((int)uVar17 < (int)uVar7) {
      lVar15 = uVar7 - uVar17;
      lVar16 = (uVar17 & 0x3fffffff) << 2;
      uVar17 = lVar15 + uVar17;
      do {
        *(int *)(*(int *)(iVar13 + 0x18) + (int)lVar16) = (int)(extraout_f1 + dVar22);
        lVar16 = lVar16 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    fVar2 = ((float)(longlong)(int)dVar23 - fVar10) / (fVar6 - fVar5);
    fVar1 = (float)(longlong)*(int *)(iVar13 + 4);
    if (fVar5 <= (float)(longlong)*(int *)(iVar13 + 4)) {
      fVar1 = fVar5;
    }
    uVar7 = (uint)fVar1;
    if ((int)uVar17 < (int)uVar7) {
      if (3 < (int)(uVar7 - (int)uVar17)) {
        lVar16 = uVar17 + 2;
        lVar15 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar20 = (int)lVar16;
          iVar19 = (int)uVar17;
          iVar18 = (int)lVar15;
          uVar17 = uVar17 + 4;
          lVar16 = lVar16 + 4;
          *(int *)(*(int *)(iVar13 + 0x18) + iVar18) =
               (int)((double)(((float)(longlong)iVar19 - fVar5) * fVar2 + fVar10) + dVar22);
          lVar15 = lVar15 + 0x10;
          *(int *)(*(int *)(iVar13 + 0x18) + iVar18 + 4) =
               (int)((double)(((float)(longlong)(iVar20 + -1) - fVar5) * fVar2 + fVar10) + dVar22);
          *(int *)(iVar18 + 0xc + *(int *)(iVar13 + 0x18) + -4) =
               (int)((double)(((float)(longlong)iVar20 - fVar5) * fVar2 + fVar10) + dVar22);
          *(int *)(iVar18 + 0xc + *(int *)(iVar13 + 0x18)) =
               (int)((double)(((float)(longlong)(iVar20 + 1) - fVar5) * fVar2 + fVar10) + dVar22);
        } while ((int)uVar17 < (int)(uVar7 - 3));
      }
      if ((int)uVar17 < (int)uVar7) {
        lVar15 = uVar7 - uVar17;
        lVar16 = (uVar17 & 0x3fffffff) << 2;
        do {
          iVar20 = (int)uVar17;
          uVar17 = uVar17 + 1;
          *(int *)((int)lVar16 + *(int *)(iVar13 + 0x18)) =
               (int)((double)(((float)(longlong)iVar20 - fVar5) * fVar2 + fVar10) + dVar22);
          lVar16 = lVar16 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    iVar20 = *(int *)(iVar13 + 4);
    if ((int)uVar17 < iVar20) {
      lVar15 = (uVar17 & 0x3fffffff) << 2;
      do {
        uVar17 = uVar17 + 1;
        *(int *)((int)lVar15 + *(int *)(iVar13 + 0x18)) = (int)(extraout_f1 + dVar22);
        lVar15 = lVar15 + 4;
        iVar20 = *(int *)(iVar13 + 4);
      } while ((int)uVar17 < iVar20);
    }
    iVar18 = 0;
    if (0 < iVar20) {
      iVar20 = 0;
      dVar23 = (double)lbl_82005344;
      do {
        iVar18 = iVar18 + 1;
        *(int *)(*(int *)(iVar13 + 0x1c) + iVar20) =
             (int)((double)((float)(extraout_f1 * dVar23) -
                           (float)(longlong)*(int *)(iVar20 + *(int *)(iVar13 + 0x14))) + dVar22);
        *(int *)(iVar20 + *(int *)(iVar13 + 0x20)) =
             (int)((double)((float)(extraout_f1 * dVar23) -
                           (float)(longlong)*(int *)(iVar20 + *(int *)(iVar13 + 0x18))) + dVar22);
        iVar20 = iVar20 + 4;
      } while (iVar18 < *(int *)(iVar13 + 4));
    }
  }
  else {
    iVar20 = 0;
    if (0 < *(int *)(iVar13 + 4)) {
      iVar18 = 0;
      dVar25 = extraout_f1 + lbl_82005730;
      dVar23 = (double)(float)(extraout_f1 + (double)lbl_82002AE0) + lbl_82005730;
      dVar22 = (double)(float)(extraout_f1 - (double)lbl_82002AE0) + lbl_82005730;
      do {
        iVar20 = iVar20 + 1;
        *(int *)(iVar18 + *(int *)(iVar13 + 0x14)) = (int)dVar23;
        *(int *)(iVar18 + *(int *)(iVar13 + 0x18)) = (int)dVar25;
        *(int *)(*(int *)(iVar13 + 0x1c) + iVar18) = (int)dVar22;
        *(int *)(iVar18 + *(int *)(iVar13 + 0x20)) = (int)dVar25;
        iVar18 = iVar18 + 4;
      } while (iVar20 < *(int *)(iVar13 + 4));
      fn_82F6A584(0);
      return;
    }
  }
  fn_82F6A584(0);
  return;
}

