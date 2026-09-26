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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern int fn_829B0FC8();
extern int fn_829B1720();
extern int fn_82F691F0();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82028884;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_82054184;
extern unsigned int lbl_820E119C;
extern unsigned int lbl_820E11BC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_d8;


void fn_829B29C8(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  ushort *puVar9;
  undefined8 uVar8;
  undefined1 *puVar10;
  ulonglong uVar11;
  float *pfVar12;
  uint uVar14;
  ulonglong uVar13;
  ulonglong uVar15;
  undefined1 uVar18;
  undefined8 *puVar16;
  float *pfVar17;
  int iVar21;
  undefined1 uVar22;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uStack_120;
  ulonglong uStack_118;
  float afStack_110 [6];
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_d8;
  float afStack_d0 [52];
  
  puVar9 = (ushort *)fn_82F6A52C();
  dVar37 = (double)*(float *)((int)param_2 + 0xc);
  param_2 = param_2 + 0xc;
  if (param_3 != 0) {
    puVar16 = &uStack_d8;
    lVar25 = 8;
    do {
      puVar16 = puVar16 + 1;
      *puVar16 = 0;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  lVar26 = 0x10;
  dVar33 = (double)lbl_820288E0;
  dVar34 = (double)lbl_820288C8;
  uVar14 = 0;
  dVar35 = (double)lbl_82054184;
  dVar38 = (double)lbl_82005328;
  iVar21 = 0;
  dVar32 = (double)lbl_8200D8DC;
  dVar36 = (double)lbl_82002C5C;
  dVar39 = (double)lbl_82005CCC;
  lVar25 = param_2;
  dVar28 = dVar37;
  do {
    dVar31 = (double)*(float *)lVar25;
    if (param_3 != 0) {
      dVar31 = (double)(float)((double)*(float *)((int)afStack_d0 + iVar21) + dVar31);
    }
    iVar1 = (int)(dVar31 * dVar39 + dVar36);
    uStack_118 = (ulonglong)iVar1;
    uStack_120 = (ulonglong)iVar1;
    dVar27 = (double)(float)((double)(longlong)uStack_120 * dVar38);
    *(float *)((int)afStack_110 + iVar21) = (float)((double)(longlong)uStack_120 * dVar38);
    dVar30 = dVar27;
    if ((dVar28 <= dVar27) && (dVar30 = dVar28, dVar37 < dVar27)) {
      dVar37 = dVar27;
    }
    if (param_3 != 0) {
      uVar2 = uVar14 & 3;
      dVar28 = (double)(float)(dVar31 - dVar27);
      if (uVar2 != 3) {
        *(float *)((int)afStack_d0 + iVar21 + 4) =
             (float)(dVar28 * dVar35 + (double)*(float *)((int)afStack_d0 + iVar21 + 4));
      }
      if (uVar14 < 0xc) {
        if (uVar2 != 0) {
          *(float *)((int)afStack_d0 + iVar21 + 0xc) =
               (float)(dVar28 * dVar34 + (double)*(float *)((int)afStack_d0 + iVar21 + 0xc));
        }
        *(float *)((int)afStack_d0 + iVar21 + 0x10) =
             (float)(dVar28 * dVar33 + (double)*(float *)((int)afStack_d0 + iVar21 + 0x10));
        if (uVar2 != 3) {
          *(float *)((int)afStack_d0 + iVar21 + 0x14) =
               (float)(dVar28 * dVar32 + (double)*(float *)((int)afStack_d0 + iVar21 + 0x14));
        }
      }
    }
    uVar14 = uVar14 + 1;
    lVar25 = lVar25 + 0x10;
    iVar21 = iVar21 + 4;
    lVar26 = lVar26 + -1;
    dVar28 = dVar30;
  } while (lVar26 != 0);
  uVar8 = fn_829B1720(puVar9 + 4);
  if ((int)uVar8 < 0) goto LAB_829b2f70;
  dVar28 = (double)lbl_82002AE0;
  if (dVar30 == dVar28) {
    uVar22 = 0xff;
    *(undefined1 *)((int)puVar9 + 1) = 0xff;
LAB_829b2b6c:
    *(undefined1 *)puVar9 = uVar22;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(puVar9 + 1,0,6);
  }
  dVar31 = (double)lbl_821AAD20;
  if ((dVar30 == dVar31) || (uVar11 = 8, dVar37 == dVar28)) {
    uVar11 = 6;
  }
  fn_829B0FC8(&uStack_118,&uStack_120,afStack_110);
  uVar14 = (uint)((double)(((U64)(uStack_120) >> 0) & 0xFFFFFFFF) * dVar39 + dVar36);
  uVar2 = (uint)((double)(((U64)(uStack_118) >> 0) & 0xFFFFFFFF) * dVar39 + dVar36);
  uVar4 = uVar14 & 0xff;
  uVar5 = uVar2 & 0xff;
  uVar22 = (undefined1)uVar2;
  uStack_118 = (ulonglong)(int)uVar4;
  fVar3 = (float)((double)(longlong)(int)uVar5 * dVar38);
  afStack_110[1] = (float)((double)uStack_118 * dVar38);
  uVar18 = (undefined1)uVar14;
  if ((uVar11 & 0xffffffff) == 8) {
    if (uVar5 == uVar4) {
      *(undefined1 *)((int)puVar9 + 1) = uVar18;
      goto LAB_829b2b6c;
    }
LAB_829b2cbc:
    *(undefined1 *)puVar9 = uVar18;
    *(undefined1 *)((int)puVar9 + 1) = uVar22;
    fVar7 = lbl_82028884;
    uVar19 = 1;
    pfVar12 = afStack_110 + 1;
    lVar25 = 6;
    do {
      uStack_120 = uVar19 & 0xffffffff;
      uVar13 = 7 - uVar19;
      uVar19 = uVar19 + 1;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = ((float)(uVar13 & 0xffffffff) * afStack_110[1] + (float)uStack_120 * fVar3) * fVar7
      ;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    puVar23 = &lbl_820E119C;
    afStack_110[0] = afStack_110[1];
    afStack_110[1] = fVar3;
  }
  else {
    if ((uVar11 & 0xffffffff) != 6) goto LAB_829b2cbc;
    *(undefined1 *)puVar9 = uVar22;
    *(undefined1 *)((int)puVar9 + 1) = uVar18;
    fVar7 = lbl_82002C2C;
    uVar19 = 1;
    pfVar12 = afStack_110 + 1;
    lVar25 = 4;
    do {
      uVar13 = uVar19 & 0xffffffff;
      uStack_120 = 5 - uVar19;
      uVar19 = uVar19 + 1;
      uStack_120 = uStack_120 & 0xffffffff;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = ((float)uStack_120 * fVar3 + (float)uVar13 * afStack_110[1]) * fVar7;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    fStack_f8 = (float)dVar31;
    fStack_f4 = (float)dVar28;
    puVar23 = &lbl_820E11BC;
    afStack_110[0] = fVar3;
  }
  dVar30 = (double)afStack_110[0];
  dVar39 = (double)afStack_110[1];
  uStack_118 = uVar11 - 1 & 0xffffffff;
  dVar38 = (double)uStack_118;
  dVar37 = dVar31;
  if (dVar30 != dVar39) {
    dVar37 = (double)(float)(dVar38 / (double)(float)(dVar39 - dVar30));
  }
  if (param_3 != 0) {
    puVar16 = &uStack_d8;
    lVar25 = 8;
    do {
      puVar16 = puVar16 + 1;
      *puVar16 = 0;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  puVar10 = (undefined1 *)((int)puVar9 + 1);
  pfVar12 = afStack_d0 + 1;
  uVar19 = 0;
  do {
    uVar13 = uStack_120;
    uVar15 = uVar19 + 8;
    uVar24 = 0;
    uStack_120 = uStack_120 & 0xffffffff;
    if ((uVar19 & 0xffffffff) < (uVar15 & 0xffffffff)) {
      lVar26 = uVar15 - uVar19;
      lVar25 = param_2;
      pfVar17 = pfVar12;
      do {
        dVar27 = (double)*(float *)lVar25;
        if (param_3 != 0) {
          dVar27 = (double)(float)((double)pfVar17[-1] + dVar27);
        }
        dVar29 = (double)(float)((double)(float)(dVar27 - dVar30) * dVar37);
        if (dVar31 < dVar29) {
          if (dVar29 < dVar38) {
            uStack_118 = (ulonglong)(int)(dVar29 + dVar36);
            uVar20 = (ulonglong)*(uint *)(puVar23 + (int)(dVar29 + dVar36) * 4);
          }
          else if (((uVar11 & 0xffffffff) != 6) ||
                  (dVar27 < (double)(float)((double)(float)(dVar39 + dVar28) * dVar36))) {
            uVar20 = 1;
          }
          else {
            uVar20 = 7;
          }
        }
        else if (((uVar11 & 0xffffffff) != 6) || ((double)(float)(dVar30 * dVar36) < dVar27)) {
          uVar20 = 0;
        }
        else {
          uVar20 = 6;
        }
        uVar24 = (uVar20 & 0x7ff) << 0x15 | uVar24 >> 3;
        if (param_3 != 0) {
          uVar6 = uVar19 & 3;
          dVar27 = (double)(float)(dVar27 - (double)*(float *)((int)afStack_110 + (int)(uVar20 << 2)
                                                              ));
          if (uVar6 != 3) {
            *pfVar17 = (float)(dVar27 * dVar35 + (double)*pfVar17);
          }
          if ((uVar19 & 0xffffffff) < 0xc) {
            if (uVar6 != 0) {
              pfVar17[2] = (float)(dVar27 * dVar34 + (double)pfVar17[2]);
            }
            pfVar17[3] = (float)(dVar27 * dVar33 + (double)pfVar17[3]);
            if (uVar6 != 3) {
              pfVar17[4] = (float)(dVar27 * dVar32 + (double)pfVar17[4]);
            }
          }
        }
        uVar19 = uVar19 + 1;
        lVar25 = lVar25 + 0x10;
        pfVar17 = pfVar17 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      uStack_120 = CONCAT44((int)uVar24,(int)uVar13);
    }
    pfVar12 = pfVar12 + 8;
    param_2 = param_2 + 0x80;
    puVar10[1] = (((U64)(uStack_120) >> 24) & 0xFF);
    puVar10[2] = (((U64)(uStack_120) >> 16) & 0xFF);
    puVar10 = puVar10 + 3;
    *puVar10 = (((U64)(uStack_120) >> 8) & 0xFF);
    uVar19 = uVar15;
  } while ((uVar15 & 0xffffffff) < 0x10);
  *puVar9 = *puVar9 << 8 | *puVar9 >> 8;
  puVar9[1] = puVar9[1] << 8 | puVar9[1] >> 8;
  puVar9[2] = puVar9[2] << 8 | puVar9[2] >> 8;
  puVar9[3] = puVar9[3] << 8 | puVar9[3] >> 8;
  uVar8 = 0;
LAB_829b2f70:
  fn_82F6A578(uVar8);
  return;
}

