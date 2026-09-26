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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201467C;


void fn_82A65C20(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  uint uVar20;
  float fVar21;
  short *psVar22;
  uint uVar23;
  float fVar24;
  short *psVar25;
  int iVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  longlong lVar30;
  ulonglong uVar31;
  float *pfVar32;
  int iVar33;
  uint uVar34;
  float *pfVar37;
  longlong lVar35;
  longlong lVar36;
  longlong lVar38;
  float *pfVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  
  fVar29 = lbl_8201467C;
  uVar20 = param_1[2];
  uVar34 = 0;
  fVar21 = (float)param_1[3];
  lVar38 = (ulonglong)uVar20 + 0x30;
  uVar31 = (ulonglong)(uint)param_1[6];
  psVar22 = (short *)*param_1;
  uVar1 = (uint)(float)param_1[4];
  pfVar37 = (float *)param_1[1];
  uVar23 = param_1[7];
  uVar41 = param_1[9];
  uVar40 = (ulonglong)uVar41;
  lVar30 = ((ulonglong)uVar1 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0x7fffffff) * 2;
  fVar24 = (float)param_1[4] - (float)(longlong)(int)uVar1;
  pfVar39 = (float *)lVar38;
  pfVar27 = pfVar37;
  fVar2 = lbl_82002AE0;
  if (uVar31 != 0) {
    sVar13 = psVar22[4];
    sVar14 = psVar22[5];
    sVar15 = *psVar22;
    sVar16 = psVar22[1];
    sVar17 = psVar22[2];
    *(float *)(uVar20 + 0x3c) = (float)(longlong)psVar22[3] * lbl_8201467C;
    *pfVar39 = (float)(longlong)sVar15 * fVar29;
    *(float *)(uVar20 + 0x38) = (float)(longlong)sVar17 * fVar29;
    *(float *)(uVar20 + 0x34) = (float)(longlong)sVar16 * fVar29;
    *(float *)(uVar20 + 0x40) = (float)(longlong)sVar13 * fVar29;
    *(float *)(uVar20 + 0x44) = (float)(longlong)sVar14 * fVar29;
    fVar2 = lbl_82002AE0;
  }
  while (fVar28 = lbl_82002AE0, lbl_82002AE0 = fVar2, (int)uVar41 < 6) {
    if (uVar23 <= uVar34) goto LAB_82a660bc;
    pfVar32 = pfVar39 + (int)uVar40;
    fVar4 = *(float *)((int)((uVar40 - 6 & 0xffffffff) << 2) + (int)pfVar39);
    fVar5 = *(float *)((int)((uVar40 - 5 & 0xffffffff) << 2) + (int)pfVar39);
    fVar6 = *(float *)((int)((uVar40 - 4 & 0xffffffff) << 2) + (int)pfVar39);
    uVar42 = uVar40 + 5;
    fVar2 = pfVar32[1];
    fVar3 = pfVar32[-1];
    fVar7 = *(float *)((int)((uVar40 + 2 & 0xffffffff) << 2) + (int)pfVar39);
    fVar8 = *(float *)((int)((uVar40 - 3 & 0xffffffff) << 2) + (int)pfVar39);
    fVar9 = *(float *)((int)((uVar40 + 3 & 0xffffffff) << 2) + (int)pfVar39);
    uVar34 = uVar34 + 6;
    fVar10 = *(float *)((int)((uVar40 - 2 & 0xffffffff) << 2) + (int)pfVar39);
    fVar11 = *(float *)((int)((uVar40 + 4 & 0xffffffff) << 2) + (int)pfVar39);
    uVar40 = lVar30 + uVar40;
    fVar12 = *(float *)((int)((uVar42 & 0xffffffff) << 2) + (int)pfVar39);
    *pfVar27 = (*pfVar32 - fVar4) * fVar21 + fVar4;
    pfVar27[1] = (fVar2 - fVar5) * fVar21 + fVar5;
    pfVar27[2] = (fVar7 - fVar6) * fVar21 + fVar6;
    pfVar27[3] = (fVar9 - fVar8) * fVar21 + fVar8;
    pfVar27[4] = (fVar11 - fVar10) * fVar21 + fVar10;
    pfVar27[5] = (fVar12 - fVar3) * fVar21 + fVar3;
    for (fVar21 = fVar24 + fVar21; fVar28 <= fVar21; fVar21 = fVar21 - fVar28) {
      uVar40 = uVar40 + 6;
    }
    pfVar27 = pfVar27 + 6;
    fVar2 = lbl_82002AE0;
    lbl_82002AE0 = fVar28;
    uVar41 = (uint)uVar40;
  }
  if (uVar34 < uVar23) {
    pfVar37 = pfVar37 + uVar34;
    do {
      psVar25 = psVar22 + (int)uVar40;
      sVar14 = *(short *)((int)((uVar40 - 5 & 0xffffffff) << 1) + (int)psVar22);
      sVar13 = psVar25[1];
      sVar15 = *(short *)((int)((uVar40 - 6 & 0xffffffff) << 1) + (int)psVar22);
      sVar16 = *(short *)((int)((uVar40 - 4 & 0xffffffff) << 1) + (int)psVar22);
      sVar17 = *(short *)((int)((uVar40 + 2 & 0xffffffff) << 1) + (int)psVar22);
      sVar18 = *(short *)((int)((uVar40 + 3 & 0xffffffff) << 1) + (int)psVar22);
      sVar19 = *(short *)((int)((uVar40 - 3 & 0xffffffff) << 1) + (int)psVar22);
      uVar34 = uVar34 + 6;
      *pfVar37 = ((float)(longlong)((int)*psVar25 - (int)sVar15) * fVar21 +
                 (float)(longlong)(int)sVar15) * fVar29;
      pfVar37[1] = ((float)(longlong)((int)sVar13 - (int)sVar14) * fVar21 +
                   (float)(longlong)(int)sVar14) * fVar29;
      pfVar37[2] = ((float)(longlong)((int)sVar17 - (int)sVar16) * fVar21 +
                   (float)(longlong)(int)sVar16) * fVar29;
      sVar13 = psVar25[-1];
      uVar43 = uVar40 - 2;
      uVar42 = uVar40 + 4;
      sVar14 = *(short *)((int)((uVar40 + 5 & 0xffffffff) << 1) + (int)psVar22);
      uVar40 = lVar30 + uVar40;
      sVar15 = *(short *)((int)((uVar43 & 0xffffffff) << 1) + (int)psVar22);
      sVar16 = *(short *)((int)((uVar42 & 0xffffffff) << 1) + (int)psVar22);
      pfVar37[3] = ((float)(longlong)((int)sVar18 - (int)sVar19) * fVar21 +
                   (float)(longlong)(int)sVar19) * fVar29;
      pfVar37[4] = ((float)(longlong)((int)sVar16 - (int)sVar15) * fVar21 +
                   (float)(longlong)(int)sVar15) * fVar29;
      pfVar37[5] = ((float)(longlong)((int)sVar14 - (int)sVar13) * fVar21 +
                   (float)(longlong)(int)sVar13) * fVar29;
      pfVar37 = pfVar37 + 6;
      for (fVar21 = fVar24 + fVar21; fVar28 <= fVar21; fVar21 = fVar21 - fVar28) {
        uVar40 = uVar40 + 6;
      }
    } while (uVar34 < uVar23);
  }
LAB_82a660bc:
  if ((int)uVar40 < (int)(uVar31 - 6)) {
    uVar40 = uVar31 - 6;
  }
  uVar42 = (uVar40 - uVar31) - 6;
  param_1[3] = fVar21;
  param_1[9] = (int)(uVar40 - uVar31);
  iVar33 = (int)-uVar31;
  if ((int)uVar42 < iVar33) {
    if (3 < iVar33 - (int)uVar42) {
      lVar35 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
      lVar30 = ((uVar42 + uVar31) - 3 & 0x3fffffff) * 4 + lVar38;
      do {
        uVar43 = uVar31 + 2 + uVar42;
        iVar26 = (int)lVar35;
        *(undefined4 *)(iVar26 + 4) = *(undefined4 *)((int)lVar30 + 0xc);
        uVar40 = uVar31 + 3 + uVar42;
        lVar30 = lVar30 + 0x10;
        *(undefined4 *)(iVar26 + 8) = *(undefined4 *)lVar30;
        uVar42 = uVar42 + 4;
        *(undefined4 *)(iVar26 + 0xc) =
             *(undefined4 *)((int)((uVar43 & 0xffffffff) << 2) + (int)pfVar39);
        lVar35 = lVar35 + 0x10;
        *(undefined4 *)lVar35 = *(undefined4 *)((int)((uVar40 & 0xffffffff) << 2) + (int)pfVar39);
      } while ((int)uVar42 < iVar33 + -3);
    }
    if ((int)uVar42 < iVar33) {
      lVar36 = -uVar31 - uVar42;
      lVar35 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
      lVar30 = (uVar42 + uVar31 & 0x3fffffff) * 4 + lVar38 + -4;
      uVar42 = lVar36 + uVar42;
      do {
        lVar30 = lVar30 + 4;
        lVar35 = lVar35 + 4;
        *(undefined4 *)lVar35 = *(undefined4 *)lVar30;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
  }
  if (3 < -(int)uVar42) {
    lVar36 = ((-uVar42 - 4 & 0xffffffff) >> 2) + 1;
    lVar35 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
    lVar30 = ((uVar42 + uVar31) - 3 & 0x7fffffff) * 2 + ZEXT48(psVar22);
    do {
      sVar13 = *(short *)((int)lVar30 + 6);
      lVar30 = lVar30 + 8;
      uVar40 = uVar31 + 2 + uVar42;
      sVar14 = *(short *)((int)((uVar31 + 3 + uVar42 & 0xffffffff) << 1) + (int)psVar22);
      uVar42 = uVar42 + 4;
      sVar15 = *(short *)((int)((uVar40 & 0xffffffff) << 1) + (int)psVar22);
      iVar33 = (int)lVar35;
      *(float *)(iVar33 + 8) = (float)(longlong)*(short *)lVar30 * fVar29;
      *(float *)(iVar33 + 4) = (float)(longlong)sVar13 * fVar29;
      *(float *)(iVar33 + 0xc) = (float)(longlong)sVar15 * fVar29;
      lVar35 = lVar35 + 0x10;
      *(float *)lVar35 = (float)(longlong)sVar14 * fVar29;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  if ((int)uVar42 < 0) {
    lVar35 = -uVar42;
    lVar38 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
    lVar30 = (uVar42 + uVar31 & 0x7fffffff) * 2 + ZEXT48(psVar22) + -2;
    do {
      lVar30 = lVar30 + 2;
      lVar38 = lVar38 + 4;
      *(float *)lVar38 = (float)(longlong)*(short *)lVar30 * fVar29;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
  }
  return;
}

