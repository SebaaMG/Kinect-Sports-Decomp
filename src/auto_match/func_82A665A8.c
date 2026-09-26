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
extern unsigned int fStack_90;
extern int fn_82A662D0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201467C;
extern unsigned int uStack_8c;


void fn_82A665A8(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  float *pfVar14;
  longlong lVar12;
  longlong lVar13;
  short *psVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fStack_90;
  uint uStack_8c;
  longlong lStack_88;
  
  fStack_90 = (float)param_1[3];
  uVar21 = 0;
  uVar17 = (ulonglong)(uint)param_1[6];
  psVar4 = (short *)*param_1;
  uVar16 = ZEXT48(psVar4);
  lVar19 = (ulonglong)(uint)param_1[2] + 8;
  dVar23 = (double)fStack_90;
  uStack_8c = (uint)(float)param_1[4];
  uVar18 = (ulonglong)uStack_8c;
  iVar10 = param_1[1];
  dVar26 = (double)lbl_8201467C;
  uVar5 = param_1[7];
  uVar6 = param_1[9];
  uVar22 = (ulonglong)uVar6;
  dVar25 = (double)((float)param_1[4] - (float)(longlong)(int)uStack_8c);
  pfVar20 = (float *)lVar19;
  if (uVar17 != 0) {
    lStack_88 = (longlong)*psVar4;
    *pfVar20 = (float)((double)lStack_88 * dVar26);
  }
  dVar27 = (double)lbl_82002AE0;
  if ((int)uVar6 < 1) {
    pfVar14 = (float *)(iVar10 + -4);
    do {
      if (uVar5 <= uVar21) break;
      uVar21 = uVar21 + 1;
      pfVar7 = (float *)((int)((uVar22 & 0xffffffff) << 2) + (int)pfVar20);
      uVar22 = uVar18 + uVar22;
      dVar24 = (double)pfVar7[-1];
      pfVar14 = pfVar14 + 1;
      *pfVar14 = (float)((double)(float)((double)*pfVar7 - dVar24) * dVar23 + dVar24);
      for (dVar23 = dVar25 + dVar23; dVar23 = (double)(float)dVar23, dVar27 <= dVar23;
          dVar23 = dVar23 - dVar27) {
        uVar22 = uVar22 + 1;
      }
    } while ((int)uVar22 < 1);
    fStack_90 = (float)dVar23;
  }
  pfVar14 = (float *)(uVar21 * 4 + iVar10);
  if (((uint)pfVar14 & 0xc) != 0) {
    if (uVar5 - uVar21 < 0x10) goto LAB_82a6679c;
    do {
      uVar21 = uVar21 + 1;
      psVar15 = (short *)((int)((uVar22 & 0xffffffff) << 1) + (int)psVar4);
      uVar22 = uVar18 + uVar22;
      sVar1 = *psVar15;
      lStack_88 = (longlong)psVar15[-1];
      *pfVar14 = (float)((double)(float)((double)(float)((double)(longlong)sVar1 * dVar26) -
                                        (double)(float)((double)lStack_88 * dVar26)) * dVar23 +
                        (double)(float)((double)lStack_88 * dVar26));
      dVar23 = dVar25 + dVar23;
      pfVar14 = pfVar14 + 1;
      while( true ) {
        fStack_90 = (float)dVar23;
        dVar23 = (double)fStack_90;
        if (dVar23 < dVar27) break;
        dVar23 = dVar23 - dVar27;
        uVar22 = uVar22 + 1;
      }
    } while (((uint)pfVar14 & 0xc) != 0);
    uStack_8c = (uint)sVar1;
  }
  if (0xf < uVar5 - uVar21) {
    uVar6 = uVar5 - uVar21 & 0xfffffff0;
    lVar8 = fn_82A662D0((uVar22 & 0x7fffffff) * 2 + uVar16 + -2,uVar21 * 4 + iVar10,uVar6,
                              &fStack_90);
    dVar23 = (double)fStack_90;
    uVar21 = uVar6 + uVar21;
    uVar22 = lVar8 + uVar22;
  }
LAB_82a6679c:
  if (uVar21 < uVar5) {
    iVar11 = uVar5 - uVar21;
    pfVar14 = (float *)(uVar21 * 4 + iVar10 + -4);
    do {
      uVar9 = uVar22 & 0xffffffff;
      uVar22 = uVar18 + uVar22;
      psVar15 = (short *)((int)(uVar9 << 1) + (int)psVar4);
      dVar24 = (double)(float)((double)(longlong)psVar15[-1] * dVar26);
      pfVar14 = pfVar14 + 1;
      *pfVar14 = (float)((double)(float)((double)(longlong)*psVar15 * dVar26 - dVar24) * dVar23 +
                        dVar24);
      for (dVar23 = dVar25 + dVar23; dVar23 = (double)(float)dVar23, dVar27 <= dVar23;
          dVar23 = dVar23 - dVar27) {
        uVar22 = uVar22 + 1;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if ((int)uVar22 < (int)(uVar17 - 1)) {
    uVar22 = uVar17 - 1;
  }
  uVar18 = (uVar22 - uVar17) - 1;
  param_1[3] = (float)dVar23;
  param_1[9] = (int)(uVar22 - uVar17);
  iVar10 = (int)-uVar17;
  if ((int)uVar18 < iVar10) {
    if (3 < iVar10 - (int)uVar18) {
      lVar12 = (uVar18 & 0x3fffffff) * 4 + lVar19 + -4;
      lVar8 = ((uVar18 + uVar17) - 3 & 0x3fffffff) * 4 + lVar19;
      do {
        uVar9 = uVar17 + 2 + uVar18;
        iVar11 = (int)lVar12;
        *(undefined4 *)(iVar11 + 4) = *(undefined4 *)((int)lVar8 + 0xc);
        uVar22 = uVar17 + 3 + uVar18;
        lVar8 = lVar8 + 0x10;
        *(undefined4 *)(iVar11 + 8) = *(undefined4 *)lVar8;
        uVar18 = uVar18 + 4;
        *(undefined4 *)(iVar11 + 0xc) =
             *(undefined4 *)((int)((uVar9 & 0xffffffff) << 2) + (int)pfVar20);
        lVar12 = lVar12 + 0x10;
        *(undefined4 *)lVar12 = *(undefined4 *)((int)((uVar22 & 0xffffffff) << 2) + (int)pfVar20);
      } while ((int)uVar18 < iVar10 + -3);
    }
    if ((int)uVar18 < iVar10) {
      lVar13 = -uVar17 - uVar18;
      lVar12 = (uVar18 & 0x3fffffff) * 4 + lVar19 + -4;
      lVar8 = (uVar18 + uVar17 & 0x3fffffff) * 4 + lVar19 + -4;
      uVar18 = lVar13 + uVar18;
      do {
        lVar8 = lVar8 + 4;
        lVar12 = lVar12 + 4;
        *(undefined4 *)lVar12 = *(undefined4 *)lVar8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  if (3 < -(int)uVar18) {
    lVar13 = ((-uVar18 - 4 & 0xffffffff) >> 2) + 1;
    lVar12 = (uVar18 & 0x3fffffff) * 4 + lVar19 + -4;
    lVar8 = ((uVar18 + uVar17) - 3 & 0x7fffffff) * 2 + uVar16;
    do {
      iVar10 = (int)lVar8;
      uVar22 = uVar17 + 2 + uVar18;
      lVar8 = lVar8 + 8;
      sVar1 = *(short *)lVar8;
      sVar2 = *(short *)((int)((uVar17 + 3 + uVar18 & 0xffffffff) << 1) + (int)psVar4);
      uVar18 = uVar18 + 4;
      sVar3 = *(short *)((int)((uVar22 & 0xffffffff) << 1) + (int)psVar4);
      iVar11 = (int)lVar12;
      *(float *)(iVar11 + 4) = (float)((double)(longlong)*(short *)(iVar10 + 6) * dVar26);
      *(float *)(iVar11 + 0xc) = (float)((double)(longlong)sVar3 * dVar26);
      *(float *)(iVar11 + 8) = (float)((double)(longlong)sVar1 * dVar26);
      lVar12 = lVar12 + 0x10;
      *(float *)lVar12 = (float)((double)(longlong)sVar2 * dVar26);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((int)uVar18 < 0) {
    lVar12 = -uVar18;
    lVar8 = (uVar18 & 0x3fffffff) * 4 + lVar19 + -4;
    lVar19 = (uVar18 + uVar17 & 0x7fffffff) * 2 + uVar16 + -2;
    do {
      lVar19 = lVar19 + 2;
      lVar8 = lVar8 + 4;
      *(float *)lVar8 = (float)((double)(longlong)*(short *)lVar19 * dVar26);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

