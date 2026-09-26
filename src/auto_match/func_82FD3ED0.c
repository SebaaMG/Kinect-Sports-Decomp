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
extern int fn_82A1EFC0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_82FC8FD0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8216E404;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82FD3ED0(undefined8 param_1,ulonglong param_2)

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
  int iVar12;
  float fVar13;
  bool bVar14;
  float fVar15;
  undefined8 in_r0;
  int iVar17;
  ulonglong uVar16;
  undefined4 *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar26;
  ulonglong uVar25;
  longlong lVar27;
  float *pfVar28;
  int iVar29;
  float *pfVar30;
  float *pfVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  float *pfVar37;
  ulonglong uVar36;
  uint *puVar38;
  ulonglong uVar39;
  int iVar40;
  ulonglong uVar41;
  longlong lVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float in_register_000103c0;
  float in_register_000103c4;
  float in_register_000103c8;
  float in_vr60;
  float in_register_000103d0;
  float in_register_000103f0;
  
  iVar17 = fn_82F6A544();
  uVar10 = *(uint *)(iVar17 + 0x144);
  uVar41 = (ulonglong)uVar10;
  puVar19 = (uint *)param_2;
  puVar20 = (uint *)(iVar17 + 0x5c);
  lVar42 = 8;
  uVar26 = *puVar19;
  uVar39 = (ulonglong)uVar26;
  uVar16 = ((ulonglong)*(uint *)(iVar17 + 0xc) & 0x3fffffff) << 2;
  do {
    uVar21 = (ulonglong)*puVar20;
    uVar24 = uVar16;
    if (0x3ff < uVar16) {
      uVar24 = 0x400;
    }
    uVar32 = puVar20[-8] - uVar21;
    if (uVar24 <= (uVar32 & 0xffffffff)) {
      uVar32 = uVar24;
    }
    lVar34 = 0;
    if ((uVar32 & 0xffffffff) != 0) {
      lVar27 = ((uVar32 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar34 + uVar21);
        lVar34 = lVar34 + 0x80;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if ((uVar32 & 0xffffffff) < uVar24) {
      uVar35 = (ulonglong)puVar20[-8] - (ulonglong)puVar20[-0x10];
      if ((uVar24 - uVar32 & 0xffffffff) <= (uVar35 & 0xffffffff)) {
        uVar35 = uVar24 - uVar32;
      }
      lVar34 = 0;
      if ((uVar35 & 0xffffffff) != 0) {
        lVar27 = ((uVar35 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar34 + uVar21);
          lVar34 = lVar34 + 0x80;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
    }
    lVar42 = lVar42 + -1;
    puVar20 = puVar20 + 1;
  } while (lVar42 != 0);
  puVar38 = (uint *)(iVar17 + 0x114);
  uVar16 = ((ulonglong)*(uint *)(iVar17 + 0xc) & 0x1fffffff) << 3;
  lVar42 = 4;
  puVar20 = puVar38;
  do {
    uVar21 = (ulonglong)*puVar20;
    uVar24 = uVar16;
    if (0x3ff < uVar16) {
      uVar24 = 0x400;
    }
    uVar32 = puVar20[-4] - uVar21;
    if (uVar24 <= (uVar32 & 0xffffffff)) {
      uVar32 = uVar24;
    }
    lVar34 = 0;
    if ((uVar32 & 0xffffffff) != 0) {
      lVar27 = ((uVar32 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar34 + uVar21);
        lVar34 = lVar34 + 0x80;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if ((uVar32 & 0xffffffff) < uVar24) {
      uVar35 = (ulonglong)puVar20[-4] - (ulonglong)puVar20[-8];
      if ((uVar24 - uVar32 & 0xffffffff) <= (uVar35 & 0xffffffff)) {
        uVar35 = uVar24 - uVar32;
      }
      lVar34 = 0;
      if ((uVar35 & 0xffffffff) != 0) {
        lVar27 = ((uVar35 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar34 + uVar21);
          lVar34 = lVar34 + 0x80;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
    }
    lVar42 = lVar42 + -1;
    puVar20 = puVar20 + 1;
  } while (lVar42 != 0);
  fVar1 = *(float *)(iVar17 + 0x158);
  fVar2 = *(float *)(*(int *)(iVar17 + 8) + 0x10);
  *(undefined4 *)(iVar17 + 0x168) = 0;
  fVar4 = lbl_821AAD20;
  fVar3 = fVar2 - *(float *)(iVar17 + 0x164);
  *(float *)(iVar17 + 0x160) = fVar2;
  *(int *)(iVar17 + 0x16c) = (int)(longlong)(ABS(fVar3) / fVar1);
  if (fVar3 <= fVar4) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar17 + 0x15c) = fVar1;
  fVar1 = *(float *)(*(int *)(iVar17 + 8) + 4);
  fVar3 = fVar1 - *(float *)(iVar17 + 0x17c);
  fVar2 = *(float *)(iVar17 + 0x170);
  *(float *)(iVar17 + 0x178) = fVar1;
  *(undefined4 *)(iVar17 + 0x180) = 0;
  *(int *)(iVar17 + 0x184) = (int)(longlong)(ABS(fVar3) / fVar2);
  if (fVar3 <= fVar4) {
    fVar2 = -fVar2;
  }
  *(float *)(iVar17 + 0x174) = fVar2;
  fVar1 = *(float *)(iVar17 + 0x188);
  fVar2 = *(float *)(*(int *)(iVar17 + 8) + 0xc);
  *(undefined4 *)(iVar17 + 0x198) = 0;
  fVar3 = fVar2 - *(float *)(iVar17 + 0x194);
  *(float *)(iVar17 + 400) = fVar2;
  *(int *)(iVar17 + 0x19c) = (int)(longlong)(ABS(fVar3) / fVar1);
  if (fVar3 <= fVar4) {
    fVar1 = -fVar1;
  }
  *(float *)(iVar17 + 0x18c) = fVar1;
  uVar11 = puVar19[2];
  uVar16 = (ulonglong)*(ushort *)((int)puVar19 + 0xe);
  if (uVar11 == 0x11) {
    fVar1 = *(float *)(*(int *)(iVar17 + 8) + 8);
    if ((fVar1 != *(float *)(iVar17 + 0x1a4)) || (*(char *)(iVar17 + 0x1a8) == '\0')) {
      *(float *)(iVar17 + 0x1a4) = fVar1;
      *(int *)(iVar17 + 0x1a0) = (int)(longlong)((float)*(uint *)(iVar17 + 0x14c) * fVar1);
    }
    uVar24 = (ulonglong)*(uint *)(iVar17 + 0x1a0);
    if ((*(ushort *)(puVar19 + 3) - uVar16 & 0xffffffff) <= (ulonglong)*(uint *)(iVar17 + 0x1a0)) {
      uVar24 = *(ushort *)(puVar19 + 3) - uVar16;
    }
    fn_82A1EFC0(uVar16 * 4 + uVar39,0,(uVar24 & 0x3fffffff) << 2);
    uVar16 = uVar24 + uVar16;
    lVar42 = *(uint *)(iVar17 + 0x1a0) - uVar24;
    *(int *)(iVar17 + 0x1a0) = (int)lVar42;
    if (lVar42 != 0) {
      puVar19[2] = 0x2d;
    }
  }
  fVar1 = *(float *)(iVar17 + 0x140);
  fVar2 = *(float *)(iVar17 + 0x138);
  uVar24 = (uVar16 & 0x3fffffff) * 4 + uVar39;
  fVar3 = *(float *)(iVar17 + 0x13c);
  if (uVar39 < (uVar24 & 0xffffffff)) {
    uVar26 = ((int)uVar24 - uVar26) + 3;
    uVar21 = uVar39;
    if (3 < (int)(((int)uVar26 >> 2) + (uint)((int)uVar26 < 0 && (uVar26 & 3) != 0))) {
      do {
        pfVar37 = (float *)uVar21;
        fVar4 = *pfVar37;
        fVar7 = fVar4 - fVar2;
        fVar5 = pfVar37[1];
        fVar6 = pfVar37[2];
        fVar2 = pfVar37[3];
        fVar7 = fVar1 * fVar3 + fVar7;
        *pfVar37 = fVar7;
        fVar3 = fVar1 * fVar7 + (fVar5 - fVar4);
        pfVar37[1] = fVar3;
        fVar3 = fVar1 * fVar3 + (fVar6 - fVar5);
        pfVar37[2] = fVar3;
        fVar3 = fVar1 * fVar3 + (fVar2 - fVar6);
        pfVar37[3] = fVar3;
        uVar21 = uVar21 + 0x10;
      } while ((int)uVar21 < (int)uVar24 + -0xc);
    }
    if ((uVar21 & 0xffffffff) < (uVar24 & 0xffffffff)) {
      lVar42 = uVar21 - 4;
      lVar34 = (((uVar24 - uVar21) - 1 & 0xffffffff) >> 2) + 1;
      fVar4 = fVar2;
      do {
        fVar2 = *(float *)((int)lVar42 + 4);
        fVar3 = fVar1 * fVar3 + (fVar2 - fVar4);
        lVar42 = lVar42 + 4;
        *(float *)lVar42 = fVar3;
        lVar34 = lVar34 + -1;
        fVar4 = fVar2;
      } while (lVar34 != 0);
    }
  }
  *(float *)(iVar17 + 0x138) = fVar2;
  *(float *)(iVar17 + 0x13c) = fVar3;
  if ((uVar16 & 0xffffffff) != 0) {
    dVar45 = (double)lbl_8216E404;
    dVar43 = (double)lbl_82002AE0;
    dVar44 = (double)lbl_82005748;
    dVar47 = (double)lbl_82057B54;
    uVar24 = param_2;
    uVar21 = uVar16;
    do {
      iVar40 = (int)uVar39;
      uVar32 = uVar21;
      if (0x1f < (uVar21 & 0xffffffff)) {
        uVar32 = 0x20;
      }
      uVar21 = uVar21 - uVar32;
      bVar14 = (int)uVar21 != 0;
      if (bVar14) {
        puVar19 = (uint *)(iVar17 + 0x3c);
        lVar42 = 8;
        uVar35 = ((ulonglong)*(uint *)(iVar17 + 0x10) & 0x3fffffff) * 4;
        do {
          uVar23 = (ulonglong)*puVar19;
          uVar22 = uVar35 + puVar19[8];
          if (uVar23 <= (uVar22 & 0xffffffff)) {
            uVar22 = (ulonglong)puVar19[-8];
          }
          uVar25 = uVar35;
          if (0x3ff < uVar35) {
            uVar25 = 0x400;
          }
          uVar33 = uVar23 - uVar22;
          if (uVar25 <= (uVar23 - uVar22 & 0xffffffff)) {
            uVar33 = uVar25;
          }
          lVar34 = 0;
          if ((uVar33 & 0xffffffff) != 0) {
            lVar27 = ((uVar33 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar34 + uVar22);
              lVar34 = lVar34 + 0x80;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          if ((uVar33 & 0xffffffff) < uVar25) {
            uVar36 = uVar23 - puVar19[-8];
            if ((uVar25 - uVar33 & 0xffffffff) <= (uVar23 - puVar19[-8] & 0xffffffff)) {
              uVar36 = uVar25 - uVar33;
            }
            lVar34 = 0;
            if ((uVar36 & 0xffffffff) != 0) {
              lVar27 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar34 + uVar22);
                lVar34 = lVar34 + 0x80;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
          }
          lVar42 = lVar42 + -1;
          puVar19 = puVar19 + 1;
        } while (lVar42 != 0);
      }
      pfVar37 = *(float **)(iVar17 + 0x5c);
      pfVar31 = *(float **)(iVar17 + 0x3c);
      fVar1 = *(float *)(iVar17 + 0x9c);
      fVar2 = *(float *)(iVar17 + 0xbc);
      uVar26 = (int)pfVar31 - (int)pfVar37 >> 2;
      uVar22 = (ulonglong)(int)uVar26;
      uVar35 = uVar32;
      if (((ulonglong)uVar26 < (uVar32 & 0xffffffff)) &&
         (uVar35 = uVar22, (ulonglong)uVar26 != (uVar32 & 0xffffffff))) {
        uVar25 = 0;
        uVar35 = uVar39;
        uVar23 = uVar41;
        if (3 < (int)uVar26) {
          do {
            pfVar28 = (float *)uVar23;
            pfVar30 = (float *)uVar35;
            fVar3 = *pfVar30;
            fVar4 = pfVar30[2];
            fVar5 = pfVar30[3];
            uVar25 = uVar25 + 4;
            uVar35 = uVar35 + 0x10;
            fVar6 = pfVar37[3];
            fVar7 = *(float *)((int)pfVar28 + (iVar40 - uVar10) + 4) * fVar1 + pfVar37[1] * fVar2;
            pfVar37[1] = fVar7;
            fVar3 = fVar2 * *pfVar37 + fVar3 * fVar1;
            *pfVar37 = fVar3;
            fVar4 = pfVar37[2] * fVar2 + fVar4 * fVar1;
            *pfVar28 = fVar3;
            fVar3 = fVar6 * fVar2 + fVar5 * fVar1;
            pfVar28[1] = fVar7;
            pfVar37[2] = fVar4;
            pfVar28[2] = fVar4;
            pfVar37[3] = fVar3;
            pfVar37 = pfVar37 + 4;
            pfVar28[3] = fVar3;
            uVar23 = uVar23 + 0x10;
          } while ((uVar25 & 0xffffffff) < (uVar22 - 3 & 0xffffffff));
        }
        if ((uVar25 & 0xffffffff) < (ulonglong)uVar26) {
          lVar42 = uVar22 - uVar25;
          do {
            pfVar28 = (float *)uVar35;
            uVar35 = uVar35 + 4;
            fVar3 = fVar2 * *pfVar37 + *pfVar28 * fVar1;
            *pfVar37 = fVar3;
            *(float *)uVar23 = fVar3;
            uVar23 = uVar23 + 4;
            pfVar37 = pfVar37 + 1;
            lVar42 = lVar42 + -1;
          } while (lVar42 != 0);
        }
        iVar29 = (int)uVar35;
        if (pfVar31 <= pfVar37) {
          pfVar37 = *(float **)(iVar17 + 0x1c);
        }
        uVar26 = (int)pfVar31 - (int)pfVar37 >> 2;
        uVar25 = (longlong)(int)uVar26;
        if ((uVar32 - uVar22 & 0xffffffff) <= (ulonglong)uVar26) {
          uVar25 = uVar32 - uVar22;
        }
        uVar22 = 0;
        if (3 < (int)uVar25) {
          do {
            pfVar31 = (float *)uVar35;
            uVar22 = uVar22 + 4;
            fVar3 = pfVar31[1];
            fVar4 = pfVar31[2];
            fVar5 = pfVar31[3];
            uVar35 = uVar35 + 0x10;
            iVar29 = (int)uVar35;
            fVar6 = pfVar37[2];
            fVar7 = pfVar37[3];
            fVar9 = fVar2 * *pfVar37 + *pfVar31 * fVar1;
            *pfVar37 = fVar9;
            fVar8 = pfVar37[1] * fVar2 + fVar3 * fVar1;
            pfVar31 = (float *)uVar23;
            *pfVar31 = fVar9;
            fVar4 = fVar6 * fVar2 + fVar4 * fVar1;
            pfVar37[1] = fVar8;
            fVar3 = fVar7 * fVar2 + fVar5 * fVar1;
            pfVar31[1] = fVar8;
            pfVar37[2] = fVar4;
            pfVar31[2] = fVar4;
            pfVar37[3] = fVar3;
            pfVar37 = pfVar37 + 4;
            pfVar31[3] = fVar3;
            uVar23 = uVar23 + 0x10;
          } while ((uVar22 & 0xffffffff) < (uVar25 - 3 & 0xffffffff));
        }
        if ((uVar22 & 0xffffffff) < (uVar25 & 0xffffffff)) {
          lVar42 = uVar25 - uVar22;
          iVar12 = (int)uVar23;
          do {
            fVar3 = *(float *)((iVar29 - iVar12) + (int)(float *)uVar23) * fVar1 + fVar2 * *pfVar37;
            *pfVar37 = fVar3;
            *(float *)uVar23 = fVar3;
            uVar23 = uVar23 + 4;
            pfVar37 = pfVar37 + 1;
            lVar42 = lVar42 + -1;
          } while (lVar42 != 0);
        }
      }
      else {
        uVar22 = 0;
        iVar29 = iVar40;
        uVar26 = uVar10;
        if (3 < (int)uVar35) {
          uVar23 = uVar39;
          uVar25 = uVar41;
          do {
            pfVar31 = (float *)uVar25;
            pfVar28 = (float *)uVar23;
            fVar3 = *pfVar28;
            fVar4 = pfVar28[2];
            fVar5 = pfVar28[3];
            uVar22 = uVar22 + 4;
            uVar23 = uVar23 + 0x10;
            iVar29 = (int)uVar23;
            fVar6 = pfVar37[3];
            fVar7 = *(float *)((int)pfVar31 + (iVar40 - uVar10) + 4) * fVar1 + pfVar37[1] * fVar2;
            pfVar37[1] = fVar7;
            fVar3 = fVar2 * *pfVar37 + fVar3 * fVar1;
            *pfVar37 = fVar3;
            fVar4 = pfVar37[2] * fVar2 + fVar4 * fVar1;
            *pfVar31 = fVar3;
            fVar3 = fVar6 * fVar2 + fVar5 * fVar1;
            pfVar31[1] = fVar7;
            pfVar37[2] = fVar4;
            pfVar31[2] = fVar4;
            pfVar37[3] = fVar3;
            pfVar37 = pfVar37 + 4;
            pfVar31[3] = fVar3;
            uVar25 = uVar25 + 0x10;
            uVar26 = (uint)uVar25;
          } while ((uVar22 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
        }
        if ((uVar22 & 0xffffffff) < (uVar35 & 0xffffffff)) {
          lVar42 = uVar35 - uVar22;
          iVar29 = iVar29 - (int)pfVar37;
          iVar12 = uVar26 - (int)pfVar37;
          do {
            fVar3 = *(float *)((int)pfVar37 + iVar29) * fVar1 + fVar2 * *pfVar37;
            *pfVar37 = fVar3;
            *(float *)((int)pfVar37 + iVar12) = fVar3;
            pfVar37 = pfVar37 + 1;
            lVar42 = lVar42 + -1;
          } while (lVar42 != 0);
        }
      }
      *(float **)(iVar17 + 0x5c) = pfVar37;
      lVar42 = 7;
      puVar18 = (undefined4 *)(iVar17 + 0x40);
      do {
        pfVar37 = (float *)puVar18[8];
        fVar1 = (float)puVar18[0x18];
        pfVar31 = (float *)*puVar18;
        fVar2 = (float)puVar18[0x20];
        uVar26 = (int)pfVar31 - (int)pfVar37 >> 2;
        uVar22 = (ulonglong)(int)uVar26;
        uVar35 = uVar32;
        if (((ulonglong)uVar26 < (uVar32 & 0xffffffff)) &&
           (uVar35 = uVar22, (ulonglong)uVar26 != (uVar32 & 0xffffffff))) {
          uVar25 = 0;
          uVar35 = uVar39;
          uVar23 = uVar41;
          if (3 < (int)uVar26) {
            do {
              pfVar30 = (float *)uVar23;
              pfVar28 = (float *)uVar35;
              fVar3 = pfVar28[2];
              fVar4 = pfVar28[3];
              uVar25 = uVar25 + 4;
              uVar35 = uVar35 + 0x10;
              fVar5 = *pfVar30;
              fVar6 = pfVar30[1];
              fVar7 = pfVar30[2];
              fVar13 = fVar1 * *pfVar28 + fVar2 * *pfVar37;
              fVar8 = pfVar30[3];
              fVar9 = *(float *)((int)pfVar30 + (iVar40 - uVar10) + 4) * fVar1 + pfVar37[1] * fVar2;
              *pfVar37 = fVar13;
              fVar15 = pfVar37[2] * fVar2 + fVar3 * fVar1;
              pfVar37[1] = fVar9;
              fVar3 = pfVar37[3] * fVar2 + fVar4 * fVar1;
              pfVar37[2] = fVar15;
              pfVar37[3] = fVar3;
              pfVar37 = pfVar37 + 4;
              *pfVar30 = fVar13 + fVar5;
              pfVar30[1] = fVar6 + fVar9;
              pfVar30[2] = fVar7 + fVar15;
              pfVar30[3] = fVar8 + fVar3;
              uVar23 = uVar23 + 0x10;
            } while ((uVar25 & 0xffffffff) < (uVar22 - 3 & 0xffffffff));
            uVar24 = param_2 & 0xffffffff;
          }
          if ((uVar25 & 0xffffffff) < (ulonglong)uVar26) {
            lVar34 = uVar22 - uVar25;
            do {
              pfVar28 = (float *)uVar35;
              fVar3 = *(float *)uVar23;
              uVar35 = uVar35 + 4;
              fVar4 = fVar1 * *pfVar28 + fVar2 * *pfVar37;
              *pfVar37 = fVar4;
              pfVar37 = pfVar37 + 1;
              *(float *)uVar23 = fVar4 + fVar3;
              uVar23 = uVar23 + 4;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
          iVar29 = (int)uVar35;
          if (pfVar31 <= pfVar37) {
            pfVar37 = (float *)puVar18[-8];
          }
          uVar26 = (int)pfVar31 - (int)pfVar37 >> 2;
          uVar25 = (longlong)(int)uVar26;
          if ((uVar32 - uVar22 & 0xffffffff) <= (ulonglong)uVar26) {
            uVar25 = uVar32 - uVar22;
          }
          uVar22 = 0;
          if (3 < (int)uVar25) {
            do {
              uVar22 = uVar22 + 4;
              pfVar31 = (float *)uVar35;
              fVar3 = pfVar31[2];
              fVar4 = pfVar31[3];
              uVar35 = uVar35 + 0x10;
              iVar29 = (int)uVar35;
              pfVar28 = (float *)uVar23;
              fVar5 = *pfVar28;
              fVar6 = pfVar28[1];
              fVar7 = pfVar28[2];
              fVar9 = fVar1 * *pfVar31 + fVar2 * *pfVar37;
              fVar8 = pfVar28[3];
              fVar15 = pfVar37[1] * fVar2 + pfVar31[1] * fVar1;
              *pfVar37 = fVar9;
              fVar13 = pfVar37[2] * fVar2 + fVar3 * fVar1;
              pfVar37[1] = fVar15;
              fVar3 = pfVar37[3] * fVar2 + fVar4 * fVar1;
              pfVar37[2] = fVar13;
              pfVar37[3] = fVar3;
              pfVar37 = pfVar37 + 4;
              *pfVar28 = fVar9 + fVar5;
              pfVar28[1] = fVar6 + fVar15;
              pfVar28[2] = fVar7 + fVar13;
              pfVar28[3] = fVar8 + fVar3;
              uVar23 = uVar23 + 0x10;
            } while ((uVar22 & 0xffffffff) < (uVar25 - 3 & 0xffffffff));
          }
          if ((uVar22 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            lVar34 = uVar25 - uVar22;
            iVar12 = (int)uVar23;
            do {
              pfVar31 = (float *)uVar23;
              fVar3 = *pfVar31;
              fVar4 = *(float *)((iVar29 - iVar12) + (int)pfVar31) * fVar1 + fVar2 * *pfVar37;
              *pfVar37 = fVar4;
              pfVar37 = pfVar37 + 1;
              *pfVar31 = fVar4 + fVar3;
              uVar23 = uVar23 + 4;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        else {
          uVar22 = 0;
          iVar29 = iVar40;
          uVar26 = uVar10;
          if (3 < (int)uVar35) {
            uVar23 = uVar39;
            uVar25 = uVar41;
            do {
              pfVar28 = (float *)uVar25;
              pfVar31 = (float *)uVar23;
              fVar3 = pfVar31[2];
              fVar4 = pfVar31[3];
              uVar22 = uVar22 + 4;
              uVar23 = uVar23 + 0x10;
              iVar29 = (int)uVar23;
              fVar5 = *pfVar28;
              fVar6 = pfVar28[1];
              fVar7 = pfVar28[2];
              fVar13 = fVar1 * *pfVar31 + fVar2 * *pfVar37;
              fVar8 = pfVar28[3];
              fVar9 = *(float *)((int)pfVar28 + (iVar40 - uVar10) + 4) * fVar1 + pfVar37[1] * fVar2;
              *pfVar37 = fVar13;
              fVar15 = pfVar37[2] * fVar2 + fVar3 * fVar1;
              pfVar37[1] = fVar9;
              fVar3 = pfVar37[3] * fVar2 + fVar4 * fVar1;
              pfVar37[2] = fVar15;
              pfVar37[3] = fVar3;
              pfVar37 = pfVar37 + 4;
              *pfVar28 = fVar13 + fVar5;
              pfVar28[1] = fVar6 + fVar9;
              pfVar28[2] = fVar7 + fVar15;
              pfVar28[3] = fVar8 + fVar3;
              uVar25 = uVar25 + 0x10;
              uVar26 = (uint)uVar25;
            } while ((uVar22 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
          }
          if ((uVar22 & 0xffffffff) < (uVar35 & 0xffffffff)) {
            lVar34 = uVar35 - uVar22;
            iVar29 = iVar29 - (int)pfVar37;
            iVar12 = uVar26 - (int)pfVar37;
            do {
              fVar3 = *(float *)((int)pfVar37 + iVar12);
              fVar4 = *(float *)((int)pfVar37 + iVar29) * fVar1 + fVar2 * *pfVar37;
              *pfVar37 = fVar4;
              *(float *)((int)pfVar37 + iVar12) = fVar3 + fVar4;
              pfVar37 = pfVar37 + 1;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        puVar19 = (uint *)uVar24;
        puVar18[8] = pfVar37;
        lVar42 = lVar42 + -1;
        puVar18 = puVar18 + 1;
      } while (lVar42 != 0);
      if (bVar14) {
        puVar20 = (uint *)(iVar17 + 0x104);
        lVar42 = 4;
        uVar35 = ((ulonglong)*(uint *)(iVar17 + 0x10) & 0x1fffffff) * 8;
        do {
          uVar23 = (ulonglong)*puVar20;
          uVar22 = uVar35 + puVar20[4];
          if (uVar23 <= (uVar22 & 0xffffffff)) {
            uVar22 = (ulonglong)puVar20[-4];
          }
          uVar25 = uVar35;
          if (0x3ff < uVar35) {
            uVar25 = 0x400;
          }
          uVar33 = uVar23 - uVar22;
          if (uVar25 <= (uVar23 - uVar22 & 0xffffffff)) {
            uVar33 = uVar25;
          }
          lVar34 = 0;
          if ((uVar33 & 0xffffffff) != 0) {
            lVar27 = ((uVar33 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar34 + uVar22);
              lVar34 = lVar34 + 0x80;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          if ((uVar33 & 0xffffffff) < uVar25) {
            uVar36 = uVar23 - puVar20[-4];
            if ((uVar25 - uVar33 & 0xffffffff) <= (uVar23 - puVar20[-4] & 0xffffffff)) {
              uVar36 = uVar25 - uVar33;
            }
            lVar34 = 0;
            if ((uVar36 & 0xffffffff) != 0) {
              lVar27 = ((uVar36 - 1 & 0xffffffff) >> 7) + 1;
              do {
                dataCacheBlockTouch(lVar34 + uVar22);
                lVar34 = lVar34 + 0x80;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
          }
          lVar42 = lVar42 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar42 != 0);
      }
      pfVar37 = (float *)*puVar38;
      pfVar31 = *(float **)(iVar17 + 0x104);
      uVar35 = (ulonglong)((uint)((int)pfVar31 - (int)pfVar37 >> 2) >> 1);
      uVar22 = uVar32;
      if ((uVar35 < (uVar32 & 0xffffffff)) && (uVar22 = uVar35, uVar35 != (uVar32 & 0xffffffff))) {
        uVar22 = 0;
        if ((uVar32 & 0xffffffff) != 0) {
          lVar42 = uVar41 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar40 = (int)lVar42;
                fVar2 = *(float *)(iVar40 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar40 + 4);
                fVar4 = *(float *)(iVar40 + 0xc);
                fVar5 = *(float *)(iVar40 + 0x10);
                fVar6 = pfVar37[7];
                fVar7 = *pfVar37;
                fVar8 = pfVar37[4];
                fVar9 = pfVar37[6];
                fVar1 = (float)((double)(fVar2 - pfVar37[3]) * dVar47 + (double)pfVar37[2]);
                *pfVar37 = fVar3;
                pfVar37[2] = fVar2;
                pfVar37[4] = fVar4;
                pfVar37[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar37[1]) * dVar47 + (double)fVar7);
                pfVar37[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar37[5]) * dVar47 + (double)fVar8);
                *(float *)(iVar40 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
                *(float *)(iVar40 + 8) = fVar1;
                pfVar37[6] = fVar5;
                pfVar37[5] = fVar3;
                *(float *)(iVar40 + 0xc) = fVar3;
                pfVar37[7] = fVar2;
                pfVar37 = pfVar37 + 8;
                *(float *)(iVar40 + 0x10) = fVar2;
                lVar42 = lVar42 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar42 + 4);
                fVar2 = *pfVar37;
                *pfVar37 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar37[1]) * dVar47 + (double)fVar2);
                pfVar37[1] = fVar1;
                lVar42 = lVar42 + 4;
                *(float *)lVar42 = fVar1;
                pfVar37 = pfVar37 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar31 <= pfVar37) {
              pfVar37 = *(float **)(iVar17 + 0xf4);
            }
            uVar22 = uVar22 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar31 - (int)pfVar37 >> 2) >> 1);
            if ((uVar32 - uVar22 & 0xffffffff) <= uVar35) {
              uVar35 = uVar32 - uVar22;
            }
          } while ((uVar22 & 0xffffffff) < (uVar32 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar41;
        if (3 < (int)uVar22) {
          do {
            pfVar31 = (float *)uVar35;
            fVar2 = pfVar31[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar31;
            fVar4 = pfVar31[2];
            fVar5 = pfVar31[3];
            fVar6 = pfVar37[7];
            fVar7 = *pfVar37;
            fVar8 = pfVar37[4];
            fVar9 = pfVar37[6];
            fVar1 = (float)((double)(fVar2 - pfVar37[3]) * dVar47 + (double)pfVar37[2]);
            *pfVar37 = fVar3;
            pfVar37[2] = fVar2;
            pfVar37[4] = fVar4;
            pfVar37[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar37[1]) * dVar47 + (double)fVar7);
            pfVar37[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar37[5]) * dVar47 + (double)fVar8);
            *pfVar31 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
            pfVar31[1] = fVar1;
            pfVar37[6] = fVar5;
            pfVar37[5] = fVar3;
            pfVar31[2] = fVar3;
            pfVar37[7] = fVar2;
            pfVar37 = pfVar37 + 8;
            pfVar31[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar22 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar22 & 0xffffffff)) {
          lVar34 = uVar22 - uVar23;
          lVar42 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar42 + 4);
            fVar2 = *pfVar37;
            *pfVar37 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar37[1]) * dVar47 + (double)fVar2);
            pfVar37[1] = fVar1;
            lVar42 = lVar42 + 4;
            *(float *)lVar42 = fVar1;
            pfVar37 = pfVar37 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *puVar38 = (uint)pfVar37;
      pfVar37 = *(float **)(iVar17 + 0x108);
      pfVar31 = *(float **)(iVar17 + 0x118);
      uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar31 >> 2) >> 1);
      uVar22 = uVar32;
      if ((uVar35 < (uVar32 & 0xffffffff)) && (uVar22 = uVar35, uVar35 != (uVar32 & 0xffffffff))) {
        uVar22 = 0;
        if ((uVar32 & 0xffffffff) != 0) {
          lVar42 = uVar41 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar40 = (int)lVar42;
                fVar2 = *(float *)(iVar40 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar40 + 4);
                fVar4 = *(float *)(iVar40 + 0xc);
                fVar5 = *(float *)(iVar40 + 0x10);
                fVar6 = pfVar31[7];
                fVar7 = *pfVar31;
                fVar8 = pfVar31[4];
                fVar9 = pfVar31[6];
                fVar1 = (float)((double)(fVar2 - pfVar31[3]) * dVar47 + (double)pfVar31[2]);
                *pfVar31 = fVar3;
                pfVar31[2] = fVar2;
                pfVar31[4] = fVar4;
                pfVar31[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar31[1]) * dVar47 + (double)fVar7);
                pfVar31[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar31[5]) * dVar47 + (double)fVar8);
                *(float *)(iVar40 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
                *(float *)(iVar40 + 8) = fVar1;
                pfVar31[6] = fVar5;
                pfVar31[5] = fVar3;
                *(float *)(iVar40 + 0xc) = fVar3;
                pfVar31[7] = fVar2;
                pfVar31 = pfVar31 + 8;
                *(float *)(iVar40 + 0x10) = fVar2;
                lVar42 = lVar42 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar42 + 4);
                fVar2 = *pfVar31;
                *pfVar31 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar31[1]) * dVar47 + (double)fVar2);
                pfVar31[1] = fVar1;
                lVar42 = lVar42 + 4;
                *(float *)lVar42 = fVar1;
                pfVar31 = pfVar31 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar37 <= pfVar31) {
              pfVar31 = *(float **)(iVar17 + 0xf8);
            }
            uVar22 = uVar22 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar31 >> 2) >> 1);
            if ((uVar32 - uVar22 & 0xffffffff) <= uVar35) {
              uVar35 = uVar32 - uVar22;
            }
          } while ((uVar22 & 0xffffffff) < (uVar32 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar41;
        if (3 < (int)uVar22) {
          do {
            pfVar37 = (float *)uVar35;
            fVar2 = pfVar37[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar37;
            fVar4 = pfVar37[2];
            fVar5 = pfVar37[3];
            fVar6 = pfVar31[7];
            fVar7 = *pfVar31;
            fVar8 = pfVar31[4];
            fVar9 = pfVar31[6];
            fVar1 = (float)((double)(fVar2 - pfVar31[3]) * dVar47 + (double)pfVar31[2]);
            *pfVar31 = fVar3;
            pfVar31[2] = fVar2;
            pfVar31[4] = fVar4;
            pfVar31[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar31[1]) * dVar47 + (double)fVar7);
            pfVar31[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar31[5]) * dVar47 + (double)fVar8);
            *pfVar37 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
            pfVar37[1] = fVar1;
            pfVar31[6] = fVar5;
            pfVar31[5] = fVar3;
            pfVar37[2] = fVar3;
            pfVar31[7] = fVar2;
            pfVar31 = pfVar31 + 8;
            pfVar37[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar22 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar22 & 0xffffffff)) {
          lVar34 = uVar22 - uVar23;
          lVar42 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar42 + 4);
            fVar2 = *pfVar31;
            *pfVar31 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar31[1]) * dVar47 + (double)fVar2);
            pfVar31[1] = fVar1;
            lVar42 = lVar42 + 4;
            *(float *)lVar42 = fVar1;
            pfVar31 = pfVar31 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar17 + 0x118) = pfVar31;
      pfVar37 = *(float **)(iVar17 + 0x10c);
      pfVar31 = *(float **)(iVar17 + 0x11c);
      uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar31 >> 2) >> 1);
      uVar22 = uVar32;
      if ((uVar35 < (uVar32 & 0xffffffff)) && (uVar22 = uVar35, uVar35 != (uVar32 & 0xffffffff))) {
        uVar22 = 0;
        if ((uVar32 & 0xffffffff) != 0) {
          lVar42 = uVar41 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar40 = (int)lVar42;
                fVar2 = *(float *)(iVar40 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar40 + 4);
                fVar4 = *(float *)(iVar40 + 0xc);
                fVar5 = *(float *)(iVar40 + 0x10);
                fVar6 = pfVar31[7];
                fVar7 = *pfVar31;
                fVar8 = pfVar31[4];
                fVar9 = pfVar31[6];
                fVar1 = (float)((double)(fVar2 - pfVar31[3]) * dVar47 + (double)pfVar31[2]);
                *pfVar31 = fVar3;
                pfVar31[2] = fVar2;
                pfVar31[4] = fVar4;
                pfVar31[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar31[1]) * dVar47 + (double)fVar7);
                pfVar31[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar31[5]) * dVar47 + (double)fVar8);
                *(float *)(iVar40 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
                *(float *)(iVar40 + 8) = fVar1;
                pfVar31[6] = fVar5;
                pfVar31[5] = fVar3;
                *(float *)(iVar40 + 0xc) = fVar3;
                pfVar31[7] = fVar2;
                pfVar31 = pfVar31 + 8;
                *(float *)(iVar40 + 0x10) = fVar2;
                lVar42 = lVar42 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar42 + 4);
                fVar2 = *pfVar31;
                *pfVar31 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar31[1]) * dVar47 + (double)fVar2);
                pfVar31[1] = fVar1;
                lVar42 = lVar42 + 4;
                *(float *)lVar42 = fVar1;
                pfVar31 = pfVar31 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar37 <= pfVar31) {
              pfVar31 = *(float **)(iVar17 + 0xfc);
            }
            uVar22 = uVar22 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar31 >> 2) >> 1);
            if ((uVar32 - uVar22 & 0xffffffff) <= uVar35) {
              uVar35 = uVar32 - uVar22;
            }
          } while ((uVar22 & 0xffffffff) < (uVar32 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar41;
        if (3 < (int)uVar22) {
          do {
            pfVar37 = (float *)uVar35;
            fVar2 = pfVar37[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar37;
            fVar4 = pfVar37[2];
            fVar5 = pfVar37[3];
            fVar6 = pfVar31[7];
            fVar7 = *pfVar31;
            fVar8 = pfVar31[4];
            fVar9 = pfVar31[6];
            fVar1 = (float)((double)(fVar2 - pfVar31[3]) * dVar47 + (double)pfVar31[2]);
            *pfVar31 = fVar3;
            pfVar31[2] = fVar2;
            pfVar31[4] = fVar4;
            pfVar31[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar31[1]) * dVar47 + (double)fVar7);
            pfVar31[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar31[5]) * dVar47 + (double)fVar8);
            *pfVar37 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
            pfVar37[1] = fVar1;
            pfVar31[6] = fVar5;
            pfVar31[5] = fVar3;
            pfVar37[2] = fVar3;
            pfVar31[7] = fVar2;
            pfVar31 = pfVar31 + 8;
            pfVar37[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar22 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar22 & 0xffffffff)) {
          lVar34 = uVar22 - uVar23;
          lVar42 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar42 + 4);
            fVar2 = *pfVar31;
            *pfVar31 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar31[1]) * dVar47 + (double)fVar2);
            pfVar31[1] = fVar1;
            lVar42 = lVar42 + 4;
            *(float *)lVar42 = fVar1;
            pfVar31 = pfVar31 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar17 + 0x11c) = pfVar31;
      pfVar37 = *(float **)(iVar17 + 0x110);
      pfVar31 = *(float **)(iVar17 + 0x120);
      uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar31 >> 2) >> 1);
      uVar22 = uVar32;
      if ((uVar35 < (uVar32 & 0xffffffff)) && (uVar22 = uVar35, uVar35 != (uVar32 & 0xffffffff))) {
        uVar22 = 0;
        if ((uVar32 & 0xffffffff) != 0) {
          lVar42 = uVar41 - 4;
          do {
            uVar23 = 0;
            if (3 < (int)uVar35) {
              do {
                iVar40 = (int)lVar42;
                fVar2 = *(float *)(iVar40 + 8);
                uVar23 = uVar23 + 4;
                fVar3 = *(float *)(iVar40 + 4);
                fVar4 = *(float *)(iVar40 + 0xc);
                fVar5 = *(float *)(iVar40 + 0x10);
                fVar6 = pfVar31[7];
                fVar7 = *pfVar31;
                fVar8 = pfVar31[4];
                fVar9 = pfVar31[6];
                fVar1 = (float)((double)(fVar2 - pfVar31[3]) * dVar47 + (double)pfVar31[2]);
                *pfVar31 = fVar3;
                pfVar31[2] = fVar2;
                pfVar31[4] = fVar4;
                pfVar31[3] = fVar1;
                fVar2 = (float)((double)(fVar3 - pfVar31[1]) * dVar47 + (double)fVar7);
                pfVar31[1] = fVar2;
                fVar3 = (float)((double)(fVar4 - pfVar31[5]) * dVar47 + (double)fVar8);
                *(float *)(iVar40 + 4) = fVar2;
                fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
                *(float *)(iVar40 + 8) = fVar1;
                pfVar31[6] = fVar5;
                pfVar31[5] = fVar3;
                *(float *)(iVar40 + 0xc) = fVar3;
                pfVar31[7] = fVar2;
                pfVar31 = pfVar31 + 8;
                *(float *)(iVar40 + 0x10) = fVar2;
                lVar42 = lVar42 + 0x10;
              } while ((uVar23 & 0xffffffff) < (uVar35 - 3 & 0xffffffff));
            }
            if ((uVar23 & 0xffffffff) < (uVar35 & 0xffffffff)) {
              lVar34 = uVar35 - uVar23;
              do {
                fVar1 = *(float *)((int)lVar42 + 4);
                fVar2 = *pfVar31;
                *pfVar31 = fVar1;
                fVar1 = (float)((double)(fVar1 - pfVar31[1]) * dVar47 + (double)fVar2);
                pfVar31[1] = fVar1;
                lVar42 = lVar42 + 4;
                *(float *)lVar42 = fVar1;
                pfVar31 = pfVar31 + 2;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            if (pfVar37 <= pfVar31) {
              pfVar31 = *(float **)(iVar17 + 0x100);
            }
            uVar22 = uVar22 + uVar35;
            uVar35 = (ulonglong)((uint)((int)pfVar37 - (int)pfVar31 >> 2) >> 1);
            if ((uVar32 - uVar22 & 0xffffffff) <= uVar35) {
              uVar35 = uVar32 - uVar22;
            }
          } while ((uVar22 & 0xffffffff) < (uVar32 & 0xffffffff));
        }
      }
      else {
        uVar23 = 0;
        uVar35 = uVar41;
        if (3 < (int)uVar22) {
          do {
            pfVar37 = (float *)uVar35;
            fVar2 = pfVar37[1];
            uVar23 = uVar23 + 4;
            fVar3 = *pfVar37;
            fVar4 = pfVar37[2];
            fVar5 = pfVar37[3];
            fVar6 = pfVar31[7];
            fVar7 = *pfVar31;
            fVar8 = pfVar31[4];
            fVar9 = pfVar31[6];
            fVar1 = (float)((double)(fVar2 - pfVar31[3]) * dVar47 + (double)pfVar31[2]);
            *pfVar31 = fVar3;
            pfVar31[2] = fVar2;
            pfVar31[4] = fVar4;
            pfVar31[3] = fVar1;
            fVar2 = (float)((double)(fVar3 - pfVar31[1]) * dVar47 + (double)fVar7);
            pfVar31[1] = fVar2;
            fVar3 = (float)((double)(fVar4 - pfVar31[5]) * dVar47 + (double)fVar8);
            *pfVar37 = fVar2;
            fVar2 = (float)((double)(fVar5 - fVar6) * dVar47 + (double)fVar9);
            pfVar37[1] = fVar1;
            pfVar31[6] = fVar5;
            pfVar31[5] = fVar3;
            pfVar37[2] = fVar3;
            pfVar31[7] = fVar2;
            pfVar31 = pfVar31 + 8;
            pfVar37[3] = fVar2;
            uVar35 = uVar35 + 0x10;
          } while ((uVar23 & 0xffffffff) < (uVar22 - 3 & 0xffffffff));
        }
        if ((uVar23 & 0xffffffff) < (uVar22 & 0xffffffff)) {
          lVar34 = uVar22 - uVar23;
          lVar42 = uVar35 - 4;
          do {
            fVar1 = *(float *)((int)lVar42 + 4);
            fVar2 = *pfVar31;
            *pfVar31 = fVar1;
            fVar1 = (float)((double)(fVar1 - pfVar31[1]) * dVar47 + (double)fVar2);
            pfVar31[1] = fVar1;
            lVar42 = lVar42 + 4;
            *(float *)lVar42 = fVar1;
            pfVar31 = pfVar31 + 2;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float **)(iVar17 + 0x120) = pfVar31;
      if (*(uint *)(iVar17 + 0x198) < *(uint *)(iVar17 + 0x19c)) {
        *(float *)(iVar17 + 0x194) = *(float *)(iVar17 + 0x18c) + *(float *)(iVar17 + 0x194);
        *(uint *)(iVar17 + 0x198) = *(uint *)(iVar17 + 0x198) + 1;
      }
      else {
        *(undefined4 *)(iVar17 + 0x194) = *(undefined4 *)(iVar17 + 400);
      }
      dVar46 = (double)*(float *)(iVar17 + 0x194);
      if (dVar46 != (double)*(float *)(iVar17 + 0x154)) {
        fn_82FC8FD0(dVar46,iVar17 + 0x124);
        *(float *)(iVar17 + 0x154) = (float)dVar46;
      }
      fVar1 = *(float *)(iVar17 + 0x128);
      fVar2 = *(float *)(iVar17 + 300);
      uVar35 = (uVar32 & 0x3fffffff) * 4 + uVar41;
      fVar3 = *(float *)(iVar17 + 0x130);
      if (uVar41 < (uVar35 & 0xffffffff)) {
        uVar26 = ((int)uVar35 - uVar10) + 3;
        uVar22 = uVar41;
        if (3 < (int)(((int)uVar26 >> 2) + (uint)((int)uVar26 < 0 && (uVar26 & 3) != 0))) {
          do {
            pfVar37 = (float *)uVar22;
            fVar1 = *pfVar37 * fVar2 + fVar3 * fVar1;
            *pfVar37 = fVar1;
            fVar1 = pfVar37[1] * fVar2 + fVar1 * fVar3;
            pfVar37[1] = fVar1;
            fVar1 = pfVar37[2] * fVar2 + fVar1 * fVar3;
            pfVar37[2] = fVar1;
            fVar1 = pfVar37[3] * fVar2 + fVar1 * fVar3;
            pfVar37[3] = fVar1;
            uVar22 = uVar22 + 0x10;
          } while ((int)uVar22 < (int)uVar35 + -0xc);
        }
        if ((uVar22 & 0xffffffff) < (uVar35 & 0xffffffff)) {
          lVar42 = uVar22 - 4;
          lVar34 = (((uVar35 - uVar22) - 1 & 0xffffffff) >> 2) + 1;
          do {
            fVar1 = *(float *)((int)lVar42 + 4) * fVar2 + fVar3 * fVar1;
            lVar42 = lVar42 + 4;
            *(float *)lVar42 = fVar1;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
        }
      }
      *(float *)(iVar17 + 0x128) = fVar1;
      if (*(uint *)(iVar17 + 0x168) < *(uint *)(iVar17 + 0x16c)) {
        *(float *)(iVar17 + 0x164) = *(float *)(iVar17 + 0x164) + *(float *)(iVar17 + 0x15c);
        *(uint *)(iVar17 + 0x168) = *(uint *)(iVar17 + 0x168) + 1;
      }
      else {
        *(undefined4 *)(iVar17 + 0x164) = *(undefined4 *)(iVar17 + 0x160);
      }
      fVar1 = *(float *)(iVar17 + 0x164);
      if (*(uint *)(iVar17 + 0x180) < *(uint *)(iVar17 + 0x184)) {
        *(float *)(iVar17 + 0x17c) = *(float *)(iVar17 + 0x174) + *(float *)(iVar17 + 0x17c);
        *(uint *)(iVar17 + 0x180) = *(uint *)(iVar17 + 0x180) + 1;
      }
      else {
        *(undefined4 *)(iVar17 + 0x17c) = *(undefined4 *)(iVar17 + 0x178);
      }
      uVar35 = (uVar32 & 0xffffffff) >> 2;
      altv300_21(in_vs32,in_vs39);
      uVar32 = uVar32 - (uVar32 & 0xfffffffc);
      dVar46 = (double)(float)((double)(float)(dVar44 - (double)*(float *)(iVar17 + 0x17c)) * dVar45
                              );
      altv300_21(in_vs32,in_vs38);
      altv300_21(in_vs32,in_vs40);
      uVar26 = uVar10;
      uVar22 = uVar41;
      for (; iVar40 = (int)uVar39, uVar35 != 0; uVar35 = uVar35 - 1) {
        altv207_13(in_vs32,in_vs43);
        uVar22 = uVar22 + 0x10;
        uVar26 = (uint)uVar22;{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs45,in_vs44,in_vs32); memcpy(in_vs32, &_vt0, 16); }
        pfVar37 = (float *)((int)in_r0 + iVar40 & 0xfffffff0);
        *pfVar37 = in_register_000103c0 * in_register_000103d0 * in_register_000103f0;
        pfVar37[1] = in_register_000103c4 * in_register_000103d0 * in_register_000103f0;
        pfVar37[2] = in_register_000103c8 * in_register_000103d0 * in_register_000103f0;
        pfVar37[3] = in_vr60 * in_register_000103d0 * in_register_000103f0;
        uVar39 = uVar39 + 0x10;
      }
      if ((uVar32 & 0xffffffff) != 0) {
        do {
          pfVar37 = (float *)uVar39;
          *pfVar37 = *(float *)((uVar26 - iVar40) + (int)pfVar37) * (float)(dVar43 - dVar46) +
                     (float)((double)*pfVar37 * dVar46) * fVar1;
          uVar39 = uVar39 + 4;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
    } while ((uVar21 & 0xffffffff) != 0);
  }
  fVar1 = lbl_8217BA98;
  *(float *)(iVar17 + 0x128) = (*(float *)(iVar17 + 0x128) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(iVar17 + 0x13c) = (*(float *)(iVar17 + 0x13c) + fVar1) - fVar1;
  *(short *)((int)puVar19 + 0xe) = (short)uVar16;
  *(bool *)(iVar17 + 0x1a8) = uVar11 == 0x11;
  fn_82F6A590();
  return;
}

