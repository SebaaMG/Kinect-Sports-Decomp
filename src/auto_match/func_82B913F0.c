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
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_821AAD20;


void fn_82B913F0(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  float fVar13;
  float fVar14;
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
  uVar18 = *(uint *)(iVar15 + 0x68);
  iVar17 = *(int *)(iVar15 + 0x60);
  iVar22 = *(int *)(iVar15 + 100);
  uVar23 = *(uint *)(iVar15 + 0x20);
  iVar4 = *(int *)(iVar15 + 0x34);
  dVar36 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar26 = 0;
    uVar28 = 1;
  }
  else {
    uVar26 = (ulonglong)uVar18 - 1;
    uVar28 = 0xffffffffffffffff;
  }
  dVar31 = dVar36;
  dVar35 = dVar36;
  dVar37 = dVar36;
  if (*(int *)(iVar15 + 0x5c) != 0) {
    fn_82B90378(iVar15,param_4);
  }
  fVar14 = lbl_8202EE4C;
  fVar13 = lbl_8202EE48;
  dVar12 = lbl_8202EE40;
  uVar25 = 0;
  if (*(int *)(iVar15 + 0x68) != 0) {
    lVar19 = (uVar28 + uVar26 & 0xfffffff) << 4;
    dVar33 = (double)lbl_8200D8DC;
    dVar34 = (double)lbl_820288E0;
    lVar24 = (uVar26 & 0xfffffff) << 4;
    dVar30 = (double)lbl_820288C8;
    lVar29 = (uVar28 & 0xfffffff) * 0x10;
    lVar20 = (uVar26 - uVar28 & 0xfffffff) << 4;
    iVar11 = (int)param_4 + 8;
    lVar27 = ((longlong)(int)(uVar18 - 1) * (longlong)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (longlong)iVar17 * (longlong)(int)(uint)param_2 +
             (longlong)iVar22 * (longlong)(int)param_3 + (ulonglong)uVar23 +
             (uVar28 & 0x7fffffff) * -2;
    do {
      iVar22 = (int)lVar24;
      iVar17 = iVar11 + iVar22;
      fVar1 = (float)((double)*(float *)(iVar17 + 4) + dVar36);
      fVar3 = *(float *)((uVar25 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)(dVar31 + (double)*(float *)(iVar11 + iVar22)) * fVar13;
      fVar6 = (float)((double)*(float *)(iVar17 + -8) + dVar37) * fVar13;
      fVar7 = (float)((double)*(float *)(iVar17 + -4) + dVar35) * fVar13;
      uVar18 = (uint)(fVar1 + fVar3);
      iVar17 = (int)(fVar5 + fVar3);
      uVar23 = (uint)(fVar6 + fVar3);
      uVar2 = (uint)(fVar7 + fVar3);
      uVar26 = (ulonglong)uVar23;
      uVar16 = (ulonglong)uVar2;
      if (*(int *)(iVar15 + 0x5c) != 0) {
        iVar9 = (int)lVar20;
        iVar8 = iVar9 + *(int *)(iVar15 + 0x5c);
        dVar31 = (double)((fVar6 - (float)(longlong)(int)uVar23) * fVar14);
        *(float *)(iVar8 + 0x10) = (float)(dVar31 * dVar30 + (double)*(float *)(iVar8 + 0x10));
        iVar8 = iVar22 + *(int *)(iVar15 + 0x5c);
        dVar36 = (double)((fVar7 - (float)(longlong)(int)uVar2) * fVar14);
        dVar32 = (double)((fVar5 - (float)(longlong)iVar17) * fVar14);
        dVar37 = (double)(float)(dVar31 * dVar12);
        *(float *)(iVar8 + 0x10) = (float)(dVar31 * dVar34 + (double)*(float *)(iVar8 + 0x10));
        iVar10 = (int)lVar19;
        iVar8 = iVar10 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x10) = (float)(dVar31 * dVar33 + (double)*(float *)(iVar8 + 0x10));
        iVar8 = iVar9 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x14) = (float)(dVar36 * dVar30 + (double)*(float *)(iVar8 + 0x14));
        iVar8 = iVar22 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x14) = (float)(dVar36 * dVar34 + (double)*(float *)(iVar8 + 0x14));
        iVar8 = iVar10 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x14) = (float)(dVar36 * dVar33 + (double)*(float *)(iVar8 + 0x14));
        iVar8 = iVar9 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar32 * dVar30 + (double)*(float *)(iVar8 + 0x18));
        iVar8 = iVar22 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar32 * dVar34 + (double)*(float *)(iVar8 + 0x18));
        iVar8 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar35 = (double)(float)(dVar36 * dVar12);
        *(float *)(iVar8 + 0x18) = (float)(dVar32 * dVar33 + (double)*(float *)(iVar8 + 0x18));
        iVar9 = iVar9 + *(int *)(iVar15 + 0x5c);
        dVar36 = (double)(fVar1 - (float)(longlong)(int)uVar18);
        dVar31 = (double)(float)(dVar32 * dVar12);
        *(float *)(iVar9 + 0x1c) = (float)(dVar36 * dVar30 + (double)*(float *)(iVar9 + 0x1c));
        iVar22 = iVar22 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar22 + 0x1c) = (float)(dVar36 * dVar34 + (double)*(float *)(iVar22 + 0x1c));
        iVar10 = iVar10 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar10 + 0x1c) = (float)(dVar36 * dVar33 + (double)*(float *)(iVar10 + 0x1c));
        dVar36 = (double)(float)(dVar36 * dVar12);
      }
      uVar21 = uVar23;
      if (0x1e < (int)uVar23) {
        uVar21 = 0x1f;
      }
      if ((int)uVar21 < 1) {
        uVar26 = 0;
      }
      else if (0x1e < (int)uVar23) {
        uVar26 = 0x1f;
      }
      uVar23 = uVar2;
      if (0x1e < (int)uVar2) {
        uVar23 = 0x1f;
      }
      if ((int)uVar23 < 1) {
        uVar16 = 0;
      }
      else if (0x1e < (int)uVar2) {
        uVar16 = 0x1f;
      }
      iVar22 = iVar17;
      if (0x1e < iVar17) {
        iVar22 = 0x1f;
      }
      if (iVar22 < 1) {
        iVar17 = 0;
      }
      else if (0x1e < iVar17) {
        iVar17 = 0x1f;
      }
      uVar23 = uVar18;
      if (0 < (int)uVar18) {
        uVar23 = 1;
      }
      if ((int)uVar23 < 1) {
        uVar18 = 0;
      }
      else if (0 < (int)uVar18) {
        uVar18 = 1;
      }
      uVar25 = uVar25 + 1;
      lVar24 = lVar29 + lVar24;
      lVar20 = lVar29 + lVar20;
      lVar19 = lVar29 + lVar19;
      lVar27 = lVar27 + (uVar28 & 0x7fffffff) * 2;
      *(ushort *)lVar27 =
           (ushort)((((((ulonglong)uVar18 & 0x7ffffff) << 5 | uVar26) & 0x7ffffff) << 5 | uVar16) <<
                   5) | (ushort)iVar17;
    } while (uVar25 < *(uint *)(iVar15 + 0x68));
  }
  fn_82F6A594();
  return;
}

