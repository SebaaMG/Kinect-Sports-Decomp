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
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;
extern unsigned int lbl_8200DBB4;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_82054148;
extern unsigned int lbl_8205414C;
extern unsigned int lbl_82054150;
extern unsigned int lbl_8205415C;
extern unsigned int lbl_820E117C;
extern unsigned int lbl_820E118C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8316EAE4;
extern unsigned int lbl_8316EAE8;


void fn_82BBDEA0(undefined8 param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float *pfVar37;
  longlong lVar38;
  undefined4 uVar39;
  int iVar40;
  uint uVar41;
  ulonglong uVar42;
  float *pfVar43;
  ulonglong uVar44;
  float *pfVar45;
  undefined4 *puVar46;
  float *pfVar47;
  longlong lVar48;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [2];
  float afStack_100 [64];
  
  iVar40 = (int)param_4;
  uVar39 = (undefined4)((ulonglong)param_4 >> 0x20);
  pfVar37 = (float *)fn_82F6A510();
  fVar36 = lbl_821AAD20;
  fVar35 = lbl_8205414C;
  fVar34 = lbl_82054148;
  fVar33 = lbl_8201546C;
  fVar32 = lbl_82002C5C;
  fVar31 = lbl_8200133C;
  if (iVar40 == 3) {
    pfVar47 = (float *)&lbl_8205415C;
    puVar46 = &lbl_82054150;
  }
  else {
    pfVar47 = (float *)&lbl_820E118C;
    puVar46 = (undefined4 *)&lbl_820E117C;
  }
  lVar38 = param_3 + 8;
  lVar48 = 0x10;
  fVar13 = lbl_821AAD20;
  fVar14 = lbl_821AAD20;
  fVar15 = lbl_821AAD20;
  fVar25 = lbl_8316EAE4;
  fVar4 = lbl_8316EAE8;
  do {
    pfVar43 = (float *)lVar38;
    fVar1 = pfVar43[-2];
    if (fVar1 < fStack_110) {
      fStack_110 = fVar1;
    }
    fVar2 = pfVar43[-1];
    if (fVar2 < fVar25) {
      fVar25 = fVar2;
    }
    fVar3 = *pfVar43;
    if (fVar3 < fVar4) {
      fVar4 = fVar3;
    }
    if (fVar13 < fVar1) {
      fVar13 = fVar1;
    }
    if (fVar15 < fVar2) {
      fVar15 = fVar2;
    }
    if (fVar14 < fVar3) {
      fVar14 = fVar3;
    }
    lVar38 = lVar38 + 0x10;
    lVar48 = lVar48 + -1;
  } while (lVar48 != 0);
  fVar3 = fVar15 - fVar25;
  fVar1 = fVar14 - fVar4;
  fVar27 = fVar13 - fStack_110;
  fVar17 = fVar27 * fVar27 + fVar1 * fVar1 + fVar3 * fVar3;
  fVar2 = fVar4;
  fVar26 = fVar15;
  if (lbl_8200DBB4 <= fVar17) {
    lVar38 = param_3 + -8;
    fVar18 = lbl_82002AE0 / fVar17;
    lVar48 = 0x10;
    fVar16 = lbl_821AAD20;
    do {
      iVar7 = (int)lVar38;
      lVar38 = lVar38 + 0x10;
      fVar8 = (*(float *)lVar38 - (fVar14 + fVar4) * lbl_82002C5C) * fVar18 * fVar1 +
              (*(float *)(iVar7 + 0xc) - (fVar15 + fVar25) * lbl_82002C5C) * fVar18 * fVar3 +
              (*(float *)(iVar7 + 8) - (fVar13 + fStack_110) * lbl_82002C5C) * fVar18 * fVar27;
      fVar16 = fVar8 * fVar8 + fVar16;
      lVar48 = lVar48 + -1;
    } while (lVar48 != 0);
    uVar42 = 0;
    bVar28 = false;
    uVar44 = 1;
    bVar29 = true;
    pfVar43 = &fStack_10c;
    lVar38 = 3;
    do {
      if (fVar16 < *pfVar43) {
        uVar42 = uVar44;
        fVar16 = *pfVar43;
        bVar28 = bVar29;
      }
      uVar44 = uVar44 + 1;
      bVar29 = (bool)(bVar29 ^ 1);
      pfVar43 = pfVar43 + 1;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
    if ((uVar42 & 2) != 0) {
      fVar26 = fVar25;
      fVar25 = fVar15;
    }
    if (bVar28) {
      fVar2 = fVar14;
      fVar14 = fVar4;
    }
    if (lbl_8205414C <= fVar17) {
      uVar42 = CONCAT44(uVar39,iVar40) - 1;
      uVar41 = 0;
      fVar15 = (float)(uVar42 & 0xffffffff);
      while( true ) {
        if (iVar40 != 0) {
          pfVar43 = afStack_108;
          lVar38 = CONCAT44(uVar39,iVar40);
          pfVar45 = pfVar47;
          do {
            fVar4 = *pfVar45;
            fVar1 = *(float *)(((int)puVar46 - (int)pfVar47) + (int)pfVar45);
            pfVar45 = pfVar45 + 1;
            pfVar43[2] = fVar1 * fVar13 + fVar4 * fStack_110;
            pfVar43[3] = fVar1 * fVar26 + fVar4 * fVar25;
            pfVar43 = pfVar43 + 4;
            *pfVar43 = fVar1 * fVar14 + fVar4 * fVar2;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
        }
        fVar3 = fVar26 - fVar25;
        fVar1 = fVar14 - fVar2;
        fVar4 = fVar13 - fStack_110;
        fVar27 = fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3;
        if (fVar27 < fVar35) break;
        fVar27 = fVar15 / fVar27;
        lVar38 = param_3 + -8;
        lVar48 = 0x10;
        fVar17 = fVar36;
        fVar16 = fVar36;
        fVar18 = fVar36;
        fVar8 = fVar36;
        fVar19 = fVar36;
        fVar20 = fVar36;
        fVar21 = fVar36;
        fVar22 = fVar36;
        do {
          iVar7 = (int)lVar38;
          fVar5 = (*(float *)(iVar7 + 8) - fStack_110) * fVar27 * fVar4 +
                  (*(float *)(iVar7 + 0x10) - fVar2) * fVar27 * fVar1 +
                  (*(float *)(iVar7 + 0xc) - fVar25) * fVar27 * fVar3;
          uVar44 = uVar42;
          if (fVar5 < fVar15) {
            uVar44 = (ulonglong)(uint)(int)(fVar5 + fVar32);
          }
          iVar30 = (int)((uVar44 & 0xffffffff) << 2);
          lVar38 = lVar38 + 0x10;
          iVar12 = (int)((uVar44 & 0xfffffff) << 4);
          fVar9 = *(float *)((int)afStack_100 + iVar12) - *(float *)(iVar7 + 8);
          fVar5 = *(float *)(iVar30 + (int)pfVar47);
          fVar6 = *(float *)(iVar30 + (int)puVar46);
          fVar24 = fVar5 * fVar33;
          fVar23 = fVar6 * fVar33;
          fVar10 = *(float *)((int)afStack_100 + iVar12 + 4) - *(float *)(iVar7 + 0xc);
          fVar11 = *(float *)((int)afStack_100 + iVar12 + 8) - *(float *)lVar38;
          fVar22 = fVar5 * fVar24 + fVar22;
          fVar21 = fVar6 * fVar23 + fVar21;
          fVar20 = fVar24 * fVar9 + fVar20;
          fVar19 = fVar24 * fVar10 + fVar19;
          fVar8 = fVar24 * fVar11 + fVar8;
          fVar18 = fVar23 * fVar9 + fVar18;
          fVar16 = fVar23 * fVar10 + fVar16;
          fVar17 = fVar23 * fVar11 + fVar17;
          lVar48 = lVar48 + -1;
        } while (lVar48 != 0);
        if (fVar36 < fVar22) {
          fVar22 = fVar31 / fVar22;
          fStack_110 = fVar22 * fVar20 + fStack_110;
          fVar25 = fVar22 * fVar19 + fVar25;
          fVar2 = fVar22 * fVar8 + fVar2;
        }
        if (fVar36 < fVar21) {
          fVar21 = fVar31 / fVar21;
          fVar13 = fVar21 * fVar18 + fVar13;
          fVar26 = fVar21 * fVar16 + fVar26;
          fVar14 = fVar21 * fVar17 + fVar14;
        }
        if (((((fVar20 * fVar20 < fVar34) && (fVar19 * fVar19 < fVar34)) && (fVar8 * fVar8 < fVar34)
             ) && (((fVar18 * fVar18 < fVar34 && (fVar16 * fVar16 < fVar34)) &&
                   (fVar17 * fVar17 < fVar34)))) || (uVar41 = uVar41 + 1, 7 < uVar41)) break;
      }
    }
  }
  *pfVar37 = fStack_110;
  pfVar37[1] = fVar25;
  pfVar37[2] = fVar2;
  *param_2 = fVar13;
  param_2[1] = fVar26;
  param_2[2] = fVar14;
  fn_82F6A55C();
  return;
}

