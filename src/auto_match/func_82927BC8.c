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
extern int fn_829252C0();
extern int fn_82B90378();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82927BC8(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  iVar14 = fn_82F6A548();
  if (*(int *)(iVar14 + 0x54) != 0) {
    param_4 = fn_82924628(iVar14,param_4);
  }
  if (*(int *)(iVar14 + 0x10) != 0) {
    param_4 = fn_829252C0(iVar14,param_4);
  }
  uVar17 = *(uint *)(iVar14 + 0x68);
  iVar18 = *(int *)(iVar14 + 0x60);
  iVar22 = *(int *)(iVar14 + 100);
  uVar15 = *(uint *)(iVar14 + 0x20);
  iVar2 = *(int *)(iVar14 + 0x34);
  dVar35 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar25 = 0;
    uVar27 = 1;
  }
  else {
    uVar25 = (ulonglong)uVar17 - 1;
    uVar27 = 0xffffffffffffffff;
  }
  dVar29 = dVar35;
  dVar34 = dVar35;
  dVar36 = dVar35;
  if (*(int *)(iVar14 + 0x5c) != 0) {
    fn_82B90378(iVar14,param_4);
  }
  dVar13 = lbl_8202EE40;
  fVar12 = lbl_82005CCC;
  fVar11 = lbl_82005328;
  uVar24 = 0;
  if (*(int *)(iVar14 + 0x68) != 0) {
    lVar19 = (uVar27 + uVar25 & 0xfffffff) << 4;
    dVar31 = (double)lbl_8200D8DC;
    dVar32 = (double)lbl_820288E0;
    lVar23 = (uVar25 & 0xfffffff) << 4;
    dVar33 = (double)lbl_820288C8;
    lVar28 = (uVar27 & 0xfffffff) * 0x10;
    lVar20 = (uVar25 - uVar27 & 0xfffffff) << 4;
    iVar10 = (int)param_4 + 8;
    lVar26 = ((longlong)(int)(uVar17 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar18 * (longlong)(int)(uint)param_2 +
             (longlong)iVar22 * (longlong)(int)param_3 + (ulonglong)uVar15 +
             (uVar27 & 0x3fffffff) * -4;
    do {
      iVar22 = (int)lVar23;
      iVar18 = iVar10 + iVar22;
      fVar1 = *(float *)((uVar24 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)((double)*(float *)(iVar10 + iVar22) + dVar29) * fVar12;
      fVar4 = (float)((double)*(float *)(iVar18 + -8) + dVar36) * fVar12;
      fVar5 = (float)((double)*(float *)(iVar18 + -4) + dVar34) * fVar12;
      fVar6 = (float)((double)*(float *)(iVar18 + 4) + dVar35) * fVar12;
      uVar17 = (uint)(fVar3 + fVar1);
      uVar15 = (uint)(fVar4 + fVar1);
      uVar16 = (uint)(fVar5 + fVar1);
      iVar18 = (int)(fVar6 + fVar1);
      if (*(int *)(iVar14 + 0x5c) != 0) {
        iVar8 = (int)lVar20;
        iVar7 = iVar8 + *(int *)(iVar14 + 0x5c);
        dVar29 = (double)((fVar4 - (float)(longlong)(int)uVar15) * fVar11);
        *(float *)(iVar7 + 0x10) = (float)(dVar29 * dVar33 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar22 + *(int *)(iVar14 + 0x5c);
        *(float *)(iVar7 + 0x10) = (float)(dVar29 * dVar32 + (double)*(float *)(iVar7 + 0x10));
        iVar9 = (int)lVar19;
        iVar7 = iVar9 + *(int *)(iVar14 + 0x5c);
        dVar35 = (double)((fVar5 - (float)(longlong)(int)uVar16) * fVar11);
        *(float *)(iVar7 + 0x10) = (float)(dVar29 * dVar31 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar8 + *(int *)(iVar14 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar35 * dVar33 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar22 + *(int *)(iVar14 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar35 * dVar32 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar9 + *(int *)(iVar14 + 0x5c);
        dVar30 = (double)((fVar3 - (float)(longlong)(int)uVar17) * fVar11);
        *(float *)(iVar7 + 0x14) = (float)(dVar35 * dVar31 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar8 + *(int *)(iVar14 + 0x5c);
        *(float *)(iVar7 + 0x18) = (float)(dVar30 * dVar33 + (double)*(float *)(iVar7 + 0x18));
        iVar7 = iVar22 + *(int *)(iVar14 + 0x5c);
        dVar36 = (double)(float)(dVar29 * dVar13);
        *(float *)(iVar7 + 0x18) = (float)(dVar30 * dVar32 + (double)*(float *)(iVar7 + 0x18));
        iVar7 = iVar9 + *(int *)(iVar14 + 0x5c);
        dVar34 = (double)(float)(dVar35 * dVar13);
        *(float *)(iVar7 + 0x18) = (float)(dVar30 * dVar31 + (double)*(float *)(iVar7 + 0x18));
        iVar8 = iVar8 + *(int *)(iVar14 + 0x5c);
        dVar29 = (double)(float)(dVar30 * dVar13);
        dVar35 = (double)((fVar6 - (float)(longlong)iVar18) * fVar11);
        *(float *)(iVar8 + 0x1c) = (float)(dVar35 * dVar33 + (double)*(float *)(iVar8 + 0x1c));
        iVar22 = iVar22 + *(int *)(iVar14 + 0x5c);
        *(float *)(iVar22 + 0x1c) = (float)(dVar35 * dVar32 + (double)*(float *)(iVar22 + 0x1c));
        iVar9 = iVar9 + *(int *)(iVar14 + 0x5c);
        *(float *)(iVar9 + 0x1c) = (float)(dVar35 * dVar31 + (double)*(float *)(iVar9 + 0x1c));
        dVar35 = (double)(float)(dVar35 * dVar13);
      }
      uVar21 = uVar15;
      if (0xfe < (int)uVar15) {
        uVar21 = 0xff;
      }
      if ((int)uVar21 < 1) {
        uVar15 = 0;
      }
      else if (0xfe < (int)uVar15) {
        uVar15 = 0xff;
      }
      uVar21 = uVar16;
      if (0xfe < (int)uVar16) {
        uVar21 = 0xff;
      }
      if ((int)uVar21 < 1) {
        uVar16 = 0;
      }
      else if (0xfe < (int)uVar16) {
        uVar16 = 0xff;
      }
      uVar21 = uVar17;
      if (0xfe < (int)uVar17) {
        uVar21 = 0xff;
      }
      if ((int)uVar21 < 1) {
        uVar17 = 0;
      }
      else if (0xfe < (int)uVar17) {
        uVar17 = 0xff;
      }
      iVar22 = iVar18;
      if (0xfe < iVar18) {
        iVar22 = 0xff;
      }
      if (iVar22 < 1) {
        iVar18 = 0;
      }
      else if (0xfe < iVar18) {
        iVar18 = 0xff;
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar28 + lVar23;
      lVar20 = lVar28 + lVar20;
      lVar19 = lVar28 + lVar19;
      lVar26 = lVar26 + (uVar27 & 0x3fffffff) * 4;
      *(uint *)lVar26 = ((iVar18 << 8 | uVar17) << 8 | uVar16) << 8 | uVar15;
    } while (uVar24 < *(uint *)(iVar14 + 0x68));
  }
  fn_82F6A594();
  return;
}

