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
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82B91868(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  
  iVar15 = fn_82F6A548();
  if (*(int *)(iVar15 + 0x54) != 0) {
    param_4 = fn_82924628(iVar15,param_4);
  }
  if (*(int *)(iVar15 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(iVar15,param_4);
  }
  uVar23 = *(uint *)(iVar15 + 0x68);
  iVar17 = *(int *)(iVar15 + 0x60);
  iVar22 = *(int *)(iVar15 + 100);
  uVar2 = *(uint *)(iVar15 + 0x20);
  iVar3 = *(int *)(iVar15 + 0x34);
  dVar36 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar26 = 0;
    uVar28 = 1;
  }
  else {
    uVar26 = (ulonglong)uVar23 - 1;
    uVar28 = 0xffffffffffffffff;
  }
  dVar30 = dVar36;
  dVar35 = dVar36;
  dVar37 = dVar36;
  if (*(int *)(iVar15 + 0x5c) != 0) {
    fn_82B90378(iVar15,param_4);
  }
  dVar14 = lbl_8202EE40;
  fVar13 = lbl_82027070;
  fVar12 = lbl_8202706C;
  uVar25 = 0;
  if (*(int *)(iVar15 + 0x68) != 0) {
    lVar19 = (uVar28 + uVar26 & 0xfffffff) << 4;
    dVar32 = (double)lbl_8200D8DC;
    dVar33 = (double)lbl_820288E0;
    lVar24 = (uVar26 & 0xfffffff) << 4;
    dVar34 = (double)lbl_820288C8;
    lVar29 = (uVar28 & 0xfffffff) * 0x10;
    lVar20 = (uVar26 - uVar28 & 0xfffffff) << 4;
    iVar11 = (int)param_4 + 8;
    lVar27 = ((longlong)(int)(uVar23 - 1) * (longlong)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (longlong)iVar17 * (longlong)(int)(uint)param_2 +
             (longlong)iVar22 * (longlong)(int)param_3 + (ulonglong)uVar2 +
             (uVar28 & 0x7fffffff) * -2;
    do {
      iVar22 = (int)lVar24;
      iVar17 = iVar11 + iVar22;
      fVar1 = *(float *)((uVar25 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar3);
      fVar4 = (float)((double)*(float *)(iVar11 + iVar22) + dVar30) * fVar13;
      fVar5 = (float)((double)*(float *)(iVar17 + -8) + dVar37) * fVar13;
      fVar6 = (float)((double)*(float *)(iVar17 + -4) + dVar35) * fVar13;
      fVar7 = (float)((double)*(float *)(iVar17 + 4) + dVar36) * fVar13;
      iVar17 = (int)(fVar4 + fVar1);
      uVar23 = (uint)(fVar5 + fVar1);
      uVar2 = (uint)(fVar6 + fVar1);
      uVar18 = (uint)(fVar7 + fVar1);
      uVar26 = (ulonglong)uVar23;
      uVar16 = (ulonglong)uVar2;
      if (*(int *)(iVar15 + 0x5c) != 0) {
        iVar9 = (int)lVar20;
        iVar8 = iVar9 + *(int *)(iVar15 + 0x5c);
        dVar30 = (double)((fVar5 - (float)(longlong)(int)uVar23) * fVar12);
        *(float *)(iVar8 + 0x10) = (float)(dVar30 * dVar34 + (double)*(float *)(iVar8 + 0x10));
        iVar8 = iVar22 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x10) = (float)(dVar30 * dVar33 + (double)*(float *)(iVar8 + 0x10));
        iVar10 = (int)lVar19;
        iVar8 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar36 = (double)((fVar6 - (float)(longlong)(int)uVar2) * fVar12);
        *(float *)(iVar8 + 0x10) = (float)(dVar30 * dVar32 + (double)*(float *)(iVar8 + 0x10));
        iVar8 = iVar9 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x14) = (float)(dVar36 * dVar34 + (double)*(float *)(iVar8 + 0x14));
        iVar8 = iVar22 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x14) = (float)(dVar36 * dVar33 + (double)*(float *)(iVar8 + 0x14));
        iVar8 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar31 = (double)((fVar4 - (float)(longlong)iVar17) * fVar12);
        *(float *)(iVar8 + 0x14) = (float)(dVar36 * dVar32 + (double)*(float *)(iVar8 + 0x14));
        iVar8 = iVar9 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar31 * dVar34 + (double)*(float *)(iVar8 + 0x18));
        iVar8 = iVar22 + *(int *)(iVar15 + 0x5c);
        dVar37 = (double)(float)(dVar30 * dVar14);
        *(float *)(iVar8 + 0x18) = (float)(dVar31 * dVar33 + (double)*(float *)(iVar8 + 0x18));
        iVar8 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar35 = (double)(float)(dVar36 * dVar14);
        *(float *)(iVar8 + 0x18) = (float)(dVar31 * dVar32 + (double)*(float *)(iVar8 + 0x18));
        iVar9 = iVar9 + *(int *)(iVar15 + 0x5c);
        dVar30 = (double)(float)(dVar31 * dVar14);
        dVar36 = (double)((fVar7 - (float)(longlong)(int)uVar18) * fVar12);
        *(float *)(iVar9 + 0x1c) = (float)(dVar36 * dVar34 + (double)*(float *)(iVar9 + 0x1c));
        iVar22 = iVar22 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar22 + 0x1c) = (float)(dVar36 * dVar33 + (double)*(float *)(iVar22 + 0x1c));
        iVar10 = iVar10 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar10 + 0x1c) = (float)(dVar36 * dVar32 + (double)*(float *)(iVar10 + 0x1c));
        dVar36 = (double)(float)(dVar36 * dVar14);
      }
      uVar21 = uVar23;
      if (0xe < (int)uVar23) {
        uVar21 = 0xf;
      }
      if ((int)uVar21 < 1) {
        uVar26 = 0;
      }
      else if (0xe < (int)uVar23) {
        uVar26 = 0xf;
      }
      uVar23 = uVar2;
      if (0xe < (int)uVar2) {
        uVar23 = 0xf;
      }
      if ((int)uVar23 < 1) {
        uVar16 = 0;
      }
      else if (0xe < (int)uVar2) {
        uVar16 = 0xf;
      }
      iVar22 = iVar17;
      if (0xe < iVar17) {
        iVar22 = 0xf;
      }
      if (iVar22 < 1) {
        iVar17 = 0;
      }
      else if (0xe < iVar17) {
        iVar17 = 0xf;
      }
      uVar23 = uVar18;
      if (0xe < (int)uVar18) {
        uVar23 = 0xf;
      }
      if ((int)uVar23 < 1) {
        uVar18 = 0;
      }
      else if (0xe < (int)uVar18) {
        uVar18 = 0xf;
      }
      uVar25 = uVar25 + 1;
      lVar24 = lVar29 + lVar24;
      lVar20 = lVar29 + lVar20;
      lVar19 = lVar29 + lVar19;
      lVar27 = lVar27 + (uVar28 & 0x7fffffff) * 2;
      *(ushort *)lVar27 =
           (ushort)((((((ulonglong)uVar18 & 0xfffffff) << 4 | uVar26) & 0xfffffff) << 4 | uVar16) <<
                   4) | (ushort)iVar17;
    } while (uVar25 < *(uint *)(iVar15 + 0x68));
  }
  fn_82F6A594();
  return;
}

