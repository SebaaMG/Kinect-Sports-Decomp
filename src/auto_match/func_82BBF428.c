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
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern int fn_829B0FC8();
extern int fn_82F691F0();
extern int fn_82F6A534();
extern int fn_82F6A580();
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
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_c8;


void fn_82BBF428(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar13;
  ulonglong uVar12;
  ulonglong uVar14;
  undefined1 uVar17;
  undefined8 *puVar15;
  float *pfVar16;
  int iVar20;
  undefined1 uVar21;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
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
  undefined8 uStack_110;
  ulonglong uStack_108;
  float afStack_100 [6];
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_c8;
  float afStack_c0 [48];
  
  puVar8 = (ushort *)fn_82F6A534();
  dVar29 = (double)*(float *)((int)param_2 + 0xc);
  param_2 = param_2 + 0xc;
  if (param_3 != 0) {
    puVar15 = &uStack_c8;
    lVar24 = 8;
    do {
      puVar15 = puVar15 + 1;
      *puVar15 = 0;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  lVar25 = 0x10;
  dVar33 = (double)lbl_820288E0;
  dVar34 = (double)lbl_820288C8;
  uVar13 = 0;
  dVar35 = (double)lbl_82054184;
  dVar37 = (double)lbl_82005328;
  iVar20 = 0;
  dVar32 = (double)lbl_8200D8DC;
  dVar36 = (double)lbl_82002C5C;
  dVar38 = (double)lbl_82005CCC;
  lVar24 = param_2;
  dVar27 = dVar29;
  do {
    dVar31 = (double)*(float *)lVar24;
    if (param_3 != 0) {
      dVar31 = (double)(float)((double)*(float *)((int)afStack_c0 + iVar20) + dVar31);
    }
    iVar1 = (int)(dVar31 * dVar38 + dVar36);
    uStack_108 = (ulonglong)iVar1;
    uStack_110 = (ulonglong)iVar1;
    dVar26 = (double)(float)((double)(longlong)uStack_110 * dVar37);
    *(float *)((int)afStack_100 + iVar20) = (float)((double)(longlong)uStack_110 * dVar37);
    dVar30 = dVar26;
    if ((dVar27 <= dVar26) && (dVar30 = dVar27, dVar29 < dVar26)) {
      dVar29 = dVar26;
    }
    if (param_3 != 0) {
      uVar2 = uVar13 & 3;
      dVar27 = (double)(float)(dVar31 - dVar26);
      if (uVar2 != 3) {
        *(float *)((int)afStack_c0 + iVar20 + 4) =
             (float)(dVar27 * dVar35 + (double)*(float *)((int)afStack_c0 + iVar20 + 4));
      }
      if (uVar13 < 0xc) {
        if (uVar2 != 0) {
          *(float *)((int)afStack_c0 + iVar20 + 0xc) =
               (float)(dVar27 * dVar34 + (double)*(float *)((int)afStack_c0 + iVar20 + 0xc));
        }
        *(float *)((int)afStack_c0 + iVar20 + 0x10) =
             (float)(dVar27 * dVar33 + (double)*(float *)((int)afStack_c0 + iVar20 + 0x10));
        if (uVar2 != 3) {
          *(float *)((int)afStack_c0 + iVar20 + 0x14) =
               (float)(dVar27 * dVar32 + (double)*(float *)((int)afStack_c0 + iVar20 + 0x14));
        }
      }
    }
    uVar13 = uVar13 + 1;
    lVar24 = lVar24 + 0x10;
    iVar20 = iVar20 + 4;
    lVar25 = lVar25 + -1;
    dVar27 = dVar30;
  } while (lVar25 != 0);
  dVar27 = (double)lbl_82002AE0;
  if (dVar30 == dVar27) {
    uVar21 = 0xff;
    *(undefined1 *)((int)puVar8 + 1) = 0xff;
LAB_82bbf5b4:
    *(undefined1 *)puVar8 = uVar21;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(puVar8 + 1,0,6);
  }
  dVar31 = (double)lbl_821AAD20;
  if ((dVar30 == dVar31) || (uVar10 = 8, dVar29 == dVar27)) {
    uVar10 = 6;
  }
  fn_829B0FC8(&uStack_108,&uStack_110,afStack_100);
  uVar13 = (uint)((double)(((U64)(uStack_110) >> 0) & 0xFFFFFFFF) * dVar38 + dVar36);
  uVar2 = (uint)((double)(((U64)(uStack_108) >> 0) & 0xFFFFFFFF) * dVar38 + dVar36);
  uVar4 = uVar13 & 0xff;
  uVar5 = uVar2 & 0xff;
  uVar21 = (undefined1)uVar2;
  uStack_108 = (ulonglong)(int)uVar4;
  fVar3 = (float)((double)(longlong)(int)uVar5 * dVar37);
  afStack_100[1] = (float)((double)uStack_108 * dVar37);
  uVar17 = (undefined1)uVar13;
  if ((uVar10 & 0xffffffff) == 8) {
    if (uVar5 == uVar4) {
      *(undefined1 *)((int)puVar8 + 1) = uVar17;
      goto LAB_82bbf5b4;
    }
  }
  else if ((uVar10 & 0xffffffff) == 6) {
    *(undefined1 *)puVar8 = uVar21;
    *(undefined1 *)((int)puVar8 + 1) = uVar17;
    fVar7 = lbl_82002C2C;
    uVar18 = 1;
    pfVar11 = afStack_100 + 1;
    lVar24 = 4;
    do {
      uVar12 = uVar18 & 0xffffffff;
      uStack_110 = 5 - uVar18 & 0xffffffff;
      uVar18 = uVar18 + 1;
      pfVar11 = pfVar11 + 1;
      *pfVar11 = ((float)uStack_110 * fVar3 + (float)uVar12 * afStack_100[1]) * fVar7;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    fStack_e8 = (float)dVar31;
    fStack_e4 = (float)dVar27;
    puVar22 = &lbl_820E11BC;
    afStack_100[0] = fVar3;
    goto LAB_82bbf780;
  }
  *(undefined1 *)puVar8 = uVar17;
  *(undefined1 *)((int)puVar8 + 1) = uVar21;
  fVar7 = lbl_82028884;
  uVar18 = 1;
  pfVar11 = afStack_100 + 1;
  lVar24 = 6;
  do {
    uStack_110 = uVar18 & 0xffffffff;
    uVar12 = 7 - uVar18;
    uVar18 = uVar18 + 1;
    pfVar11 = pfVar11 + 1;
    *pfVar11 = ((float)(uVar12 & 0xffffffff) * afStack_100[1] + (float)uStack_110 * fVar3) * fVar7;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  puVar22 = &lbl_820E119C;
  afStack_100[0] = afStack_100[1];
  afStack_100[1] = fVar3;
LAB_82bbf780:
  dVar30 = (double)afStack_100[0];
  dVar38 = (double)afStack_100[1];
  uStack_108 = uVar10 - 1 & 0xffffffff;
  dVar37 = (double)uStack_108;
  dVar29 = dVar31;
  if (dVar30 != dVar38) {
    dVar29 = (double)(float)(dVar37 / (double)(float)(dVar38 - dVar30));
  }
  if (param_3 != 0) {
    puVar15 = &uStack_c8;
    lVar24 = 8;
    do {
      puVar15 = puVar15 + 1;
      *puVar15 = 0;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  puVar9 = (undefined1 *)((int)puVar8 + 1);
  pfVar11 = afStack_c0 + 1;
  uVar18 = 0;
  do {
    uVar12 = uStack_110;
    uVar14 = uVar18 + 8;
    uVar23 = 0;
    uStack_110 = uStack_110 & 0xffffffff;
    if ((uVar18 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      lVar25 = uVar14 - uVar18;
      lVar24 = param_2;
      pfVar16 = pfVar11;
      do {
        dVar26 = (double)*(float *)lVar24;
        if (param_3 != 0) {
          dVar26 = (double)(float)((double)pfVar16[-1] + dVar26);
        }
        dVar28 = (double)(float)((double)(float)(dVar26 - dVar30) * dVar29);
        if (dVar31 < dVar28) {
          if (dVar28 < dVar37) {
            uStack_108 = (ulonglong)(int)(dVar28 + dVar36);
            uVar19 = (ulonglong)*(uint *)(puVar22 + (int)(dVar28 + dVar36) * 4);
          }
          else if (((uVar10 & 0xffffffff) != 6) ||
                  (dVar26 < (double)(float)((double)(float)(dVar38 + dVar27) * dVar36))) {
            uVar19 = 1;
          }
          else {
            uVar19 = 7;
          }
        }
        else if (((uVar10 & 0xffffffff) != 6) || ((double)(float)(dVar30 * dVar36) < dVar26)) {
          uVar19 = 0;
        }
        else {
          uVar19 = 6;
        }
        uVar23 = (uVar19 & 0x7ff) << 0x15 | uVar23 >> 3;
        if (param_3 != 0) {
          uVar6 = uVar18 & 3;
          dVar26 = (double)(float)(dVar26 - (double)*(float *)((int)afStack_100 + (int)(uVar19 << 2)
                                                              ));
          if (uVar6 != 3) {
            *pfVar16 = (float)(dVar26 * dVar35 + (double)*pfVar16);
          }
          if ((uVar18 & 0xffffffff) < 0xc) {
            if (uVar6 != 0) {
              pfVar16[2] = (float)(dVar26 * dVar34 + (double)pfVar16[2]);
            }
            pfVar16[3] = (float)(dVar26 * dVar33 + (double)pfVar16[3]);
            if (uVar6 != 3) {
              pfVar16[4] = (float)(dVar26 * dVar32 + (double)pfVar16[4]);
            }
          }
        }
        uVar18 = uVar18 + 1;
        lVar24 = lVar24 + 0x10;
        pfVar16 = pfVar16 + 1;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      uStack_110 = CONCAT44((int)uVar23,(int)uVar12);
    }
    pfVar11 = pfVar11 + 8;
    param_2 = param_2 + 0x80;
    puVar9[1] = (((U64)(uStack_110) >> 24) & 0xFF);
    puVar9[2] = (((U64)(uStack_110) >> 16) & 0xFF);
    puVar9 = puVar9 + 3;
    *puVar9 = (((U64)(uStack_110) >> 8) & 0xFF);
    uVar18 = uVar14;
  } while ((uVar14 & 0xffffffff) < 0x10);
  *puVar8 = *puVar8 << 8 | *puVar8 >> 8;
  puVar8[1] = puVar8[1] << 8 | puVar8[1] >> 8;
  puVar8[2] = puVar8[2] << 8 | puVar8[2] >> 8;
  puVar8[3] = puVar8[3] << 8 | puVar8[3] >> 8;
  fn_82F6A580(0);
  return;
}

