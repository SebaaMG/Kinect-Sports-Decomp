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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_82FC8FD0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8216E404;
extern unsigned int lbl_8216E450;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642C0;
extern unsigned int uStack_e8;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82FD5620(undefined8 param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  bool bVar13;
  float fVar14;
  undefined8 in_r0;
  int iVar16;
  ulonglong uVar15;
  undefined4 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar24;
  longlong lVar23;
  float *pfVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar29;
  float *pfVar30;
  ulonglong uVar28;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  float *pfVar35;
  ulonglong uVar34;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs51 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float in_register_00010370;
  float in_register_00010374;
  float in_register_00010378;
  float in_vr55;
  float in_register_00010380;
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
  float *pfStack_ec;
  uint uStack_e8;
  
  iVar16 = fn_82F6A540();
  pfStack_ec = (float *)*param_2;
  uVar7 = *(uint *)(iVar16 + 0x144);
  uVar37 = (ulonglong)uVar7;
  uVar36 = (ulonglong)*(ushort *)(param_2 + 3) * 4 + ZEXT48(pfStack_ec);
  uVar8 = *(uint *)(iVar16 + 0x148);
  uVar38 = (ulonglong)uVar8;
  lVar39 = 8;
  puVar18 = (uint *)(iVar16 + 0x5c);
  uVar15 = ((ulonglong)*(uint *)(iVar16 + 0xc) & 0x3fffffff) << 2;
  uStack_e8 = (uint)uVar36;
  do {
    uVar19 = (ulonglong)*puVar18;
    uVar20 = uVar15;
    if (0x3ff < uVar15) {
      uVar20 = 0x400;
    }
    uVar27 = puVar18[-8] - uVar19;
    if (uVar20 <= (uVar27 & 0xffffffff)) {
      uVar27 = uVar20;
    }
    lVar31 = 0;
    if ((uVar27 & 0xffffffff) != 0) {
      lVar22 = ((uVar27 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar31 + uVar19);
        lVar31 = lVar31 + 0x80;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if ((uVar27 & 0xffffffff) < uVar20) {
      uVar32 = (ulonglong)puVar18[-8] - (ulonglong)puVar18[-0x10];
      if ((uVar20 - uVar27 & 0xffffffff) <= (uVar32 & 0xffffffff)) {
        uVar32 = uVar20 - uVar27;
      }
      lVar31 = 0;
      if ((uVar32 & 0xffffffff) != 0) {
        lVar22 = ((uVar32 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar31 + uVar19);
          lVar31 = lVar31 + 0x80;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
    }
    lVar39 = lVar39 + -1;
    puVar18 = puVar18 + 1;
  } while (lVar39 != 0);
  uVar15 = ((ulonglong)*(uint *)(iVar16 + 0xc) & 0x1fffffff) << 3;
  puVar18 = (uint *)(iVar16 + 0x114);
  lVar39 = 4;
  do {
    uVar19 = (ulonglong)*puVar18;
    uVar20 = uVar15;
    if (0x3ff < uVar15) {
      uVar20 = 0x400;
    }
    uVar27 = puVar18[-4] - uVar19;
    if (uVar20 <= (uVar27 & 0xffffffff)) {
      uVar27 = uVar20;
    }
    lVar31 = 0;
    if ((uVar27 & 0xffffffff) != 0) {
      lVar22 = ((uVar27 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar31 + uVar19);
        lVar31 = lVar31 + 0x80;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if ((uVar27 & 0xffffffff) < uVar20) {
      uVar32 = (ulonglong)puVar18[-4] - (ulonglong)puVar18[-8];
      if ((uVar20 - uVar27 & 0xffffffff) <= (uVar32 & 0xffffffff)) {
        uVar32 = uVar20 - uVar27;
      }
      lVar31 = 0;
      if ((uVar32 & 0xffffffff) != 0) {
        lVar22 = ((uVar32 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar31 + uVar19);
          lVar31 = lVar31 + 0x80;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
    }
    lVar39 = lVar39 + -1;
    puVar18 = puVar18 + 1;
  } while (lVar39 != 0);
  fVar1 = *(float *)(iVar16 + 0x158);
  fVar47 = *(float *)(*(int *)(iVar16 + 8) + 0x10);
  *(undefined4 *)(iVar16 + 0x168) = 0;
  fVar49 = lbl_821AAD20;
  fVar48 = fVar47 - *(float *)(iVar16 + 0x164);
  *(float *)(iVar16 + 0x160) = fVar47;
  *(int *)(iVar16 + 0x16c) = (int)(longlong)(ABS(fVar48) / fVar1);
  if (fVar48 <= fVar49) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar16 + 0x15c) = fVar1;
  fVar1 = *(float *)(*(int *)(iVar16 + 8) + 4);
  fVar48 = fVar1 - *(float *)(iVar16 + 0x17c);
  fVar47 = *(float *)(iVar16 + 0x170);
  *(float *)(iVar16 + 0x178) = fVar1;
  *(undefined4 *)(iVar16 + 0x180) = 0;
  *(int *)(iVar16 + 0x184) = (int)(longlong)(ABS(fVar48) / fVar47);
  if (fVar48 <= fVar49) {
    fVar47 = -fVar47;
  }
  *(float *)(iVar16 + 0x174) = fVar47;
  fVar1 = *(float *)(iVar16 + 0x188);
  fVar47 = *(float *)(*(int *)(iVar16 + 8) + 0xc);
  *(undefined4 *)(iVar16 + 0x198) = 0;
  fVar48 = fVar47 - *(float *)(iVar16 + 0x194);
  *(float *)(iVar16 + 400) = fVar47;
  *(int *)(iVar16 + 0x19c) = (int)(longlong)(ABS(fVar48) / fVar1);
  if (fVar48 <= fVar49) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar16 + 0x18c) = fVar1;
  iVar9 = param_2[2];
  uVar15 = (ulonglong)*(ushort *)((int)param_2 + 0xe);
  if (iVar9 == 0x11) {
    fVar1 = *(float *)(*(int *)(iVar16 + 8) + 8);
    if ((fVar1 != *(float *)(iVar16 + 0x1a4)) || (*(char *)(iVar16 + 0x1a8) == '\0')) {
      *(float *)(iVar16 + 0x1a4) = fVar1;
      *(int *)(iVar16 + 0x1a0) = (int)(longlong)((float)*(uint *)(iVar16 + 0x14c) * fVar1);
    }
    uVar20 = (ulonglong)*(uint *)(iVar16 + 0x1a0);
    if ((*(ushort *)(param_2 + 3) - uVar15 & 0xffffffff) <= (ulonglong)*(uint *)(iVar16 + 0x1a0)) {
      uVar20 = *(ushort *)(param_2 + 3) - uVar15;
    }
    lVar39 = (uVar20 & 0x3fffffff) << 2;
    fn_82A1EFC0(uVar15 * 4 + ZEXT48(pfStack_ec),0,lVar39);
    fn_82A1EFC0(uVar15 * 4 + uVar36,0,lVar39);
    uVar15 = uVar20 + uVar15;
    lVar39 = *(uint *)(iVar16 + 0x1a0) - uVar20;
    *(int *)(iVar16 + 0x1a0) = (int)lVar39;
    if (lVar39 != 0) {
      param_2[2] = 0x2d;
    }
  }
  if ((uVar15 & 0xffffffff) != 0) {
    dVar44 = (double)lbl_8216E404;
    dVar42 = (double)lbl_82002AE0;
    dVar43 = (double)lbl_82005748;
    dVar45 = (double)lbl_82057B54;
    dVar41 = (double)lbl_8216E450;
    uVar20 = uVar15;
    do {
      uVar19 = uVar20;
      if (0x1f < (uVar20 & 0xffffffff)) {
        uVar19 = 0x20;
      }
      uVar27 = (uVar19 & 0xffffffff) >> 2;
      altv207_13(in_vs32,in_vs51);
      pfVar35 = (float *)((uint)(&lbl_832642C0 + (int)in_r0) & 0xfffffff0);
      *pfVar35 = in_register_000103f0;
      pfVar35[1] = in_register_000103f4;
      pfVar35[2] = in_register_000103f8;
      pfVar35[3] = in_vr63;
      uVar20 = uVar20 - uVar19;
      uVar21 = uVar19 - (uVar19 & 0xfffffffc);
      uVar24 = uVar7;
      uVar32 = uVar37;
      uVar33 = uVar36;
      pfVar35 = pfStack_ec;
      for (uVar40 = uVar27; uVar40 != 0; uVar40 = uVar40 - 1) {
        altv207_13(in_vs32,in_vs42);
        pfVar35 = pfVar35 + 4;
        altv207_13(in_vs32,in_vs43);
        uVar33 = uVar33 + 0x10;
        pfVar30 = (float *)((int)in_r0 + (int)uVar32 & 0xfffffff0);
        *pfVar30 = (in_register_000103d0 + in_register_000103e0) * in_register_000103f0;
        pfVar30[1] = (in_register_000103d4 + in_register_000103e4) * in_register_000103f4;
        pfVar30[2] = (in_register_000103d8 + in_register_000103e8) * in_register_000103f8;
        pfVar30[3] = (in_vr61 + in_vr62) * in_vr63;
        uVar32 = uVar32 + 0x10;
        uVar24 = (uint)uVar32;
      }
      if ((uVar21 & 0xffffffff) != 0) {
        iVar26 = (int)uVar33;
        do {
          pfVar30 = (float *)uVar33;
          *(float *)((int)pfVar30 + (uVar24 - iVar26)) =
               (float)((double)(*(float *)((int)pfVar30 + ((int)pfVar35 - iVar26)) + *pfVar30) *
                      dVar41);
          uVar33 = uVar33 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      lVar39 = (uVar19 & 0x3fffffff) * 4;
      fVar1 = *(float *)(iVar16 + 0x138);
      fVar47 = *(float *)(iVar16 + 0x13c);
      uVar32 = lVar39 + uVar37;
      fVar48 = *(float *)(iVar16 + 0x140);
      if (uVar37 < (uVar32 & 0xffffffff)) {
        uVar24 = ((int)uVar32 - uVar7) + 3;
        uVar40 = uVar37;
        if (3 < (int)(((int)uVar24 >> 2) + (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0))) {
          do {
            pfVar35 = (float *)uVar40;
            fVar49 = *pfVar35;
            fVar4 = fVar49 - fVar1;
            fVar2 = pfVar35[1];
            fVar3 = pfVar35[2];
            fVar1 = pfVar35[3];
            fVar4 = fVar48 * fVar47 + fVar4;
            *pfVar35 = fVar4;
            fVar47 = fVar48 * fVar4 + (fVar2 - fVar49);
            pfVar35[1] = fVar47;
            fVar47 = fVar48 * fVar47 + (fVar3 - fVar2);
            pfVar35[2] = fVar47;
            fVar47 = fVar48 * fVar47 + (fVar1 - fVar3);
            pfVar35[3] = fVar47;
            uVar40 = uVar40 + 0x10;
          } while ((int)uVar40 < (int)uVar32 + -0xc);
        }
        if ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff)) {
          lVar31 = uVar40 - 4;
          lVar22 = (((uVar32 - uVar40) - 1 & 0xffffffff) >> 2) + 1;
          fVar49 = fVar1;
          do {
            fVar1 = *(float *)((int)lVar31 + 4);
            fVar47 = fVar48 * fVar47 + (fVar1 - fVar49);
            lVar31 = lVar31 + 4;
            *(float *)lVar31 = fVar47;
            lVar22 = lVar22 + -1;
            fVar49 = fVar1;
          } while (lVar22 != 0);
        }
      }
      *(float *)(iVar16 + 0x138) = fVar1;
      *(float *)(iVar16 + 0x13c) = fVar47;
      bVar13 = (int)uVar20 != 0;
      if (bVar13) {
        puVar18 = (uint *)(iVar16 + 0x3c);
        lVar31 = 8;
        uVar32 = ((ulonglong)*(uint *)(iVar16 + 0x10) & 0x3fffffff) * 4;
        do {
          uVar33 = (ulonglong)*puVar18;
          uVar40 = puVar18[8] + uVar32;
          if (uVar33 <= (uVar40 & 0xffffffff)) {
            uVar40 = (ulonglong)puVar18[-8];
          }
          uVar21 = uVar32;
          if (0x3ff < uVar32) {
            uVar21 = 0x400;
          }
          uVar28 = uVar33 - uVar40;
          if (uVar21 <= (uVar33 - uVar40 & 0xffffffff)) {
            uVar28 = uVar21;
          }
          lVar22 = 0;
          if ((uVar28 & 0xffffffff) != 0) {
            lVar23 = ((uVar28 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar22 + uVar40);
              lVar22 = lVar22 + 0x80;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if ((uVar28 & 0xffffffff) < uVar21) {
            uVar34 = uVar33 - puVar18[-8];
            if ((uVar21 - uVar28 & 0xffffffff) <= (uVar33 - puVar18[-8] & 0xffffffff)) {
              uVar34 = uVar21 - uVar28;
            }
            lVar22 = 0;
            if ((uVar34 & 0xffffffff) != 0) {
              lVar23 = ((uVar34 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar22 + uVar40);
                lVar22 = lVar22 + 0x80;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          lVar31 = lVar31 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar31 != 0);
      }
      pfVar35 = *(float **)(iVar16 + 0x5c);
      pfVar30 = *(float **)(iVar16 + 0x3c);
      fVar1 = *(float *)(iVar16 + 0x9c);
      fVar47 = *(float *)(iVar16 + 0xbc);
      uVar24 = (int)pfVar30 - (int)pfVar35 >> 2;
      uVar40 = (ulonglong)(int)uVar24;
      uVar32 = uVar19;
      if (((ulonglong)uVar24 < (uVar19 & 0xffffffff)) &&
         (uVar32 = uVar40, (ulonglong)uVar24 != (uVar19 & 0xffffffff))) {
        uVar21 = 0;
        uVar32 = uVar37;
        uVar33 = uVar38;
        if (3 < (int)uVar24) {
          do {
            pfVar11 = (float *)uVar33;
            pfVar25 = (float *)uVar32;
            fVar48 = pfVar25[2];
            fVar49 = pfVar25[3];
            fVar2 = pfVar35[2];
            uVar21 = uVar21 + 4;
            fVar3 = pfVar35[3];
            uVar32 = uVar32 + 0x10;
            fVar4 = *(float *)((int)pfVar11 + (uVar7 - uVar8) + 4);
            fVar5 = fVar1 * *pfVar25 + *pfVar35 * fVar47;
            *pfVar35 = fVar5;
            fVar4 = fVar4 * fVar1 + pfVar35[1] * fVar47;
            *pfVar11 = fVar5;
            fVar2 = fVar2 * fVar47 + fVar48 * fVar1;
            pfVar35[1] = fVar4;
            fVar48 = fVar3 * fVar47 + fVar49 * fVar1;
            pfVar11[1] = fVar4;
            pfVar35[2] = fVar2;
            pfVar11[2] = fVar2;
            pfVar35[3] = fVar48;
            pfVar35 = pfVar35 + 4;
            pfVar11[3] = fVar48;
            uVar33 = uVar33 + 0x10;
          } while ((uVar21 & 0xffffffff) < (uVar40 - 3 & 0xffffffff));
        }
        if ((uVar21 & 0xffffffff) < (ulonglong)uVar24) {
          lVar31 = uVar40 - uVar21;
          do {
            pfVar25 = (float *)uVar32;
            uVar32 = uVar32 + 4;
            fVar48 = fVar1 * *pfVar25 + *pfVar35 * fVar47;
            *pfVar35 = fVar48;
            *(float *)uVar33 = fVar48;
            uVar33 = uVar33 + 4;
            pfVar35 = pfVar35 + 1;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        iVar26 = (int)uVar32;
        if (pfVar30 <= pfVar35) {
          pfVar35 = *(float **)(iVar16 + 0x1c);
        }
        uVar24 = (int)pfVar30 - (int)pfVar35 >> 2;
        uVar21 = (longlong)(int)uVar24;
        if ((uVar19 - uVar40 & 0xffffffff) <= (ulonglong)uVar24) {
          uVar21 = uVar19 - uVar40;
        }
        uVar40 = 0;
        if (3 < (int)uVar21) {
          do {
            uVar40 = uVar40 + 4;
            pfVar30 = (float *)uVar32;
            fVar48 = pfVar30[1];
            fVar49 = pfVar30[2];
            fVar2 = pfVar30[3];
            fVar3 = pfVar35[2];
            uVar32 = uVar32 + 0x10;
            iVar26 = (int)uVar32;
            fVar4 = pfVar35[3];
            fVar5 = fVar1 * *pfVar30 + *pfVar35 * fVar47;
            *pfVar35 = fVar5;
            fVar6 = pfVar35[1] * fVar47 + fVar48 * fVar1;
            pfVar30 = (float *)uVar33;
            *pfVar30 = fVar5;
            fVar49 = fVar3 * fVar47 + fVar49 * fVar1;
            pfVar35[1] = fVar6;
            fVar48 = fVar4 * fVar47 + fVar2 * fVar1;
            pfVar30[1] = fVar6;
            pfVar35[2] = fVar49;
            pfVar30[2] = fVar49;
            pfVar35[3] = fVar48;
            pfVar35 = pfVar35 + 4;
            pfVar30[3] = fVar48;
            uVar33 = uVar33 + 0x10;
          } while ((uVar40 & 0xffffffff) < (uVar21 - 3 & 0xffffffff));
        }
        if ((uVar40 & 0xffffffff) < (uVar21 & 0xffffffff)) {
          lVar31 = uVar21 - uVar40;
          iVar10 = (int)uVar33;
          do {
            fVar48 = *(float *)((iVar26 - iVar10) + (int)(float *)uVar33) * fVar1 +
                     *pfVar35 * fVar47;
            *pfVar35 = fVar48;
            *(float *)uVar33 = fVar48;
            uVar33 = uVar33 + 4;
            pfVar35 = pfVar35 + 1;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
      }
      else {
        uVar40 = 0;
        uVar24 = uVar7;
        uVar29 = uVar8;
        if (3 < (int)uVar32) {
          uVar33 = uVar37;
          uVar21 = uVar38;
          do {
            pfVar25 = (float *)uVar21;
            pfVar30 = (float *)uVar33;
            fVar48 = pfVar30[2];
            fVar49 = pfVar30[3];
            fVar2 = pfVar35[2];
            uVar40 = uVar40 + 4;
            fVar3 = pfVar35[3];
            uVar33 = uVar33 + 0x10;
            uVar24 = (uint)uVar33;
            fVar4 = *(float *)((int)pfVar25 + (uVar7 - uVar8) + 4);
            fVar5 = fVar1 * *pfVar30 + *pfVar35 * fVar47;
            *pfVar35 = fVar5;
            fVar4 = fVar4 * fVar1 + pfVar35[1] * fVar47;
            *pfVar25 = fVar5;
            fVar2 = fVar2 * fVar47 + fVar48 * fVar1;
            pfVar35[1] = fVar4;
            fVar48 = fVar3 * fVar47 + fVar49 * fVar1;
            pfVar25[1] = fVar4;
            pfVar35[2] = fVar2;
            pfVar25[2] = fVar2;
            pfVar35[3] = fVar48;
            pfVar35 = pfVar35 + 4;
            pfVar25[3] = fVar48;
            uVar21 = uVar21 + 0x10;
            uVar29 = (uint)uVar21;
          } while ((uVar40 & 0xffffffff) < (uVar32 - 3 & 0xffffffff));
        }
        if ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff)) {
          lVar31 = uVar32 - uVar40;
          iVar26 = uVar24 - (int)pfVar35;
          iVar10 = uVar29 - (int)pfVar35;
          do {
            fVar48 = *(float *)(iVar26 + (int)pfVar35) * fVar1 + *pfVar35 * fVar47;
            *pfVar35 = fVar48;
            *(float *)(iVar10 + (int)pfVar35) = fVar48;
            pfVar35 = pfVar35 + 1;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
      }
      *(float **)(iVar16 + 0x5c) = pfVar35;
      puVar17 = (undefined4 *)(iVar16 + 0x40);
      lVar31 = 7;
      do {
        pfVar35 = (float *)puVar17[8];
        fVar1 = (float)puVar17[0x18];
        pfVar30 = (float *)*puVar17;
        fVar47 = (float)puVar17[0x20];
        uVar24 = (int)pfVar30 - (int)pfVar35 >> 2;
        uVar40 = (ulonglong)(int)uVar24;
        uVar32 = uVar19;
        if (((ulonglong)uVar24 < (uVar19 & 0xffffffff)) &&
           (uVar32 = uVar40, (ulonglong)uVar24 != (uVar19 & 0xffffffff))) {
          uVar21 = 0;
          uVar32 = uVar37;
          uVar33 = uVar38;
          if (3 < (int)uVar24) {
            do {
              pfVar11 = (float *)uVar33;
              pfVar25 = (float *)uVar32;
              fVar48 = pfVar25[2];
              fVar49 = pfVar25[3];
              uVar21 = uVar21 + 4;
              uVar32 = uVar32 + 0x10;
              fVar2 = *pfVar11;
              fVar3 = pfVar11[1];
              fVar4 = pfVar11[2];
              fVar12 = *pfVar25 * fVar1 + *pfVar35 * fVar47;
              fVar5 = pfVar11[3];
              fVar6 = *(float *)((int)pfVar11 + (uVar7 - uVar8) + 4) * fVar1 + pfVar35[1] * fVar47;
              *pfVar35 = fVar12;
              fVar14 = pfVar35[2] * fVar47 + fVar48 * fVar1;
              pfVar35[1] = fVar6;
              fVar48 = pfVar35[3] * fVar47 + fVar49 * fVar1;
              pfVar35[2] = fVar14;
              pfVar35[3] = fVar48;
              pfVar35 = pfVar35 + 4;
              *pfVar11 = fVar2 + fVar12;
              pfVar11[1] = fVar3 + fVar6;
              pfVar11[2] = fVar4 + fVar14;
              pfVar11[3] = fVar5 + fVar48;
              uVar33 = uVar33 + 0x10;
            } while ((uVar21 & 0xffffffff) < (uVar40 - 3 & 0xffffffff));
            uVar36 = (ulonglong)uStack_e8;
          }
          if ((uVar21 & 0xffffffff) < (ulonglong)uVar24) {
            lVar22 = uVar40 - uVar21;
            do {
              pfVar25 = (float *)uVar32;
              fVar48 = *(float *)uVar33;
              uVar32 = uVar32 + 4;
              fVar49 = *pfVar25 * fVar1 + *pfVar35 * fVar47;
              *pfVar35 = fVar49;
              pfVar35 = pfVar35 + 1;
              *(float *)uVar33 = fVar48 + fVar49;
              uVar33 = uVar33 + 4;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          iVar26 = (int)uVar32;
          if (pfVar30 <= pfVar35) {
            pfVar35 = (float *)puVar17[-8];
          }
          uVar24 = (int)pfVar30 - (int)pfVar35 >> 2;
          uVar21 = (longlong)(int)uVar24;
          if ((uVar19 - uVar40 & 0xffffffff) <= (ulonglong)uVar24) {
            uVar21 = uVar19 - uVar40;
          }
          uVar40 = 0;
          if (3 < (int)uVar21) {
            do {
              uVar40 = uVar40 + 4;
              pfVar30 = (float *)uVar32;
              fVar48 = pfVar30[2];
              fVar49 = pfVar30[3];
              uVar32 = uVar32 + 0x10;
              iVar26 = (int)uVar32;
              pfVar25 = (float *)uVar33;
              fVar2 = *pfVar25;
              fVar3 = pfVar25[1];
              fVar4 = pfVar25[2];
              fVar6 = *pfVar30 * fVar1 + *pfVar35 * fVar47;
              fVar5 = pfVar25[3];
              fVar14 = pfVar35[1] * fVar47 + pfVar30[1] * fVar1;
              *pfVar35 = fVar6;
              fVar12 = pfVar35[2] * fVar47 + fVar48 * fVar1;
              pfVar35[1] = fVar14;
              fVar48 = pfVar35[3] * fVar47 + fVar49 * fVar1;
              pfVar35[2] = fVar12;
              pfVar35[3] = fVar48;
              pfVar35 = pfVar35 + 4;
              *pfVar25 = fVar2 + fVar6;
              pfVar25[1] = fVar3 + fVar14;
              pfVar25[2] = fVar4 + fVar12;
              pfVar25[3] = fVar5 + fVar48;
              uVar33 = uVar33 + 0x10;
            } while ((uVar40 & 0xffffffff) < (uVar21 - 3 & 0xffffffff));
          }
          if ((uVar40 & 0xffffffff) < (uVar21 & 0xffffffff)) {
            lVar22 = uVar21 - uVar40;
            iVar10 = (int)uVar33;
            do {
              pfVar30 = (float *)uVar33;
              fVar48 = *pfVar30;
              fVar49 = *(float *)((iVar26 - iVar10) + (int)pfVar30) * fVar1 + *pfVar35 * fVar47;
              *pfVar35 = fVar49;
              pfVar35 = pfVar35 + 1;
              *pfVar30 = fVar48 + fVar49;
              uVar33 = uVar33 + 4;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
        }
        else {
          uVar40 = 0;
          uVar24 = uVar7;
          uVar29 = uVar8;
          if (3 < (int)uVar32) {
            uVar33 = uVar37;
            uVar21 = uVar38;
            do {
              pfVar25 = (float *)uVar21;
              pfVar30 = (float *)uVar33;
              fVar48 = pfVar30[2];
              fVar49 = pfVar30[3];
              uVar40 = uVar40 + 4;
              uVar33 = uVar33 + 0x10;
              uVar24 = (uint)uVar33;
              fVar2 = *pfVar25;
              fVar3 = pfVar25[1];
              fVar4 = pfVar25[2];
              fVar12 = *pfVar30 * fVar1 + *pfVar35 * fVar47;
              fVar5 = pfVar25[3];
              fVar6 = *(float *)((int)pfVar25 + (uVar7 - uVar8) + 4) * fVar1 + pfVar35[1] * fVar47;
              *pfVar35 = fVar12;
              fVar14 = pfVar35[2] * fVar47 + fVar48 * fVar1;
              pfVar35[1] = fVar6;
              fVar48 = pfVar35[3] * fVar47 + fVar49 * fVar1;
              pfVar35[2] = fVar14;
              pfVar35[3] = fVar48;
              pfVar35 = pfVar35 + 4;
              *pfVar25 = fVar2 + fVar12;
              pfVar25[1] = fVar3 + fVar6;
              pfVar25[2] = fVar4 + fVar14;
              pfVar25[3] = fVar5 + fVar48;
              uVar21 = uVar21 + 0x10;
              uVar29 = (uint)uVar21;
            } while ((uVar40 & 0xffffffff) < (uVar32 - 3 & 0xffffffff));
          }
          if ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff)) {
            lVar22 = uVar32 - uVar40;
            iVar26 = uVar24 - (int)pfVar35;
            iVar10 = uVar29 - (int)pfVar35;
            do {
              fVar48 = *(float *)(iVar10 + (int)pfVar35);
              fVar49 = *(float *)(iVar26 + (int)pfVar35) * fVar1 + *pfVar35 * fVar47;
              *pfVar35 = fVar49;
              *(float *)(iVar10 + (int)pfVar35) = fVar49 + fVar48;
              pfVar35 = pfVar35 + 1;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
        }
        puVar17[8] = pfVar35;
        lVar31 = lVar31 + -1;
        puVar17 = puVar17 + 1;
      } while (lVar31 != 0);
      if (bVar13) {
        puVar18 = (uint *)(iVar16 + 0x104);
        lVar31 = 4;
        uVar32 = ((ulonglong)*(uint *)(iVar16 + 0x10) & 0x1fffffff) * 8;
        do {
          uVar33 = (ulonglong)*puVar18;
          uVar40 = puVar18[4] + uVar32;
          if (uVar33 <= (uVar40 & 0xffffffff)) {
            uVar40 = (ulonglong)puVar18[-4];
          }
          uVar21 = uVar32;
          if (0x3ff < uVar32) {
            uVar21 = 0x400;
          }
          uVar28 = uVar33 - uVar40;
          if (uVar21 <= (uVar33 - uVar40 & 0xffffffff)) {
            uVar28 = uVar21;
          }
          lVar22 = 0;
          if ((uVar28 & 0xffffffff) != 0) {
            lVar23 = ((uVar28 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar22 + uVar40);
              lVar22 = lVar22 + 0x80;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if ((uVar28 & 0xffffffff) < uVar21) {
            uVar34 = uVar33 - puVar18[-4];
            if ((uVar21 - uVar28 & 0xffffffff) <= (uVar33 - puVar18[-4] & 0xffffffff)) {
              uVar34 = uVar21 - uVar28;
            }
            lVar22 = 0;
            if ((uVar34 & 0xffffffff) != 0) {
              lVar23 = ((uVar34 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar22 + uVar40);
                lVar22 = lVar22 + 0x80;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          lVar31 = lVar31 + -1;
          puVar18 = puVar18 + 1;
        } while (lVar31 != 0);
      }
      pfVar35 = *(float **)(iVar16 + 0x114);
      pfVar30 = *(float **)(iVar16 + 0x104);
      uVar32 = (ulonglong)((uint)((int)pfVar30 - (int)pfVar35 >> 2) >> 1);
      uVar40 = uVar19;
      if ((uVar32 < (uVar19 & 0xffffffff)) && (uVar40 = uVar32, uVar32 != (uVar19 & 0xffffffff))) {
        uVar40 = 0;
        if ((uVar19 & 0xffffffff) != 0) {
          lVar31 = uVar38 - 4;
          do {
            uVar33 = 0;
            if (3 < (int)uVar32) {
              do {
                iVar26 = (int)lVar31;
                fVar47 = *(float *)(iVar26 + 8);
                uVar33 = uVar33 + 4;
                fVar48 = *(float *)(iVar26 + 4);
                fVar49 = *(float *)(iVar26 + 0xc);
                fVar2 = *(float *)(iVar26 + 0x10);
                fVar3 = pfVar35[7];
                fVar4 = *pfVar35;
                fVar5 = pfVar35[4];
                fVar6 = pfVar35[6];
                fVar1 = (float)((double)(fVar47 - pfVar35[3]) * dVar45 + (double)pfVar35[2]);
                *pfVar35 = fVar48;
                pfVar35[2] = fVar47;
                pfVar35[4] = fVar49;
                pfVar35[3] = fVar1;
                fVar47 = (float)((double)(fVar48 - pfVar35[1]) * dVar45 + (double)fVar4);
                pfVar35[1] = fVar47;
                fVar48 = (float)((double)(fVar49 - pfVar35[5]) * dVar45 + (double)fVar5);
                *(float *)(iVar26 + 4) = fVar47;
                fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
                *(float *)(iVar26 + 8) = fVar1;
                pfVar35[6] = fVar2;
                pfVar35[5] = fVar48;
                *(float *)(iVar26 + 0xc) = fVar48;
                pfVar35[7] = fVar47;
                pfVar35 = pfVar35 + 8;
                *(float *)(iVar26 + 0x10) = fVar47;
                lVar31 = lVar31 + 0x10;
              } while ((uVar33 & 0xffffffff) < (uVar32 - 3 & 0xffffffff));
            }
            if ((uVar33 & 0xffffffff) < (uVar32 & 0xffffffff)) {
              lVar22 = uVar32 - uVar33;
              do {
                fVar1 = *(float *)((int)lVar31 + 4);
                fVar47 = *pfVar35;
                *pfVar35 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar35[1]) * dVar45 + (double)fVar47);
                pfVar35[1] = fVar1;
                lVar31 = lVar31 + 4;
                *(float *)lVar31 = fVar1;
                pfVar35 = pfVar35 + 2;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            if (pfVar30 <= pfVar35) {
              pfVar35 = *(float **)(iVar16 + 0xf4);
            }
            uVar40 = uVar40 + uVar32;
            uVar32 = (ulonglong)((uint)((int)pfVar30 - (int)pfVar35 >> 2) >> 1);
            if ((uVar19 - uVar40 & 0xffffffff) <= uVar32) {
              uVar32 = uVar19 - uVar40;
            }
          } while ((uVar40 & 0xffffffff) < (uVar19 & 0xffffffff));
        }
      }
      else {
        uVar33 = 0;
        uVar32 = uVar38;
        if (3 < (int)uVar40) {
          do {
            pfVar30 = (float *)uVar32;
            fVar47 = pfVar30[1];
            uVar33 = uVar33 + 4;
            fVar48 = *pfVar30;
            fVar49 = pfVar30[2];
            fVar2 = pfVar30[3];
            fVar3 = pfVar35[7];
            fVar4 = *pfVar35;
            fVar5 = pfVar35[4];
            fVar6 = pfVar35[6];
            fVar1 = (float)((double)(fVar47 - pfVar35[3]) * dVar45 + (double)pfVar35[2]);
            *pfVar35 = fVar48;
            pfVar35[2] = fVar47;
            pfVar35[4] = fVar49;
            pfVar35[3] = fVar1;
            fVar47 = (float)((double)(fVar48 - pfVar35[1]) * dVar45 + (double)fVar4);
            pfVar35[1] = fVar47;
            fVar48 = (float)((double)(fVar49 - pfVar35[5]) * dVar45 + (double)fVar5);
            *pfVar30 = fVar47;
            fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
            pfVar30[1] = fVar1;
            pfVar35[6] = fVar2;
            pfVar35[5] = fVar48;
            pfVar30[2] = fVar48;
            pfVar35[7] = fVar47;
            pfVar35 = pfVar35 + 8;
            pfVar30[3] = fVar47;
            uVar32 = uVar32 + 0x10;
          } while ((uVar33 & 0xffffffff) < (uVar40 - 3 & 0xffffffff));
        }
        if ((uVar33 & 0xffffffff) < (uVar40 & 0xffffffff)) {
          lVar22 = uVar40 - uVar33;
          lVar31 = uVar32 - 4;
          do {
            fVar1 = *(float *)((int)lVar31 + 4);
            fVar47 = *pfVar35;
            *pfVar35 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar35[1]) * dVar45 + (double)fVar47);
            pfVar35[1] = fVar1;
            lVar31 = lVar31 + 4;
            *(float *)lVar31 = fVar1;
            pfVar35 = pfVar35 + 2;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      *(float **)(iVar16 + 0x114) = pfVar35;
      pfVar35 = *(float **)(iVar16 + 0x108);
      pfVar30 = *(float **)(iVar16 + 0x118);
      uVar32 = (ulonglong)((uint)((int)pfVar35 - (int)pfVar30 >> 2) >> 1);
      uVar40 = uVar19;
      if ((uVar32 < (uVar19 & 0xffffffff)) && (uVar40 = uVar32, uVar32 != (uVar19 & 0xffffffff))) {
        uVar40 = 0;
        if ((uVar19 & 0xffffffff) != 0) {
          lVar31 = uVar38 - 4;
          do {
            uVar33 = 0;
            if (3 < (int)uVar32) {
              do {
                iVar26 = (int)lVar31;
                fVar47 = *(float *)(iVar26 + 8);
                uVar33 = uVar33 + 4;
                fVar48 = *(float *)(iVar26 + 4);
                fVar49 = *(float *)(iVar26 + 0xc);
                fVar2 = *(float *)(iVar26 + 0x10);
                fVar3 = pfVar30[7];
                fVar4 = *pfVar30;
                fVar5 = pfVar30[4];
                fVar6 = pfVar30[6];
                fVar1 = (float)((double)(fVar47 - pfVar30[3]) * dVar45 + (double)pfVar30[2]);
                *pfVar30 = fVar48;
                pfVar30[2] = fVar47;
                pfVar30[4] = fVar49;
                pfVar30[3] = fVar1;
                fVar47 = (float)((double)(fVar48 - pfVar30[1]) * dVar45 + (double)fVar4);
                pfVar30[1] = fVar47;
                fVar48 = (float)((double)(fVar49 - pfVar30[5]) * dVar45 + (double)fVar5);
                *(float *)(iVar26 + 4) = fVar47;
                fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
                *(float *)(iVar26 + 8) = fVar1;
                pfVar30[6] = fVar2;
                pfVar30[5] = fVar48;
                *(float *)(iVar26 + 0xc) = fVar48;
                pfVar30[7] = fVar47;
                pfVar30 = pfVar30 + 8;
                *(float *)(iVar26 + 0x10) = fVar47;
                lVar31 = lVar31 + 0x10;
              } while ((uVar33 & 0xffffffff) < (uVar32 - 3 & 0xffffffff));
            }
            if ((uVar33 & 0xffffffff) < (uVar32 & 0xffffffff)) {
              lVar22 = uVar32 - uVar33;
              do {
                fVar1 = *(float *)((int)lVar31 + 4);
                fVar47 = *pfVar30;
                *pfVar30 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar30[1]) * dVar45 + (double)fVar47);
                pfVar30[1] = fVar1;
                lVar31 = lVar31 + 4;
                *(float *)lVar31 = fVar1;
                pfVar30 = pfVar30 + 2;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            if (pfVar35 <= pfVar30) {
              pfVar30 = *(float **)(iVar16 + 0xf8);
            }
            uVar40 = uVar40 + uVar32;
            uVar32 = (ulonglong)((uint)((int)pfVar35 - (int)pfVar30 >> 2) >> 1);
            if ((uVar19 - uVar40 & 0xffffffff) <= uVar32) {
              uVar32 = uVar19 - uVar40;
            }
          } while ((uVar40 & 0xffffffff) < (uVar19 & 0xffffffff));
        }
      }
      else {
        uVar33 = 0;
        uVar32 = uVar38;
        if (3 < (int)uVar40) {
          do {
            pfVar35 = (float *)uVar32;
            fVar47 = pfVar35[1];
            uVar33 = uVar33 + 4;
            fVar48 = *pfVar35;
            fVar49 = pfVar35[2];
            fVar2 = pfVar35[3];
            fVar3 = pfVar30[7];
            fVar4 = *pfVar30;
            fVar5 = pfVar30[4];
            fVar6 = pfVar30[6];
            fVar1 = (float)((double)(fVar47 - pfVar30[3]) * dVar45 + (double)pfVar30[2]);
            *pfVar30 = fVar48;
            pfVar30[2] = fVar47;
            pfVar30[4] = fVar49;
            pfVar30[3] = fVar1;
            fVar47 = (float)((double)(fVar48 - pfVar30[1]) * dVar45 + (double)fVar4);
            pfVar30[1] = fVar47;
            fVar48 = (float)((double)(fVar49 - pfVar30[5]) * dVar45 + (double)fVar5);
            *pfVar35 = fVar47;
            fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
            pfVar35[1] = fVar1;
            pfVar30[6] = fVar2;
            pfVar30[5] = fVar48;
            pfVar35[2] = fVar48;
            pfVar30[7] = fVar47;
            pfVar30 = pfVar30 + 8;
            pfVar35[3] = fVar47;
            uVar32 = uVar32 + 0x10;
          } while ((uVar33 & 0xffffffff) < (uVar40 - 3 & 0xffffffff));
        }
        if ((uVar33 & 0xffffffff) < (uVar40 & 0xffffffff)) {
          lVar22 = uVar40 - uVar33;
          lVar31 = uVar32 - 4;
          do {
            fVar1 = *(float *)((int)lVar31 + 4);
            fVar47 = *pfVar30;
            *pfVar30 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar30[1]) * dVar45 + (double)fVar47);
            pfVar30[1] = fVar1;
            lVar31 = lVar31 + 4;
            *(float *)lVar31 = fVar1;
            pfVar30 = pfVar30 + 2;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      *(float **)(iVar16 + 0x118) = pfVar30;
      pfVar35 = *(float **)(iVar16 + 0x10c);
      pfVar30 = *(float **)(iVar16 + 0x11c);
      uVar32 = (ulonglong)((uint)((int)pfVar35 - (int)pfVar30 >> 2) >> 1);
      uVar40 = uVar19;
      if ((uVar32 < (uVar19 & 0xffffffff)) && (uVar40 = uVar32, uVar32 != (uVar19 & 0xffffffff))) {
        uVar40 = 0;
        if ((uVar19 & 0xffffffff) != 0) {
          lVar31 = uVar38 - 4;
          do {
            uVar33 = 0;
            if (3 < (int)uVar32) {
              do {
                iVar26 = (int)lVar31;
                fVar47 = *(float *)(iVar26 + 8);
                uVar33 = uVar33 + 4;
                fVar48 = *(float *)(iVar26 + 4);
                fVar49 = *(float *)(iVar26 + 0xc);
                fVar2 = *(float *)(iVar26 + 0x10);
                fVar3 = pfVar30[7];
                fVar4 = *pfVar30;
                fVar5 = pfVar30[4];
                fVar6 = pfVar30[6];
                fVar1 = (float)((double)(fVar47 - pfVar30[3]) * dVar45 + (double)pfVar30[2]);
                *pfVar30 = fVar48;
                pfVar30[2] = fVar47;
                pfVar30[4] = fVar49;
                pfVar30[3] = fVar1;
                fVar47 = (float)((double)(fVar48 - pfVar30[1]) * dVar45 + (double)fVar4);
                pfVar30[1] = fVar47;
                fVar48 = (float)((double)(fVar49 - pfVar30[5]) * dVar45 + (double)fVar5);
                *(float *)(iVar26 + 4) = fVar47;
                fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
                *(float *)(iVar26 + 8) = fVar1;
                pfVar30[6] = fVar2;
                pfVar30[5] = fVar48;
                *(float *)(iVar26 + 0xc) = fVar48;
                pfVar30[7] = fVar47;
                pfVar30 = pfVar30 + 8;
                *(float *)(iVar26 + 0x10) = fVar47;
                lVar31 = lVar31 + 0x10;
              } while ((uVar33 & 0xffffffff) < (uVar32 - 3 & 0xffffffff));
            }
            if ((uVar33 & 0xffffffff) < (uVar32 & 0xffffffff)) {
              lVar22 = uVar32 - uVar33;
              do {
                fVar1 = *(float *)((int)lVar31 + 4);
                fVar47 = *pfVar30;
                *pfVar30 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar30[1]) * dVar45 + (double)fVar47);
                pfVar30[1] = fVar1;
                lVar31 = lVar31 + 4;
                *(float *)lVar31 = fVar1;
                pfVar30 = pfVar30 + 2;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            if (pfVar35 <= pfVar30) {
              pfVar30 = *(float **)(iVar16 + 0xfc);
            }
            uVar40 = uVar40 + uVar32;
            uVar32 = (ulonglong)((uint)((int)pfVar35 - (int)pfVar30 >> 2) >> 1);
            if ((uVar19 - uVar40 & 0xffffffff) <= uVar32) {
              uVar32 = uVar19 - uVar40;
            }
          } while ((uVar40 & 0xffffffff) < (uVar19 & 0xffffffff));
        }
      }
      else {
        uVar33 = 0;
        uVar32 = uVar38;
        if (3 < (int)uVar40) {
          do {
            pfVar35 = (float *)uVar32;
            fVar47 = pfVar35[1];
            uVar33 = uVar33 + 4;
            fVar48 = *pfVar35;
            fVar49 = pfVar35[2];
            fVar2 = pfVar35[3];
            fVar3 = pfVar30[7];
            fVar4 = *pfVar30;
            fVar5 = pfVar30[4];
            fVar6 = pfVar30[6];
            fVar1 = (float)((double)(fVar47 - pfVar30[3]) * dVar45 + (double)pfVar30[2]);
            *pfVar30 = fVar48;
            pfVar30[2] = fVar47;
            pfVar30[4] = fVar49;
            pfVar30[3] = fVar1;
            fVar47 = (float)((double)(fVar48 - pfVar30[1]) * dVar45 + (double)fVar4);
            pfVar30[1] = fVar47;
            fVar48 = (float)((double)(fVar49 - pfVar30[5]) * dVar45 + (double)fVar5);
            *pfVar35 = fVar47;
            fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
            pfVar35[1] = fVar1;
            pfVar30[6] = fVar2;
            pfVar30[5] = fVar48;
            pfVar35[2] = fVar48;
            pfVar30[7] = fVar47;
            pfVar30 = pfVar30 + 8;
            pfVar35[3] = fVar47;
            uVar32 = uVar32 + 0x10;
          } while ((uVar33 & 0xffffffff) < (uVar40 - 3 & 0xffffffff));
        }
        if ((uVar33 & 0xffffffff) < (uVar40 & 0xffffffff)) {
          lVar22 = uVar40 - uVar33;
          lVar31 = uVar32 - 4;
          do {
            fVar1 = *(float *)((int)lVar31 + 4);
            fVar47 = *pfVar30;
            *pfVar30 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar30[1]) * dVar45 + (double)fVar47);
            pfVar30[1] = fVar1;
            lVar31 = lVar31 + 4;
            *(float *)lVar31 = fVar1;
            pfVar30 = pfVar30 + 2;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      *(float **)(iVar16 + 0x11c) = pfVar30;
      pfVar35 = *(float **)(iVar16 + 0x110);
      pfVar30 = *(float **)(iVar16 + 0x120);
      uVar32 = (ulonglong)((uint)((int)pfVar35 - (int)pfVar30 >> 2) >> 1);
      uVar40 = uVar19;
      if ((uVar32 < (uVar19 & 0xffffffff)) && (uVar40 = uVar32, uVar32 != (uVar19 & 0xffffffff))) {
        uVar40 = 0;
        if ((uVar19 & 0xffffffff) != 0) {
          lVar31 = uVar38 - 4;
          do {
            uVar33 = 0;
            if (3 < (int)uVar32) {
              do {
                iVar26 = (int)lVar31;
                fVar47 = *(float *)(iVar26 + 8);
                uVar33 = uVar33 + 4;
                fVar48 = *(float *)(iVar26 + 4);
                fVar49 = *(float *)(iVar26 + 0xc);
                fVar2 = *(float *)(iVar26 + 0x10);
                fVar3 = pfVar30[7];
                fVar4 = *pfVar30;
                fVar5 = pfVar30[4];
                fVar6 = pfVar30[6];
                fVar1 = (float)((double)(fVar47 - pfVar30[3]) * dVar45 + (double)pfVar30[2]);
                *pfVar30 = fVar48;
                pfVar30[2] = fVar47;
                pfVar30[4] = fVar49;
                pfVar30[3] = fVar1;
                fVar47 = (float)((double)(fVar48 - pfVar30[1]) * dVar45 + (double)fVar4);
                pfVar30[1] = fVar47;
                fVar48 = (float)((double)(fVar49 - pfVar30[5]) * dVar45 + (double)fVar5);
                *(float *)(iVar26 + 4) = fVar47;
                fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
                *(float *)(iVar26 + 8) = fVar1;
                pfVar30[6] = fVar2;
                pfVar30[5] = fVar48;
                *(float *)(iVar26 + 0xc) = fVar48;
                pfVar30[7] = fVar47;
                pfVar30 = pfVar30 + 8;
                *(float *)(iVar26 + 0x10) = fVar47;
                lVar31 = lVar31 + 0x10;
              } while ((uVar33 & 0xffffffff) < (uVar32 - 3 & 0xffffffff));
            }
            if ((uVar33 & 0xffffffff) < (uVar32 & 0xffffffff)) {
              lVar22 = uVar32 - uVar33;
              do {
                fVar1 = *(float *)((int)lVar31 + 4);
                fVar47 = *pfVar30;
                *pfVar30 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar30[1]) * dVar45 + (double)fVar47);
                pfVar30[1] = fVar1;
                lVar31 = lVar31 + 4;
                *(float *)lVar31 = fVar1;
                pfVar30 = pfVar30 + 2;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            if (pfVar35 <= pfVar30) {
              pfVar30 = *(float **)(iVar16 + 0x100);
            }
            uVar40 = uVar40 + uVar32;
            uVar32 = (ulonglong)((uint)((int)pfVar35 - (int)pfVar30 >> 2) >> 1);
            if ((uVar19 - uVar40 & 0xffffffff) <= uVar32) {
              uVar32 = uVar19 - uVar40;
            }
          } while ((uVar40 & 0xffffffff) < (uVar19 & 0xffffffff));
        }
      }
      else {
        uVar33 = 0;
        uVar32 = uVar38;
        if (3 < (int)uVar40) {
          do {
            pfVar35 = (float *)uVar32;
            fVar47 = pfVar35[1];
            uVar33 = uVar33 + 4;
            fVar48 = *pfVar35;
            fVar49 = pfVar35[2];
            fVar2 = pfVar35[3];
            fVar3 = pfVar30[7];
            fVar4 = *pfVar30;
            fVar5 = pfVar30[4];
            fVar6 = pfVar30[6];
            fVar1 = (float)((double)(fVar47 - pfVar30[3]) * dVar45 + (double)pfVar30[2]);
            *pfVar30 = fVar48;
            pfVar30[2] = fVar47;
            pfVar30[4] = fVar49;
            pfVar30[3] = fVar1;
            fVar47 = (float)((double)(fVar48 - pfVar30[1]) * dVar45 + (double)fVar4);
            pfVar30[1] = fVar47;
            fVar48 = (float)((double)(fVar49 - pfVar30[5]) * dVar45 + (double)fVar5);
            *pfVar35 = fVar47;
            fVar47 = (float)((double)(fVar2 - fVar3) * dVar45 + (double)fVar6);
            pfVar35[1] = fVar1;
            pfVar30[6] = fVar2;
            pfVar30[5] = fVar48;
            pfVar35[2] = fVar48;
            pfVar30[7] = fVar47;
            pfVar30 = pfVar30 + 8;
            pfVar35[3] = fVar47;
            uVar32 = uVar32 + 0x10;
          } while ((uVar33 & 0xffffffff) < (uVar40 - 3 & 0xffffffff));
        }
        if ((uVar33 & 0xffffffff) < (uVar40 & 0xffffffff)) {
          lVar22 = uVar40 - uVar33;
          lVar31 = uVar32 - 4;
          do {
            fVar1 = *(float *)((int)lVar31 + 4);
            fVar47 = *pfVar30;
            *pfVar30 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar30[1]) * dVar45 + (double)fVar47);
            pfVar30[1] = fVar1;
            lVar31 = lVar31 + 4;
            *(float *)lVar31 = fVar1;
            pfVar30 = pfVar30 + 2;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      *(float **)(iVar16 + 0x120) = pfVar30;
      if (*(uint *)(iVar16 + 0x198) < *(uint *)(iVar16 + 0x19c)) {
        *(float *)(iVar16 + 0x194) = *(float *)(iVar16 + 0x18c) + *(float *)(iVar16 + 0x194);
        *(uint *)(iVar16 + 0x198) = *(uint *)(iVar16 + 0x198) + 1;
      }
      else {
        *(undefined4 *)(iVar16 + 0x194) = *(undefined4 *)(iVar16 + 400);
      }
      dVar46 = (double)*(float *)(iVar16 + 0x194);
      in_register_000103e0 = in_register_00010380;
      in_register_000103f0 = in_register_000103a0;
      if (dVar46 != (double)*(float *)(iVar16 + 0x154)) {
        fn_82FC8FD0(dVar46,iVar16 + 0x124);
        *(float *)(iVar16 + 0x154) = (float)dVar46;
      }
      uVar32 = lVar39 + uVar38;
      fVar1 = *(float *)(iVar16 + 0x128);
      fVar47 = *(float *)(iVar16 + 300);
      fVar48 = *(float *)(iVar16 + 0x130);
      if (uVar38 < (uVar32 & 0xffffffff)) {
        uVar24 = ((int)uVar32 - uVar8) + 3;
        uVar40 = uVar38;
        if (3 < (int)(((int)uVar24 >> 2) + (uint)((int)uVar24 < 0 && (uVar24 & 3) != 0))) {
          do {
            pfVar35 = (float *)uVar40;
            fVar1 = fVar47 * *pfVar35 + fVar48 * fVar1;
            *pfVar35 = fVar1;
            fVar1 = pfVar35[1] * fVar47 + fVar1 * fVar48;
            pfVar35[1] = fVar1;
            fVar1 = pfVar35[2] * fVar47 + fVar1 * fVar48;
            pfVar35[2] = fVar1;
            fVar1 = pfVar35[3] * fVar47 + fVar1 * fVar48;
            pfVar35[3] = fVar1;
            uVar40 = uVar40 + 0x10;
          } while ((int)uVar40 < (int)uVar32 + -0xc);
        }
        if ((uVar40 & 0xffffffff) < (uVar32 & 0xffffffff)) {
          lVar39 = uVar40 - 4;
          lVar31 = (((uVar32 - uVar40) - 1 & 0xffffffff) >> 2) + 1;
          do {
            fVar1 = fVar48 * fVar1 + *(float *)((int)lVar39 + 4) * fVar47;
            lVar39 = lVar39 + 4;
            *(float *)lVar39 = fVar1;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
      }
      *(float *)(iVar16 + 0x128) = fVar1;
      if (*(uint *)(iVar16 + 0x168) < *(uint *)(iVar16 + 0x16c)) {
        *(float *)(iVar16 + 0x164) = *(float *)(iVar16 + 0x164) + *(float *)(iVar16 + 0x15c);
        *(uint *)(iVar16 + 0x168) = *(uint *)(iVar16 + 0x168) + 1;
      }
      else {
        *(undefined4 *)(iVar16 + 0x164) = *(undefined4 *)(iVar16 + 0x160);
      }
      fVar1 = *(float *)(iVar16 + 0x164);
      if (*(uint *)(iVar16 + 0x180) < *(uint *)(iVar16 + 0x184)) {
        *(float *)(iVar16 + 0x17c) = *(float *)(iVar16 + 0x174) + *(float *)(iVar16 + 0x17c);
        *(uint *)(iVar16 + 0x180) = *(uint *)(iVar16 + 0x180) + 1;
      }
      else {
        *(undefined4 *)(iVar16 + 0x17c) = *(undefined4 *)(iVar16 + 0x178);
      }
      altv300_21(in_vs32,in_vs40);
      uVar19 = uVar19 + uVar27 * -4;
      dVar46 = (double)(float)((double)(float)(dVar43 - (double)*(float *)(iVar16 + 0x17c)) * dVar44
                              );
      altv300_21(in_vs32,in_vs41);
      altv300_21(in_vs32,in_vs39);
      uVar32 = uVar38;
      uVar24 = uVar8;
      if (uVar27 != 0) {
        do {
          altv207_13(in_vs32,in_vs43);
          uVar24 = (uint)(uVar32 + 0x10);
          iVar26 = (int)in_r0;
          pfVar35 = (float *)(iVar26 + (int)pfStack_ec & 0xfffffff0);
          fVar47 = pfVar35[1];
          fVar48 = pfVar35[2];
          fVar49 = pfVar35[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs45,in_vs32); memcpy(in_vs44, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs32); memcpy(in_vs32, &_vt1, 16); }
          pfVar30 = (float *)(iVar26 + (int)pfStack_ec & 0xfffffff0);
          *pfVar30 = *pfVar35 * in_register_000103f0;
          pfVar30[1] = fVar47 * in_register_000103f0;
          pfVar30[2] = fVar48 * in_register_000103f0;
          pfVar30[3] = fVar49 * in_register_000103f0;
          pfStack_ec = pfStack_ec + 4;
          pfVar35 = (float *)(iVar26 + (int)uVar36 & 0xfffffff0);
          *pfVar35 = in_register_00010370 * in_register_000103e0 * in_register_000103f0;
          pfVar35[1] = in_register_00010374 * in_register_000103e0 * in_register_000103f0;
          pfVar35[2] = in_register_00010378 * in_register_000103e0 * in_register_000103f0;
          pfVar35[3] = in_vr55 * in_register_000103e0 * in_register_000103f0;
          uVar36 = uVar36 + 0x10;
          uVar27 = uVar27 - 1;
          uVar32 = uVar32 + 0x10;
        } while (uVar27 != 0);
        uStack_e8 = (uint)uVar36;
      }
      if ((uVar19 & 0xffffffff) != 0) {
        iVar26 = (int)uVar36;
        do {
          pfVar35 = (float *)uVar36;
          fVar47 = *pfVar35;
          fVar48 = *(float *)((uVar24 - iVar26) + (int)pfVar35) * (float)(dVar42 - dVar46);
          *pfStack_ec = (float)((double)*pfStack_ec * dVar46) * fVar1 + fVar48;
          *pfVar35 = (float)((double)fVar47 * dVar46) * fVar1 + fVar48;
          pfStack_ec = pfStack_ec + 1;
          uVar36 = uVar36 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        uStack_e8 = (uint)uVar36;
      }
      in_register_000103e4 = in_register_000103e0;
      in_register_000103e8 = in_register_000103e0;
      in_vr62 = in_register_000103e0;
      in_register_000103f4 = in_register_000103f0;
      in_register_000103f8 = in_register_000103f0;
      in_vr63 = in_register_000103f0;
      in_register_00010380 = in_register_000103e0;
      in_register_000103a0 = in_register_000103f0;
    } while ((uVar20 & 0xffffffff) != 0);
  }
  fVar1 = lbl_8217BA98;
  *(float *)(iVar16 + 0x128) = (*(float *)(iVar16 + 0x128) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar16 + 0x13c) = (*(float *)(iVar16 + 0x13c) + fVar1) - fVar1;
  *(short *)((int)param_2 + 0xe) = (short)uVar15;
  *(bool *)(iVar16 + 0x1a8) = iVar9 == 0x11;
  fn_82F6A58C();
  return;
}

