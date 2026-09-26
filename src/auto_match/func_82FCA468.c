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
extern unsigned int fStack_c0;
extern int fn_82A1EFC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8216DDF0;
extern unsigned int lbl_8216E260;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642B0;
extern unsigned int uStack_11c;
extern unsigned int uStack_d4;
extern unsigned int uStack_f8;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82FCA468(undefined8 param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  float *pfVar19;
  float fVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int in_r0;
  int iVar29;
  float *pfVar30;
  uint *puVar31;
  uint *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined4 *puVar38;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar39;
  uint uVar41;
  longlong lVar40;
  float *pfVar42;
  int iVar43;
  ulonglong uVar44;
  undefined4 *puVar47;
  longlong lVar45;
  float *pfVar48;
  int iVar49;
  ulonglong uVar46;
  float *pfVar50;
  float *pfVar51;
  int iVar52;
  longlong lVar53;
  ulonglong uVar54;
  undefined4 *puVar56;
  ulonglong uVar55;
  float *pfVar57;
  int iVar58;
  longlong lVar59;
  ulonglong uVar60;
  float *pfVar61;
  ulonglong uVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 in_vs32 [16];
  undefined1 auVar66 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar67 [16];
  float in_register_00010340;
  float in_register_00010344;
  float in_register_00010348;
  float in_vr52;
  float in_register_00010350;
  float in_register_00010354;
  float in_register_00010358;
  float in_vr53;
  float in_register_00010360;
  float in_register_00010370;
  float in_register_00010390;
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
  uint uStack_11c;
  undefined8 uStack_f8;
  float *apfStack_f0 [4];
  float *pfStack_e0;
  undefined4 uStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  
  iVar29 = fn_82F6A548();
  puVar32 = *(uint **)(iVar29 + 0xc);
  lVar59 = 0x10;
  puVar31 = puVar32 + 0x24;
  uVar60 = ((ulonglong)*puVar32 & 0x3fffffff) << 2;
  do {
    uVar33 = (ulonglong)*puVar31;
    uVar35 = uVar60;
    if (0x3ff < uVar60) {
      uVar35 = 0x400;
    }
    uVar44 = puVar31[-0x10] - uVar33;
    if (uVar35 <= (uVar44 & 0xffffffff)) {
      uVar44 = uVar35;
    }
    lVar53 = 0;
    if ((uVar44 & 0xffffffff) != 0) {
      lVar39 = ((uVar44 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar53 + uVar33);
        lVar53 = lVar53 + 0x80;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
    }
    if ((uVar44 & 0xffffffff) < uVar35) {
      uVar54 = (ulonglong)puVar31[-0x10] - (ulonglong)puVar31[-0x20];
      if ((uVar35 - uVar44 & 0xffffffff) <= (uVar54 & 0xffffffff)) {
        uVar54 = uVar35 - uVar44;
      }
      lVar53 = 0;
      if ((uVar54 & 0xffffffff) != 0) {
        lVar39 = ((uVar54 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar53 + uVar33);
          lVar53 = lVar53 + 0x80;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    lVar59 = lVar59 + -1;
    puVar31 = puVar31 + 1;
  } while (lVar59 != 0);
  puVar31 = puVar32 + 0x7e;
  lVar59 = 8;
  uVar60 = ((ulonglong)*puVar32 & 0x1fffffff) << 3;
  do {
    uVar33 = (ulonglong)*puVar31;
    uVar35 = uVar60;
    if (0x3ff < uVar60) {
      uVar35 = 0x400;
    }
    uVar44 = puVar31[-8] - uVar33;
    if (uVar35 <= (uVar44 & 0xffffffff)) {
      uVar44 = uVar35;
    }
    lVar53 = 0;
    if ((uVar44 & 0xffffffff) != 0) {
      lVar39 = ((uVar44 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockTouch(lVar53 + uVar33);
        lVar53 = lVar53 + 0x80;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
    }
    if ((uVar44 & 0xffffffff) < uVar35) {
      uVar54 = (ulonglong)puVar31[-8] - (ulonglong)puVar31[-0x10];
      if ((uVar35 - uVar44 & 0xffffffff) <= (uVar54 & 0xffffffff)) {
        uVar54 = uVar35 - uVar44;
      }
      lVar53 = 0;
      if ((uVar54 & 0xffffffff) != 0) {
        lVar39 = ((uVar54 - 1 & 0xffffffff) >> 7) + 1;
        do {
          dataCacheBlockTouch(lVar53 + uVar33);
          lVar53 = lVar53 + 0x80;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    lVar59 = lVar59 + -1;
    puVar31 = puVar31 + 1;
  } while (lVar59 != 0);
  dVar63 = (double)*(float *)(iVar29 + 0x6c);
  fVar1 = *(float *)(*(int *)(iVar29 + 4) + 0x24);
  *(undefined4 *)(iVar29 + 0x7c) = 0;
  dVar64 = (double)(fVar1 - *(float *)(iVar29 + 0x78));
  dVar65 = (double)lbl_821AAD20;
  *(float *)(iVar29 + 0x74) = fVar1;
  *(int *)(iVar29 + 0x80) = (int)(longlong)(ABS(dVar64) / dVar63);
  if (dVar64 <= dVar65) {
    dVar63 = -dVar63;
  }
  *(float *)(iVar29 + 0x70) = (float)dVar63;
  fVar1 = *(float *)(*(int *)(iVar29 + 4) + 4);
  dVar64 = (double)(fVar1 - *(float *)(iVar29 + 0x90));
  dVar63 = (double)*(float *)(iVar29 + 0x84);
  *(float *)(iVar29 + 0x8c) = fVar1;
  *(undefined4 *)(iVar29 + 0x94) = 0;
  *(int *)(iVar29 + 0x98) = (int)(longlong)(ABS(dVar64) / dVar63);
  if (dVar64 <= dVar65) {
    dVar63 = -dVar63;
  }
  *(float *)(iVar29 + 0x88) = (float)dVar63;
  dVar63 = (double)*(float *)(iVar29 + 0x9c);
  fVar1 = *(float *)(*(int *)(iVar29 + 4) + 0xc);
  *(undefined4 *)(iVar29 + 0xac) = 0;
  dVar64 = (double)(fVar1 - *(float *)(iVar29 + 0xa8));
  *(float *)(iVar29 + 0xa4) = fVar1;
  *(int *)(iVar29 + 0xb0) = (int)(longlong)(ABS(dVar64) / dVar63);
  if (dVar64 <= dVar65) {
    dVar63 = -dVar63;
  }
  *(float *)(iVar29 + 0xa0) = (float)dVar63;
  dVar63 = (double)*(float *)(iVar29 + 0xb4);
  fVar1 = *(float *)(*(int *)(iVar29 + 4) + 8);
  dVar64 = (double)(fVar1 - *(float *)(iVar29 + 0xc0));
  *(float *)(iVar29 + 0xbc) = fVar1;
  *(undefined4 *)(iVar29 + 0xc4) = 0;
  *(int *)(iVar29 + 200) = (int)(longlong)(ABS(dVar64) / dVar63);
  if (dVar64 <= dVar65) {
    dVar63 = -dVar63;
  }
  *(float *)(iVar29 + 0xb8) = (float)dVar63;
  dVar63 = (double)*(float *)(iVar29 + 0xcc);
  fVar1 = *(float *)(*(int *)(iVar29 + 4) + 0x20);
  *(undefined4 *)(iVar29 + 0xdc) = 0;
  dVar64 = (double)(fVar1 - *(float *)(iVar29 + 0xd8));
  *(float *)(iVar29 + 0xd4) = fVar1;
  *(int *)(iVar29 + 0xe0) = (int)(longlong)(ABS(dVar64) / dVar63);
  if (dVar64 <= dVar65) {
    dVar63 = -dVar63;
  }
  *(float *)(iVar29 + 0xd0) = (float)dVar63;
  dVar63 = (double)*(float *)(iVar29 + 0xe4);
  fVar1 = *(float *)(*(int *)(iVar29 + 4) + 0x1c);
  *(undefined4 *)(iVar29 + 0xf4) = 0;
  dVar64 = (double)(fVar1 - *(float *)(iVar29 + 0xf0));
  *(float *)(iVar29 + 0xec) = fVar1;
  *(int *)(iVar29 + 0xf8) = (int)(longlong)(ABS(dVar64) / dVar63);
  if (dVar64 <= dVar65) {
    dVar63 = -dVar63;
  }
  *(float *)(iVar29 + 0xe8) = (float)dVar63;
  uVar16 = param_2[2];
  uVar60 = (ulonglong)*param_2;
  uVar35 = (ulonglong)*(ushort *)((int)param_2 + 0xe);
  lVar59 = (ulonglong)*(ushort *)(param_2 + 3) * 4 + uVar60;
  uStack_11c = (uint)*(ushort *)((int)param_2 + 0xe);
  uVar33 = uVar35;
  fVar1 = lbl_82002AE0;
  fVar2 = lbl_82002C5C;
  fVar3 = lbl_82005344;
  fVar5 = lbl_82057B54;
  fVar6 = lbl_8216DDF0;
  fVar13 = lbl_8216E260;
  fVar23 = lbl_8216E260;
  fVar24 = lbl_8216DDF0;
  fVar25 = lbl_82057B54;
  fVar26 = lbl_82005344;
  fVar27 = lbl_82002C5C;
  fVar28 = lbl_82002AE0;
  if (uVar16 == 0x11) {
    iVar43 = *(int *)(iVar29 + 4);
    fVar1 = *(float *)(iVar43 + 0x18);
    if ((fVar1 != *(float *)(iVar29 + 0x10c)) || (*(char *)(iVar29 + 0x110) == '\0')) {
      fVar2 = *(float *)(iVar43 + 0x14);
      fVar3 = *(float *)(iVar43 + 0x10);
      *(float *)(iVar29 + 0x10c) = fVar1;
      *(int *)(iVar29 + 0x108) =
           (int)(longlong)((fVar2 + fVar3 + fVar1) * (float)*(uint *)(iVar29 + 0xfc));
    }
    uVar33 = (ulonglong)*(uint *)(iVar29 + 0x108);
    if ((*(ushort *)(param_2 + 3) - uVar35 & 0xffffffff) <= (ulonglong)*(uint *)(iVar29 + 0x108)) {
      uVar33 = *(ushort *)(param_2 + 3) - uVar35;
    }
    lVar53 = (uVar33 & 0x3fffffff) << 2;
    fn_82A1EFC0(uVar35 * 4 + uVar60,0,lVar53);
    fn_82A1EFC0(uVar35 * 4 + lVar59,0,lVar53);
    uVar35 = uVar33 + uVar35;
    lVar53 = *(uint *)(iVar29 + 0x108) - uVar33;
    uStack_11c = (uint)uVar35;
    *(int *)(iVar29 + 0x108) = (int)lVar53;
    uVar33 = uVar35;
    fVar1 = lbl_82002AE0;
    fVar2 = lbl_82002C5C;
    fVar3 = lbl_82005344;
    fVar5 = lbl_82057B54;
    fVar6 = lbl_8216DDF0;
    fVar13 = lbl_8216E260;
    fVar23 = lbl_8216E260;
    fVar24 = lbl_8216DDF0;
    fVar25 = lbl_82057B54;
    fVar26 = lbl_82005344;
    fVar27 = lbl_82002C5C;
    fVar28 = lbl_82002AE0;
    if (lVar53 != 0) {
      param_2[2] = 0x2d;
      fVar1 = lbl_82002AE0;
      fVar2 = lbl_82002C5C;
      fVar3 = lbl_82005344;
      fVar5 = lbl_82057B54;
      fVar6 = lbl_8216DDF0;
      fVar13 = lbl_8216E260;
      fVar23 = lbl_8216E260;
      fVar24 = lbl_8216DDF0;
      fVar25 = lbl_82057B54;
      fVar26 = lbl_82005344;
      fVar27 = lbl_82002C5C;
      fVar28 = lbl_82002AE0;
    }
  }
  while (lbl_82002AE0 = fVar28, lbl_82002C5C = fVar27, lbl_82005344 = fVar26, lbl_82057B54 = fVar25,
        lbl_8216DDF0 = fVar24, lbl_8216E260 = fVar23, fVar23 = lbl_8216E260, fVar24 = lbl_8216DDF0,
        fVar25 = lbl_82057B54, fVar26 = lbl_82005344, fVar27 = lbl_82002C5C, fVar28 = lbl_82002AE0,
        lbl_82002AE0 = fVar1, lbl_82002C5C = fVar2, lbl_82005344 = fVar3, lbl_82057B54 = fVar5,
        lbl_8216DDF0 = fVar6, lbl_8216E260 = fVar13, (uVar35 & 0xffffffff) != 0) {
    iVar43 = (int)uVar60;
    uVar44 = uVar35;
    if (0x1f < (uVar35 & 0xffffffff)) {
      uVar44 = 0x20;
    }
    iVar58 = *(int *)(iVar29 + 0x28);
    uVar35 = uVar35 - uVar44;
    puVar56 = *(undefined4 **)(iVar58 + 8);
    puVar47 = *(undefined4 **)(iVar58 + 0xc);
    uVar41 = (int)puVar47 - (int)puVar56 >> 2;
    uVar54 = (ulonglong)(int)uVar41;
    if ((ulonglong)uVar41 < (uVar44 & 0xffffffff)) {
      uVar34 = 0;
      if ((uVar44 & 0xffffffff) != 0) {
        lVar53 = uVar60 - 4;
        puVar38 = (undefined4 *)(*(int *)(iVar29 + 0x30) + -4);
        uVar62 = uVar54;
        do {
          uVar36 = uVar62 & 0xffffffff;
          while (uVar36 != 0) {
            uVar4 = *puVar56;
            lVar53 = lVar53 + 4;
            *puVar56 = *(undefined4 *)lVar53;
            puVar56 = puVar56 + 1;
            puVar38 = puVar38 + 1;
            *puVar38 = uVar4;
            uVar62 = uVar62 - 1;
            uVar36 = uVar62;
          }
          if (puVar56 == puVar47) {
            puVar56 = *(undefined4 **)(iVar58 + 4);
          }
          uVar34 = uVar34 + uVar54;
          uVar41 = (int)puVar47 - (int)puVar56 >> 2;
          uVar54 = (ulonglong)(int)uVar41;
          uVar62 = uVar44 - uVar34;
          if ((ulonglong)uVar41 < (uVar44 - uVar34 & 0xffffffff)) {
            uVar62 = uVar54;
          }
        } while ((uVar34 & 0xffffffff) < (uVar44 & 0xffffffff));
      }
    }
    else {
      iVar49 = iVar43 - (int)puVar56;
      puVar47 = (undefined4 *)(*(int *)(iVar29 + 0x30) + -4);
      uVar54 = uVar44;
      do {
        uVar4 = *puVar56;
        *puVar56 = *(undefined4 *)(iVar49 + (int)puVar56);
        puVar56 = puVar56 + 1;
        puVar47 = puVar47 + 1;
        *puVar47 = uVar4;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
    }
    *(undefined4 **)(iVar58 + 8) = puVar56;
    puVar47 = &uStack_d4;
    puVar56 = (undefined4 *)0x831bc6f8;
    lVar53 = 5;
    iVar58 = *(int *)(iVar29 + 0x30);
    iVar49 = *(int *)(iVar29 + 0x2c);
    do {
      puVar56 = puVar56 + 1;
      puVar47 = puVar47 + 1;
      *puVar47 = *puVar56;
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
    puVar47 = (undefined4 *)((int)&uStack_f8 + 4);
    puVar56 = (undefined4 *)(iVar49 + -4);
    lVar53 = 5;
    do {
      puVar56 = puVar56 + 1;
      puVar47 = puVar47 + 1;
      *puVar47 = *puVar56;
      fVar6 = fStack_c0;
      fVar5 = afStack_d0[3];
      fVar3 = afStack_d0[2];
      fVar2 = afStack_d0[1];
      fVar1 = afStack_d0[0];
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
    uVar54 = (ulonglong)*(uint *)(iVar49 + 0x34);
    if ((uVar44 & 0xffffffff) < uVar54) {
      pfVar30 = (float *)(iVar58 + -4);
      pfVar61 = (float *)(iVar58 + -4);
      uVar54 = uVar44;
      do {
        fVar1 = *apfStack_f0[0];
        pfVar30 = pfVar30 + 1;
        *apfStack_f0[0] = *pfVar30;
        apfStack_f0[0] = apfStack_f0[0] + 1;
        fVar2 = *apfStack_f0[2];
        apfStack_f0[2] = apfStack_f0[2] + 1;
        fVar3 = *pfStack_e0;
        pfStack_e0 = pfStack_e0 + 1;
        fVar5 = *apfStack_f0[1];
        fVar6 = *apfStack_f0[3];
        apfStack_f0[3] = apfStack_f0[3] + 1;
        apfStack_f0[1] = apfStack_f0[1] + 1;
        pfVar61 = pfVar61 + 1;
        *pfVar61 = afStack_d0[1] * fVar2 + fVar6 * afStack_d0[2] + afStack_d0[0] * fVar5 +
                   afStack_d0[3] * fVar3 + fStack_c0 * fVar1;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
      *(int *)(iVar49 + 0x34) = *(int *)(iVar49 + 0x34) - (int)uVar44;
    }
    else {
      uVar34 = 0;
      if ((uVar44 & 0xffffffff) != 0) {
        pfVar30 = (float *)(iVar58 + -4);
        pfVar61 = (float *)(iVar58 + -4);
        uVar62 = uVar54;
        do {
          do {
            fVar13 = *apfStack_f0[0];
            pfVar30 = pfVar30 + 1;
            *apfStack_f0[0] = *pfVar30;
            apfStack_f0[0] = apfStack_f0[0] + 1;
            fVar14 = *pfStack_e0;
            fVar15 = *apfStack_f0[1];
            apfStack_f0[1] = apfStack_f0[1] + 1;
            fVar11 = *apfStack_f0[3];
            fVar12 = *apfStack_f0[2];
            pfStack_e0 = pfStack_e0 + 1;
            apfStack_f0[2] = apfStack_f0[2] + 1;
            apfStack_f0[3] = apfStack_f0[3] + 1;
            pfVar61 = pfVar61 + 1;
            *pfVar61 = fVar2 * fVar12 + fVar11 * fVar3 + fVar1 * fVar15 + fVar5 * fVar14 +
                       fVar6 * fVar13;
            uVar54 = uVar54 - 1;
          } while (uVar54 != 0);
          uVar34 = uVar62 + uVar34;
          lVar53 = *(uint *)(iVar49 + 0x34) - uVar62;
          *(int *)(iVar49 + 0x34) = (int)lVar53;
          if (lVar53 == 0) {
            iVar58 = *(int *)(iVar49 + 0x38);
            apfStack_f0[iVar58] = *(float **)(iVar49 + 0x18);
            uVar4 = *(undefined4 *)((iVar58 + 8) * 4 + iVar49);
            *(int *)(iVar49 + 0x38) = iVar58 + 1;
            *(undefined4 *)(iVar49 + 0x34) = uVar4;
            if (iVar58 + 1 == 5) {
              *(undefined4 *)(iVar49 + 0x38) = 0;
            }
          }
          uVar54 = (ulonglong)*(uint *)(iVar49 + 0x34);
          if ((uVar44 - uVar34 & 0xffffffff) <= (ulonglong)*(uint *)(iVar49 + 0x34)) {
            uVar54 = uVar44 - uVar34;
          }
          uVar62 = uVar54;
        } while ((uVar34 & 0xffffffff) < (uVar44 & 0xffffffff));
      }
    }
    puVar56 = (undefined4 *)((int)&uStack_f8 + 4);
    puVar47 = (undefined4 *)(iVar49 + -4);
    lVar53 = 5;
    do {
      puVar56 = puVar56 + 1;
      puVar47 = puVar47 + 1;
      *puVar47 = *puVar56;
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
    iVar58 = *(int *)(iVar29 + 0x24);
    puVar56 = *(undefined4 **)(iVar58 + 0xc);
    puVar47 = *(undefined4 **)(iVar58 + 8);
    uVar41 = (int)puVar56 - (int)puVar47 >> 2;
    uVar54 = (ulonglong)(int)uVar41;
    if ((ulonglong)uVar41 < (uVar44 & 0xffffffff)) {
      uVar34 = 0;
      if ((uVar44 & 0xffffffff) != 0) {
        puVar38 = (undefined4 *)(*(int *)(iVar29 + 0x30) + -4);
        lVar53 = uVar60 - 4;
        uVar62 = uVar54;
        do {
          uVar36 = 0;
          if (3 < (int)uVar62) {
            do {
              uVar36 = uVar36 + 4;
              uVar4 = *puVar47;
              *puVar47 = puVar38[1];
              uVar7 = puVar47[1];
              puVar47[1] = puVar38[2];
              uVar8 = puVar47[2];
              puVar47[2] = puVar38[3];
              uVar9 = puVar47[3];
              uVar10 = puVar38[4];
              puVar38 = puVar38 + 4;
              iVar49 = (int)lVar53;
              *(undefined4 *)(iVar49 + 4) = uVar4;
              *(undefined4 *)(iVar49 + 8) = uVar7;
              *(undefined4 *)(iVar49 + 0xc) = uVar8;
              *(undefined4 *)(iVar49 + 0x10) = uVar9;
              lVar53 = lVar53 + 0x10;
              puVar47[3] = uVar10;
              puVar47 = puVar47 + 4;
            } while ((uVar36 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
          }
          if ((uVar36 & 0xffffffff) < (uVar62 & 0xffffffff)) {
            lVar39 = uVar62 - uVar36;
            do {
              uVar4 = *puVar47;
              puVar38 = puVar38 + 1;
              *puVar47 = *puVar38;
              puVar47 = puVar47 + 1;
              lVar53 = lVar53 + 4;
              *(undefined4 *)lVar53 = uVar4;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
          }
          if (puVar47 == puVar56) {
            puVar47 = *(undefined4 **)(iVar58 + 4);
          }
          uVar34 = uVar34 + uVar54;
          uVar41 = (int)puVar56 - (int)puVar47 >> 2;
          uVar54 = (ulonglong)(int)uVar41;
          uVar62 = uVar54;
          if ((uVar44 - uVar34 & 0xffffffff) <= (ulonglong)uVar41) {
            uVar62 = uVar44 - uVar34;
          }
        } while ((uVar34 & 0xffffffff) < (uVar44 & 0xffffffff));
      }
    }
    else {
      puVar56 = (undefined4 *)(*(int *)(iVar29 + 0x30) + -4);
      lVar53 = uVar60 - 4;
      uVar54 = uVar44;
      do {
        uVar4 = *puVar47;
        puVar56 = puVar56 + 1;
        *puVar47 = *puVar56;
        puVar47 = puVar47 + 1;
        lVar53 = lVar53 + 4;
        *(undefined4 *)lVar53 = uVar4;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
    }
    *(undefined4 **)(iVar58 + 8) = puVar47;
    iVar58 = *(int *)(iVar29 + 0x28);
    puVar56 = *(undefined4 **)(iVar58 + 0x1c);
    puVar47 = *(undefined4 **)(iVar58 + 0x18);
    uVar41 = (int)puVar56 - (int)puVar47 >> 2;
    uVar54 = (ulonglong)(int)uVar41;
    if ((ulonglong)uVar41 < (uVar44 & 0xffffffff)) {
      uVar34 = 0;
      if ((uVar44 & 0xffffffff) != 0) {
        lVar53 = lVar59 + -4;
        puVar38 = (undefined4 *)(*(int *)(iVar29 + 0x34) + -4);
        uVar62 = uVar54;
        do {
          uVar36 = uVar62 & 0xffffffff;
          while (uVar36 != 0) {
            uVar4 = *puVar47;
            lVar53 = lVar53 + 4;
            *puVar47 = *(undefined4 *)lVar53;
            puVar47 = puVar47 + 1;
            puVar38 = puVar38 + 1;
            *puVar38 = uVar4;
            uVar62 = uVar62 - 1;
            uVar36 = uVar62;
          }
          if (puVar47 == puVar56) {
            puVar47 = *(undefined4 **)(iVar58 + 0x14);
          }
          uVar34 = uVar34 + uVar54;
          uVar41 = (int)puVar56 - (int)puVar47 >> 2;
          uVar54 = (ulonglong)(int)uVar41;
          uVar62 = uVar44 - uVar34;
          if ((ulonglong)uVar41 < (uVar44 - uVar34 & 0xffffffff)) {
            uVar62 = uVar54;
          }
        } while ((uVar34 & 0xffffffff) < (uVar44 & 0xffffffff));
      }
    }
    else {
      iVar49 = (int)lVar59 - (int)puVar47;
      puVar56 = (undefined4 *)(*(int *)(iVar29 + 0x34) + -4);
      uVar54 = uVar44;
      do {
        uVar4 = *puVar47;
        *puVar47 = *(undefined4 *)((int)puVar47 + iVar49);
        puVar47 = puVar47 + 1;
        puVar56 = puVar56 + 1;
        *puVar56 = uVar4;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
    }
    *(undefined4 **)(iVar58 + 0x18) = puVar47;
    puVar47 = &uStack_d4;
    iVar58 = *(int *)(iVar29 + 0x34);
    puVar56 = (undefined4 *)0x831bc6f8;
    lVar53 = 5;
    iVar49 = *(int *)(iVar29 + 0x2c);
    do {
      puVar56 = puVar56 + 1;
      puVar47 = puVar47 + 1;
      *puVar47 = *puVar56;
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
    puVar47 = (undefined4 *)((int)&uStack_f8 + 4);
    puVar56 = (undefined4 *)(iVar49 + 0x38);
    lVar53 = 5;
    do {
      puVar56 = puVar56 + 1;
      puVar47 = puVar47 + 1;
      *puVar47 = *puVar56;
      fVar6 = fStack_c0;
      fVar5 = afStack_d0[3];
      fVar3 = afStack_d0[2];
      fVar2 = afStack_d0[1];
      fVar1 = afStack_d0[0];
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
    uVar54 = (ulonglong)*(uint *)(iVar49 + 0x70);
    if ((uVar44 & 0xffffffff) < uVar54) {
      pfVar30 = (float *)(iVar58 + -4);
      pfVar61 = (float *)(iVar58 + -4);
      uVar54 = uVar44;
      do {
        fVar1 = *apfStack_f0[0];
        pfVar30 = pfVar30 + 1;
        *apfStack_f0[0] = *pfVar30;
        apfStack_f0[0] = apfStack_f0[0] + 1;
        fVar2 = *apfStack_f0[2];
        apfStack_f0[2] = apfStack_f0[2] + 1;
        fVar3 = *apfStack_f0[1];
        fVar5 = *pfStack_e0;
        apfStack_f0[1] = apfStack_f0[1] + 1;
        fVar6 = *apfStack_f0[3];
        apfStack_f0[3] = apfStack_f0[3] + 1;
        pfStack_e0 = pfStack_e0 + 1;
        pfVar61 = pfVar61 + 1;
        *pfVar61 = afStack_d0[2] * fVar6 + fVar3 * afStack_d0[0] + afStack_d0[1] * fVar2 +
                   fVar5 * afStack_d0[3] + fStack_c0 * fVar1;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
      *(int *)(iVar49 + 0x70) = *(int *)(iVar49 + 0x70) - (int)uVar44;
    }
    else {
      uVar34 = 0;
      if ((uVar44 & 0xffffffff) != 0) {
        pfVar30 = (float *)(iVar58 + -4);
        pfVar61 = (float *)(iVar58 + -4);
        uVar62 = uVar54;
        do {
          do {
            fVar13 = *apfStack_f0[0];
            pfVar30 = pfVar30 + 1;
            *apfStack_f0[0] = *pfVar30;
            apfStack_f0[0] = apfStack_f0[0] + 1;
            fVar14 = *apfStack_f0[2];
            apfStack_f0[2] = apfStack_f0[2] + 1;
            fVar15 = *apfStack_f0[1];
            fVar11 = *pfStack_e0;
            apfStack_f0[1] = apfStack_f0[1] + 1;
            fVar12 = *apfStack_f0[3];
            apfStack_f0[3] = apfStack_f0[3] + 1;
            pfStack_e0 = pfStack_e0 + 1;
            pfVar61 = pfVar61 + 1;
            *pfVar61 = fVar3 * fVar12 + fVar15 * fVar1 + fVar2 * fVar14 + fVar11 * fVar5 +
                       fVar6 * fVar13;
            uVar54 = uVar54 - 1;
          } while (uVar54 != 0);
          uVar34 = uVar62 + uVar34;
          lVar53 = *(uint *)(iVar49 + 0x70) - uVar62;
          *(int *)(iVar49 + 0x70) = (int)lVar53;
          if (lVar53 == 0) {
            iVar58 = *(int *)(iVar49 + 0x74);
            apfStack_f0[iVar58] = *(float **)(iVar49 + 0x54);
            uVar4 = *(undefined4 *)((iVar58 + 8) * 4 + iVar49 + 0x3c);
            *(int *)(iVar49 + 0x74) = iVar58 + 1;
            *(undefined4 *)(iVar49 + 0x70) = uVar4;
            if (iVar58 + 1 == 5) {
              *(undefined4 *)(iVar49 + 0x74) = 0;
            }
          }
          uVar54 = (ulonglong)*(uint *)(iVar49 + 0x70);
          if ((uVar44 - uVar34 & 0xffffffff) <= (ulonglong)*(uint *)(iVar49 + 0x70)) {
            uVar54 = uVar44 - uVar34;
          }
          uVar62 = uVar54;
        } while ((uVar34 & 0xffffffff) < (uVar44 & 0xffffffff));
      }
    }
    puVar56 = (undefined4 *)((int)&uStack_f8 + 4);
    puVar47 = (undefined4 *)(iVar49 + 0x38);
    lVar53 = 5;
    do {
      puVar56 = puVar56 + 1;
      puVar47 = puVar47 + 1;
      *puVar47 = *puVar56;
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
    iVar58 = *(int *)(iVar29 + 0x24);
    puVar56 = *(undefined4 **)(iVar58 + 0x1c);
    puVar47 = *(undefined4 **)(iVar58 + 0x18);
    uVar41 = (int)puVar56 - (int)puVar47 >> 2;
    uVar54 = (ulonglong)(int)uVar41;
    if ((ulonglong)uVar41 < (uVar44 & 0xffffffff)) {
      uVar34 = 0;
      if ((uVar44 & 0xffffffff) != 0) {
        puVar38 = (undefined4 *)(*(int *)(iVar29 + 0x34) + -4);
        lVar53 = lVar59 + -4;
        uVar62 = uVar54;
        do {
          uVar36 = 0;
          if (3 < (int)uVar62) {
            do {
              uVar36 = uVar36 + 4;
              uVar4 = *puVar47;
              *puVar47 = puVar38[1];
              uVar7 = puVar47[1];
              uVar8 = puVar47[2];
              uVar9 = puVar47[3];
              iVar49 = (int)lVar53;
              *(undefined4 *)(iVar49 + 4) = uVar4;
              *(undefined4 *)(iVar49 + 8) = uVar7;
              *(undefined4 *)(iVar49 + 0xc) = uVar8;
              *(undefined4 *)(iVar49 + 0x10) = uVar9;
              lVar53 = lVar53 + 0x10;
              puVar47[1] = puVar38[2];
              puVar47[2] = puVar38[3];
              puVar18 = puVar38 + 4;
              puVar38 = puVar38 + 4;
              puVar47[3] = *puVar18;
              puVar47 = puVar47 + 4;
            } while ((uVar36 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
          }
          if ((uVar36 & 0xffffffff) < (uVar62 & 0xffffffff)) {
            lVar39 = uVar62 - uVar36;
            do {
              uVar4 = *puVar47;
              puVar38 = puVar38 + 1;
              *puVar47 = *puVar38;
              puVar47 = puVar47 + 1;
              lVar53 = lVar53 + 4;
              *(undefined4 *)lVar53 = uVar4;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
          }
          if (puVar47 == puVar56) {
            puVar47 = *(undefined4 **)(iVar58 + 0x14);
          }
          uVar34 = uVar34 + uVar54;
          uVar41 = (int)puVar56 - (int)puVar47 >> 2;
          uVar54 = (ulonglong)(int)uVar41;
          uVar62 = uVar54;
          if ((uVar44 - uVar34 & 0xffffffff) <= (ulonglong)uVar41) {
            uVar62 = uVar44 - uVar34;
          }
        } while ((uVar34 & 0xffffffff) < (uVar44 & 0xffffffff));
      }
    }
    else {
      puVar56 = (undefined4 *)(*(int *)(iVar29 + 0x34) + -4);
      lVar53 = lVar59 + -4;
      uVar54 = uVar44;
      do {
        uVar4 = *puVar47;
        puVar56 = puVar56 + 1;
        *puVar47 = *puVar56;
        puVar47 = puVar47 + 1;
        lVar53 = lVar53 + 4;
        *(undefined4 *)lVar53 = uVar4;
        uVar54 = uVar54 - 1;
      } while (uVar54 != 0);
    }
    *(undefined4 **)(iVar58 + 0x18) = puVar47;
    uVar54 = (uVar44 & 0xffffffff) >> 2;
    uVar36 = uVar44 - (uVar44 & 0xfffffffc);
    altv207_13(in_vs32,in_vs41);
    iVar58 = *(int *)(iVar29 + 0x40);
    pfVar30 = (float *)((uint)(&lbl_832642B0 + in_r0) & 0xfffffff0);
    *pfVar30 = in_register_000103f0;
    pfVar30[1] = in_register_000103f4;
    pfVar30[2] = in_register_000103f8;
    pfVar30[3] = in_vr63;
    uVar62 = uVar60;
    lVar53 = lVar59;
    for (uVar34 = uVar54; uVar34 != 0; uVar34 = uVar34 - 1) {
      altv207_13(in_vs32,in_vs42);
      uVar62 = uVar62 + 0x10;
      iVar43 = (int)uVar62;
      altv207_13(in_vs32,in_vs43);
      lVar53 = lVar53 + 0x10;
      pfVar30 = (float *)(in_r0 + iVar58 & 0xfffffff0);
      *pfVar30 = (in_register_000103d0 + in_register_000103e0) * in_register_000103f0;
      pfVar30[1] = (in_register_000103d4 + in_register_000103e4) * in_register_000103f4;
      pfVar30[2] = (in_register_000103d8 + in_register_000103e8) * in_register_000103f8;
      pfVar30[3] = (in_vr61 + in_vr62) * in_vr63;
      iVar58 = iVar58 + 0x10;
    }
    if ((uVar36 & 0xffffffff) != 0) {
      iVar49 = (int)lVar53;
      do {
        pfVar30 = (float *)lVar53;
        *(float *)((int)pfVar30 + (iVar58 - iVar49)) =
             (*(float *)((int)pfVar30 + (iVar43 - iVar49)) + *pfVar30) * fVar24;
        lVar53 = lVar53 + 4;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    uVar62 = (ulonglong)*(uint *)(iVar29 + 0x40);
    lVar53 = (uVar44 & 0x3fffffff) * 4;
    fVar1 = *(float *)(iVar29 + 0x18);
    uVar34 = uVar62 + lVar53;
    fVar2 = *(float *)(iVar29 + 0x1c);
    fVar3 = *(float *)(iVar29 + 0x20);
    if (uVar62 < (uVar34 & 0xffffffff)) {
      uVar41 = ((int)uVar34 - *(uint *)(iVar29 + 0x40)) + 3;
      if (3 < (int)(((int)uVar41 >> 2) + (uint)((int)uVar41 < 0 && (uVar41 & 3) != 0))) {
        do {
          pfVar30 = (float *)uVar62;
          fVar5 = *pfVar30;
          fVar14 = fVar5 - fVar1;
          fVar6 = pfVar30[1];
          fVar13 = pfVar30[2];
          fVar1 = pfVar30[3];
          fVar14 = fVar3 * fVar2 + fVar14;
          *pfVar30 = fVar14;
          fVar2 = fVar3 * fVar14 + (fVar6 - fVar5);
          pfVar30[1] = fVar2;
          fVar2 = fVar3 * fVar2 + (fVar13 - fVar6);
          pfVar30[2] = fVar2;
          fVar2 = fVar3 * fVar2 + (fVar1 - fVar13);
          pfVar30[3] = fVar2;
          uVar62 = uVar62 + 0x10;
        } while ((int)uVar62 < (int)uVar34 + -0xc);
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar62 - 4;
        lVar45 = (((uVar34 - uVar62) - 1 & 0xffffffff) >> 2) + 1;
        fVar5 = fVar1;
        do {
          fVar1 = *(float *)((int)lVar39 + 4);
          fVar2 = fVar3 * fVar2 + (fVar1 - fVar5);
          lVar39 = lVar39 + 4;
          *(float *)lVar39 = fVar2;
          lVar45 = lVar45 + -1;
          fVar5 = fVar1;
        } while (lVar45 != 0);
      }
    }
    *(float *)(iVar29 + 0x18) = fVar1;
    *(float *)(iVar29 + 0x1c) = fVar2;
    if (*(uint *)(iVar29 + 0xf4) < *(uint *)(iVar29 + 0xf8)) {
      *(float *)(iVar29 + 0xf0) = *(float *)(iVar29 + 0xe8) + *(float *)(iVar29 + 0xf0);
      *(uint *)(iVar29 + 0xf4) = *(uint *)(iVar29 + 0xf4) + 1;
    }
    else {
      *(undefined4 *)(iVar29 + 0xf0) = *(undefined4 *)(iVar29 + 0xec);
    }
    fVar1 = *(float *)(iVar29 + 0xf0);
    pfVar30 = *(float **)(iVar29 + 0x3c);
    bVar22 = (int)uVar35 != 0;
    pfVar61 = *(float **)(iVar29 + 0x38);
    pfVar57 = *(float **)(iVar29 + 0x40);
    iVar43 = *(int *)(iVar29 + 0xc);
    if (bVar22) {
      puVar32 = (uint *)(iVar43 + 0x50);
      lVar39 = 0x10;
      uVar34 = ((ulonglong)*(uint *)(iVar43 + 4) & 0x3fffffff) * 4;
      do {
        uVar36 = (ulonglong)*puVar32;
        uVar62 = puVar32[0x10] + uVar34;
        if (uVar36 <= (uVar62 & 0xffffffff)) {
          uVar62 = (ulonglong)puVar32[-0x10];
        }
        uVar37 = uVar34;
        if (0x3ff < uVar34) {
          uVar37 = 0x400;
        }
        uVar46 = uVar36 - uVar62;
        if (uVar37 <= (uVar36 - uVar62 & 0xffffffff)) {
          uVar46 = uVar37;
        }
        lVar45 = 0;
        if ((uVar46 & 0xffffffff) != 0) {
          lVar40 = ((uVar46 - 1 & 0xffffffff) >> 7) + 1;
          do {
            dataCacheBlockTouch(lVar45 + uVar62);
            lVar45 = lVar45 + 0x80;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
        }
        if ((uVar46 & 0xffffffff) < uVar37) {
          uVar55 = uVar36 - puVar32[-0x10];
          if ((uVar37 - uVar46 & 0xffffffff) <= (uVar36 - puVar32[-0x10] & 0xffffffff)) {
            uVar55 = uVar37 - uVar46;
          }
          lVar45 = 0;
          if ((uVar55 & 0xffffffff) != 0) {
            lVar40 = ((uVar55 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar45 + uVar62);
              lVar45 = lVar45 + 0x80;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
          }
        }
        lVar39 = lVar39 + -1;
        puVar32 = puVar32 + 1;
      } while (lVar39 != 0);
    }
    pfVar50 = *(float **)(iVar43 + 0x90);
    fVar2 = *(float *)(iVar43 + 0x110);
    pfVar51 = *(float **)(iVar43 + 0x50);
    fVar3 = *(float *)(iVar43 + 0x150);
    uVar41 = (int)pfVar51 - (int)pfVar50 >> 2;
    uVar62 = (ulonglong)(int)uVar41;
    uVar34 = uVar44;
    if (((ulonglong)uVar41 < (uVar44 & 0xffffffff)) &&
       (uVar34 = uVar62, (ulonglong)uVar41 != (uVar44 & 0xffffffff))) {
      uVar34 = 0;
      pfVar48 = pfVar61;
      pfVar42 = pfVar57;
      if (3 < (int)uVar41) {
        do {
          uVar34 = uVar34 + 4;
          fVar5 = fVar3 * *pfVar50 + *pfVar42 * fVar2;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          fVar5 = *(float *)((int)pfVar48 + (int)pfVar57 + (4 - (int)pfVar61)) * fVar2 +
                  pfVar50[1] * fVar3;
          pfVar50[1] = fVar5;
          pfVar48[1] = fVar5;
          fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
          pfVar50[2] = fVar5;
          pfVar48[2] = fVar5;
          fVar5 = pfVar50[3] * fVar3 + pfVar42[3] * fVar2;
          pfVar50[3] = fVar5;
          pfVar48[3] = fVar5;
          pfVar42 = pfVar42 + 4;
          pfVar48 = pfVar48 + 4;
          pfVar50 = pfVar50 + 4;
        } while ((uVar34 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
      }
      if ((uVar34 & 0xffffffff) < (ulonglong)uVar41) {
        lVar39 = uVar62 - uVar34;
        do {
          fVar5 = *pfVar42;
          pfVar42 = pfVar42 + 1;
          fVar5 = fVar3 * *pfVar50 + fVar5 * fVar2;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          pfVar48 = pfVar48 + 1;
          pfVar50 = pfVar50 + 1;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
      if (pfVar51 <= pfVar50) {
        pfVar50 = *(float **)(iVar43 + 0x10);
      }
      uVar41 = (int)pfVar51 - (int)pfVar50 >> 2;
      uVar34 = (longlong)(int)uVar41;
      if ((uVar44 - uVar62 & 0xffffffff) <= (ulonglong)uVar41) {
        uVar34 = uVar44 - uVar62;
      }
      uVar62 = 0;
      if (3 < (int)uVar34) {
        do {
          uVar62 = uVar62 + 4;
          fVar5 = fVar3 * *pfVar50 + *pfVar42 * fVar2;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          fVar5 = pfVar50[1] * fVar3 + pfVar42[1] * fVar2;
          pfVar50[1] = fVar5;
          pfVar48[1] = fVar5;
          fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
          pfVar50[2] = fVar5;
          pfVar48[2] = fVar5;
          fVar5 = pfVar50[3] * fVar3 + pfVar42[3] * fVar2;
          pfVar50[3] = fVar5;
          pfVar48[3] = fVar5;
          pfVar42 = pfVar42 + 4;
          pfVar48 = pfVar48 + 4;
          pfVar50 = pfVar50 + 4;
        } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar34 - uVar62;
        iVar58 = (int)pfVar42 - (int)pfVar48;
        do {
          fVar5 = *(float *)((int)pfVar48 + iVar58) * fVar2 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          pfVar48 = pfVar48 + 1;
          pfVar50 = pfVar50 + 1;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    else {
      uVar62 = 0;
      pfVar51 = pfVar61;
      pfVar48 = pfVar57;
      if (3 < (int)uVar34) {
        do {
          uVar62 = uVar62 + 4;
          fVar5 = fVar3 * *pfVar50 + *pfVar48 * fVar2;
          *pfVar50 = fVar5;
          *pfVar51 = fVar5;
          fVar5 = *(float *)((int)pfVar51 + (int)pfVar57 + (4 - (int)pfVar61)) * fVar2 +
                  pfVar50[1] * fVar3;
          pfVar50[1] = fVar5;
          pfVar51[1] = fVar5;
          fVar5 = pfVar50[2] * fVar3 + pfVar48[2] * fVar2;
          pfVar50[2] = fVar5;
          pfVar51[2] = fVar5;
          fVar5 = pfVar50[3] * fVar3 + pfVar48[3] * fVar2;
          pfVar50[3] = fVar5;
          pfVar51[3] = fVar5;
          pfVar51 = pfVar51 + 4;
          pfVar48 = pfVar48 + 4;
          pfVar50 = pfVar50 + 4;
        } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar34 - uVar62;
        iVar58 = (int)pfVar48 - (int)pfVar50;
        iVar49 = (int)pfVar51 - (int)pfVar50;
        do {
          fVar5 = *(float *)((int)pfVar50 + iVar58) * fVar2 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *(float *)((int)pfVar50 + iVar49) = fVar5;
          pfVar50 = pfVar50 + 1;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    *(float **)(iVar43 + 0x90) = pfVar50;
    pfVar50 = *(float **)(iVar43 + 0xb0);
    fVar2 = *(float *)(iVar43 + 0x130);
    pfVar51 = *(float **)(iVar43 + 0x70);
    fVar3 = *(float *)(iVar43 + 0x170);
    uVar41 = (int)pfVar51 - (int)pfVar50 >> 2;
    uVar62 = (ulonglong)(int)uVar41;
    uVar34 = uVar44;
    if (((ulonglong)uVar41 < (uVar44 & 0xffffffff)) &&
       (uVar34 = uVar62, (ulonglong)uVar41 != (uVar44 & 0xffffffff))) {
      uVar34 = 0;
      pfVar48 = pfVar30;
      pfVar42 = pfVar57;
      if (3 < (int)uVar41) {
        do {
          uVar34 = uVar34 + 4;
          fVar5 = fVar2 * *pfVar42 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          fVar5 = *(float *)((int)pfVar48 + (int)pfVar57 + (4 - (int)pfVar30)) * fVar2 +
                  pfVar50[1] * fVar3;
          pfVar50[1] = fVar5;
          pfVar48[1] = fVar5;
          fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
          pfVar50[2] = fVar5;
          pfVar48[2] = fVar5;
          fVar5 = pfVar50[3] * fVar3 + pfVar42[3] * fVar2;
          pfVar50[3] = fVar5;
          pfVar48[3] = fVar5;
          pfVar42 = pfVar42 + 4;
          pfVar48 = pfVar48 + 4;
          pfVar50 = pfVar50 + 4;
        } while ((uVar34 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
      }
      if ((uVar34 & 0xffffffff) < (ulonglong)uVar41) {
        lVar39 = uVar62 - uVar34;
        do {
          fVar5 = *pfVar42;
          pfVar42 = pfVar42 + 1;
          fVar5 = fVar2 * fVar5 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          pfVar48 = pfVar48 + 1;
          pfVar50 = pfVar50 + 1;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
      if (pfVar51 <= pfVar50) {
        pfVar50 = *(float **)(iVar43 + 0x30);
      }
      uVar41 = (int)pfVar51 - (int)pfVar50 >> 2;
      uVar34 = (longlong)(int)uVar41;
      if ((uVar44 - uVar62 & 0xffffffff) <= (ulonglong)uVar41) {
        uVar34 = uVar44 - uVar62;
      }
      uVar62 = 0;
      if (3 < (int)uVar34) {
        do {
          uVar62 = uVar62 + 4;
          fVar5 = fVar2 * *pfVar42 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          fVar5 = pfVar50[1] * fVar3 + pfVar42[1] * fVar2;
          pfVar50[1] = fVar5;
          pfVar48[1] = fVar5;
          fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
          pfVar50[2] = fVar5;
          pfVar48[2] = fVar5;
          fVar5 = pfVar50[3] * fVar3 + pfVar42[3] * fVar2;
          pfVar50[3] = fVar5;
          pfVar48[3] = fVar5;
          pfVar42 = pfVar42 + 4;
          pfVar48 = pfVar48 + 4;
          pfVar50 = pfVar50 + 4;
        } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar34 - uVar62;
        iVar58 = (int)pfVar42 - (int)pfVar48;
        do {
          fVar5 = *(float *)((int)pfVar48 + iVar58) * fVar2 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *pfVar48 = fVar5;
          pfVar48 = pfVar48 + 1;
          pfVar50 = pfVar50 + 1;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    else {
      uVar62 = 0;
      pfVar51 = pfVar30;
      pfVar48 = pfVar57;
      if (3 < (int)uVar34) {
        do {
          uVar62 = uVar62 + 4;
          fVar5 = fVar2 * *pfVar48 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *pfVar51 = fVar5;
          fVar5 = *(float *)((int)pfVar51 + (int)pfVar57 + (4 - (int)pfVar30)) * fVar2 +
                  pfVar50[1] * fVar3;
          pfVar50[1] = fVar5;
          pfVar51[1] = fVar5;
          fVar5 = pfVar50[2] * fVar3 + pfVar48[2] * fVar2;
          pfVar50[2] = fVar5;
          pfVar51[2] = fVar5;
          pfVar42 = pfVar48 + 3;
          pfVar48 = pfVar48 + 4;
          fVar5 = pfVar50[3] * fVar3 + *pfVar42 * fVar2;
          pfVar50[3] = fVar5;
          pfVar51[3] = fVar5;
          pfVar51 = pfVar51 + 4;
          pfVar50 = pfVar50 + 4;
        } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar34 - uVar62;
        iVar58 = (int)pfVar48 - (int)pfVar50;
        iVar49 = (int)pfVar51 - (int)pfVar50;
        do {
          fVar5 = *(float *)((int)pfVar50 + iVar58) * fVar2 + fVar3 * *pfVar50;
          *pfVar50 = fVar5;
          *(float *)((int)pfVar50 + iVar49) = fVar5;
          pfVar50 = pfVar50 + 1;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    *(float **)(iVar43 + 0xb0) = pfVar50;
    uVar41 = 1;
    puVar56 = (undefined4 *)(iVar43 + 0xb4);
    do {
      pfVar50 = (float *)puVar56[-8];
      fVar2 = (float)puVar56[0x18];
      pfVar51 = (float *)puVar56[-0x18];
      fVar3 = (float)puVar56[0x28];
      uVar17 = (int)pfVar51 - (int)pfVar50 >> 2;
      uVar62 = (ulonglong)(int)uVar17;
      uVar34 = uVar44;
      if (((ulonglong)uVar17 < (uVar44 & 0xffffffff)) &&
         (uVar34 = uVar62, (ulonglong)uVar17 != (uVar44 & 0xffffffff))) {
        uVar34 = 0;
        pfVar48 = pfVar61;
        pfVar42 = pfVar57;
        if (3 < (int)uVar17) {
          do {
            uVar34 = uVar34 + 4;
            fVar5 = fVar2 * *pfVar42 + *pfVar50 * fVar3;
            *pfVar50 = fVar5;
            *pfVar48 = *pfVar48 + fVar5;
            fVar5 = *(float *)((int)pfVar48 + (int)pfVar57 + (4 - (int)pfVar61)) * fVar2 +
                    pfVar50[1] * fVar3;
            pfVar50[1] = fVar5;
            pfVar48[1] = pfVar48[1] + fVar5;
            fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
            pfVar50[2] = fVar5;
            pfVar48[2] = pfVar48[2] + fVar5;
            fVar5 = pfVar50[3] * fVar3 + pfVar42[3] * fVar2;
            pfVar50[3] = fVar5;
            pfVar42 = pfVar42 + 4;
            pfVar50 = pfVar50 + 4;
            pfVar48[3] = pfVar48[3] + fVar5;
            pfVar48 = pfVar48 + 4;
          } while ((uVar34 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
        }
        if ((uVar34 & 0xffffffff) < (ulonglong)uVar17) {
          lVar39 = uVar62 - uVar34;
          do {
            fVar5 = *pfVar42;
            pfVar42 = pfVar42 + 1;
            fVar5 = fVar2 * fVar5 + *pfVar50 * fVar3;
            *pfVar50 = fVar5;
            pfVar50 = pfVar50 + 1;
            *pfVar48 = *pfVar48 + fVar5;
            pfVar48 = pfVar48 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
        if (pfVar51 <= pfVar50) {
          pfVar50 = (float *)puVar56[-0x28];
        }
        uVar17 = (int)pfVar51 - (int)pfVar50 >> 2;
        uVar34 = (longlong)(int)uVar17;
        if ((uVar44 - uVar62 & 0xffffffff) <= (ulonglong)uVar17) {
          uVar34 = uVar44 - uVar62;
        }
        uVar62 = 0;
        if (3 < (int)uVar34) {
          do {
            uVar62 = uVar62 + 4;
            fVar5 = fVar2 * *pfVar42 + *pfVar50 * fVar3;
            *pfVar50 = fVar5;
            *pfVar48 = *pfVar48 + fVar5;
            fVar5 = pfVar50[1] * fVar3 + pfVar42[1] * fVar2;
            pfVar50[1] = fVar5;
            pfVar48[1] = pfVar48[1] + fVar5;
            fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
            pfVar50[2] = fVar5;
            pfVar48[2] = pfVar48[2] + fVar5;
            pfVar51 = pfVar42 + 3;
            pfVar42 = pfVar42 + 4;
            fVar5 = pfVar50[3] * fVar3 + *pfVar51 * fVar2;
            pfVar50[3] = fVar5;
            pfVar48[3] = pfVar48[3] + fVar5;
            pfVar50 = pfVar50 + 4;
            pfVar48 = pfVar48 + 4;
          } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
        }
        if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
          lVar39 = uVar34 - uVar62;
          iVar58 = (int)pfVar42 - (int)pfVar48;
          do {
            fVar5 = *(float *)((int)pfVar48 + iVar58) * fVar2 + *pfVar50 * fVar3;
            *pfVar50 = fVar5;
            pfVar50 = pfVar50 + 1;
            *pfVar48 = *pfVar48 + fVar5;
            pfVar48 = pfVar48 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      else {
        uVar62 = 0;
        pfVar51 = pfVar61;
        pfVar48 = pfVar57;
        if (3 < (int)uVar34) {
          do {
            uVar62 = uVar62 + 4;
            fVar5 = fVar2 * *pfVar48 + *pfVar50 * fVar3;
            *pfVar50 = fVar5;
            *pfVar51 = *pfVar51 + fVar5;
            fVar5 = *(float *)((int)pfVar51 + (int)pfVar57 + (4 - (int)pfVar61)) * fVar2 +
                    pfVar50[1] * fVar3;
            pfVar50[1] = fVar5;
            pfVar51[1] = pfVar51[1] + fVar5;
            fVar5 = pfVar50[2] * fVar3 + pfVar48[2] * fVar2;
            pfVar50[2] = fVar5;
            pfVar51[2] = pfVar51[2] + fVar5;
            fVar5 = pfVar50[3] * fVar3 + pfVar48[3] * fVar2;
            pfVar50[3] = fVar5;
            pfVar48 = pfVar48 + 4;
            pfVar50 = pfVar50 + 4;
            pfVar51[3] = pfVar51[3] + fVar5;
            pfVar51 = pfVar51 + 4;
          } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
        }
        if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
          lVar39 = uVar34 - uVar62;
          iVar58 = (int)pfVar48 - (int)pfVar50;
          iVar49 = (int)pfVar51 - (int)pfVar50;
          do {
            fVar5 = *(float *)(iVar58 + (int)pfVar50) * fVar2 + *pfVar50 * fVar3;
            *pfVar50 = fVar5;
            *(float *)(iVar49 + (int)pfVar50) = fVar5 + *(float *)(iVar49 + (int)pfVar50);
            pfVar50 = pfVar50 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      puVar56[-8] = pfVar50;
      pfVar50 = (float *)*puVar56;
      fVar2 = (float)puVar56[0x20];
      pfVar51 = (float *)puVar56[-0x10];
      fVar3 = (float)puVar56[0x30];
      uVar17 = (int)pfVar51 - (int)pfVar50 >> 2;
      uVar62 = (ulonglong)(int)uVar17;
      uVar34 = uVar44;
      if (((ulonglong)uVar17 < (uVar44 & 0xffffffff)) &&
         (uVar34 = uVar62, (ulonglong)uVar17 != (uVar44 & 0xffffffff))) {
        uVar34 = 0;
        pfVar48 = pfVar30;
        pfVar42 = pfVar57;
        if (3 < (int)uVar17) {
          do {
            uVar34 = uVar34 + 4;
            fVar5 = *pfVar42 * fVar2 + fVar3 * *pfVar50;
            *pfVar50 = fVar5;
            *pfVar48 = fVar5 + *pfVar48;
            fVar5 = *(float *)((int)pfVar48 + (int)pfVar57 + (4 - (int)pfVar30)) * fVar2 +
                    pfVar50[1] * fVar3;
            pfVar50[1] = fVar5;
            pfVar48[1] = pfVar48[1] + fVar5;
            fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
            pfVar50[2] = fVar5;
            pfVar48[2] = pfVar48[2] + fVar5;
            pfVar19 = pfVar42 + 3;
            pfVar42 = pfVar42 + 4;
            fVar5 = pfVar50[3] * fVar3 + *pfVar19 * fVar2;
            pfVar50[3] = fVar5;
            pfVar50 = pfVar50 + 4;
            pfVar48[3] = pfVar48[3] + fVar5;
            pfVar48 = pfVar48 + 4;
          } while ((uVar34 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
          uVar33 = (ulonglong)uStack_11c;
        }
        if ((uVar34 & 0xffffffff) < (ulonglong)uVar17) {
          lVar39 = uVar62 - uVar34;
          do {
            fVar5 = *pfVar42;
            pfVar42 = pfVar42 + 1;
            fVar5 = fVar5 * fVar2 + fVar3 * *pfVar50;
            *pfVar50 = fVar5;
            pfVar50 = pfVar50 + 1;
            *pfVar48 = fVar5 + *pfVar48;
            pfVar48 = pfVar48 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
        if (pfVar51 <= pfVar50) {
          pfVar50 = *(float **)((uVar41 + 0xc) * 4 + iVar43);
        }
        uVar17 = (int)pfVar51 - (int)pfVar50 >> 2;
        uVar34 = (longlong)(int)uVar17;
        if ((uVar44 - uVar62 & 0xffffffff) <= (ulonglong)uVar17) {
          uVar34 = uVar44 - uVar62;
        }
        uVar62 = 0;
        if (3 < (int)uVar34) {
          do {
            uVar62 = uVar62 + 4;
            fVar5 = *pfVar42 * fVar2 + fVar3 * *pfVar50;
            *pfVar50 = fVar5;
            *pfVar48 = fVar5 + *pfVar48;
            fVar5 = pfVar50[1] * fVar3 + pfVar42[1] * fVar2;
            pfVar50[1] = fVar5;
            pfVar48[1] = pfVar48[1] + fVar5;
            fVar5 = pfVar50[2] * fVar3 + pfVar42[2] * fVar2;
            pfVar50[2] = fVar5;
            pfVar48[2] = pfVar48[2] + fVar5;
            fVar5 = pfVar50[3] * fVar3 + pfVar42[3] * fVar2;
            pfVar50[3] = fVar5;
            pfVar42 = pfVar42 + 4;
            pfVar50 = pfVar50 + 4;
            pfVar48[3] = pfVar48[3] + fVar5;
            pfVar48 = pfVar48 + 4;
          } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
        }
        if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
          lVar39 = uVar34 - uVar62;
          iVar58 = (int)pfVar42 - (int)pfVar48;
          do {
            fVar5 = *(float *)(iVar58 + (int)pfVar48) * fVar2 + fVar3 * *pfVar50;
            *pfVar50 = fVar5;
            pfVar50 = pfVar50 + 1;
            *pfVar48 = fVar5 + *pfVar48;
            pfVar48 = pfVar48 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      else {
        uVar62 = 0;
        pfVar51 = pfVar30;
        pfVar48 = pfVar57;
        if (3 < (int)uVar34) {
          do {
            uVar62 = uVar62 + 4;
            fVar5 = *pfVar48 * fVar2 + fVar3 * *pfVar50;
            *pfVar50 = fVar5;
            *pfVar51 = fVar5 + *pfVar51;
            fVar5 = *(float *)((int)pfVar51 + (int)pfVar57 + (4 - (int)pfVar30)) * fVar2 +
                    pfVar50[1] * fVar3;
            pfVar50[1] = fVar5;
            pfVar51[1] = pfVar51[1] + fVar5;
            fVar5 = pfVar50[2] * fVar3 + pfVar48[2] * fVar2;
            pfVar50[2] = fVar5;
            pfVar51[2] = pfVar51[2] + fVar5;
            fVar5 = pfVar50[3] * fVar3 + pfVar48[3] * fVar2;
            pfVar50[3] = fVar5;
            pfVar48 = pfVar48 + 4;
            pfVar51[3] = pfVar51[3] + fVar5;
            pfVar50 = pfVar50 + 4;
            pfVar51 = pfVar51 + 4;
          } while ((uVar62 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
        }
        if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
          lVar39 = uVar34 - uVar62;
          iVar58 = (int)pfVar48 - (int)pfVar50;
          iVar49 = (int)pfVar51 - (int)pfVar50;
          do {
            fVar5 = *(float *)((int)pfVar50 + iVar58) * fVar2 + fVar3 * *pfVar50;
            *pfVar50 = fVar5;
            *(float *)((int)pfVar50 + iVar49) = fVar5 + *(float *)((int)pfVar50 + iVar49);
            pfVar50 = pfVar50 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      iVar58 = uVar41 + 0x2c;
      uVar41 = uVar41 + 1;
      puVar56 = puVar56 + 1;
      *(float **)(iVar58 * 4 + iVar43) = pfVar50;
    } while (uVar41 < 8);
    if (bVar22) {
      puVar32 = (uint *)(iVar43 + 0x1d8);
      lVar39 = 8;
      uVar34 = ((ulonglong)*(uint *)(iVar43 + 4) & 0x1fffffff) * 8;
      do {
        uVar36 = (ulonglong)*puVar32;
        uVar62 = puVar32[8] + uVar34;
        if (uVar36 <= (uVar62 & 0xffffffff)) {
          uVar62 = (ulonglong)puVar32[-8];
        }
        uVar37 = uVar34;
        if (0x3ff < uVar34) {
          uVar37 = 0x400;
        }
        uVar46 = uVar36 - uVar62;
        if (uVar37 <= (uVar36 - uVar62 & 0xffffffff)) {
          uVar46 = uVar37;
        }
        lVar45 = 0;
        if ((uVar46 & 0xffffffff) != 0) {
          lVar40 = ((uVar46 - 1 & 0xffffffff) >> 7) + 1;
          do {
            dataCacheBlockTouch(lVar45 + uVar62);
            lVar45 = lVar45 + 0x80;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
        }
        if ((uVar46 & 0xffffffff) < uVar37) {
          uVar55 = uVar36 - puVar32[-8];
          if ((uVar37 - uVar46 & 0xffffffff) <= (uVar36 - puVar32[-8] & 0xffffffff)) {
            uVar55 = uVar37 - uVar46;
          }
          lVar45 = 0;
          if ((uVar55 & 0xffffffff) != 0) {
            lVar40 = ((uVar55 - 1 & 0xffffffff) >> 7) + 1;
            do {
              dataCacheBlockTouch(lVar45 + uVar62);
              lVar45 = lVar45 + 0x80;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
          }
        }
        lVar39 = lVar39 + -1;
        puVar32 = puVar32 + 1;
      } while (lVar39 != 0);
    }
    uVar41 = 0;
    puVar56 = (undefined4 *)(iVar43 + 0x1e8);
    do {
      pfVar57 = (float *)puVar56[4];
      pfVar50 = (float *)puVar56[-4];
      uVar34 = (ulonglong)((uint)((int)pfVar50 - (int)pfVar57 >> 2) >> 1);
      uVar62 = uVar44;
      if ((uVar34 < (uVar44 & 0xffffffff)) && (uVar62 = uVar34, uVar34 != (uVar44 & 0xffffffff))) {
        uVar62 = 0;
        if ((uVar44 & 0xffffffff) != 0) {
          pfVar51 = pfVar61 + -1;
          do {
            uVar36 = 0;
            if (3 < (int)uVar34) {
              do {
                fVar2 = pfVar51[1];
                uVar36 = uVar36 + 4;
                fVar3 = *pfVar57;
                *pfVar57 = fVar2;
                fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
                pfVar57[1] = fVar3;
                pfVar51[1] = fVar3;
                fVar2 = pfVar51[2];
                fVar3 = pfVar57[2];
                pfVar57[2] = fVar2;
                fVar3 = (fVar2 - pfVar57[3]) * fVar25 + fVar3;
                pfVar57[3] = fVar3;
                pfVar51[2] = fVar3;
                fVar2 = (pfVar51[3] - pfVar57[5]) * fVar25 + pfVar57[4];
                pfVar57[4] = pfVar51[3];
                pfVar57[5] = fVar2;
                pfVar51[3] = fVar2;
                fVar2 = pfVar51[4];
                fVar3 = pfVar57[6];
                pfVar57[6] = fVar2;
                fVar3 = (fVar2 - pfVar57[7]) * fVar25 + fVar3;
                pfVar57[7] = fVar3;
                pfVar51[4] = fVar3;
                pfVar57 = pfVar57 + 8;
                pfVar51 = pfVar51 + 4;
              } while ((uVar36 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
            }
            if ((uVar36 & 0xffffffff) < (uVar34 & 0xffffffff)) {
              lVar39 = uVar34 - uVar36;
              do {
                fVar2 = pfVar51[1];
                fVar3 = *pfVar57;
                *pfVar57 = fVar2;
                fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
                pfVar57[1] = fVar3;
                pfVar51 = pfVar51 + 1;
                *pfVar51 = fVar3;
                pfVar57 = pfVar57 + 2;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
            }
            if (pfVar50 <= pfVar57) {
              pfVar57 = (float *)puVar56[-0xc];
            }
            uVar62 = uVar62 + uVar34;
            uVar34 = (ulonglong)((uint)((int)pfVar50 - (int)pfVar57 >> 2) >> 1);
            if ((uVar44 - uVar62 & 0xffffffff) <= uVar34) {
              uVar34 = uVar44 - uVar62;
            }
          } while ((uVar62 & 0xffffffff) < (uVar44 & 0xffffffff));
        }
      }
      else {
        uVar34 = 0;
        pfVar50 = pfVar61;
        if (3 < (int)uVar62) {
          do {
            fVar2 = *pfVar50;
            uVar34 = uVar34 + 4;
            fVar3 = *pfVar57;
            *pfVar57 = fVar2;
            fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
            pfVar57[1] = fVar3;
            *pfVar50 = fVar3;
            fVar2 = pfVar50[1];
            fVar3 = pfVar57[2];
            pfVar57[2] = fVar2;
            fVar3 = (fVar2 - pfVar57[3]) * fVar25 + fVar3;
            pfVar57[3] = fVar3;
            pfVar50[1] = fVar3;
            fVar2 = pfVar57[4];
            fVar3 = pfVar50[2];
            pfVar57[4] = fVar3;
            fVar2 = (fVar3 - pfVar57[5]) * fVar25 + fVar2;
            pfVar57[5] = fVar2;
            pfVar50[2] = fVar2;
            fVar2 = pfVar50[3];
            fVar3 = pfVar57[6];
            pfVar57[6] = fVar2;
            fVar3 = (fVar2 - pfVar57[7]) * fVar25 + fVar3;
            pfVar57[7] = fVar3;
            pfVar50[3] = fVar3;
            pfVar57 = pfVar57 + 8;
            pfVar50 = pfVar50 + 4;
          } while ((uVar34 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
        }
        if ((uVar34 & 0xffffffff) < (uVar62 & 0xffffffff)) {
          lVar39 = uVar62 - uVar34;
          pfVar50 = pfVar50 + -1;
          do {
            fVar2 = pfVar50[1];
            fVar3 = *pfVar57;
            *pfVar57 = fVar2;
            fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
            pfVar57[1] = fVar3;
            pfVar50 = pfVar50 + 1;
            *pfVar50 = fVar3;
            pfVar57 = pfVar57 + 2;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      puVar56[4] = pfVar57;
      pfVar57 = (float *)puVar56[8];
      pfVar50 = (float *)*puVar56;
      uVar34 = (ulonglong)((uint)((int)pfVar50 - (int)pfVar57 >> 2) >> 1);
      uVar62 = uVar44;
      if ((uVar34 < (uVar44 & 0xffffffff)) && (uVar62 = uVar34, uVar34 != (uVar44 & 0xffffffff))) {
        uVar62 = 0;
        if ((uVar44 & 0xffffffff) != 0) {
          pfVar51 = pfVar30 + -1;
          do {
            uVar36 = 0;
            if (3 < (int)uVar34) {
              do {
                fVar2 = pfVar51[1];
                uVar36 = uVar36 + 4;
                fVar3 = *pfVar57;
                *pfVar57 = fVar2;
                fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
                pfVar57[1] = fVar3;
                pfVar51[1] = fVar3;
                fVar2 = pfVar51[2];
                fVar3 = pfVar57[2];
                pfVar57[2] = fVar2;
                fVar3 = (fVar2 - pfVar57[3]) * fVar25 + fVar3;
                pfVar57[3] = fVar3;
                pfVar51[2] = fVar3;
                fVar2 = pfVar51[3];
                fVar3 = pfVar57[4];
                pfVar57[4] = fVar2;
                fVar3 = (fVar2 - pfVar57[5]) * fVar25 + fVar3;
                pfVar57[5] = fVar3;
                pfVar51[3] = fVar3;
                fVar2 = pfVar51[4];
                fVar3 = pfVar57[6];
                pfVar57[6] = fVar2;
                fVar3 = (fVar2 - pfVar57[7]) * fVar25 + fVar3;
                pfVar57[7] = fVar3;
                pfVar51[4] = fVar3;
                pfVar51 = pfVar51 + 4;
                pfVar57 = pfVar57 + 8;
              } while ((uVar36 & 0xffffffff) < (uVar34 - 3 & 0xffffffff));
            }
            if ((uVar36 & 0xffffffff) < (uVar34 & 0xffffffff)) {
              lVar39 = uVar34 - uVar36;
              do {
                fVar2 = pfVar51[1];
                fVar3 = *pfVar57;
                *pfVar57 = fVar2;
                fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
                pfVar57[1] = fVar3;
                pfVar51 = pfVar51 + 1;
                *pfVar51 = fVar3;
                pfVar57 = pfVar57 + 2;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
            }
            if (pfVar50 <= pfVar57) {
              pfVar57 = *(float **)((uVar41 + 0x72) * 4 + iVar43);
            }
            uVar62 = uVar62 + uVar34;
            uVar34 = (ulonglong)((uint)((int)pfVar50 - (int)pfVar57 >> 2) >> 1);
            if ((uVar44 - uVar62 & 0xffffffff) <= uVar34) {
              uVar34 = uVar44 - uVar62;
            }
          } while ((uVar62 & 0xffffffff) < (uVar44 & 0xffffffff));
        }
      }
      else {
        uVar34 = 0;
        pfVar50 = pfVar30;
        if (3 < (int)uVar62) {
          do {
            fVar2 = *pfVar50;
            uVar34 = uVar34 + 4;
            fVar3 = *pfVar57;
            *pfVar57 = fVar2;
            fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
            pfVar57[1] = fVar3;
            *pfVar50 = fVar3;
            fVar2 = pfVar50[1];
            fVar3 = pfVar57[2];
            pfVar57[2] = fVar2;
            fVar3 = (fVar2 - pfVar57[3]) * fVar25 + fVar3;
            pfVar57[3] = fVar3;
            pfVar50[1] = fVar3;
            fVar2 = pfVar50[2];
            fVar3 = pfVar57[4];
            pfVar57[4] = fVar2;
            fVar3 = (fVar2 - pfVar57[5]) * fVar25 + fVar3;
            pfVar57[5] = fVar3;
            pfVar50[2] = fVar3;
            fVar2 = pfVar50[3];
            fVar3 = pfVar57[6];
            pfVar57[6] = fVar2;
            fVar3 = (fVar2 - pfVar57[7]) * fVar25 + fVar3;
            pfVar57[7] = fVar3;
            pfVar50[3] = fVar3;
            pfVar50 = pfVar50 + 4;
            pfVar57 = pfVar57 + 8;
          } while ((uVar34 & 0xffffffff) < (uVar62 - 3 & 0xffffffff));
        }
        if ((uVar34 & 0xffffffff) < (uVar62 & 0xffffffff)) {
          lVar39 = uVar62 - uVar34;
          pfVar50 = pfVar50 + -1;
          do {
            fVar2 = pfVar50[1];
            fVar3 = *pfVar57;
            *pfVar57 = fVar2;
            fVar3 = (fVar2 - pfVar57[1]) * fVar25 + fVar3;
            pfVar57[1] = fVar3;
            pfVar50 = pfVar50 + 1;
            *pfVar50 = fVar3;
            pfVar57 = pfVar57 + 2;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      iVar58 = uVar41 + 0x82;
      uVar41 = uVar41 + 1;
      puVar56 = puVar56 + 1;
      *(float **)(iVar58 * 4 + iVar43) = pfVar57;
    } while (uVar41 < 4);
    if (fVar1 != *(float *)(iVar29 + 100)) {
      uVar41 = 0;
      if (*(int *)(iVar29 + 0x104) != 0) {
        iVar43 = 0;
        do {
          fVar2 = lbl_8217BA98;
          puVar32 = (uint *)(*(int *)(iVar29 + 0x10) + iVar43);
          uStack_f8 = (ulonglong)*puVar32;
          if ((float)uStack_f8 * fVar27 <= fVar1) {
            puVar32[2] = (uint)fVar28;
            puVar32[3] = (uint)(float)dVar65;
          }
          else {
            fVar3 = fVar28 - (fVar1 * fVar26) / (float)uStack_f8;
            fVar3 = fVar3 * fVar3;
            puVar32[3] = (uint)fVar3;
            fVar3 = fVar28 - fVar3;
            puVar32[2] = (uint)fVar3;
            puVar32[2] = (uint)((fVar3 + fVar2) - fVar2);
            puVar32[3] = (uint)(((float)puVar32[3] + fVar2) - fVar2);
          }
          uVar41 = uVar41 + 1;
          iVar43 = iVar43 + 0x10;
        } while (uVar41 < *(uint *)(iVar29 + 0x104));
      }
      *(float *)(iVar29 + 100) = fVar1;
    }
    iVar43 = *(int *)(iVar29 + 0x10);
    uVar62 = (ulonglong)*(uint *)(iVar29 + 0x38);
    uVar34 = uVar62 + lVar53;
    fVar1 = *(float *)(iVar43 + 8);
    fVar2 = *(float *)(iVar43 + 0xc);
    fVar3 = *(float *)(iVar43 + 4);
    if (uVar62 < (uVar34 & 0xffffffff)) {
      uVar41 = ((int)uVar34 - *(uint *)(iVar29 + 0x38)) + 3;
      if (3 < (int)(((int)uVar41 >> 2) + (uint)((int)uVar41 < 0 && (uVar41 & 3) != 0))) {
        do {
          pfVar30 = (float *)uVar62;
          fVar3 = *pfVar30 * fVar1 + fVar2 * fVar3;
          *pfVar30 = fVar3;
          fVar3 = pfVar30[1] * fVar1 + fVar3 * fVar2;
          pfVar30[1] = fVar3;
          fVar3 = pfVar30[2] * fVar1 + fVar3 * fVar2;
          pfVar30[2] = fVar3;
          fVar3 = pfVar30[3] * fVar1 + fVar3 * fVar2;
          pfVar30[3] = fVar3;
          uVar62 = uVar62 + 0x10;
        } while ((int)uVar62 < (int)uVar34 + -0xc);
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar62 - 4;
        lVar45 = (((uVar34 - uVar62) - 1 & 0xffffffff) >> 2) + 1;
        do {
          fVar3 = *(float *)((int)lVar39 + 4) * fVar1 + fVar2 * fVar3;
          lVar39 = lVar39 + 4;
          *(float *)lVar39 = fVar3;
          lVar45 = lVar45 + -1;
        } while (lVar45 != 0);
      }
    }
    *(float *)(iVar43 + 4) = fVar3;
    iVar43 = *(int *)(iVar29 + 0x10);
    uVar62 = (ulonglong)*(uint *)(iVar29 + 0x38);
    uVar34 = lVar53 + uVar62;
    fVar1 = *(float *)(iVar43 + 0x18);
    fVar2 = *(float *)(iVar43 + 0x1c);
    fVar3 = *(float *)(iVar43 + 0x14);
    if (uVar62 < (uVar34 & 0xffffffff)) {
      uVar41 = ((int)uVar34 - *(uint *)(iVar29 + 0x38)) + 3;
      if (3 < (int)(((int)uVar41 >> 2) + (uint)((int)uVar41 < 0 && (uVar41 & 3) != 0))) {
        do {
          pfVar30 = (float *)uVar62;
          fVar3 = fVar2 * fVar3 + fVar1 * *pfVar30;
          *pfVar30 = fVar3;
          fVar3 = pfVar30[1] * fVar1 + fVar3 * fVar2;
          pfVar30[1] = fVar3;
          fVar3 = pfVar30[2] * fVar1 + fVar3 * fVar2;
          pfVar30[2] = fVar3;
          fVar3 = pfVar30[3] * fVar1 + fVar3 * fVar2;
          pfVar30[3] = fVar3;
          uVar62 = uVar62 + 0x10;
        } while ((int)uVar62 < (int)uVar34 + -0xc);
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar62 - 4;
        lVar45 = (((uVar34 - uVar62) - 1 & 0xffffffff) >> 2) + 1;
        do {
          fVar3 = *(float *)((int)lVar39 + 4) * fVar1 + fVar2 * fVar3;
          lVar39 = lVar39 + 4;
          *(float *)lVar39 = fVar3;
          lVar45 = lVar45 + -1;
        } while (lVar45 != 0);
      }
    }
    *(float *)(iVar43 + 0x14) = fVar3;
    iVar43 = *(int *)(iVar29 + 0x10);
    uVar62 = (ulonglong)*(uint *)(iVar29 + 0x3c);
    uVar34 = lVar53 + uVar62;
    fVar1 = *(float *)(iVar43 + 0x28);
    fVar2 = *(float *)(iVar43 + 0x2c);
    fVar3 = *(float *)(iVar43 + 0x24);
    if (uVar62 < (uVar34 & 0xffffffff)) {
      uVar41 = ((int)uVar34 - *(uint *)(iVar29 + 0x3c)) + 3;
      if (3 < (int)(((int)uVar41 >> 2) + (uint)((int)uVar41 < 0 && (uVar41 & 3) != 0))) {
        do {
          pfVar30 = (float *)uVar62;
          fVar3 = *pfVar30 * fVar1 + fVar2 * fVar3;
          *pfVar30 = fVar3;
          fVar3 = pfVar30[1] * fVar1 + fVar3 * fVar2;
          pfVar30[1] = fVar3;
          fVar3 = pfVar30[2] * fVar1 + fVar3 * fVar2;
          pfVar30[2] = fVar3;
          fVar3 = pfVar30[3] * fVar1 + fVar3 * fVar2;
          pfVar30[3] = fVar3;
          uVar62 = uVar62 + 0x10;
        } while ((int)uVar62 < (int)uVar34 + -0xc);
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar39 = uVar62 - 4;
        lVar45 = (((uVar34 - uVar62) - 1 & 0xffffffff) >> 2) + 1;
        do {
          fVar3 = *(float *)((int)lVar39 + 4) * fVar1 + fVar2 * fVar3;
          lVar39 = lVar39 + 4;
          *(float *)lVar39 = fVar3;
          lVar45 = lVar45 + -1;
        } while (lVar45 != 0);
      }
    }
    *(float *)(iVar43 + 0x24) = fVar3;
    iVar43 = *(int *)(iVar29 + 0x10);
    uVar62 = (ulonglong)*(uint *)(iVar29 + 0x3c);
    uVar34 = lVar53 + uVar62;
    fVar1 = *(float *)(iVar43 + 0x38);
    fVar2 = *(float *)(iVar43 + 0x3c);
    fVar3 = *(float *)(iVar43 + 0x34);
    if (uVar62 < (uVar34 & 0xffffffff)) {
      uVar41 = ((int)uVar34 - *(uint *)(iVar29 + 0x3c)) + 3;
      if (3 < (int)(((int)uVar41 >> 2) + (uint)((int)uVar41 < 0 && (uVar41 & 3) != 0))) {
        do {
          pfVar30 = (float *)uVar62;
          fVar3 = *pfVar30 * fVar1 + fVar2 * fVar3;
          *pfVar30 = fVar3;
          fVar3 = pfVar30[1] * fVar1 + fVar3 * fVar2;
          pfVar30[1] = fVar3;
          fVar3 = pfVar30[2] * fVar1 + fVar3 * fVar2;
          pfVar30[2] = fVar3;
          fVar3 = pfVar30[3] * fVar1 + fVar3 * fVar2;
          pfVar30[3] = fVar3;
          uVar62 = uVar62 + 0x10;
        } while ((int)uVar62 < (int)uVar34 + -0xc);
      }
      if ((uVar62 & 0xffffffff) < (uVar34 & 0xffffffff)) {
        lVar53 = uVar62 - 4;
        lVar39 = (((uVar34 - uVar62) - 1 & 0xffffffff) >> 2) + 1;
        do {
          fVar3 = *(float *)((int)lVar53 + 4) * fVar1 + fVar2 * fVar3;
          lVar53 = lVar53 + 4;
          *(float *)lVar53 = fVar3;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    *(float *)(iVar43 + 0x34) = fVar3;
    if (*(uint *)(iVar29 + 0x7c) < *(uint *)(iVar29 + 0x80)) {
      *(float *)(iVar29 + 0x78) = *(float *)(iVar29 + 0x70) + *(float *)(iVar29 + 0x78);
      *(uint *)(iVar29 + 0x7c) = *(uint *)(iVar29 + 0x7c) + 1;
    }
    else {
      *(undefined4 *)(iVar29 + 0x78) = *(undefined4 *)(iVar29 + 0x74);
    }
    if (*(uint *)(iVar29 + 0xc4) < *(uint *)(iVar29 + 200)) {
      *(float *)(iVar29 + 0xc0) = *(float *)(iVar29 + 0xb8) + *(float *)(iVar29 + 0xc0);
      *(uint *)(iVar29 + 0xc4) = *(uint *)(iVar29 + 0xc4) + 1;
    }
    else {
      *(undefined4 *)(iVar29 + 0xc0) = *(undefined4 *)(iVar29 + 0xbc);
    }
    fVar14 = *(float *)(iVar29 + 0xc0);
    if (*(uint *)(iVar29 + 0xac) < *(uint *)(iVar29 + 0xb0)) {
      *(float *)(iVar29 + 0xa8) = *(float *)(iVar29 + 0xa0) + *(float *)(iVar29 + 0xa8);
      *(uint *)(iVar29 + 0xac) = *(uint *)(iVar29 + 0xac) + 1;
    }
    else {
      *(undefined4 *)(iVar29 + 0xa8) = *(undefined4 *)(iVar29 + 0xa4);
    }
    fVar15 = *(float *)(iVar29 + 0xa8);
    if (*(uint *)(iVar29 + 0xdc) < *(uint *)(iVar29 + 0xe0)) {
      *(float *)(iVar29 + 0xd8) = *(float *)(iVar29 + 0xd0) + *(float *)(iVar29 + 0xd8);
      *(uint *)(iVar29 + 0xdc) = *(uint *)(iVar29 + 0xdc) + 1;
    }
    else {
      *(undefined4 *)(iVar29 + 0xd8) = *(undefined4 *)(iVar29 + 0xd4);
    }
    fVar11 = *(float *)(iVar29 + 0xd8) * fVar27 + fVar27;
    fVar12 = (fVar28 - *(float *)(iVar29 + 0xd8)) * fVar27;
    if (*(uint *)(iVar29 + 0x94) < *(uint *)(iVar29 + 0x98)) {
      *(float *)(iVar29 + 0x90) = *(float *)(iVar29 + 0x88) + *(float *)(iVar29 + 0x90);
      *(uint *)(iVar29 + 0x94) = *(uint *)(iVar29 + 0x94) + 1;
    }
    else {
      *(undefined4 *)(iVar29 + 0x90) = *(undefined4 *)(iVar29 + 0x8c);
    }
    iVar43 = *(int *)(iVar29 + 0x30);
    iVar58 = *(int *)(iVar29 + 0x34);
    iVar49 = *(int *)(iVar29 + 0x38);
    altv300_21(in_vs32,in_vs42);
    altv300_21(in_vs32,in_vs39);
    iVar52 = *(int *)(iVar29 + 0x3c);
    altv300_21(in_vs32,in_vs38);
    uVar44 = uVar44 + uVar54 * -4;
    altv300_21(in_vs32,in_vs37);
    fVar20 = *(float *)(iVar29 + 0x90) * fVar23 * *(float *)(iVar29 + 0x78);
    altv300_21(in_vs32,in_vs36);
    for (; iVar21 = (int)lVar59, uVar54 != 0; uVar54 = uVar54 - 1) {
      altv207_13(in_vs32,in_vs43);
      iVar49 = iVar49 + 0x10;
      altv207_13(in_vs32,in_vs42);
      iVar52 = iVar52 + 0x10;
      iVar43 = iVar43 + 0x10;
      iVar58 = iVar58 + 0x10;{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs45,in_vs42); memcpy(auVar67, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs32,in_vs41); memcpy(auVar66, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs44,auVar67); memcpy(in_vs45, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs44,auVar66); memcpy(in_vs32, &_vt3, 16); }
      pfVar30 = (float *)(in_r0 + iVar21 & 0xfffffff0);
      *pfVar30 = in_register_00010390 * in_register_00010340 * in_register_00010360;
      pfVar30[1] = in_register_00010390 * in_register_00010344 * in_register_00010360;
      pfVar30[2] = in_register_00010390 * in_register_00010348 * in_register_00010360;
      pfVar30[3] = in_register_00010390 * in_vr52 * in_register_00010360;
      lVar59 = lVar59 + 0x10;
      pfVar30 = (float *)(in_r0 + (int)uVar60 & 0xfffffff0);
      *pfVar30 = in_register_00010390 * in_register_00010350 * in_register_00010360;
      pfVar30[1] = in_register_00010390 * in_register_00010354 * in_register_00010360;
      pfVar30[2] = in_register_00010390 * in_register_00010358 * in_register_00010360;
      pfVar30[3] = in_register_00010390 * in_vr53 * in_register_00010360;
      uVar60 = uVar60 + 0x10;
    }
    in_register_000103d0 = in_register_00010360;
    in_register_000103d4 = in_register_00010360;
    in_register_000103d8 = in_register_00010360;
    in_vr61 = in_register_00010360;
    in_register_000103e0 = in_register_00010370;
    in_register_000103e4 = in_register_00010370;
    in_register_000103e8 = in_register_00010370;
    in_vr62 = in_register_00010370;
    in_register_000103f0 = in_register_00010390;
    in_register_000103f4 = in_register_00010390;
    in_register_000103f8 = in_register_00010390;
    in_vr63 = in_register_00010390;
    fVar1 = lbl_82002AE0;
    fVar2 = lbl_82002C5C;
    fVar3 = lbl_82005344;
    fVar5 = lbl_82057B54;
    fVar6 = lbl_8216DDF0;
    fVar13 = lbl_8216E260;
    if ((uVar44 & 0xffffffff) != 0) {
      pfVar30 = (float *)(iVar52 + -4);
      do {
        pfVar61 = (float *)lVar59;
        pfVar30 = pfVar30 + 1;
        fVar2 = *(float *)((iVar49 - iVar21) + (int)pfVar61) * fVar15;
        fVar3 = *pfVar30 * fVar15;
        fVar1 = *(float *)((iVar58 - iVar21) + (int)pfVar61);
        *(float *)uVar60 =
             (*(float *)((iVar43 - iVar21) + (int)pfVar61) * fVar14 +
             fVar3 * fVar11 + fVar2 * fVar12) * fVar20;
        *pfVar61 = (fVar1 * fVar14 + fVar2 * fVar11 + fVar3 * fVar12) * fVar20;
        uVar60 = uVar60 + 4;
        lVar59 = lVar59 + 4;
        uVar44 = uVar44 - 1;
        fVar1 = lbl_82002AE0;
        fVar2 = lbl_82002C5C;
        fVar3 = lbl_82005344;
        fVar5 = lbl_82057B54;
        fVar6 = lbl_8216DDF0;
        fVar13 = lbl_8216E260;
      } while (uVar44 != 0);
    }
  }
  uVar41 = 0;
  if (*(int *)(iVar29 + 0x104) != 0) {
    iVar43 = 0;
    do {
      uVar41 = uVar41 + 1;
      iVar58 = *(int *)(iVar29 + 0x10) + iVar43;
      iVar43 = iVar43 + 0x10;
      *(float *)(iVar58 + 4) = (*(float *)(iVar58 + 4) + lbl_8217BA98) - lbl_8217BA98;
    } while (uVar41 < *(uint *)(iVar29 + 0x104));
  }
  *(float *)(iVar29 + 0x1c) = (*(float *)(iVar29 + 0x1c) + lbl_8217BA98) - lbl_8217BA98;
  *(short *)((int)param_2 + 0xe) = (short)uVar33;
  *(bool *)(iVar29 + 0x110) = uVar16 == 0x11;
  fn_82F6A594();
  return;
}

