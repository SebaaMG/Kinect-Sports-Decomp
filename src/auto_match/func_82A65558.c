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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201467C;


void fn_82A65558(uint *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  
  fVar19 = lbl_8201467C;
  fVar10 = (float)param_1[3];
  uVar27 = 0;
  uVar11 = param_1[8];
  uVar21 = (ulonglong)uVar11;
  uVar29 = (ulonglong)param_1[6];
  iVar20 = (int)(float)param_1[4];
  uVar12 = *param_1;
  uVar30 = (ulonglong)uVar12;
  uVar31 = (ulonglong)param_1[1];
  uVar13 = param_1[7];
  uVar34 = param_1[9];
  uVar33 = (ulonglong)uVar34;
  lVar32 = ((ulonglong)uVar11 & 0x1fffffff) * 8 + (ulonglong)param_1[2];
  lVar28 = (longlong)iVar20 * (longlong)(int)uVar11;
  fVar14 = (float)param_1[4] - (float)(longlong)iVar20;
  fVar1 = lbl_82002AE0;
  if (uVar29 != 0) {
    uVar25 = 0;
    if (3 < (int)uVar11) {
      lVar23 = lVar32 + -4;
      lVar24 = uVar30 - 2;
      do {
        iVar20 = (int)lVar24;
        sVar7 = *(short *)(iVar20 + 2);
        uVar25 = uVar25 + 4;
        sVar8 = *(short *)(iVar20 + 4);
        lVar24 = lVar24 + 8;
        sVar9 = *(short *)lVar24;
        iVar15 = (int)lVar23;
        *(float *)(iVar15 + 0xc) = (float)(longlong)*(short *)(iVar20 + 6) * fVar19;
        *(float *)(iVar15 + 8) = (float)(longlong)sVar8 * fVar19;
        *(float *)(iVar15 + 4) = (float)(longlong)sVar7 * fVar19;
        lVar23 = lVar23 + 0x10;
        *(float *)lVar23 = (float)(longlong)sVar9 * fVar19;
      } while ((uVar25 & 0xffffffff) < (uVar21 - 3 & 0xffffffff));
    }
    fVar1 = lbl_82002AE0;
    if ((uVar25 & 0xffffffff) < (ulonglong)uVar11) {
      lVar22 = uVar21 - uVar25;
      lVar23 = (uVar25 & 0x3fffffff) * 4 + lVar32 + -4;
      lVar24 = (uVar25 & 0x7fffffff) * 2 + uVar30 + -2;
      do {
        lVar24 = lVar24 + 2;
        lVar23 = lVar23 + 4;
        *(float *)lVar23 = (float)(longlong)*(short *)lVar24 * fVar19;
        lVar22 = lVar22 + -1;
        fVar1 = lbl_82002AE0;
      } while (lVar22 != 0);
    }
  }
  while (fVar18 = lbl_82002AE0, lbl_82002AE0 = fVar1, (int)uVar34 < (int)uVar11) {
    if ((ulonglong)uVar13 <= (uVar27 & 0xffffffff)) goto LAB_82a65a0c;
    iVar20 = (int)(uVar33 + uVar21);
    if ((int)uVar33 < iVar20) {
      uVar25 = uVar33;
      if (3 < iVar20 - (int)uVar33) {
        lVar22 = (uVar27 & 0x3fffffff) * 4 + uVar31 + -4;
        lVar23 = (uVar33 & 0x3fffffff) * 4 + lVar32 + -4;
        lVar24 = ((uVar33 - uVar21) - 1 & 0x3fffffff) * 4 + lVar32;
        do {
          iVar15 = (int)lVar24;
          uVar25 = uVar25 + 4;
          fVar1 = *(float *)(iVar15 + 8);
          uVar27 = uVar27 + 4;
          iVar16 = (int)lVar23;
          fVar2 = *(float *)(iVar16 + 8);
          fVar3 = *(float *)(iVar15 + 0xc);
          fVar4 = *(float *)(iVar16 + 0xc);
          lVar24 = lVar24 + 0x10;
          fVar5 = *(float *)lVar24;
          lVar23 = lVar23 + 0x10;
          fVar6 = *(float *)lVar23;
          iVar17 = (int)lVar22;
          *(float *)(iVar17 + 4) =
               (*(float *)(iVar16 + 4) - *(float *)(iVar15 + 4)) * fVar10 + *(float *)(iVar15 + 4);
          *(float *)(iVar17 + 8) = (fVar2 - fVar1) * fVar10 + fVar1;
          *(float *)(iVar17 + 0xc) = (fVar4 - fVar3) * fVar10 + fVar3;
          lVar22 = lVar22 + 0x10;
          *(float *)lVar22 = (fVar6 - fVar5) * fVar10 + fVar5;
        } while ((int)uVar25 < iVar20 + -3);
      }
      if ((int)uVar25 < iVar20) {
        lVar26 = (uVar33 + uVar21) - uVar25;
        lVar22 = (uVar27 & 0x3fffffff) * 4 + uVar31 + -4;
        lVar23 = (uVar25 & 0x3fffffff) * 4 + lVar32 + -4;
        lVar24 = ((uVar25 - uVar21) - 1 & 0x3fffffff) * 4 + lVar32;
        uVar27 = lVar26 + uVar27;
        do {
          lVar24 = lVar24 + 4;
          lVar23 = lVar23 + 4;
          lVar22 = lVar22 + 4;
          *(float *)lVar22 = (*(float *)lVar23 - *(float *)lVar24) * fVar10 + *(float *)lVar24;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
    }
    uVar33 = lVar28 + uVar33;
    for (fVar10 = fVar14 + fVar10; fVar18 <= fVar10; fVar10 = fVar10 - fVar18) {
      uVar33 = uVar33 + uVar21;
    }
    fVar1 = lbl_82002AE0;
    lbl_82002AE0 = fVar18;
    uVar34 = (uint)uVar33;
  }
  if ((uVar27 & 0xffffffff) < (ulonglong)uVar13) {
    do {
      iVar20 = (int)(uVar33 + uVar21);
      if ((int)uVar33 < iVar20) {
        uVar25 = uVar33;
        if (3 < iVar20 - (int)uVar33) {
          lVar22 = (uVar27 & 0x3fffffff) * 4 + uVar31 + -4;
          lVar23 = (uVar33 & 0x7fffffff) * 2 + uVar30 + -2;
          lVar24 = ((uVar33 - uVar21) - 1 & 0x7fffffff) * 2 + uVar30;
          do {
            iVar15 = (int)lVar24;
            uVar25 = uVar25 + 4;
            uVar27 = uVar27 + 4;
            lVar24 = lVar24 + 8;
            iVar16 = (int)lVar23;
            sVar7 = *(short *)(iVar16 + 4);
            sVar8 = *(short *)(iVar16 + 6);
            lVar23 = lVar23 + 8;
            sVar9 = *(short *)lVar23;
            fVar1 = (float)(longlong)*(short *)(iVar15 + 2) * fVar19;
            fVar2 = (float)(longlong)*(short *)(iVar15 + 6) * fVar19;
            fVar3 = (float)(longlong)*(short *)(iVar15 + 4) * fVar19;
            fVar4 = (float)(longlong)*(short *)lVar24 * fVar19;
            iVar15 = (int)lVar22;
            *(float *)(iVar15 + 4) =
                 ((float)(longlong)*(short *)(iVar16 + 2) * fVar19 - fVar1) * fVar10 + fVar1;
            *(float *)(iVar15 + 0xc) = ((float)(longlong)sVar8 * fVar19 - fVar2) * fVar10 + fVar2;
            *(float *)(iVar15 + 8) = ((float)(longlong)sVar7 * fVar19 - fVar3) * fVar10 + fVar3;
            lVar22 = lVar22 + 0x10;
            *(float *)lVar22 = ((float)(longlong)sVar9 * fVar19 - fVar4) * fVar10 + fVar4;
          } while ((int)uVar25 < iVar20 + -3);
        }
        if ((int)uVar25 < iVar20) {
          lVar26 = (uVar33 + uVar21) - uVar25;
          lVar22 = (uVar27 & 0x3fffffff) * 4 + uVar31 + -4;
          lVar24 = (uVar25 & 0x7fffffff) * 2 + uVar30 + -2;
          lVar23 = ((uVar25 - uVar21) - 1 & 0x7fffffff) * 2 + uVar30;
          uVar27 = lVar26 + uVar27;
          do {
            lVar24 = lVar24 + 2;
            lVar23 = lVar23 + 2;
            fVar1 = (float)(longlong)*(short *)lVar23 * fVar19;
            lVar22 = lVar22 + 4;
            *(float *)lVar22 = ((float)(longlong)*(short *)lVar24 * fVar19 - fVar1) * fVar10 + fVar1
            ;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
      }
      uVar33 = lVar28 + uVar33;
      for (fVar10 = fVar14 + fVar10; fVar18 <= fVar10; fVar10 = fVar10 - fVar18) {
        uVar33 = uVar33 + uVar21;
      }
    } while ((uVar27 & 0xffffffff) < (ulonglong)uVar13);
  }
LAB_82a65a0c:
  if ((int)uVar33 < (int)(uVar29 - uVar21)) {
    uVar33 = uVar29 - uVar21;
  }
  uVar21 = (uVar33 - uVar29) - uVar21;
  param_1[3] = (uint)fVar10;
  param_1[9] = (uint)(uVar33 - uVar29);
  iVar20 = (int)-uVar29;
  if ((int)uVar21 < iVar20) {
    if (3 < iVar20 - (int)uVar21) {
      lVar24 = (uVar21 & 0x3fffffff) * 4 + lVar32 + -4;
      lVar28 = ((uVar21 + uVar29) - 3 & 0x3fffffff) * 4 + lVar32;
      do {
        uVar33 = uVar29 + 2 + uVar21;
        iVar15 = (int)lVar24;
        *(undefined4 *)(iVar15 + 4) = *(undefined4 *)((int)lVar28 + 0xc);
        uVar27 = uVar29 + 3 + uVar21;
        uVar21 = uVar21 + 4;
        lVar28 = lVar28 + 0x10;
        *(undefined4 *)(iVar15 + 8) = *(undefined4 *)lVar28;
        *(undefined4 *)(iVar15 + 0xc) =
             *(undefined4 *)((int)((uVar33 & 0xffffffff) << 2) + (int)lVar32);
        lVar24 = lVar24 + 0x10;
        *(undefined4 *)lVar24 = *(undefined4 *)((int)((uVar27 & 0xffffffff) << 2) + (int)lVar32);
      } while ((int)uVar21 < iVar20 + -3);
    }
    if ((int)uVar21 < iVar20) {
      lVar23 = -uVar29 - uVar21;
      lVar24 = (uVar21 & 0x3fffffff) * 4 + lVar32 + -4;
      lVar28 = (uVar21 + uVar29 & 0x3fffffff) * 4 + lVar32 + -4;
      uVar21 = lVar23 + uVar21;
      do {
        lVar28 = lVar28 + 4;
        lVar24 = lVar24 + 4;
        *(undefined4 *)lVar24 = *(undefined4 *)lVar28;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
  }
  if (3 < -(int)uVar21) {
    lVar23 = ((-uVar21 - 4 & 0xffffffff) >> 2) + 1;
    lVar24 = (uVar21 & 0x3fffffff) * 4 + lVar32 + -4;
    lVar28 = ((uVar21 + uVar29) - 3 & 0x7fffffff) * 2 + uVar30;
    do {
      sVar7 = *(short *)((int)lVar28 + 6);
      lVar28 = lVar28 + 8;
      sVar8 = *(short *)((int)((uVar29 + 2 + uVar21 & 0xffffffff) << 1) + uVar12);
      sVar9 = *(short *)((int)((uVar29 + 3 + uVar21 & 0xffffffff) << 1) + uVar12);
      uVar21 = uVar21 + 4;
      iVar20 = (int)lVar24;
      *(float *)(iVar20 + 8) = (float)(longlong)*(short *)lVar28 * fVar19;
      *(float *)(iVar20 + 4) = (float)(longlong)sVar7 * fVar19;
      *(float *)(iVar20 + 0xc) = (float)(longlong)sVar8 * fVar19;
      lVar24 = lVar24 + 0x10;
      *(float *)lVar24 = (float)(longlong)sVar9 * fVar19;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  if ((int)uVar21 < 0) {
    lVar24 = -uVar21;
    lVar32 = (uVar21 & 0x3fffffff) * 4 + lVar32 + -4;
    lVar28 = (uVar21 + uVar29 & 0x7fffffff) * 2 + uVar30 + -2;
    do {
      lVar28 = lVar28 + 2;
      lVar32 = lVar32 + 4;
      *(float *)lVar32 = (float)(longlong)*(short *)lVar28 * fVar19;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  return;
}

