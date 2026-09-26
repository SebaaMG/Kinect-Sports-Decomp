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
extern int fn_82C1AE70();
extern int fn_82F643F8();
extern int fn_82F64F30();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8201543C;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82021540;
extern unsigned int lbl_82022E5C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_82057B40;
extern unsigned int lbl_82089F08;
extern unsigned int lbl_82089F0C;
extern unsigned int lbl_82089F10;
extern unsigned int lbl_82089F14;
extern unsigned int lbl_82089F1C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_348;
extern unsigned int uStack_34c;
extern unsigned int uStack_350;
extern unsigned int uStack_354;
extern unsigned int uStack_358;
extern unsigned int uStack_35c;
extern unsigned int uStack_360;


/* WARNING: Type propagation algorithm not settling */

void fn_82A556B8(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar10;
  longlong lVar9;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float afStack_370 [4];
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  float afStack_314 [32];
  float afStack_294 [33];
  int aiStack_210 [32];
  int aiStack_190 [32];
  float afStack_110 [68];
  
  lVar5 = fn_82F6A538();
  fVar1 = lbl_821AAD20;
  afStack_370[0] = lbl_82089F1C;
  dVar24 = (double)lbl_821AAD20;
  iVar17 = (int)lVar5;
  afStack_370[1] = (float)lbl_82015B38;
  afStack_370[2] = lbl_821AAD20;
  afStack_370[3] = lbl_821AAD20;
  uStack_360 = lbl_82089F14;
  uStack_35c = lbl_82057B40;
  uStack_358 = lbl_82089F10;
  uStack_354 = lbl_82027070;
  uStack_350 = lbl_82022E5C;
  uStack_34c = lbl_82089F0C;
  uStack_348 = lbl_82089F08;
  if ((iVar17 < 1) || (iVar16 = (int)param_3, iVar16 < 1)) {
    fn_82F6A584(0xffffffff80040000);
    return;
  }
  uVar6 = param_3;
  lVar12 = param_5;
  if (0 < iVar16) {
    do {
      uVar11 = 0;
      if (3 < iVar17) {
        iVar18 = *(int *)lVar12;
        iVar15 = 0;
        do {
          iVar10 = iVar15 + 0xc;
          *(float *)(iVar18 + iVar15) = fVar1;
          iVar7 = iVar18 + iVar15;
          uVar11 = uVar11 + 4;
          iVar15 = iVar15 + 0x10;
          *(float *)(iVar7 + 4) = fVar1;
          *(float *)(iVar18 + iVar10 + -4) = fVar1;
          *(float *)(iVar18 + iVar10) = fVar1;
        } while ((int)uVar11 < iVar17 + -3);
      }
      if ((int)uVar11 < iVar17) {
        lVar9 = lVar5 - uVar11;
        iVar18 = *(int *)lVar12;
        lVar14 = (uVar11 & 0x3fffffff) << 2;
        do {
          *(float *)(iVar18 + (int)lVar14) = fVar1;
          lVar14 = lVar14 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar6 = uVar6 - 1;
      lVar12 = lVar12 + 4;
    } while (uVar6 != 0);
  }
  fVar1 = lbl_82002AE0;
  if ((iVar17 == 5) && (iVar16 == 5)) {
    if ((param_2 & 0xffffffff) == 0x607) {
      if ((param_4 & 0xffffffff) == 0x37) {
code_r0x82a55aac:
        puVar8 = (undefined4 *)param_5;
        iVar17 = puVar8[1];
        iVar16 = puVar8[2];
        iVar18 = puVar8[3];
        iVar15 = puVar8[4];
        *(float *)*puVar8 = lbl_82002AE0;
        *(float *)(iVar17 + 4) = fVar1;
        *(float *)(iVar16 + 8) = fVar1;
        *(float *)(iVar18 + 0xc) = fVar1;
        *(float *)(iVar15 + 0x10) = fVar1;
        fn_82F6A584(0);
        return;
      }
    }
    else if (((param_2 & 0xffffffff) == 0x37) && ((param_4 & 0xffffffff) == 0x607))
    goto code_r0x82a55aac;
  }
  dVar19 = (double)fn_82F64F30(lbl_82005758);
  uVar6 = 1;
  iVar15 = 0;
  iVar18 = 0;
  dVar19 = (double)((float)dVar19 * lbl_82021540);
  if (0 < iVar17) {
    iVar7 = 0;
    do {
      *(int *)((int)aiStack_190 + iVar7) = iVar18;
      iVar10 = iVar15;
      while ((uVar6 & param_2) == 0) {
        iVar10 = iVar10 + 1;
        uVar6 = (uVar6 & 0x7fffffff) << 1;
        if (10 < iVar10) goto code_r0x82a55c60;
      }
      iVar18 = iVar18 + 1;
      uVar6 = (uVar6 & 0x7fffffff) << 1;
      iVar15 = iVar10 + 1;
      *(float *)((int)afStack_110 + iVar7) = afStack_370[iVar10];
      iVar7 = iVar7 + 4;
    } while (iVar18 < iVar17);
  }
  fn_82C1AE70(afStack_110,aiStack_190,lVar5);
  uVar6 = 1;
  iVar15 = 0;
  iVar18 = 0;
  if (0 < iVar16) {
    iVar7 = 0;
    do {
      *(int *)((int)aiStack_210 + iVar7) = iVar18;
      iVar10 = iVar15;
      while ((uVar6 & param_4) == 0) {
        iVar10 = iVar10 + 1;
        uVar6 = (uVar6 & 0x7fffffff) << 1;
        if (10 < iVar10) goto code_r0x82a55c60;
      }
      iVar18 = iVar18 + 1;
      uVar6 = (uVar6 & 0x7fffffff) << 1;
      iVar15 = iVar10 + 1;
      *(float *)((int)afStack_314 + iVar7 + 4U) = afStack_370[iVar10];
      iVar7 = iVar7 + 4;
    } while (iVar18 < iVar16);
  }
  fn_82C1AE70(afStack_314 + 1,aiStack_210,param_3);
  uVar11 = param_3 - 1;
  uVar6 = 0;
  iVar18 = (int)uVar11;
  if (3 < iVar18) {
    iVar15 = 0;
    do {
      fVar1 = *(float *)((int)afStack_314 + iVar15 + 8U);
      fVar2 = *(float *)((int)afStack_314 + iVar15 + 0xcU);
      fVar3 = *(float *)((int)afStack_314 + iVar15 + 0x10U);
      uVar6 = uVar6 + 4;
      fVar4 = *(float *)((int)afStack_314 + iVar15 + 0x14U);
      *(float *)((int)afStack_294 + iVar15 + 4) = fVar1 - *(float *)((int)afStack_314 + iVar15 + 4U)
      ;
      *(float *)((int)afStack_294 + iVar15 + 8) = fVar2 - fVar1;
      *(float *)((int)afStack_294 + iVar15 + 0xc) = fVar3 - fVar2;
      *(float *)((int)afStack_294 + iVar15 + 0x10) = fVar4 - fVar3;
      iVar15 = iVar15 + 0x10;
    } while ((int)uVar6 < iVar16 + -4);
  }
  if ((int)uVar6 < iVar18) {
    lVar12 = uVar11 - uVar6;
    lVar9 = (uVar6 & 0x3fffffff) << 2;
    do {
      iVar15 = (int)lVar9;
      *(float *)((int)afStack_294 + iVar15 + 4) =
           *(float *)((int)afStack_314 + iVar15 + 8U) - *(float *)((int)afStack_314 + iVar15 + 4U);
      lVar9 = lVar9 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  fVar1 = lbl_82002C5C;
  iVar15 = (int)((param_3 & 0x3fffffff) << 2);
  dVar23 = (double)lbl_8201543C;
  dVar22 = (double)lbl_82002AE0;
  *(float *)((int)afStack_294 + iVar15) =
       (float)((double)(afStack_314[1] - *(float *)((int)afStack_314 + iVar15)) + dVar23);
  fVar3 = lbl_8200DFF4;
  fVar2 = lbl_82006848;
  if (iVar17 < 1) {
    lVar12 = param_5;
    uVar6 = param_3;
    dVar19 = dVar24;
    if (0 < iVar16) {
      do {
        iVar16 = 0;
        dVar23 = dVar24;
        dVar21 = dVar24;
        if (1 < iVar17) {
          iVar18 = *(int *)lVar12;
          iVar15 = 0;
          do {
            iVar7 = iVar18 + iVar15;
            iVar16 = iVar16 + 2;
            dVar23 = (double)(float)((double)*(float *)(iVar18 + iVar15) + dVar23);
            iVar15 = iVar15 + 8;
            dVar21 = (double)(float)((double)*(float *)(iVar7 + 4) + dVar21);
          } while (iVar16 < iVar17 + -1);
        }
        dVar20 = dVar24;
        if (iVar16 < iVar17) {
          dVar20 = (double)*(float *)(iVar16 * 4 + *(int *)lVar12);
        }
        dVar23 = (double)(float)((double)(float)(dVar21 + dVar23) + dVar20);
        if (dVar19 < dVar23) {
          dVar19 = dVar23;
        }
        uVar6 = uVar6 - 1;
        lVar12 = lVar12 + 4;
      } while (uVar6 != 0);
      if (dVar24 < dVar19) {
        do {
          uVar6 = 0;
          if (3 < iVar17) {
            iVar16 = *(int *)param_5;
            fVar4 = (float)(dVar22 / dVar19);
            iVar18 = 0;
            do {
              iVar15 = iVar18 + iVar16;
              iVar7 = iVar18 + 0xc;
              uVar6 = uVar6 + 4;
              lStack_330 = (longlong)(int)(fVar4 * *(float *)(iVar18 + iVar16) * fVar3 + fVar1);
              lStack_320 = (longlong)(int)(*(float *)(iVar16 + iVar7) * fVar4 * fVar3 + fVar1);
              lStack_338 = (longlong)(int)(*(float *)(iVar15 + 4) * fVar4 * fVar3 + fVar1);
              lStack_328 = (longlong)(int)(*(float *)(iVar16 + iVar7 + -4) * fVar4 * fVar3 + fVar1);
              *(float *)(iVar18 + iVar16) = (float)lStack_330 * fVar2;
              *(float *)(iVar16 + iVar7 + -4) = (float)lStack_328 * fVar2;
              iVar18 = iVar18 + 0x10;
              *(float *)(iVar16 + iVar7) = (float)lStack_320 * fVar2;
              *(float *)(iVar15 + 4) = (float)lStack_338 * fVar2;
            } while ((int)uVar6 < iVar17 + -3);
          }
          if ((int)uVar6 < iVar17) {
            lVar12 = lVar5 - uVar6;
            iVar16 = *(int *)param_5;
            lVar9 = (uVar6 & 0x3fffffff) << 2;
            do {
              lStack_340 = (longlong)
                           (int)((float)(dVar22 / dVar19) * *(float *)(iVar16 + (int)lVar9) * fVar3
                                + fVar1);
              *(float *)(iVar16 + (int)lVar9) = (float)lStack_340 * fVar2;
              lVar9 = lVar9 + 4;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          param_3 = param_3 - 1;
          param_5 = param_5 + 4;
        } while (param_3 != 0);
        fn_82F6A584(0);
        return;
      }
    }
code_r0x82a55c60:
    fn_82F6A584(0xffffffff80004005);
    return;
  }
  lVar5 = 0;
  if (afStack_314[1] < afStack_110[0]) {
    pfVar13 = afStack_314 + 1;
    do {
      if (iVar16 <= (int)lVar5) break;
      pfVar13 = pfVar13 + 1;
      lVar5 = lVar5 + 1;
    } while (*pfVar13 < afStack_110[0]);
    if (((int)lVar5 != 0) && ((int)lVar5 <= iVar18)) {
      uVar11 = lVar5 - 1;
    }
  }
  iVar17 = (int)((uVar11 & 0xffffffff) << 2);
  afStack_110[0] = afStack_110[0] - *(float *)((int)afStack_314 + iVar17 + 4U);
  while (dVar22 = (double)afStack_110[0], dVar22 < dVar24) {
    afStack_110[0] = (float)(dVar22 + dVar23);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F643F8((double)((float)((double)(float)(dVar22 / (double)*(float *)((int)afStack_294 +
                                                                                iVar17 + 4)) *
                                    dVar19) * fVar1));
}

