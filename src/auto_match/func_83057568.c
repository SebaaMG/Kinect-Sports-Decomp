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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8217E290;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC9BC;


void fn_83057568(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  
  lVar20 = fn_82F6A548();
  fVar18 = lbl_821AAD20;
  iVar11 = (int)lVar20;
  uVar1 = (uint)*(float *)(iVar11 + 8);
  uVar30 = (ulonglong)uVar1;
  fVar3 = *(float *)(iVar11 + 0xc);
  uVar31 = (ulonglong)(uint)(int)*(float *)(iVar11 + 0xf10);
  fVar4 = *(float *)(iVar11 + 0x10);
  fVar5 = *(float *)(iVar11 + 0x1c);
  uVar28 = (uint)*(float *)(iVar11 + 0xf20);
  uVar27 = (ulonglong)uVar28;
  fVar6 = *(float *)(iVar11 + 0x30);
  uVar2 = (uint)*(float *)(iVar11 + 0x34);
  lVar20 = lVar20 + 0xf08;
  uVar29 = (ulonglong)(uint)(int)*(float *)(iVar11 + 0x38);
  *(float *)(iVar11 + 0x3c) = lbl_821AAD20;
  *(float *)(iVar11 + 0x40) = fVar18;
  *(float *)(iVar11 + 0x50) = fVar18;
  *(float *)(iVar11 + 0x4c) = fVar18;
  *(float *)(iVar11 + 0x5c) = fVar18;
  fVar19 = lbl_831BC9BC;
  fVar17 = lbl_8217E290;
  fVar16 = lbl_82005344;
  fVar15 = lbl_82002AE0;
  fVar14 = lbl_8200133C;
  if ((param_6 & 0xffffffff) != 0) {
    param_3 = param_3 + -4;
    param_4 = param_4 + -4;
    param_5 = param_5 + -4;
    param_2 = param_2 + -4;
    do {
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      fVar8 = *(float *)param_2 * fVar19;
      fVar10 = *(float *)param_3 * fVar19;
      uVar24 = uVar31 + 1;
      iVar23 = (int)(((uint)(int)fVar3 + uVar31 & 0x3fffffff) << 2);
      fVar9 = *(float *)(iVar23 + iVar11);
      uVar22 = (uint)(int)fVar4 + uVar31;
      uVar32 = uVar22 - uVar31;
      uVar31 = (ulonglong)(uVar1 >> 0x1f) -
               (((uVar24 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar24 < uVar30)) & uVar24;
      lVar25 = (uVar32 & 0x3fffffff) * 4 + lVar20;
      param_6 = param_6 - 1;
      uVar24 = 0;
      fVar7 = fVar15;
      if (fVar8 - fVar15 < 0.0) {
        fVar7 = fVar8;
      }
      fVar8 = fVar15;
      if (fVar10 - fVar15 < 0.0) {
        fVar8 = fVar10;
      }
      if (fVar7 - fVar14 < 0.0) {
        fVar7 = fVar14;
      }
      *(float *)(iVar23 + iVar11) = fVar7;
      if (fVar8 - fVar14 < 0.0) {
        fVar8 = fVar14;
      }
      iVar13 = (int)lVar20;
      fVar10 = *(float *)(iVar23 + iVar13);
      *(float *)(iVar23 + iVar13) = fVar8;
      *(float *)(iVar11 + 0xf14) = fVar9;
      *(float *)(iVar11 + 0xf18) = fVar10;
      if (ABS(fVar10) - ABS(fVar9) < 0.0) {
        fVar10 = fVar9;
      }
      *(float *)(iVar11 + 0xf1c) = fVar10;
      fVar9 = fVar7;
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar9 = fVar8;
      }
      *(float *)((int)((uVar22 & 0xffffffff) << 2) + iVar13) = fVar9;
      fVar9 = fVar18;
      if (3 < (int)uVar1) {
        lVar21 = ((uVar30 - 4 & 0xffffffff) >> 2) + 1;
        uVar24 = lVar21 * 4 & 0xfffffffc;
        do {
          pfVar26 = (float *)lVar25;
          lVar25 = lVar25 + 0x10;
          if (ABS(fVar9) - ABS(*pfVar26) < 0.0) {
            fVar9 = *pfVar26;
          }
          if (ABS(fVar9) - ABS(pfVar26[1]) < 0.0) {
            fVar9 = pfVar26[1];
          }
          if (ABS(fVar9) - ABS(pfVar26[2]) < 0.0) {
            fVar9 = pfVar26[2];
          }
          if (ABS(fVar9) - ABS(pfVar26[3]) < 0.0) {
            fVar9 = pfVar26[3];
          }
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if ((int)uVar24 < (int)uVar1) {
        lVar21 = uVar30 - uVar24;
        lVar25 = lVar25 + -4;
        do {
          lVar25 = lVar25 + 4;
          if (ABS(fVar9) - ABS(*(float *)lVar25) < 0.0) {
            fVar9 = *(float *)lVar25;
          }
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      fVar10 = *(float *)(iVar11 + 0xf24);
      fVar12 = ABS(fVar8);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar12 = ABS(fVar7);
      }
      fVar7 = fVar15;
      if (fVar12 - fVar15 < 0.0) {
        fVar7 = fVar12;
      }
      fVar8 = *(float *)(iVar11 + 0x14);
      if (ABS(fVar7) - ABS(*(float *)(iVar11 + 0x14)) < 0.0) {
        fVar8 = fVar7;
      }
      if (ABS(fVar10) < ABS(fVar8)) {
        uVar27 = (ulonglong)(uint)(int)fVar5;
        fVar10 = fVar8;
      }
      *(float *)(iVar11 + 0xf24) = ABS(fVar10);
      pfVar26 = (float *)(iVar11 + 0xf28);
      fVar7 = ABS(fVar10) - *(float *)(iVar11 + 0x18);
      uVar27 = ((uVar27 - 1 & 0xffffffff) >> 0x1f) - 1 & uVar27 - 1;
      uVar28 = (uint)uVar27;
      if (ABS(fVar7) - ABS(*pfVar26) < 0.0) {
        fVar7 = *pfVar26;
      }
      *pfVar26 = fVar7;
      fVar7 = *(float *)(iVar11 + 0x24);
      fVar8 = fVar18;
      if ((int)uVar28 < 1) {
        fVar7 = fVar18;
        fVar8 = *(float *)(iVar11 + 0x20);
      }
      fVar7 = (ABS(fVar9) - *(float *)(iVar11 + 0x18)) * fVar8 +
              *pfVar26 * fVar7 + *(float *)(iVar11 + 0x18);
      fVar8 = *(float *)(iVar11 + 0xf24);
      if (ABS(fVar7) - ABS(*(float *)(iVar11 + 0xf24)) < 0.0) {
        fVar8 = fVar7;
      }
      fVar7 = *pfVar26;
      if ((int)uVar28 < 1) {
        fVar7 = fVar18;
      }
      *pfVar26 = fVar7;
      fVar7 = *(float *)(iVar11 + 0xf1c);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar11 + 0x18) = ABS(fVar8);
      fVar10 = *(float *)(iVar11 + 0xf24);
      if (ABS(ABS(fVar8)) - ABS(fVar7) < 0.0) {
        fVar10 = fVar7;
      }
      *(float *)(iVar11 + 0xf24) = ABS(fVar10);
      fVar7 = *(float *)(iVar11 + 0xf2c);
      fVar8 = *(float *)(iVar11 + 0x28);
      if (ABS(fVar7) - ABS(ABS(fVar9)) < 0.0) {
        fVar8 = *(float *)(iVar11 + 0x2c);
      }
      fVar7 = fVar8 * (ABS(fVar9) - fVar7) + fVar7;
      *(float *)(iVar11 + 0xf2c) = fVar7;
      fVar9 = *(float *)(iVar11 + 0x18);
      if (*(float *)(iVar11 + 0x18) - fVar7 < 0.0) {
        fVar9 = fVar7;
      }
      *(float *)(iVar11 + 0x18) = fVar9;
      fVar7 = *(float *)(iVar11 + 0xf24);
      if ((int)uVar28 < 1) {
        fVar7 = fVar9;
      }
      *(float *)(iVar11 + 0xf24) = fVar7;
      uVar22 = uVar29 + (uint)(int)fVar6;
      uVar32 = uVar29 + 1;
      uVar24 = uVar22 - uVar29;
      *(float *)((int)((uVar22 & 0xffffffff) << 2) + iVar13) = fVar9;
      uVar29 = (ulonglong)(uVar2 >> 0x1f) -
               (((uVar32 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar32 < uVar2)) & uVar32;
      iVar23 = 0;
      fVar9 = *(float *)((int)((uVar24 & 0xffffffff) << 2) + iVar13);
      fVar7 = *(float *)((int)fVar6 * 4 + iVar11);
      fVar8 = fVar18;
      fVar10 = fVar18;
      if (1 < (int)uVar2) {
        lVar21 = (((ulonglong)uVar2 - 2 & 0xffffffff) >> 1) + 1;
        lVar25 = (uVar24 + 1 & 0x3fffffff) * 4 + lVar20 + -4;
        iVar23 = (int)lVar21 * 2;
        do {
          iVar13 = (int)lVar25;
          fVar8 = fVar9 * fVar7 + fVar8;
          lVar25 = lVar25 + 8;
          fVar9 = *(float *)lVar25;
          fVar10 = *(float *)(iVar13 + 4) * fVar7 + fVar10;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      fVar12 = fVar18;
      if (iVar23 < (int)uVar2) {
        fVar12 = fVar9 * fVar7;
      }
      fVar9 = *(float *)(iVar11 + 0x3c);
      fVar10 = fVar8 + fVar12 + fVar10;
      fVar7 = fVar10 * fVar16 - fVar10 * fVar10;
      fVar8 = (fVar7 * fVar16 - fVar7 * fVar7) * fVar17;
      iVar23 = (int)fVar8;
      pfVar26 = (float *)(iVar23 * 4 + iVar11 + 0xf34);
      fVar7 = *pfVar26;
      fVar7 = (pfVar26[1] - fVar7) * (fVar8 - (float)(longlong)iVar23) + fVar7;
      fVar8 = fVar7;
      if (ABS(fVar7) - ABS(fVar9) < 0.0) {
        fVar8 = fVar9;
      }
      *(float *)(iVar11 + 0x3c) = fVar8;
      fVar9 = *(float *)(iVar11 + 0xf14);
      fVar8 = *(float *)(iVar11 + 0x40);
      if (ABS(fVar8) - ABS(fVar9) < 0.0) {
        fVar8 = fVar9;
      }
      *(float *)(iVar11 + 0x40) = fVar8;
      fVar8 = fVar9 * fVar7 * *(float *)(iVar11 + 0x44);
      fVar9 = *(float *)(iVar11 + 0x4c);
      if (ABS(fVar9) - ABS(fVar8) < 0.0) {
        fVar9 = fVar8;
      }
      *(float *)(iVar11 + 0x4c) = fVar9;
      param_4 = param_4 + 4;
      *(float *)param_4 = fVar8;
      fVar9 = *(float *)(iVar11 + 0xf18);
      fVar8 = *(float *)(iVar11 + 0x50);
      if (ABS(fVar8) - ABS(fVar9) < 0.0) {
        fVar8 = fVar9;
      }
      *(float *)(iVar11 + 0x50) = fVar8;
      fVar7 = fVar9 * fVar7 * *(float *)(iVar11 + 0x54);
      fVar9 = *(float *)(iVar11 + 0x5c);
      if (ABS(fVar9) - ABS(fVar7) < 0.0) {
        fVar9 = fVar7;
      }
      *(float *)(iVar11 + 0x5c) = fVar9;
      param_5 = param_5 + 4;
      *(float *)param_5 = fVar7;
    } while ((param_6 & 0xffffffff) != 0);
  }
  *(float *)(iVar11 + 0xf20) = (float)(longlong)(int)uVar28;
  *(float *)(iVar11 + 0xf10) = (float)(longlong)(int)uVar31;
  *(float *)(iVar11 + 0x38) = (float)(longlong)(int)uVar29;
  fn_82F6A594();
  return;
}

