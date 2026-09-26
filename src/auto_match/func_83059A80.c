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
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8217E4C0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BCA44;


void fn_83059A80(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,int param_8)

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
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  float *pfVar29;
  ulonglong uVar28;
  int iVar30;
  float *pfVar31;
  float *pfVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float *pfStack0000004c;
  float *in_stack_00000054;
  float *in_stack_0000005c;
  float *in_stack_00000064;
  float *in_stack_0000006c;
  float *in_stack_00000074;
  int in_stack_0000007c;
  
  lVar22 = fn_82F6A544();
  fVar20 = lbl_821AAD20;
  iVar12 = (int)lVar22;
  fVar3 = *(float *)(iVar12 + 0x1c);
  uVar34 = (uint)*(float *)(iVar12 + 0x1418);
  fVar4 = *(float *)(iVar12 + 0x20);
  fVar5 = *(float *)(iVar12 + 0x40);
  uVar1 = (uint)*(float *)(iVar12 + 0x44);
  uVar2 = (uint)*(float *)(iVar12 + 0x18);
  lVar22 = lVar22 + 0x13e0;
  fVar6 = *(float *)(iVar12 + 0x2c);
  *(float *)(iVar12 + 0x4c) = lbl_821AAD20;
  *(float *)(iVar12 + 0x50) = fVar20;
  *(float *)(iVar12 + 0x70) = fVar20;
  *(float *)(iVar12 + 0x60) = fVar20;
  *(float *)(iVar12 + 0x80) = fVar20;
  *(float *)(iVar12 + 0x90) = fVar20;
  *(float *)(iVar12 + 0xa0) = fVar20;
  *(float *)(iVar12 + 0x5c) = fVar20;
  *(float *)(iVar12 + 0x7c) = fVar20;
  uVar37 = (ulonglong)(uint)(int)*(float *)(iVar12 + 0x13f8);
  *(float *)(iVar12 + 0x6c) = fVar20;
  *(float *)(iVar12 + 0x8c) = fVar20;
  *(float *)(iVar12 + 0x9c) = fVar20;
  uVar36 = (ulonglong)uVar2;
  *(float *)(iVar12 + 0xac) = fVar20;
  fVar21 = lbl_831BCA44;
  fVar19 = lbl_8217E4C0;
  fVar18 = lbl_82005344;
  fVar17 = lbl_82002AE0;
  fVar16 = lbl_8200133C;
  uVar33 = (ulonglong)uVar34;
  uVar35 = (ulonglong)(uint)(int)*(float *)(iVar12 + 0x48);
  if (in_stack_0000007c != 0) {
    pfStack0000004c = (float *)(param_8 + -4);
    in_stack_0000005c = (float *)((int)in_stack_0000005c + -4);
    in_stack_00000064 = (float *)((int)in_stack_00000064 + -4);
    in_stack_0000006c = (float *)((int)in_stack_0000006c + -4);
    in_stack_00000074 = (float *)((int)in_stack_00000074 + -4);
    param_5 = param_5 + -4;
    param_6 = param_6 + -4;
    param_7 = param_7 + -4;
    in_stack_00000054 = (float *)((int)in_stack_00000054 + -4);
    param_2 = param_2 + -4;
    param_3 = param_3 + -4;
    param_4 = param_4 + -4;
    uVar28 = uVar37;
    do {
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      fVar9 = *(float *)param_2 * fVar21;
      fVar8 = *(float *)param_3 * fVar21;
      uVar25 = (uint)(int)fVar3 + uVar28;
      uVar37 = uVar28 + 1;
      uVar24 = (uint)(int)fVar4 + uVar28;
      uVar37 = (ulonglong)(uVar2 >> 0x1f) -
               (((uVar37 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar37 < uVar36)) & uVar37;
      in_stack_0000007c = in_stack_0000007c + -1;
      fVar7 = fVar17;
      if (fVar9 - fVar17 < 0.0) {
        fVar7 = fVar9;
      }
      fVar9 = fVar17;
      if (fVar8 - fVar17 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar7 - fVar16 < 0.0) {
        fVar7 = fVar16;
      }
      pfVar31 = (float *)lVar22;
      *pfVar31 = fVar7;
      if (fVar9 - fVar16 < 0.0) {
        fVar9 = fVar16;
      }
      *(float *)(iVar12 + 0x13e4) = fVar9;
      param_5 = param_5 + 4;
      param_4 = param_4 + 4;
      fVar9 = *(float *)param_4 * fVar21;
      fVar8 = *(float *)param_5 * fVar21;
      fVar7 = fVar17;
      if (fVar9 - fVar17 < 0.0) {
        fVar7 = fVar9;
      }
      fVar9 = fVar17;
      if (fVar8 - fVar17 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar7 - fVar16 < 0.0) {
        fVar7 = fVar16;
      }
      *(float *)(iVar12 + 0x13e8) = fVar7;
      if (fVar9 - fVar16 < 0.0) {
        fVar9 = fVar16;
      }
      *(float *)(iVar12 + 0x13ec) = fVar9;
      param_7 = param_7 + 4;
      param_6 = param_6 + 4;
      fVar9 = *(float *)param_6 * fVar21;
      fVar8 = *(float *)param_7 * fVar21;
      fVar7 = fVar17;
      if (fVar9 - fVar17 < 0.0) {
        fVar7 = fVar9;
      }
      fVar9 = fVar17;
      if (fVar8 - fVar17 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar7 - fVar16 < 0.0) {
        fVar7 = fVar16;
      }
      *(float *)(iVar12 + 0x13f0) = fVar7;
      if (fVar9 - fVar16 < 0.0) {
        fVar9 = fVar16;
      }
      *(float *)(iVar12 + 0x13f4) = fVar9;
      fVar7 = *(float *)(iVar12 + 0x18);
      iVar30 = (int)((uVar25 & 0x3fffffff) << 2);
      fVar9 = *(float *)(iVar30 + iVar12);
      pfVar32 = (float *)(iVar12 + 0x13fc);
      *(float *)(iVar30 + iVar12) = *pfVar31;
      uVar10 = *(undefined4 *)(iVar30 + (int)pfVar31);
      *(undefined4 *)(iVar30 + (int)pfVar31) = *(undefined4 *)(iVar12 + 0x13e4);
      *pfVar32 = fVar9;
      *(undefined4 *)(iVar12 + 0x1400) = uVar10;
      uVar26 = (uint)(int)fVar7 + uVar25 + 1;
      iVar30 = (int)((uVar26 & 0x3fffffff) << 2);
      uVar10 = *(undefined4 *)(iVar30 + iVar12);
      *(undefined4 *)(iVar30 + iVar12) = *(undefined4 *)(iVar12 + 0x13e8);
      uVar11 = *(undefined4 *)(iVar30 + (int)pfVar31);
      *(undefined4 *)(iVar30 + (int)pfVar31) = *(undefined4 *)(iVar12 + 0x13ec);
      *(undefined4 *)(iVar12 + 0x1404) = uVar10;
      *(undefined4 *)(iVar12 + 0x1408) = uVar11;
      uVar25 = 0;
      iVar30 = (int)(((uint)(int)fVar7 + uVar26 + 1 & 0x3fffffff) << 2);
      uVar10 = *(undefined4 *)(iVar30 + iVar12);
      lVar27 = (uVar24 - uVar28 & 0x3fffffff) * 4 + lVar22;
      *(undefined4 *)(iVar30 + iVar12) = *(undefined4 *)(iVar12 + 0x13f0);
      uVar11 = *(undefined4 *)(iVar30 + (int)pfVar31);
      *(undefined4 *)(iVar30 + (int)pfVar31) = *(undefined4 *)(iVar12 + 0x13f4);
      *(undefined4 *)(iVar12 + 0x140c) = uVar10;
      *(undefined4 *)(iVar12 + 0x1410) = uVar11;
      fVar7 = *(float *)(iVar12 + 0x1400);
      fVar9 = *(float *)(iVar12 + 0x13e4);
      if (ABS(*(float *)(iVar12 + 0x13e4)) - ABS(*(float *)(iVar12 + 0x13e0)) < 0.0) {
        fVar9 = *(float *)(iVar12 + 0x13e0);
      }
      if (ABS(fVar9) - ABS(*(float *)(iVar12 + 0x13e8)) < 0.0) {
        fVar9 = *(float *)(iVar12 + 0x13e8);
      }
      if (ABS(fVar7) - ABS(*pfVar32) < 0.0) {
        fVar7 = *pfVar32;
      }
      if (ABS(fVar9) - ABS(*(float *)(iVar12 + 0x13ec)) < 0.0) {
        fVar9 = *(float *)(iVar12 + 0x13ec);
      }
      if (ABS(fVar7) - ABS(*(float *)(iVar12 + 0x1404)) < 0.0) {
        fVar7 = *(float *)(iVar12 + 0x1404);
      }
      if (ABS(fVar9) - ABS(*(float *)(iVar12 + 0x13f0)) < 0.0) {
        fVar9 = *(float *)(iVar12 + 0x13f0);
      }
      if (ABS(fVar9) - ABS(*(float *)(iVar12 + 0x13f4)) < 0.0) {
        fVar9 = *(float *)(iVar12 + 0x13f4);
      }
      if (ABS(fVar7) - ABS(*(float *)(iVar12 + 0x1408)) < 0.0) {
        fVar7 = *(float *)(iVar12 + 0x1408);
      }
      if (ABS(fVar7) - ABS(*(float *)(iVar12 + 0x140c)) < 0.0) {
        fVar7 = *(float *)(iVar12 + 0x140c);
      }
      if (ABS(fVar7) - ABS(*(float *)(iVar12 + 0x1410)) < 0.0) {
        fVar7 = *(float *)(iVar12 + 0x1410);
      }
      *(float *)(iVar12 + 0x1414) = fVar7;
      *(float *)((int)((uVar24 & 0xffffffff) << 2) + (int)pfVar31) = fVar9;
      fVar7 = fVar20;
      if (3 < (int)uVar2) {
        lVar23 = ((uVar36 - 4 & 0xffffffff) >> 2) + 1;
        uVar25 = lVar23 * 4 & 0xfffffffc;
        do {
          pfVar29 = (float *)lVar27;
          lVar27 = lVar27 + 0x10;
          if (ABS(fVar7) - ABS(*pfVar29) < 0.0) {
            fVar7 = *pfVar29;
          }
          if (ABS(fVar7) - ABS(pfVar29[1]) < 0.0) {
            fVar7 = pfVar29[1];
          }
          if (ABS(fVar7) - ABS(pfVar29[2]) < 0.0) {
            fVar7 = pfVar29[2];
          }
          if (ABS(fVar7) - ABS(pfVar29[3]) < 0.0) {
            fVar7 = pfVar29[3];
          }
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      if ((int)uVar25 < (int)uVar2) {
        lVar23 = uVar36 - uVar25;
        lVar27 = lVar27 + -4;
        do {
          lVar27 = lVar27 + 4;
          if (ABS(fVar7) - ABS(*(float *)lVar27) < 0.0) {
            fVar7 = *(float *)lVar27;
          }
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      fVar9 = *(float *)(iVar12 + 0x141c);
      fVar8 = ABS(*(float *)(iVar12 + 0x13e4));
      if (ABS(*(float *)(iVar12 + 0x13e4)) - ABS(*(float *)(iVar12 + 0x13e0)) < 0.0) {
        fVar8 = ABS(*(float *)(iVar12 + 0x13e0));
      }
      fVar14 = ABS(*(float *)(iVar12 + 0x13e8));
      if (ABS(*(float *)(iVar12 + 0x13e8)) - fVar8 < 0.0) {
        fVar14 = fVar8;
      }
      fVar8 = ABS(*(float *)(iVar12 + 0x13ec));
      if (ABS(*(float *)(iVar12 + 0x13ec)) - fVar14 < 0.0) {
        fVar8 = fVar14;
      }
      fVar14 = ABS(*(float *)(iVar12 + 0x13f0));
      if (ABS(*(float *)(iVar12 + 0x13f0)) - fVar8 < 0.0) {
        fVar14 = fVar8;
      }
      fVar8 = ABS(*(float *)(iVar12 + 0x13f4));
      if (ABS(*(float *)(iVar12 + 0x13f4)) - fVar14 < 0.0) {
        fVar8 = fVar14;
      }
      fVar14 = fVar17;
      if (fVar8 - fVar17 < 0.0) {
        fVar14 = fVar8;
      }
      fVar8 = *(float *)(iVar12 + 0x24);
      if (ABS(fVar14) - ABS(*(float *)(iVar12 + 0x24)) < 0.0) {
        fVar8 = fVar14;
      }
      if (ABS(fVar9) < ABS(fVar8)) {
        uVar33 = (ulonglong)(uint)(int)fVar6;
        fVar9 = fVar8;
      }
      *(float *)(iVar12 + 0x141c) = ABS(fVar9);
      pfVar29 = (float *)(iVar12 + 0x1420);
      fVar9 = ABS(fVar9) - *(float *)(iVar12 + 0x28);
      uVar33 = ((uVar33 - 1 & 0xffffffff) >> 0x1f) - 1 & uVar33 - 1;
      uVar34 = (uint)uVar33;
      if (ABS(fVar9) - ABS(*pfVar29) < 0.0) {
        fVar9 = *pfVar29;
      }
      *pfVar29 = fVar9;
      fVar9 = *(float *)(iVar12 + 0x34);
      fVar8 = fVar20;
      if ((int)uVar34 < 1) {
        fVar9 = fVar20;
        fVar8 = *(float *)(iVar12 + 0x30);
      }
      fVar9 = (ABS(fVar7) - *(float *)(iVar12 + 0x28)) * fVar8 +
              *pfVar29 * fVar9 + *(float *)(iVar12 + 0x28);
      fVar8 = *(float *)(iVar12 + 0x141c);
      if (ABS(fVar9) - ABS(*(float *)(iVar12 + 0x141c)) < 0.0) {
        fVar8 = fVar9;
      }
      fVar9 = *pfVar29;
      if ((int)uVar34 < 1) {
        fVar9 = fVar20;
      }
      *pfVar29 = fVar9;
      fVar9 = *(float *)(iVar12 + 0x1414);
      if (ABS(fVar8) - ABS(fVar9) < 0.0) {
        fVar8 = fVar9;
      }
      *(float *)(iVar12 + 0x28) = ABS(fVar8);
      fVar14 = *(float *)(iVar12 + 0x141c);
      if (ABS(ABS(fVar8)) - ABS(fVar9) < 0.0) {
        fVar14 = fVar9;
      }
      *(float *)(iVar12 + 0x141c) = ABS(fVar14);
      fVar9 = *(float *)(iVar12 + 0x1424);
      fVar8 = *(float *)(iVar12 + 0x38);
      if (ABS(fVar9) - ABS(ABS(fVar7)) < 0.0) {
        fVar8 = *(float *)(iVar12 + 0x3c);
      }
      fVar9 = fVar8 * (ABS(fVar7) - fVar9) + fVar9;
      *(float *)(iVar12 + 0x1424) = fVar9;
      fVar7 = *(float *)(iVar12 + 0x28);
      if (*(float *)(iVar12 + 0x28) - fVar9 < 0.0) {
        fVar7 = fVar9;
      }
      *(float *)(iVar12 + 0x28) = fVar7;
      fVar9 = *(float *)(iVar12 + 0x141c);
      if ((int)uVar34 < 1) {
        fVar9 = fVar7;
      }
      *(float *)(iVar12 + 0x141c) = fVar9;
      uVar28 = uVar35 + (uint)(int)fVar5;
      uVar25 = uVar35 + 1;
      uVar24 = uVar28 - uVar35;
      *(float *)((int)((uVar28 & 0xffffffff) << 2) + (int)pfVar31) = fVar7;
      fVar9 = *(float *)((int)fVar5 * 4 + iVar12);
      uVar35 = (ulonglong)(uVar1 >> 0x1f) -
               (((uVar25 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar25 < uVar1)) & uVar25;
      iVar30 = 0;
      fVar7 = *(float *)((int)((uVar24 & 0xffffffff) << 2) + (int)pfVar31);
      fVar8 = fVar20;
      fVar14 = fVar20;
      if (1 < (int)uVar1) {
        lVar23 = (((ulonglong)uVar1 - 2 & 0xffffffff) >> 1) + 1;
        lVar27 = (uVar24 + 1 & 0x3fffffff) * 4 + lVar22 + -4;
        iVar30 = (int)lVar23 * 2;
        do {
          iVar15 = (int)lVar27;
          fVar14 = fVar7 * fVar9 + fVar14;
          lVar27 = lVar27 + 8;
          fVar7 = *(float *)lVar27;
          fVar8 = *(float *)(iVar15 + 4) * fVar9 + fVar8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      fVar13 = fVar20;
      if (iVar30 < (int)uVar1) {
        fVar13 = fVar7 * fVar9;
      }
      fVar7 = *(float *)(iVar12 + 0x4c);
      fVar13 = fVar14 + fVar8 + fVar13;
      fVar9 = fVar13 * fVar18 - fVar13 * fVar13;
      fVar8 = (fVar9 * fVar18 - fVar9 * fVar9) * fVar19;
      iVar30 = (int)fVar8;
      pfVar31 = (float *)(iVar30 * 4 + iVar12 + 0x142c);
      fVar9 = *pfVar31;
      fVar9 = (pfVar31[1] - fVar9) * (fVar8 - (float)(longlong)iVar30) + fVar9;
      fVar8 = fVar9;
      if (ABS(fVar9) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar12 + 0x4c) = fVar8;
      fVar7 = *pfVar32;
      fVar8 = *(float *)(iVar12 + 0x50);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar12 + 0x50) = fVar8;
      fVar8 = fVar7 * fVar9 * *(float *)(iVar12 + 0x54);
      fVar7 = *(float *)(iVar12 + 0x5c);
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar7 = fVar8;
      }
      *(float *)(iVar12 + 0x5c) = fVar7;
      pfStack0000004c = pfStack0000004c + 1;
      *pfStack0000004c = fVar8;
      fVar7 = *(float *)(iVar12 + 0x1400);
      fVar8 = *(float *)(iVar12 + 0x60);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar12 + 0x60) = fVar8;
      fVar8 = fVar7 * fVar9 * *(float *)(iVar12 + 100);
      fVar7 = *(float *)(iVar12 + 0x6c);
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar7 = fVar8;
      }
      *(float *)(iVar12 + 0x6c) = fVar7;
      in_stack_00000054 = in_stack_00000054 + 1;
      *in_stack_00000054 = fVar8;
      fVar8 = *(float *)(iVar12 + 0x70);
      fVar7 = *(float *)(iVar12 + 0x1404);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar12 + 0x70) = fVar8;
      fVar8 = fVar7 * fVar9 * *(float *)(iVar12 + 0x74);
      fVar7 = *(float *)(iVar12 + 0x7c);
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar7 = fVar8;
      }
      *(float *)(iVar12 + 0x7c) = fVar7;
      in_stack_0000005c = in_stack_0000005c + 1;
      *in_stack_0000005c = fVar8;
      fVar7 = *(float *)(iVar12 + 0x1408);
      fVar8 = *(float *)(iVar12 + 0x80);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar12 + 0x80) = fVar8;
      fVar8 = fVar7 * fVar9 * *(float *)(iVar12 + 0x84);
      fVar7 = *(float *)(iVar12 + 0x8c);
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar7 = fVar8;
      }
      *(float *)(iVar12 + 0x8c) = fVar7;
      in_stack_00000064 = in_stack_00000064 + 1;
      *in_stack_00000064 = fVar8;
      fVar7 = *(float *)(iVar12 + 0x90);
      fVar8 = *(float *)(iVar12 + 0x140c);
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar7 = fVar8;
      }
      *(float *)(iVar12 + 0x90) = fVar7;
      fVar8 = fVar8 * fVar9 * *(float *)(iVar12 + 0x94);
      fVar7 = *(float *)(iVar12 + 0x9c);
      if (ABS(fVar7) - ABS(fVar8) < 0.0) {
        fVar7 = fVar8;
      }
      *(float *)(iVar12 + 0x9c) = fVar7;
      in_stack_0000006c = in_stack_0000006c + 1;
      *in_stack_0000006c = fVar8;
      fVar7 = *(float *)(iVar12 + 0x1410);
      fVar8 = *(float *)(iVar12 + 0xa0);
      if (ABS(fVar8) - ABS(fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      *(float *)(iVar12 + 0xa0) = fVar8;
      fVar9 = fVar7 * fVar9 * *(float *)(iVar12 + 0xa4);
      fVar7 = *(float *)(iVar12 + 0xac);
      if (ABS(fVar7) - ABS(fVar9) < 0.0) {
        fVar7 = fVar9;
      }
      *(float *)(iVar12 + 0xac) = fVar7;
      in_stack_00000074 = in_stack_00000074 + 1;
      *in_stack_00000074 = fVar9;
      uVar28 = uVar37;
    } while (in_stack_0000007c != 0);
  }
  *(float *)(iVar12 + 0x13f8) = (float)(longlong)(int)uVar37;
  *(float *)(iVar12 + 0x1418) = (float)(longlong)(int)uVar34;
  *(float *)(iVar12 + 0x48) = (float)(longlong)(int)uVar35;
  fn_82F6A590();
  return;
}

