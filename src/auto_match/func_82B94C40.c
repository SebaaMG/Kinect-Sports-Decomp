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
extern unsigned int lbl_8201DF6C;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE5C;
extern unsigned int lbl_821AAD20;


void fn_82B94C40(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
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
  
  iVar15 = fn_82F6A548();
  if (*(int *)(iVar15 + 0x54) != 0) {
    param_4 = fn_82924628(iVar15,param_4);
  }
  if (*(int *)(iVar15 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(iVar15,param_4);
  }
  uVar19 = *(uint *)(iVar15 + 0x68);
  iVar2 = *(int *)(iVar15 + 0x60);
  iVar3 = *(int *)(iVar15 + 100);
  uVar17 = *(uint *)(iVar15 + 0x20);
  iVar4 = *(int *)(iVar15 + 0x34);
  dVar35 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar25 = 0;
    uVar27 = 1;
  }
  else {
    uVar25 = (ulonglong)uVar19 - 1;
    uVar27 = 0xffffffffffffffff;
  }
  dVar29 = dVar35;
  dVar34 = dVar35;
  dVar36 = dVar35;
  if (*(int *)(iVar15 + 0x5c) != 0) {
    fn_82B90378(iVar15,param_4);
  }
  fVar14 = lbl_8202EE5C;
  dVar13 = lbl_8202EE40;
  fVar12 = lbl_8201DF6C;
  uVar24 = 0;
  if (*(int *)(iVar15 + 0x68) != 0) {
    lVar20 = (uVar27 + uVar25 & 0xfffffff) << 4;
    dVar31 = (double)lbl_8200D8DC;
    dVar32 = (double)lbl_820288E0;
    lVar23 = (uVar25 & 0xfffffff) << 4;
    dVar33 = (double)lbl_820288C8;
    lVar28 = (uVar27 & 0xfffffff) * 0x10;
    lVar21 = (uVar25 - uVar27 & 0xfffffff) << 4;
    iVar11 = (int)param_4 + 8;
    lVar26 = ((longlong)(int)(uVar19 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar2 * (longlong)(int)(uint)param_2 +
             (longlong)iVar3 * (longlong)(int)param_3 + (ulonglong)uVar17 +
             (uVar27 & 0x3fffffff) * -4;
    do {
      iVar3 = (int)lVar23;
      iVar2 = iVar11 + iVar3;
      fVar1 = *(float *)((uVar24 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)(dVar29 + (double)*(float *)(iVar11 + iVar3)) * fVar12;
      fVar6 = (float)((double)*(float *)(iVar2 + -8) + dVar36) * fVar12;
      fVar7 = (float)((double)*(float *)(iVar2 + -4) + dVar34) * fVar12;
      fVar8 = (float)((double)*(float *)(iVar2 + 4) + dVar35) * fVar12;
      uVar19 = (uint)(fVar5 + fVar1);
      uVar17 = (uint)(fVar6 + fVar1);
      uVar18 = (uint)(fVar7 + fVar1);
      uVar16 = (uint)(fVar8 + fVar1);
      if (*(int *)(iVar15 + 0x5c) != 0) {
        iVar9 = (int)lVar21;
        iVar2 = iVar9 + *(int *)(iVar15 + 0x5c);
        dVar29 = (double)((fVar6 - (float)(longlong)(int)uVar17) * fVar14);
        *(float *)(iVar2 + 0x10) = (float)(dVar29 * dVar33 + (double)*(float *)(iVar2 + 0x10));
        iVar2 = iVar3 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar2 + 0x10) = (float)(dVar29 * dVar32 + (double)*(float *)(iVar2 + 0x10));
        iVar10 = (int)lVar20;
        iVar2 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar35 = (double)((fVar7 - (float)(longlong)(int)uVar18) * fVar14);
        *(float *)(iVar2 + 0x10) = (float)(dVar29 * dVar31 + (double)*(float *)(iVar2 + 0x10));
        iVar2 = iVar9 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar35 * dVar33 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar3 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar35 * dVar32 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar30 = (double)((fVar5 - (float)(longlong)(int)uVar19) * fVar14);
        *(float *)(iVar2 + 0x14) = (float)(dVar35 * dVar31 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar9 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar2 + 0x18) = (float)(dVar30 * dVar33 + (double)*(float *)(iVar2 + 0x18));
        iVar2 = iVar3 + *(int *)(iVar15 + 0x5c);
        dVar36 = (double)(float)(dVar29 * dVar13);
        *(float *)(iVar2 + 0x18) = (float)(dVar30 * dVar32 + (double)*(float *)(iVar2 + 0x18));
        iVar2 = iVar10 + *(int *)(iVar15 + 0x5c);
        dVar34 = (double)(float)(dVar35 * dVar13);
        *(float *)(iVar2 + 0x18) = (float)(dVar30 * dVar31 + (double)*(float *)(iVar2 + 0x18));
        iVar9 = iVar9 + *(int *)(iVar15 + 0x5c);
        dVar29 = (double)(float)(dVar30 * dVar13);
        dVar35 = (double)((fVar8 - (float)(longlong)(int)uVar16) * fVar14);
        *(float *)(iVar9 + 0x1c) = (float)(dVar35 * dVar33 + (double)*(float *)(iVar9 + 0x1c));
        iVar3 = iVar3 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar3 + 0x1c) = (float)(dVar35 * dVar32 + (double)*(float *)(iVar3 + 0x1c));
        iVar10 = iVar10 + *(int *)(iVar15 + 0x5c);
        *(float *)(iVar10 + 0x1c) = (float)(dVar35 * dVar31 + (double)*(float *)(iVar10 + 0x1c));
        dVar35 = (double)(float)(dVar35 * dVar13);
      }
      uVar22 = uVar17;
      if (0x7e < (int)uVar17) {
        uVar22 = 0x7f;
      }
      if ((int)uVar22 < -0x7e) {
        uVar17 = 0xffffff81;
      }
      else if (0x7e < (int)uVar17) {
        uVar17 = 0x7f;
      }
      uVar22 = uVar18;
      if (0x7e < (int)uVar18) {
        uVar22 = 0x7f;
      }
      if ((int)uVar22 < -0x7e) {
        uVar18 = 0xffffff81;
      }
      else if (0x7e < (int)uVar18) {
        uVar18 = 0x7f;
      }
      uVar22 = uVar19;
      if (0x7e < (int)uVar19) {
        uVar22 = 0x7f;
      }
      if ((int)uVar22 < -0x7e) {
        uVar19 = 0xffffff81;
      }
      else if (0x7e < (int)uVar19) {
        uVar19 = 0x7f;
      }
      uVar22 = uVar16;
      if (0x7e < (int)uVar16) {
        uVar22 = 0x7f;
      }
      if ((int)uVar22 < -0x7e) {
        uVar16 = 0xffffff81;
      }
      else if (0x7e < (int)uVar16) {
        uVar16 = 0x7f;
      }
      uVar24 = uVar24 + 1;
      lVar23 = lVar28 + lVar23;
      lVar21 = lVar28 + lVar21;
      lVar26 = lVar26 + (uVar27 & 0x3fffffff) * 4;
      *(uint *)lVar26 =
           (((uVar16 & 0xffff) << 8 | uVar19 & 0xff) << 8 | uVar18 & 0xff) << 8 | uVar17 & 0xff;
      lVar20 = lVar28 + lVar20;
    } while (uVar24 < *(uint *)(iVar15 + 0x68));
  }
  fn_82F6A594();
  return;
}

