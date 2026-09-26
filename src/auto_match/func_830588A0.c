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
extern float fRam831bca00;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8217E3C0;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_830588A0(longlong param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
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
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float *pfVar26;
  ulonglong uVar27;
  float *pfVar28;
  float *pfVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  
  fVar18 = lbl_821AAD20;
  iVar11 = (int)param_1;
  uVar1 = (uint)*(float *)(iVar11 + 4);
  uVar33 = (ulonglong)uVar1;
  fVar3 = *(float *)(iVar11 + 8);
  uVar21 = (ulonglong)(uint)(int)*(float *)(iVar11 + 0xca8);
  fVar4 = *(float *)(iVar11 + 0x14);
  uVar31 = (uint)*(float *)(iVar11 + 0xcb0);
  uVar30 = (ulonglong)uVar31;
  fVar5 = *(float *)(iVar11 + 0x28);
  uVar2 = (uint)*(float *)(iVar11 + 0x2c);
  param_1 = param_1 + 0xca4;
  uVar32 = (ulonglong)(uint)(int)*(float *)(iVar11 + 0x30);
  *(float *)(iVar11 + 0x34) = lbl_821AAD20;
  *(float *)(iVar11 + 0x38) = fVar18;
  *(float *)(iVar11 + 0x44) = fVar18;
  fVar19 = fRam831bca00;
  fVar17 = lbl_8217E3C0;
  fVar16 = lbl_82005344;
  fVar15 = lbl_82002AE0;
  fVar14 = lbl_8200133C;
  if (param_4 != 0) {
    pfVar29 = (float *)(param_2 + -4);
    pfVar28 = (float *)(param_3 + -4);
    do {
      pfVar29 = pfVar29 + 1;
      uVar27 = (uint)(int)fVar3 + uVar21;
      uVar24 = uVar21 + 1;
      iVar13 = (int)((uVar27 & 0xffffffff) << 2);
      uVar27 = uVar27 - uVar21;
      iVar23 = (int)param_1;
      uVar9 = *(undefined4 *)(iVar13 + iVar23);
      uVar21 = (ulonglong)(uVar1 >> 0x1f) -
               (((uVar24 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar24 < uVar33)) & uVar24;
      param_4 = param_4 + -1;
      lVar20 = (uVar27 & 0x3fffffff) * 4 + param_1;
      uVar24 = 0;
      fVar6 = fVar15;
      if (*pfVar29 * fVar19 - fVar15 < 0.0) {
        fVar6 = *pfVar29 * fVar19;
      }
      if (fVar6 - fVar14 < 0.0) {
        fVar6 = fVar14;
      }
      *(float *)(iVar13 + iVar23) = fVar6;
      *(undefined4 *)(iVar11 + 0xcac) = uVar9;
      fVar10 = fVar18;
      if (3 < (int)uVar1) {
        lVar22 = ((uVar33 - 4 & 0xffffffff) >> 2) + 1;
        uVar24 = lVar22 * 4 & 0xfffffffc;
        do {
          pfVar26 = (float *)lVar20;
          lVar20 = lVar20 + 0x10;
          if (ABS(fVar10) - ABS(*pfVar26) < 0.0) {
            fVar10 = *pfVar26;
          }
          if (ABS(fVar10) - ABS(pfVar26[1]) < 0.0) {
            fVar10 = pfVar26[1];
          }
          if (ABS(fVar10) - ABS(pfVar26[2]) < 0.0) {
            fVar10 = pfVar26[2];
          }
          if (ABS(fVar10) - ABS(pfVar26[3]) < 0.0) {
            fVar10 = pfVar26[3];
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      if ((int)uVar24 < (int)uVar1) {
        lVar22 = uVar33 - uVar24;
        lVar20 = lVar20 + -4;
        do {
          lVar20 = lVar20 + 4;
          if (ABS(fVar10) - ABS(*(float *)lVar20) < 0.0) {
            fVar10 = *(float *)lVar20;
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      fVar7 = *(float *)(iVar11 + 0xcb4);
      fVar8 = fVar15;
      if (ABS(fVar6) - fVar15 < 0.0) {
        fVar8 = ABS(fVar6);
      }
      fVar6 = *(float *)(iVar11 + 0xc);
      if (ABS(fVar8) - ABS(*(float *)(iVar11 + 0xc)) < 0.0) {
        fVar6 = fVar8;
      }
      if (ABS(fVar7) < ABS(fVar6)) {
        uVar30 = (ulonglong)(uint)(int)fVar4;
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0xcb4) = ABS(fVar7);
      pfVar26 = (float *)(iVar11 + 0xcb8);
      fVar6 = ABS(fVar7) - *(float *)(iVar11 + 0x10);
      uVar30 = ((uVar30 - 1 & 0xffffffff) >> 0x1f) - 1 & uVar30 - 1;
      uVar31 = (uint)uVar30;
      if (ABS(fVar6) - ABS(*pfVar26) < 0.0) {
        fVar6 = *pfVar26;
      }
      *pfVar26 = fVar6;
      fVar6 = *(float *)(iVar11 + 0x1c);
      fVar7 = fVar18;
      if ((int)uVar31 < 1) {
        fVar6 = fVar18;
        fVar7 = *(float *)(iVar11 + 0x18);
      }
      fVar8 = *pfVar26;
      fVar6 = (ABS(fVar10) - *(float *)(iVar11 + 0x10)) * fVar7 +
              *pfVar26 * fVar6 + *(float *)(iVar11 + 0x10);
      fVar7 = *(float *)(iVar11 + 0xcb4);
      if (ABS(fVar6) - ABS(*(float *)(iVar11 + 0xcb4)) < 0.0) {
        fVar7 = fVar6;
      }
      if ((int)uVar31 < 1) {
        fVar8 = (float)(longlong)(int)uVar31;
      }
      *pfVar26 = fVar8;
      fVar6 = *(float *)(iVar11 + 0xcac);
      if (ABS(fVar7) - ABS(fVar6) < 0.0) {
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0x10) = ABS(fVar7);
      fVar8 = *(float *)(iVar11 + 0xcb4);
      if (ABS(ABS(fVar7)) - ABS(fVar6) < 0.0) {
        fVar8 = fVar6;
      }
      *(float *)(iVar11 + 0xcb4) = ABS(fVar8);
      fVar6 = *(float *)(iVar11 + 0xcbc);
      fVar7 = *(float *)(iVar11 + 0x20);
      if (ABS(fVar6) - ABS(ABS(fVar10)) < 0.0) {
        fVar7 = *(float *)(iVar11 + 0x24);
      }
      fVar6 = fVar7 * (ABS(fVar10) - fVar6) + fVar6;
      *(float *)(iVar11 + 0xcbc) = fVar6;
      fVar10 = *(float *)(iVar11 + 0x10);
      if (*(float *)(iVar11 + 0x10) - fVar6 < 0.0) {
        fVar10 = fVar6;
      }
      *(float *)(iVar11 + 0x10) = fVar10;
      fVar6 = *(float *)(iVar11 + 0xcb4);
      if ((int)uVar31 < 1) {
        fVar6 = fVar10;
      }
      uVar24 = uVar32 + (uint)(int)fVar5;
      *(float *)(iVar11 + 0xcb4) = fVar6;
      uVar25 = uVar32 + 1;
      uVar27 = uVar24 - uVar32;
      *(float *)((int)((uVar24 & 0xffffffff) << 2) + iVar23) = fVar10;
      uVar32 = (ulonglong)(uVar2 >> 0x1f) -
               (((uVar25 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar25 < uVar2)) & uVar25;
      fVar6 = *(float *)((int)((uVar27 & 0xffffffff) << 2) + iVar23);
      iVar23 = 0;
      fVar10 = *(float *)((int)fVar5 * 4 + iVar11);
      fVar7 = fVar18;
      fVar8 = fVar18;
      if (1 < (int)uVar2) {
        lVar22 = (((ulonglong)uVar2 - 2 & 0xffffffff) >> 1) + 1;
        lVar20 = (uVar27 + 1 & 0x3fffffff) * 4 + param_1 + -4;
        iVar23 = (int)lVar22 * 2;
        do {
          iVar13 = (int)lVar20;
          fVar8 = fVar6 * fVar10 + fVar8;
          lVar20 = lVar20 + 8;
          fVar6 = *(float *)lVar20;
          fVar7 = *(float *)(iVar13 + 4) * fVar10 + fVar7;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      fVar12 = fVar18;
      if (iVar23 < (int)uVar2) {
        fVar12 = fVar6 * fVar10;
      }
      fVar6 = *(float *)(iVar11 + 0x34);
      fVar12 = fVar7 + fVar8 + fVar12;
      fVar10 = fVar12 * fVar16 - fVar12 * fVar12;
      fVar7 = (fVar10 * fVar16 - fVar10 * fVar10) * fVar17;
      iVar23 = (int)fVar7;
      pfVar26 = (float *)(iVar23 * 4 + iVar11 + 0xcc4);
      fVar10 = *pfVar26;
      fVar10 = (pfVar26[1] - fVar10) * (fVar7 - (float)(longlong)iVar23) + fVar10;
      fVar7 = fVar10;
      if (ABS(fVar10) - ABS(fVar6) < 0.0) {
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0x34) = fVar7;
      fVar6 = *(float *)(iVar11 + 0xcac);
      fVar7 = *(float *)(iVar11 + 0x38);
      if (ABS(fVar7) - ABS(fVar6) < 0.0) {
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0x38) = fVar7;
      fVar10 = fVar6 * fVar10 * *(float *)(iVar11 + 0x3c);
      fVar6 = *(float *)(iVar11 + 0x44);
      if (ABS(fVar6) - ABS(fVar10) < 0.0) {
        fVar6 = fVar10;
      }
      *(float *)(iVar11 + 0x44) = fVar6;
      pfVar28 = pfVar28 + 1;
      *pfVar28 = fVar10;
    } while (param_4 != 0);
  }
  *(float *)(iVar11 + 0xca8) = (float)(longlong)(int)uVar21;
  *(float *)(iVar11 + 0xcb0) = (float)(longlong)(int)uVar31;
  *(float *)(iVar11 + 0x30) = (float)(longlong)(int)uVar32;
  return;
}

