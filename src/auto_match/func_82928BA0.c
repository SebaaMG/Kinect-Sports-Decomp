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
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8200DD28;
extern unsigned int lbl_820145F8;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82928BA0(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
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
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  
  iVar16 = fn_82F6A548();
  if (*(int *)(iVar16 + 0x54) != 0) {
    param_4 = fn_82924628(iVar16,param_4);
  }
  if (*(int *)(iVar16 + 0x10) != 0) {
    param_4 = fn_829252C0(iVar16,param_4);
  }
  uVar2 = *(uint *)(iVar16 + 0x68);
  iVar19 = *(int *)(iVar16 + 0x60);
  iVar17 = *(int *)(iVar16 + 100);
  uVar3 = *(uint *)(iVar16 + 0x20);
  iVar4 = *(int *)(iVar16 + 0x34);
  dVar36 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar27 = 0;
    uVar29 = 1;
  }
  else {
    uVar27 = (ulonglong)uVar2 - 1;
    uVar29 = 0xffffffffffffffff;
  }
  dVar30 = dVar36;
  dVar35 = dVar36;
  dVar37 = dVar36;
  if (*(int *)(iVar16 + 0x5c) != 0) {
    fn_82B90378(iVar16,param_4);
  }
  dVar15 = lbl_8202EE40;
  fVar14 = lbl_820145F8;
  fVar13 = lbl_8200DD28;
  uVar25 = 0;
  if (*(int *)(iVar16 + 0x68) != 0) {
    lVar21 = (uVar29 + uVar27 & 0xfffffff) << 4;
    dVar32 = (double)lbl_8200D8DC;
    dVar33 = (double)lbl_820288E0;
    dVar34 = (double)lbl_820288C8;
    lVar24 = (uVar27 & 0xfffffff) << 4;
    lVar28 = (uVar29 & 0xfffffff) * 0x10;
    lVar22 = (uVar27 - uVar29 & 0xfffffff) << 4;
    iVar12 = (int)param_4 + 8;
    lVar26 = ((longlong)(int)(uVar2 - 1) * (longlong)(int)(param_2 & 1) & 0x1fffffffU) * 8 +
             (longlong)iVar19 * (longlong)(int)(uint)param_2 +
             (longlong)iVar17 * (longlong)(int)param_3 + (ulonglong)uVar3 +
             (uVar29 & 0x1fffffff) * -8;
    do {
      iVar23 = (int)lVar24;
      iVar19 = iVar12 + iVar23;
      fVar1 = *(float *)((uVar25 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)((double)*(float *)(iVar12 + iVar23) + dVar30) * fVar14;
      fVar6 = (float)((double)*(float *)(iVar19 + -8) + dVar37) * fVar14;
      fVar7 = (float)((double)*(float *)(iVar19 + -4) + dVar35) * fVar14;
      fVar8 = (float)((double)*(float *)(iVar19 + 4) + dVar36) * fVar14;
      iVar19 = (int)(fVar5 + fVar1);
      iVar17 = (int)(fVar6 + fVar1);
      iVar18 = (int)(fVar7 + fVar1);
      iVar20 = (int)(fVar8 + fVar1);
      if (*(int *)(iVar16 + 0x5c) != 0) {
        iVar10 = (int)lVar22;
        iVar9 = iVar10 + *(int *)(iVar16 + 0x5c);
        dVar30 = (double)((fVar6 - (float)(longlong)iVar17) * fVar13);
        *(float *)(iVar9 + 0x10) = (float)(dVar30 * dVar34 + (double)*(float *)(iVar9 + 0x10));
        iVar9 = iVar23 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x10) = (float)(dVar30 * dVar33 + (double)*(float *)(iVar9 + 0x10));
        iVar11 = (int)lVar21;
        iVar9 = iVar11 + *(int *)(iVar16 + 0x5c);
        dVar36 = (double)((fVar7 - (float)(longlong)iVar18) * fVar13);
        *(float *)(iVar9 + 0x10) = (float)(dVar30 * dVar32 + (double)*(float *)(iVar9 + 0x10));
        iVar9 = iVar10 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x14) = (float)(dVar36 * dVar34 + (double)*(float *)(iVar9 + 0x14));
        iVar9 = iVar23 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x14) = (float)(dVar36 * dVar33 + (double)*(float *)(iVar9 + 0x14));
        iVar9 = iVar11 + *(int *)(iVar16 + 0x5c);
        dVar31 = (double)((fVar5 - (float)(longlong)iVar19) * fVar13);
        *(float *)(iVar9 + 0x14) = (float)(dVar36 * dVar32 + (double)*(float *)(iVar9 + 0x14));
        iVar9 = iVar10 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x18) = (float)(dVar31 * dVar34 + (double)*(float *)(iVar9 + 0x18));
        iVar9 = iVar23 + *(int *)(iVar16 + 0x5c);
        dVar37 = (double)(float)(dVar30 * dVar15);
        *(float *)(iVar9 + 0x18) = (float)(dVar31 * dVar33 + (double)*(float *)(iVar9 + 0x18));
        iVar9 = iVar11 + *(int *)(iVar16 + 0x5c);
        dVar35 = (double)(float)(dVar36 * dVar15);
        *(float *)(iVar9 + 0x18) = (float)(dVar31 * dVar32 + (double)*(float *)(iVar9 + 0x18));
        iVar10 = iVar10 + *(int *)(iVar16 + 0x5c);
        dVar30 = (double)(float)(dVar31 * dVar15);
        dVar36 = (double)((fVar8 - (float)(longlong)iVar20) * fVar13);
        *(float *)(iVar10 + 0x1c) = (float)(dVar36 * dVar34 + (double)*(float *)(iVar10 + 0x1c));
        iVar23 = iVar23 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar23 + 0x1c) = (float)(dVar36 * dVar33 + (double)*(float *)(iVar23 + 0x1c));
        iVar11 = iVar11 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar11 + 0x1c) = (float)(dVar36 * dVar32 + (double)*(float *)(iVar11 + 0x1c));
        dVar36 = (double)(float)(dVar36 * dVar15);
      }
      iVar23 = iVar17;
      if (0xfffe < iVar17) {
        iVar23 = 0xffff;
      }
      if (iVar23 < 1) {
        iVar17 = 0;
      }
      else if (0xfffe < iVar17) {
        iVar17 = 0xffff;
      }
      iVar23 = iVar18;
      if (0xfffe < iVar18) {
        iVar23 = 0xffff;
      }
      if (iVar23 < 1) {
        iVar18 = 0;
      }
      else if (0xfffe < iVar18) {
        iVar18 = 0xffff;
      }
      iVar23 = iVar19;
      if (0xfffe < iVar19) {
        iVar23 = 0xffff;
      }
      if (iVar23 < 1) {
        iVar19 = 0;
      }
      else if (0xfffe < iVar19) {
        iVar19 = 0xffff;
      }
      iVar23 = iVar20;
      if (0xfffe < iVar20) {
        iVar23 = 0xffff;
      }
      if (iVar23 < 1) {
        iVar20 = 0;
      }
      else if (0xfffe < iVar20) {
        iVar20 = 0xffff;
      }
      uVar25 = uVar25 + 1;
      lVar24 = lVar28 + lVar24;
      lVar22 = lVar28 + lVar22;
      lVar21 = lVar28 + lVar21;
      lVar26 = lVar26 + (uVar29 & 0x1fffffff) * 8;
      *(ulonglong *)lVar26 =
           (((longlong)iVar17 << 0x10 | (longlong)iVar18) << 0x10 | (longlong)iVar19) << 0x10 |
           (longlong)iVar20;
    } while (uVar25 < *(uint *)(iVar16 + 0x68));
  }
  fn_82F6A594();
  return;
}

