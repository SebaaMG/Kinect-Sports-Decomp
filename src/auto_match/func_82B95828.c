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
extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82B90378();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8200D8A0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015CF0;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82B95828(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  iVar16 = fn_82F6A548();
  if (*(int *)(iVar16 + 0x54) != 0) {
    param_4 = fn_82924628(iVar16,param_4);
  }
  if (*(int *)(iVar16 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(iVar16,param_4);
  }
  uVar3 = *(uint *)(iVar16 + 0x68);
  iVar19 = *(int *)(iVar16 + 0x60);
  iVar24 = *(int *)(iVar16 + 100);
  uVar23 = *(uint *)(iVar16 + 0x20);
  iVar4 = *(int *)(iVar16 + 0x34);
  dVar37 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar27 = 0;
    uVar29 = 1;
  }
  else {
    uVar27 = (ulonglong)uVar3 - 1;
    uVar29 = 0xffffffffffffffff;
  }
  dVar31 = dVar37;
  dVar36 = dVar37;
  dVar38 = dVar37;
  if (*(int *)(iVar16 + 0x5c) != 0) {
    fn_82B90378(iVar16,param_4);
  }
  dVar15 = lbl_8202EE40;
  fVar14 = lbl_82015CF0;
  fVar13 = lbl_8200D8A0;
  uVar26 = 0;
  if (*(int *)(iVar16 + 0x68) != 0) {
    lVar20 = (uVar29 + uVar27 & 0xfffffff) << 4;
    dVar33 = (double)lbl_8200D8DC;
    dVar34 = (double)lbl_820288E0;
    lVar25 = (uVar27 & 0xfffffff) << 4;
    dVar35 = (double)lbl_820288C8;
    lVar30 = (uVar29 & 0xfffffff) * 0x10;
    lVar21 = (uVar27 - uVar29 & 0xfffffff) << 4;
    iVar12 = (int)param_4 + 8;
    lVar28 = ((longlong)(int)(uVar3 - 1) * (longlong)(int)(param_2 & 1) & 0x1fffffffU) * 8 +
             (longlong)iVar19 * (longlong)(int)(uint)param_2 +
             (longlong)iVar24 * (longlong)(int)param_3 + (ulonglong)uVar23 +
             (uVar29 & 0x1fffffff) * -8;
    do {
      iVar24 = (int)lVar25;
      iVar19 = iVar12 + iVar24;
      fVar2 = *(float *)((uVar26 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)((double)*(float *)(iVar12 + iVar24) + dVar31) * fVar13;
      fVar6 = (float)((double)*(float *)(iVar19 + -8) + dVar38) * fVar13;
      fVar7 = (float)((double)*(float *)(iVar19 + -4) + dVar36) * fVar13;
      fVar8 = (float)((double)*(float *)(iVar19 + 4) + dVar37) * fVar13;
      uVar3 = (uint)(fVar5 + fVar2);
      uVar18 = (ulonglong)uVar3;
      uVar23 = (uint)(fVar6 + fVar2);
      uVar1 = (uint)(fVar7 + fVar2);
      iVar19 = (int)(fVar8 + fVar2);
      uVar27 = (ulonglong)uVar23;
      uVar17 = (ulonglong)uVar1;
      if (*(int *)(iVar16 + 0x5c) != 0) {
        iVar10 = (int)lVar21;
        iVar9 = iVar10 + *(int *)(iVar16 + 0x5c);
        dVar31 = (double)((fVar6 - (float)(longlong)(int)uVar23) * fVar14);
        *(float *)(iVar9 + 0x10) = (float)(dVar31 * dVar35 + (double)*(float *)(iVar9 + 0x10));
        iVar9 = iVar24 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x10) = (float)(dVar31 * dVar34 + (double)*(float *)(iVar9 + 0x10));
        iVar11 = (int)lVar20;
        iVar9 = iVar11 + *(int *)(iVar16 + 0x5c);
        dVar37 = (double)((fVar7 - (float)(longlong)(int)uVar1) * fVar14);
        *(float *)(iVar9 + 0x10) = (float)(dVar31 * dVar33 + (double)*(float *)(iVar9 + 0x10));
        iVar9 = iVar10 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x14) = (float)(dVar37 * dVar35 + (double)*(float *)(iVar9 + 0x14));
        iVar9 = iVar24 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x14) = (float)(dVar37 * dVar34 + (double)*(float *)(iVar9 + 0x14));
        iVar9 = iVar11 + *(int *)(iVar16 + 0x5c);
        dVar32 = (double)((fVar5 - (float)(longlong)(int)uVar3) * fVar14);
        *(float *)(iVar9 + 0x14) = (float)(dVar37 * dVar33 + (double)*(float *)(iVar9 + 0x14));
        iVar9 = iVar10 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x18) = (float)(dVar32 * dVar35 + (double)*(float *)(iVar9 + 0x18));
        iVar9 = iVar24 + *(int *)(iVar16 + 0x5c);
        dVar38 = (double)(float)(dVar31 * dVar15);
        *(float *)(iVar9 + 0x18) = (float)(dVar32 * dVar34 + (double)*(float *)(iVar9 + 0x18));
        iVar9 = iVar11 + *(int *)(iVar16 + 0x5c);
        dVar36 = (double)(float)(dVar37 * dVar15);
        *(float *)(iVar9 + 0x18) = (float)(dVar32 * dVar33 + (double)*(float *)(iVar9 + 0x18));
        iVar10 = iVar10 + *(int *)(iVar16 + 0x5c);
        dVar31 = (double)(float)(dVar32 * dVar15);
        dVar37 = (double)((fVar8 - (float)(longlong)iVar19) * fVar14);
        *(float *)(iVar10 + 0x1c) = (float)(dVar37 * dVar35 + (double)*(float *)(iVar10 + 0x1c));
        iVar24 = iVar24 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar24 + 0x1c) = (float)(dVar37 * dVar34 + (double)*(float *)(iVar24 + 0x1c));
        iVar11 = iVar11 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar11 + 0x1c) = (float)(dVar37 * dVar33 + (double)*(float *)(iVar11 + 0x1c));
        dVar37 = (double)(float)(dVar37 * dVar15);
      }
      uVar22 = uVar23;
      if (0x7ffe < (int)uVar23) {
        uVar22 = 0x7fff;
      }
      if ((int)uVar22 < -0x7ffe) {
        uVar27 = 0xffffffffffff8001;
      }
      else if (0x7ffe < (int)uVar23) {
        uVar27 = 0x7fff;
      }
      uVar23 = uVar1;
      if (0x7ffe < (int)uVar1) {
        uVar23 = 0x7fff;
      }
      if ((int)uVar23 < -0x7ffe) {
        uVar17 = 0xffffffffffff8001;
      }
      else if (0x7ffe < (int)uVar1) {
        uVar17 = 0x7fff;
      }
      uVar23 = uVar3;
      if (0x7ffe < (int)uVar3) {
        uVar23 = 0x7fff;
      }
      if ((int)uVar23 < -0x7ffe) {
        uVar18 = 0xffffffffffff8001;
      }
      else if (0x7ffe < (int)uVar3) {
        uVar18 = 0x7fff;
      }
      iVar24 = iVar19;
      if (0x7ffe < iVar19) {
        iVar24 = 0x7fff;
      }
      if (iVar24 < -0x7ffe) {
        iVar19 = -0x7fff;
      }
      else if (0x7ffe < iVar19) {
        iVar19 = 0x7fff;
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar30 + lVar25;
      lVar28 = lVar28 + (uVar29 & 0x1fffffff) * 8;
      *(ulonglong *)lVar28 =
           (((longlong)iVar19 << 0x10 | uVar18 & 0xffff) << 0x10 | uVar17 & 0xffff) << 0x10 |
           uVar27 & 0xffff;
      lVar21 = lVar30 + lVar21;
      lVar20 = lVar30 + lVar20;
    } while (uVar26 < *(uint *)(iVar16 + 0x68));
  }
  fn_82F6A594();
  return;
}

