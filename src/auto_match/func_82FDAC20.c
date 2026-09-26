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
extern int fn_82A1EFC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82FC8FD0();
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8216E450;
extern unsigned int lbl_8216E7E0;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642D0;


void fn_82FDAC20(undefined8 param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined8 in_r0;
  int iVar18;
  ulonglong uVar17;
  undefined4 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  float *pfVar27;
  int iVar28;
  float *pfVar29;
  ulonglong uVar30;
  uint uVar32;
  float *pfVar33;
  ulonglong uVar31;
  longlong lVar34;
  ulonglong uVar35;
  float *pfVar37;
  ulonglong uVar36;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  ulonglong uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs51 [16];
  float in_register_00010390;
  float in_register_00010394;
  float in_register_00010398;
  float in_vr57;
  float in_register_000103a0;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float *pfStack_cc;
  float *pfStack_c8;
  
  iVar18 = fn_82F6A548();
  pfStack_c8 = (float *)*param_2;
  uVar10 = *(uint *)(iVar18 + 0x144);
  uVar39 = (ulonglong)uVar10;
  lVar38 = (ulonglong)*(ushort *)(param_2 + 3) * 4 + ZEXT48(pfStack_c8);
  uVar11 = *(uint *)(iVar18 + 0x148);
  uVar40 = (ulonglong)uVar11;
  lVar41 = 8;
  puVar20 = (uint *)(iVar18 + 0x5c);
  uVar17 = ((ulonglong)*(uint *)(iVar18 + 0xc) & 0x3fffffff) << 2;
  pfStack_cc = (float *)lVar38;
  do {
    uVar21 = (ulonglong)*puVar20;
    uVar22 = uVar17;
    if (0x3ff < uVar17) {
      uVar22 = 0x400;
    }
    uVar30 = puVar20[-8] - uVar21;
    if (uVar22 <= (uVar30 & 0xffffffff)) {
      uVar30 = uVar22;
    }
    lVar34 = 0;
    if ((uVar30 & 0xffffffff) != 0) {
      lVar25 = ((uVar30 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar34 + uVar21);
        lVar34 = lVar34 + 0x80;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    if ((uVar30 & 0xffffffff) < uVar22) {
      uVar35 = (ulonglong)puVar20[-8] - (ulonglong)puVar20[-0x10];
      if ((uVar22 - uVar30 & 0xffffffff) <= (uVar35 & 0xffffffff)) {
        uVar35 = uVar22 - uVar30;
      }
      lVar34 = 0;
      if ((uVar35 & 0xffffffff) != 0) {
        lVar25 = ((uVar35 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar34 + uVar21);
          lVar34 = lVar34 + 0x80;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
    }
    lVar41 = lVar41 + -1;
    puVar20 = puVar20 + 1;
  } while (lVar41 != 0);
  uVar17 = ((ulonglong)*(uint *)(iVar18 + 0xc) & 0x1fffffff) << 3;
  puVar20 = (uint *)(iVar18 + 0x114);
  lVar41 = 4;
  do {
    uVar21 = (ulonglong)*puVar20;
    uVar22 = uVar17;
    if (0x3ff < uVar17) {
      uVar22 = 0x400;
    }
    uVar30 = puVar20[-4] - uVar21;
    if (uVar22 <= (uVar30 & 0xffffffff)) {
      uVar30 = uVar22;
    }
    lVar34 = 0;
    if ((uVar30 & 0xffffffff) != 0) {
      lVar25 = ((uVar30 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar34 + uVar21);
        lVar34 = lVar34 + 0x80;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    if ((uVar30 & 0xffffffff) < uVar22) {
      uVar35 = (ulonglong)puVar20[-4] - (ulonglong)puVar20[-8];
      if ((uVar22 - uVar30 & 0xffffffff) <= (uVar35 & 0xffffffff)) {
        uVar35 = uVar22 - uVar30;
      }
      lVar34 = 0;
      if ((uVar35 & 0xffffffff) != 0) {
        lVar25 = ((uVar35 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar34 + uVar21);
          lVar34 = lVar34 + 0x80;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
    }
    lVar41 = lVar41 + -1;
    puVar20 = puVar20 + 1;
  } while (lVar41 != 0);
  fVar1 = *(float *)(iVar18 + 0x158);
  fVar2 = *(float *)(*(int *)(iVar18 + 8) + 0x10);
  *(undefined4 *)(iVar18 + 0x168) = 0;
  fVar4 = lbl_821AAD20;
  fVar3 = fVar2 - *(float *)(iVar18 + 0x164);
  *(float *)(iVar18 + 0x160) = fVar2;
  *(int *)(iVar18 + 0x16c) = (int)(longlong)(ABS(fVar3) / fVar1);
  if (fVar3 <= fVar4) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar18 + 0x15c) = fVar1;
  fVar1 = *(float *)(*(int *)(iVar18 + 8) + 4);
  fVar3 = fVar1 - *(float *)(iVar18 + 0x17c);
  fVar2 = *(float *)(iVar18 + 0x170);
  *(float *)(iVar18 + 0x178) = fVar1;
  *(undefined4 *)(iVar18 + 0x180) = 0;
  *(int *)(iVar18 + 0x184) = (int)(longlong)(ABS(fVar3) / fVar2);
  if (fVar3 <= fVar4) {
    fVar2 = -fVar2;
  }
  *(float *)(iVar18 + 0x174) = fVar2;
  fVar1 = *(float *)(iVar18 + 0x188);
  fVar2 = *(float *)(*(int *)(iVar18 + 8) + 0xc);
  *(undefined4 *)(iVar18 + 0x198) = 0;
  fVar3 = fVar2 - *(float *)(iVar18 + 0x194);
  *(float *)(iVar18 + 400) = fVar2;
  *(int *)(iVar18 + 0x19c) = (int)(longlong)(ABS(fVar3) / fVar1);
  if (fVar3 <= fVar4) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar18 + 0x18c) = fVar1;
  uVar12 = param_2[2];
  uVar17 = (ulonglong)*(ushort *)((int)param_2 + 0xe);
  if (uVar12 == 0x11) {
    fVar1 = *(float *)(*(int *)(iVar18 + 8) + 8);
    if ((fVar1 != *(float *)(iVar18 + 0x1a4)) || (*(char *)(iVar18 + 0x1a8) == '\0')) {
      *(float *)(iVar18 + 0x1a4) = fVar1;
      *(int *)(iVar18 + 0x1a0) = (int)(longlong)((float)*(uint *)(iVar18 + 0x14c) * fVar1);
    }
    uVar22 = (ulonglong)*(uint *)(iVar18 + 0x1a0);
    if ((*(ushort *)(param_2 + 3) - uVar17 & 0xffffffff) <= (ulonglong)*(uint *)(iVar18 + 0x1a0)) {
      uVar22 = *(ushort *)(param_2 + 3) - uVar17;
    }
    lVar41 = (uVar22 & 0x3fffffff) << 2;
    fn_82A1EFC0(uVar17 * 4 + ZEXT48(pfStack_c8),0,lVar41);
    fn_82A1EFC0(uVar17 * 4 + lVar38,0,lVar41);
    uVar17 = uVar22 + uVar17;
    lVar38 = *(uint *)(iVar18 + 0x1a0) - uVar22;
    *(int *)(iVar18 + 0x1a0) = (int)lVar38;
    if (lVar38 != 0) {
      param_2[2] = 0x2d;
    }
  }
  if ((uVar17 & 0xffffffff) != 0) {
    dVar44 = (double)lbl_8216E7E0;
    dVar45 = (double)lbl_82057B54;
    dVar43 = (double)lbl_8216E450;
    uVar22 = uVar17;
    do {
      uVar21 = uVar22;
      if (0x1f < (uVar22 & 0xffffffff)) {
        uVar21 = 0x20;
      }
      uVar30 = (uVar21 & 0xffffffff) >> 2;
      altv207_13(in_vs32,in_vs51);
      pfVar37 = (float *)((uint)(&lbl_832642D0 + (int)in_r0) & 0xfffffff0);
      *pfVar37 = in_register_000103f0;
      pfVar37[1] = in_register_000103f4;
      pfVar37[2] = in_register_000103f8;
      pfVar37[3] = in_vr63;
      uVar22 = uVar22 - uVar21;
      uVar23 = uVar21 - (uVar21 & 0xfffffffc);
      uVar26 = uVar10;
      uVar35 = uVar39;
      pfVar37 = pfStack_cc;
      pfVar33 = pfStack_c8;
      for (uVar42 = uVar30; uVar42 != 0; uVar42 = uVar42 - 1) {
        altv207_13(in_vs32,in_vs42);
        pfVar33 = pfVar33 + 4;
        altv207_13(in_vs32,in_vs43);
        pfVar37 = pfVar37 + 4;
        pfVar27 = (float *)((int)in_r0 + (int)uVar35 & 0xfffffff0);
        *pfVar27 = (in_register_000103d0 + in_register_000103e0) * in_register_000103f0;
        pfVar27[1] = (in_register_000103d4 + in_register_000103e4) * in_register_000103f4;
        pfVar27[2] = (in_register_000103d8 + in_register_000103e8) * in_register_000103f8;
        pfVar27[3] = (in_vr61 + in_vr62) * in_vr63;
        uVar35 = uVar35 + 0x10;
        uVar26 = (uint)uVar35;
      }
      if ((uVar23 & 0xffffffff) != 0) {
        iVar28 = (int)pfVar33 - (int)pfVar37;
        iVar13 = uVar26 - (int)pfVar37;
        do {
          *(float *)((int)pfVar37 + iVar13) =
               (float)((double)(*(float *)((int)pfVar37 + iVar28) + *pfVar37) * dVar43);
          pfVar37 = pfVar37 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      lVar38 = (uVar21 & 0x3fffffff) * 4;
      fVar1 = *(float *)(iVar18 + 0x138);
      fVar2 = *(float *)(iVar18 + 0x13c);
      uVar35 = lVar38 + uVar39;
      fVar3 = *(float *)(iVar18 + 0x140);
      if (uVar39 < (uVar35 & 0xffffffff)) {
        uVar26 = ((int)uVar35 - uVar10) + 3;
        uVar42 = uVar39;
        if (3 < (int)(((int)uVar26 >> 2) + (uint)((int)uVar26 < 0 && (uVar26 & 3) != 0))) {
          do {
            pfVar37 = (float *)uVar42;
            fVar4 = *pfVar37;
            fVar7 = fVar4 - fVar1;
            fVar5 = pfVar37[1];
            fVar6 = pfVar37[2];
            fVar1 = pfVar37[3];
            fVar7 = fVar3 * fVar2 + fVar7;
            *pfVar37 = fVar7;
            fVar2 = fVar3 * fVar7 + (fVar5 - fVar4);
            pfVar37[1] = fVar2;
            fVar2 = fVar3 * fVar2 + (fVar6 - fVar5);
            pfVar37[2] = fVar2;
            fVar2 = fVar3 * fVar2 + (fVar1 - fVar6);
            pfVar37[3] = fVar2;
            uVar42 = uVar42 + 0x10;
          } while ((int)uVar42 < (int)uVar35 + -0xc);
        }
        if ((uVar42 & 0xffffffff) < (uVar35 & 0xffffffff)) {
          lVar41 = uVar42 - 4;
          lVar34 = (((uVar35 - uVar42) - 1 & 0xffffffff) >> 2) + 1;
          fVar4 = fVar1;
          do {
            fVar1 = *(float *)((int)lVar41 + 4);
            fVar2 = fVar3 * fVar2 + (fVar1 - fVar4);
            lVar41 = lVar41 + 4;
            *(float *)lVar41 = fVar2;
            lVar34 = lVar34 + -1;
            fVar4 = fVar1;
          } while (lVar34 != 0);
        }
      }
      *(float *)(iVar18 + 0x138) = fVar1;
      *(float *)(iVar18 + 0x13c) = fVar2;
      bVar14 = (int)uVar22 != 0;
      if (bVar14) {
        puVar20 = (uint *)(iVar18 + 0x3c);
        lVar41 = 8;
        uVar35 = ((ulonglong)*(uint *)(iVar18 + 0x10) & 0x3fffffff) * 4;
        do {
          uVar23 = (ulonglong)*puVar20;
          uVar42 = puVar20[8] + uVar35;
          if (uVar23 <= (uVar42 & 0xffffffff)) {
            uVar42 = (ulonglong)puVar20[-8];
          }
          uVar24 = uVar35;
          if (0x3ff < uVar35) {
            uVar24 = 0x400;
          }
          uVar31 = uVar23 - uVar42;
          if (uVar24 <= (uVar23 - uVar42 & 0xffffffff)) {
            uVar31 = uVar24;
          }
          lVar34 = 0;
          if ((uVar31 & 0xffffffff) != 0) {
            lVar25 = ((uVar31 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar34 + uVar42);
              lVar34 = lVar34 + 0x80;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if ((uVar31 & 0xffffffff) < uVar24) {
            uVar36 = uVar23 - puVar20[-8];
            if ((uVar24 - uVar31 & 0xffffffff) <= (uVar23 - puVar20[-8] & 0xffffffff)) {
              uVar36 = uVar24 - uVar31;
            }
            lVar34 = 0;
            if ((uVar36 & 0xffffffff) != 0) {
              lVar25 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar34 + uVar42);
                lVar34 = lVar34 + 0x80;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
          }
          lVar41 = lVar41 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar41 != 0);
      }
      pfVar37 = *(float **)(iVar18 + 0x5c);
      pfVar33 = *(float **)(iVar18 + 0x3c);
      fVar1 = *(float *)(iVar18 + 0x9c);
      fVar2 = *(float *)(iVar18 + 0xbc);
      uVar26 = (int)pfVar33 - (int)pfVar37 >> 2;
      uVar42 = (ulonglong)(int)uVar26;
      uVar35 = uVar21;
      if (((ulonglong)uVar26 < (uVar21 & 0xffffffff)) &&
         (uVar35 = uVar42, (ulonglong)uVar26 != (uVar21 & 0xffffffff))) {
        uVar24 = 0;
        uVar35 = uVar39;
        uVar23 = uVar40;
        if (3 < (int)uVar26) {
          do {
            pfVar29 = (float *)uVar23;
            pfVar27 = (float *)uVar35;
            fVar3 = pfVar27[2];
            fVar4 = pfVar27[3];
            fVar5 = pfVar37[2];
            uVar24 = uVar24 + 4;
            fVar6 = pfVar37[3];
            uVar35 = uVar35 + 0x10;
            fVar7 = *(float *)((int)pfVar29 + (uVar10 - uVar11) + 4);
            fVar8 = fVar1 * *pfVar27 + *pfVar37 * fVar2;
            *pfVar37 = fVar8;
            fVar7 = fVar7 * fVar1 + pfVar37[1] * fVar2;
            *pfVar29 = fVar8;
            fVar5 = fVar5 * fVar2 + fVar3 * fVar1;
            pfVar37[1] = fVar7;
            fVar3 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar29[1] = fVar7;
            pfVar37[2] = fVar5;
            pfVar29[2] = fVar5;
            pfVar37[3] = fVar3;
            pfVar37 = pfVar37 + 4;
            pfVar29[3] = fVar3;
            uVar23 = uVar23 + 0x10;
          } while ((uVar24 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar24 & 0xffffffff) < (ulonglong)uVar26) {
          lVar41 = uVar42 - uVar24;
          do {
            pfVar27 = (float *)uVar35;
            uVar35 = uVar35 + 4;
            fVar3 = fVar1 * *pfVar27 + *pfVar37 * fVar2;
            *pfVar37 = fVar3;
            *(float *)uVar23 = fVar3;
            uVar23 = uVar23 + 4;
            pfVar37 = pfVar37 + 1;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
        }
        iVar28 = (int)uVar35;
        if (pfVar33 <= pfVar37) {
          pfVar37 = *(float **)(iVar18 + 0x1c);
        }
        uVar26 = (int)pfVar33 - (int)pfVar37 >> 2;
        uVar24 = (longlong)(int)uVar26;
        if ((uVar21 - uVar42 & 0xffffffff) <= (ulonglong)uVar26) {
          uVar24 = uVar21 - uVar42;
        }
        uVar42 = 0;
        if (3 < (int)uVar24) {
          do {
            uVar42 = uVar42 + 4;
            pfVar33 = (float *)uVar35;
            fVar3 = pfVar33[1];
            fVar4 = pfVar33[2];
            fVar5 = pfVar33[3];
            fVar6 = pfVar37[2];
            uVar35 = uVar35 + 0x10;
            iVar28 = (int)uVar35;
            fVar7 = pfVar37[3];
            fVar8 = fVar1 * *pfVar33 + *pfVar37 * fVar2;
            *pfVar37 = fVar8;
            fVar9 = pfVar37[1] * fVar2 + fVar3 * fVar1;
            pfVar33 = (float *)uVar23;
            *pfVar33 = fVar8;
            fVar4 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar37[1] = fVar9;
            fVar3 = fVar7 * fVar2 + fVar5 * fVar1;
            pfVar33[1] = fVar9;
            pfVar37[2] = fVar4;
            pfVar33[2] = fVar4;
            pfVar37[3] = fVar3;
            pfVar37 = pfVar37 + 4;
            pfVar33[3] = fVar3;
            uVar23 = uVar23 + 0x10;
          } while ((uVar42 & 0xffffffff) < (uVar24 - 3 & 0xffffffff));
        }
        if ((uVar42 & 0xffffffff) < (uVar24 & 0xffffffff)) {
          lVar41 = uVar24 - uVar42;
          iVar13 = (int)uVar23;
          do {
            fVar3 = *(float *)((iVar28 - iVar13) + (int)(float *)uVar23) * fVar1 + *pfVar37 * fVar2;
            *pfVar37 = fVar3;
            *(float *)uVar23 = fVar3;
            uVar23 = uVar23 + 4;
            pfVar37 = pfVar37 + 1;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
        }
      }
      else {
        uVar42 = 0;
        uVar26 = uVar10;
        uVar32 = uVar11;
        if (3 < (int)uVar35) {
          uVar23 = uVar39;
          uVar24 = uVar40;
          do {
            pfVar27 = (float *)uVar24;
            pfVar33 = (float *)uVar23;
            fVar3 = pfVar33[2];
            fVar4 = pfVar33[3];
            fVar5 = pfVar37[2];
            uVar42 = uVar42 + 4;
            fVar6 = pfVar37[3];
            uVar23 = uVar23 + 0x10;
            uVar26 = (uint)uVar23;
            fVar7 = *(float *)((int)pfVar27 + (uVar10 - uVar11) + 4);
            fVar8 = fVar1 * *pfVar33 + *pfVar37 * fVar2;
            *pfVar37 = fVar8;
            fVar7 = fVar7 * fVar1 + pfVar37[1] * fVar2;
            *pfVar27 = fVar8;
            fVar5 = fVar5 * fVar2 + fVar3 * fVar1;
            pfVar37[1] = fVar7;
            fVar3 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar27[1] = fVar7;
            pfVar37[2] = fVar5;
            pfVar27[2] = fVar5;
            pfVar37[3] = fVar3;
            pfVar37 = pfVar37 + 4;
            pfVar27[3] = fVar3;
            uVar24 = uVar24 + 0x10;
            uVar32 = (uint)uVar24;
          } while ((uVar42 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
        }
        if ((uVar42 & 0xffffffff) < (uVar35 & 0xffffffff)) {
          lVar41 = uVar35 - uVar42;
          iVar28 = uVar26 - (int)pfVar37;
          iVar13 = uVar32 - (int)pfVar37;
          do {
            fVar3 = *(float *)(iVar28 + (int)pfVar37) * fVar1 + *pfVar37 * fVar2;
            *pfVar37 = fVar3;
            *(float *)(iVar13 + (int)pfVar37) = fVar3;
            pfVar37 = pfVar37 + 1;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
        }
      }
      *(float **)(iVar18 + 0x5c) = pfVar37;
      puVar19 = (undefined4 *)(iVar18 + 0x40);
      lVar41 = 7;
      do {
        pfVar37 = (float *)puVar19[8];
        fVar1 = (float)puVar19[0x18];
        pfVar33 = (float *)*puVar19;
        fVar2 = (float)puVar19[0x20];
        uVar26 = (int)pfVar33 - (int)pfVar37 >> 2;
        uVar42 = (ulonglong)(int)uVar26;
        uVar35 = uVar21;
        if (((ulonglong)uVar26 < (uVar21 & 0xffffffff)) &&
           (uVar35 = uVar42, (ulonglong)uVar26 != (uVar21 & 0xffffffff))) {
          uVar24 = 0;
          uVar35 = uVar39;
          uVar23 = uVar40;
          if (3 < (int)uVar26) {
            do {
              pfVar27 = (float *)uVar23;
              pfVar29 = (float *)uVar35;
              fVar3 = pfVar29[2];
              fVar4 = pfVar29[3];
              uVar24 = uVar24 + 4;
              uVar35 = uVar35 + 0x10;
              fVar5 = *pfVar27;
              fVar6 = pfVar27[1];
              fVar7 = pfVar27[2];
              fVar9 = *(float *)((int)pfVar27 + (uVar10 - uVar11) + 4) * fVar1 + pfVar37[1] * fVar2;
              fVar8 = pfVar27[3];
              fVar16 = *pfVar37 * fVar2 + *pfVar29 * fVar1;
              *pfVar37 = fVar16;
              fVar15 = pfVar37[2] * fVar2 + fVar3 * fVar1;
              pfVar37[1] = fVar9;
              fVar3 = pfVar37[3] * fVar2 + fVar4 * fVar1;
              pfVar37[2] = fVar15;
              pfVar37[3] = fVar3;
              pfVar37 = pfVar37 + 4;
              pfVar27[1] = fVar6 + fVar9;
              *pfVar27 = fVar5 + fVar16;
              pfVar27[2] = fVar7 + fVar15;
              pfVar27[3] = fVar8 + fVar3;
              uVar23 = uVar23 + 0x10;
            } while ((uVar24 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
          }
          if ((uVar24 & 0xffffffff) < (ulonglong)uVar26) {
            lVar34 = uVar42 - uVar24;
            do {
              pfVar27 = (float *)uVar35;
              uVar35 = uVar35 + 4;
              fVar3 = *(float *)uVar23;
              fVar4 = *pfVar37 * fVar2 + *pfVar27 * fVar1;
              *pfVar37 = fVar4;
              pfVar37 = pfVar37 + 1;
              *(float *)uVar23 = fVar3 + fVar4;
              uVar23 = uVar23 + 4;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
          iVar28 = (int)uVar35;
          if (pfVar33 <= pfVar37) {
            pfVar37 = (float *)puVar19[-8];
          }
          uVar26 = (int)pfVar33 - (int)pfVar37 >> 2;
          uVar24 = (longlong)(int)uVar26;
          if ((uVar21 - uVar42 & 0xffffffff) <= (ulonglong)uVar26) {
            uVar24 = uVar21 - uVar42;
          }
          uVar42 = 0;
          if (3 < (int)uVar24) {
            do {
              pfVar33 = (float *)uVar35;
              uVar42 = uVar42 + 4;
              fVar3 = *pfVar33;
              fVar4 = pfVar33[1];
              fVar5 = pfVar33[3];
              uVar35 = uVar35 + 0x10;
              iVar28 = (int)uVar35;
              pfVar27 = (float *)uVar23;
              fVar6 = pfVar27[2];
              fVar7 = *pfVar27;
              fVar8 = pfVar27[1];
              fVar16 = pfVar37[2] * fVar2 + pfVar33[2] * fVar1;
              pfVar37[2] = fVar16;
              fVar15 = *pfVar37 * fVar2 + fVar3 * fVar1;
              fVar3 = pfVar27[3];
              fVar9 = pfVar37[1] * fVar2 + fVar4 * fVar1;
              *pfVar37 = fVar15;
              fVar4 = pfVar37[3] * fVar2 + fVar5 * fVar1;
              pfVar37[1] = fVar9;
              pfVar37[3] = fVar4;
              pfVar37 = pfVar37 + 4;
              pfVar27[2] = fVar6 + fVar16;
              *pfVar27 = fVar7 + fVar15;
              pfVar27[1] = fVar8 + fVar9;
              pfVar27[3] = fVar3 + fVar4;
              uVar23 = uVar23 + 0x10;
            } while ((uVar42 & 0xffffffff) < (uVar24 - 3 & 0xffffffff));
          }
          if ((uVar42 & 0xffffffff) < (uVar24 & 0xffffffff)) {
            lVar34 = uVar24 - uVar42;
            iVar13 = (int)uVar23;
            do {
              pfVar33 = (float *)uVar23;
              fVar3 = *pfVar33;
              fVar4 = *(float *)((iVar28 - iVar13) + (int)pfVar33) * fVar1 + *pfVar37 * fVar2;
              *pfVar37 = fVar4;
              pfVar37 = pfVar37 + 1;
              *pfVar33 = fVar3 + fVar4;
              uVar23 = uVar23 + 4;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        else {
          uVar42 = 0;
          uVar26 = uVar10;
          uVar32 = uVar11;
          if (3 < (int)uVar35) {
            uVar23 = uVar39;
            uVar24 = uVar40;
            do {
              pfVar33 = (float *)uVar24;
              pfVar27 = (float *)uVar23;
              fVar3 = pfVar27[2];
              fVar4 = pfVar27[3];
              uVar42 = uVar42 + 4;
              uVar23 = uVar23 + 0x10;
              uVar26 = (uint)uVar23;
              fVar5 = *pfVar33;
              fVar6 = pfVar33[1];
              fVar7 = pfVar33[2];
              fVar9 = *(float *)((int)pfVar33 + (uVar10 - uVar11) + 4) * fVar1 + pfVar37[1] * fVar2;
              fVar8 = pfVar33[3];
              fVar16 = *pfVar37 * fVar2 + *pfVar27 * fVar1;
              *pfVar37 = fVar16;
              fVar15 = pfVar37[2] * fVar2 + fVar3 * fVar1;
              pfVar37[1] = fVar9;
              fVar3 = pfVar37[3] * fVar2 + fVar4 * fVar1;
              pfVar37[2] = fVar15;
              pfVar37[3] = fVar3;
              pfVar37 = pfVar37 + 4;
              pfVar33[1] = fVar6 + fVar9;
              *pfVar33 = fVar5 + fVar16;
              pfVar33[2] = fVar7 + fVar15;
              pfVar33[3] = fVar8 + fVar3;
              uVar24 = uVar24 + 0x10;
              uVar32 = (uint)uVar24;
            } while ((uVar42 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
          }
          if ((uVar42 & 0xffffffff) < (uVar35 & 0xffffffff)) {
            lVar34 = uVar35 - uVar42;
            iVar28 = uVar26 - (int)pfVar37;
            iVar13 = uVar32 - (int)pfVar37;
            do {
              fVar3 = *(float *)((int)pfVar37 + iVar13);
              fVar4 = *(float *)((int)pfVar37 + iVar28) * fVar1 + *pfVar37 * fVar2;
              *pfVar37 = fVar4;
              *(float *)((int)pfVar37 + iVar13) = fVar4 + fVar3;
              pfVar37 = pfVar37 + 1;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        puVar19[8] = pfVar37;
        lVar41 = lVar41 + -1;
        puVar19 = puVar19 + 1;
      } while (lVar41 != 0);
      if (bVar14) {
        puVar20 = (uint *)(iVar18 + 0x104);
        lVar41 = 4;
        uVar35 = ((ulonglong)*(uint *)(iVar18 + 0x10) & 0x1fffffff) * 8;
        do {
          uVar23 = (ulonglong)*puVar20;
          uVar42 = puVar20[4] + uVar35;
          if (uVar23 <= (uVar42 & 0xffffffff)) {
            uVar42 = (ulonglong)puVar20[-4];
          }
          uVar24 = uVar35;
          if (0x3ff < uVar35) {
            uVar24 = 0x400;
          }
          uVar31 = uVar23 - uVar42;
          if (uVar24 <= (uVar23 - uVar42 & 0xffffffff)) {
            uVar31 = uVar24;
          }
          lVar34 = 0;
          if ((uVar31 & 0xffffffff) != 0) {
            lVar25 = ((uVar31 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar34 + uVar42);
              lVar34 = lVar34 + 0x80;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
          if ((uVar31 & 0xffffffff) < uVar24) {
            uVar36 = uVar23 - puVar20[-4];
            if ((uVar24 - uVar31 & 0xffffffff) <= (uVar23 - puVar20[-4] & 0xffffffff)) {
              uVar36 = uVar24 - uVar31;
            }
            lVar34 = 0;
            if ((uVar36 & 0xffffffff) != 0) {
              lVar25 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar34 + uVar42);
                lVar34 = lVar34 + 0x80;
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
          }
          lVar41 = lVar41 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar41 != 0);
      }
      pfVar37 = *(float **)(iVar18 + 0x114);
      pfVar33 = *(float **)(iVar18 + 0x104);
      uVar35 = (ulonglong)((uint)((int)pfVar33 - (int)pfVar37 >> 2) >> 1);
      uVar42 = uVar21;
      if ((uVar35 < (uVar21 & 0xffffffff)) && (uVar42 = uVar35, uVar35 != (uVar21 & 0xffffffff))) {
        uVar42 = 0;
        if ((uVar21 & 0xffffffff) != 0) {
          lVar41 = uVar40 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar28 = (int)lVar41;
                fVar2 = *(float *)(iVar28 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar28 + 4);
                fVar4 = *(float *)(iVar28 + 0xc);
                fVar5 = *(float *)(iVar28 + 0x10);
                fVar6 = pfVar37[7];
                fVar7 = *pfVar37;
                fVar8 = pfVar37[4];
                fVar9 = pfVar37[6];
                fVar1 = (float)((double)(fVar2 - pfVar37[3]) * dVar45 + (double)pfVar37[2]);
                *pfVar37 = fVar3;
                pfVar37[2] = fVar2;
                pfVar37[4] = fVar4;
                pfVar37[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar37[1]) * dVar45 + (double)fVar7);
                pfVar37[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar37[5]) * dVar45 + (double)fVar8);
                *(float *)(iVar28 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
                *(float *)(iVar28 + 8) = fVar1;
                pfVar37[6] = fVar5;
                pfVar37[5] = fVar3;
                *(float *)(iVar28 + 0xc) = fVar3;
                pfVar37[7] = fVar2;
                pfVar37 = pfVar37 + 8;
                *(float *)(iVar28 + 0x10) = fVar2;
                lVar41 = lVar41 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar41 + 4);
                fVar2 = *pfVar37;
                *pfVar37 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar37[1]) * dVar45 + (double)fVar2);
                pfVar37[1] = fVar1;
                lVar41 = lVar41 + 4;
                *(float *)lVar41 = fVar1;
                pfVar37 = pfVar37 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar33 <= pfVar37) {
              pfVar37 = *(float **)(iVar18 + 0xf4);
            }
            uVar42 = uVar42 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar33 - (int)pfVar37 >> 2) >> 1);
            if ((uVar21 - uVar42 & 0xffffffff) <= uVar35) {
              uVar35 = uVar21 - uVar42;
            }
          } while ((uVar42 & 0xffffffff) < (uVar21 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar40;
        if (3 < (int)uVar42) {
          do {
            pfVar33 = (float *)uVar35;
            fVar2 = pfVar33[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar33;
            fVar4 = pfVar33[2];
            fVar5 = pfVar33[3];
            fVar6 = pfVar37[7];
            fVar7 = *pfVar37;
            fVar8 = pfVar37[4];
            fVar9 = pfVar37[6];
            fVar1 = (float)((double)(fVar2 - pfVar37[3]) * dVar45 + (double)pfVar37[2]);
            *pfVar37 = fVar3;
            pfVar37[2] = fVar2;
            pfVar37[4] = fVar4;
            pfVar37[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar37[1]) * dVar45 + (double)fVar7);
            pfVar37[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar37[5]) * dVar45 + (double)fVar8);
            *pfVar33 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
            pfVar33[1] = fVar1;
            pfVar37[6] = fVar5;
            pfVar37[5] = fVar3;
            pfVar33[2] = fVar3;
            pfVar37[7] = fVar2;
            pfVar37 = pfVar37 + 8;
            pfVar33[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar42 & 0xffffffff)) {
          lVar34 = uVar42 - uVar23;
          lVar41 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar41 + 4);
            fVar2 = *pfVar37;
            *pfVar37 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar37[1]) * dVar45 + (double)fVar2);
            pfVar37[1] = fVar1;
            lVar41 = lVar41 + 4;
            *(float *)lVar41 = fVar1;
            pfVar37 = pfVar37 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar18 + 0x114) = pfVar37;
      pfVar37 = *(float **)(iVar18 + 0x108);
      pfVar33 = *(float **)(iVar18 + 0x118);
      uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar33 >> 2) >> 1);
      uVar42 = uVar21;
      if ((uVar35 < (uVar21 & 0xffffffff)) && (uVar42 = uVar35, uVar35 != (uVar21 & 0xffffffff))) {
        uVar42 = 0;
        if ((uVar21 & 0xffffffff) != 0) {
          lVar41 = uVar40 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar28 = (int)lVar41;
                fVar2 = *(float *)(iVar28 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar28 + 4);
                fVar4 = *(float *)(iVar28 + 0xc);
                fVar5 = *(float *)(iVar28 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar45 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar45 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar45 + (double)fVar8);
                *(float *)(iVar28 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
                *(float *)(iVar28 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar28 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar28 + 0x10) = fVar2;
                lVar41 = lVar41 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar41 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar45 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar41 = lVar41 + 4;
                *(float *)lVar41 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar37 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0xf8);
            }
            uVar42 = uVar42 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar33 >> 2) >> 1);
            if ((uVar21 - uVar42 & 0xffffffff) <= uVar35) {
              uVar35 = uVar21 - uVar42;
            }
          } while ((uVar42 & 0xffffffff) < (uVar21 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar40;
        if (3 < (int)uVar42) {
          do {
            pfVar37 = (float *)uVar35;
            fVar2 = pfVar37[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar37;
            fVar4 = pfVar37[2];
            fVar5 = pfVar37[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar45 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar45 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar45 + (double)fVar8);
            *pfVar37 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
            pfVar37[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar37[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar37[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar42 & 0xffffffff)) {
          lVar34 = uVar42 - uVar23;
          lVar41 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar41 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar45 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar41 = lVar41 + 4;
            *(float *)lVar41 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar18 + 0x118) = pfVar33;
      pfVar37 = *(float **)(iVar18 + 0x10c);
      pfVar33 = *(float **)(iVar18 + 0x11c);
      uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar33 >> 2) >> 1);
      uVar42 = uVar21;
      if ((uVar35 < (uVar21 & 0xffffffff)) && (uVar42 = uVar35, uVar35 != (uVar21 & 0xffffffff))) {
        uVar42 = 0;
        if ((uVar21 & 0xffffffff) != 0) {
          lVar41 = uVar40 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar28 = (int)lVar41;
                fVar2 = *(float *)(iVar28 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar28 + 4);
                fVar4 = *(float *)(iVar28 + 0xc);
                fVar5 = *(float *)(iVar28 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar45 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar45 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar45 + (double)fVar8);
                *(float *)(iVar28 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
                *(float *)(iVar28 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar28 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar28 + 0x10) = fVar2;
                lVar41 = lVar41 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar41 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar45 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar41 = lVar41 + 4;
                *(float *)lVar41 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar37 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0xfc);
            }
            uVar42 = uVar42 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar33 >> 2) >> 1);
            if ((uVar21 - uVar42 & 0xffffffff) <= uVar35) {
              uVar35 = uVar21 - uVar42;
            }
          } while ((uVar42 & 0xffffffff) < (uVar21 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar40;
        if (3 < (int)uVar42) {
          do {
            pfVar37 = (float *)uVar35;
            fVar2 = pfVar37[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar37;
            fVar4 = pfVar37[2];
            fVar5 = pfVar37[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar45 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar45 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar45 + (double)fVar8);
            *pfVar37 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
            pfVar37[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar37[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar37[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar42 & 0xffffffff)) {
          lVar34 = uVar42 - uVar23;
          lVar41 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar41 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar45 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar41 = lVar41 + 4;
            *(float *)lVar41 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar18 + 0x11c) = pfVar33;
      pfVar37 = *(float **)(iVar18 + 0x110);
      pfVar33 = *(float **)(iVar18 + 0x120);
      uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar33 >> 2) >> 1);
      uVar42 = uVar21;
      if ((uVar35 < (uVar21 & 0xffffffff)) && (uVar42 = uVar35, uVar35 != (uVar21 & 0xffffffff))) {
        uVar42 = 0;
        if ((uVar21 & 0xffffffff) != 0) {
          lVar41 = uVar40 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar28 = (int)lVar41;
                fVar2 = *(float *)(iVar28 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar28 + 4);
                fVar4 = *(float *)(iVar28 + 0xc);
                fVar5 = *(float *)(iVar28 + 0x10);
                fVar6 = pfVar33[7];
                fVar7 = *pfVar33;
                fVar8 = pfVar33[4];
                fVar9 = pfVar33[6];
                fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar45 + (double)pfVar33[2]);
                *pfVar33 = fVar3;
                pfVar33[2] = fVar2;
                pfVar33[4] = fVar4;
                pfVar33[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar45 + (double)fVar7);
                pfVar33[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar45 + (double)fVar8);
                *(float *)(iVar28 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
                *(float *)(iVar28 + 8) = fVar1;
                pfVar33[6] = fVar5;
                pfVar33[5] = fVar3;
                *(float *)(iVar28 + 0xc) = fVar3;
                pfVar33[7] = fVar2;
                pfVar33 = pfVar33 + 8;
                *(float *)(iVar28 + 0x10) = fVar2;
                lVar41 = lVar41 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar41 + 4);
                fVar2 = *pfVar33;
                *pfVar33 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar45 + (double)fVar2);
                pfVar33[1] = fVar1;
                lVar41 = lVar41 + 4;
                *(float *)lVar41 = fVar1;
                pfVar33 = pfVar33 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar37 <= pfVar33) {
              pfVar33 = *(float **)(iVar18 + 0x100);
            }
            uVar42 = uVar42 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar33 >> 2) >> 1);
            if ((uVar21 - uVar42 & 0xffffffff) <= uVar35) {
              uVar35 = uVar21 - uVar42;
            }
          } while ((uVar42 & 0xffffffff) < (uVar21 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar40;
        if (3 < (int)uVar42) {
          do {
            pfVar37 = (float *)uVar35;
            fVar2 = pfVar37[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar37;
            fVar4 = pfVar37[2];
            fVar5 = pfVar37[3];
            fVar6 = pfVar33[7];
            fVar7 = *pfVar33;
            fVar8 = pfVar33[4];
            fVar9 = pfVar33[6];
            fVar1 = (float)((double)(fVar2 - pfVar33[3]) * dVar45 + (double)pfVar33[2]);
            *pfVar33 = fVar3;
            pfVar33[2] = fVar2;
            pfVar33[4] = fVar4;
            pfVar33[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar33[1]) * dVar45 + (double)fVar7);
            pfVar33[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar33[5]) * dVar45 + (double)fVar8);
            *pfVar37 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar45 + (double)fVar9);
            pfVar37[1] = fVar1;
            pfVar33[6] = fVar5;
            pfVar33[5] = fVar3;
            pfVar37[2] = fVar3;
            pfVar33[7] = fVar2;
            pfVar33 = pfVar33 + 8;
            pfVar37[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar42 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar42 & 0xffffffff)) {
          lVar34 = uVar42 - uVar23;
          lVar41 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar41 + 4);
            fVar2 = *pfVar33;
            *pfVar33 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar33[1]) * dVar45 + (double)fVar2);
            pfVar33[1] = fVar1;
            lVar41 = lVar41 + 4;
            *(float *)lVar41 = fVar1;
            pfVar33 = pfVar33 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar18 + 0x120) = pfVar33;
      if (*(uint *)(iVar18 + 0x198) < *(uint *)(iVar18 + 0x19c)) {
        *(float *)(iVar18 + 0x194) = *(float *)(iVar18 + 0x18c) + *(float *)(iVar18 + 0x194);
        *(uint *)(iVar18 + 0x198) = *(uint *)(iVar18 + 0x198) + 1;
      }
      else {
        *(undefined4 *)(iVar18 + 0x194) = *(undefined4 *)(iVar18 + 400);
      }
      dVar46 = (double)*(float *)(iVar18 + 0x194);
      in_register_000103f0 = in_register_000103a0;
      if (dVar46 != (double)*(float *)(iVar18 + 0x154)) {
        fn_82FC8FD0(dVar46,iVar18 + 0x124);
        *(float *)(iVar18 + 0x154) = (float)dVar46;
      }
      uVar35 = lVar38 + uVar40;
      fVar1 = *(float *)(iVar18 + 0x128);
      fVar2 = *(float *)(iVar18 + 300);
      fVar3 = *(float *)(iVar18 + 0x130);
      if (uVar40 < (uVar35 & 0xffffffff)) {
        uVar26 = ((int)uVar35 - uVar11) + 3;
        uVar42 = uVar40;
        if (3 < (int)(((int)uVar26 >> 2) + (uint)((int)uVar26 < 0 && (uVar26 & 3) != 0))) {
          do {
            pfVar37 = (float *)uVar42;
            fVar1 = fVar2 * *pfVar37 + fVar3 * fVar1;
            *pfVar37 = fVar1;
            fVar1 = pfVar37[1] * fVar2 + fVar1 * fVar3;
            pfVar37[1] = fVar1;
            fVar1 = pfVar37[2] * fVar2 + fVar1 * fVar3;
            pfVar37[2] = fVar1;
            fVar1 = pfVar37[3] * fVar2 + fVar1 * fVar3;
            pfVar37[3] = fVar1;
            uVar42 = uVar42 + 0x10;
          } while ((int)uVar42 < (int)uVar35 + -0xc);
        }
        if ((uVar42 & 0xffffffff) < (uVar35 & 0xffffffff)) {
          lVar38 = uVar42 - 4;
          lVar41 = (((uVar35 - uVar42) - 1 & 0xffffffff) >> 2) + 1;
          do {
            fVar1 = *(float *)((int)lVar38 + 4) * fVar2 + fVar3 * fVar1;
            lVar38 = lVar38 + 4;
            *(float *)lVar38 = fVar1;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
        }
      }
      *(float *)(iVar18 + 0x128) = fVar1;
      if (*(uint *)(iVar18 + 0x168) < *(uint *)(iVar18 + 0x16c)) {
        *(float *)(iVar18 + 0x164) = *(float *)(iVar18 + 0x15c) + *(float *)(iVar18 + 0x164);
        *(uint *)(iVar18 + 0x168) = *(uint *)(iVar18 + 0x168) + 1;
      }
      else {
        *(undefined4 *)(iVar18 + 0x164) = *(undefined4 *)(iVar18 + 0x160);
      }
      fVar1 = *(float *)(iVar18 + 0x164);
      if (*(uint *)(iVar18 + 0x180) < *(uint *)(iVar18 + 0x184)) {
        *(float *)(iVar18 + 0x17c) = *(float *)(iVar18 + 0x174) + *(float *)(iVar18 + 0x17c);
        *(uint *)(iVar18 + 0x180) = *(uint *)(iVar18 + 0x180) + 1;
      }
      else {
        *(undefined4 *)(iVar18 + 0x17c) = *(undefined4 *)(iVar18 + 0x178);
      }
      fVar2 = *(float *)(iVar18 + 0x17c);
      uVar21 = uVar21 + uVar30 * -4;
      altv300_21(in_vs32,in_vs41);
      uVar35 = uVar40;
      for (; uVar30 != 0; uVar30 = uVar30 - 1) {
        altv207_13(in_vs32,in_vs43);
        uVar35 = uVar35 + 0x10;
        pfVar37 = (float *)((int)in_r0 + (int)pfStack_c8 & 0xfffffff0);
        *pfVar37 = in_register_00010390 * in_register_000103f0;
        pfVar37[1] = in_register_00010394 * in_register_000103f0;
        pfVar37[2] = in_register_00010398 * in_register_000103f0;
        pfVar37[3] = in_vr57 * in_register_000103f0;
        pfStack_c8 = pfStack_c8 + 4;
        pfVar37 = (float *)((int)in_r0 + (int)pfStack_cc & 0xfffffff0);
        *pfVar37 = in_register_00010390 * in_register_000103f0;
        pfVar37[1] = in_register_00010394 * in_register_000103f0;
        pfVar37[2] = in_register_00010398 * in_register_000103f0;
        pfVar37[3] = in_vr57 * in_register_000103f0;
        pfStack_cc = pfStack_cc + 4;
      }
      if ((uVar21 & 0xffffffff) != 0) {
        lVar38 = uVar35 - 4;
        do {
          lVar38 = lVar38 + 4;
          fVar3 = *(float *)lVar38 * (float)((double)fVar2 * dVar44) * fVar1;
          *pfStack_c8 = fVar3;
          *pfStack_cc = fVar3;
          pfStack_c8 = pfStack_c8 + 1;
          pfStack_cc = pfStack_cc + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      in_register_000103f4 = in_register_000103f0;
      in_register_000103f8 = in_register_000103f0;
      in_vr63 = in_register_000103f0;
      in_register_000103a0 = in_register_000103f0;
    } while ((uVar22 & 0xffffffff) != 0);
  }
  fVar1 = lbl_8217BA98;
  *(float *)(iVar18 + 0x128) = (*(float *)(iVar18 + 0x128) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar18 + 0x13c) = (*(float *)(iVar18 + 0x13c) + fVar1) - fVar1;
  *(short *)((int)param_2 + 0xe) = (short)uVar17;
  *(bool *)(iVar18 + 0x1a8) = uVar12 == 0x11;
  fn_82F6A594();
  return;
}

