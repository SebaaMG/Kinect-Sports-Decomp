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
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8201DF6C;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE5C;
extern unsigned int lbl_821AAD20;


void fn_82B94870(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar16 = *(uint *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 100);
  uVar17 = *(uint *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x34);
  dVar33 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar24 = 0;
    uVar25 = 1;
  }
  else {
    uVar24 = (ulonglong)uVar16 - 1;
    uVar25 = 0xffffffffffffffff;
  }
  dVar32 = dVar33;
  dVar28 = dVar33;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  fVar14 = lbl_8202EE5C;
  dVar13 = lbl_8202EE40;
  fVar12 = lbl_8201DF6C;
  fVar11 = lbl_82005CCC;
  fVar10 = lbl_82005328;
  uVar23 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar19 = (uVar25 + uVar24 & 0xfffffff) << 4;
    lVar15 = (uVar25 & 0xfffffff) * 0x10;
    lVar26 = ((longlong)(int)(uVar16 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar2 * (longlong)(int)param_2 + (longlong)iVar3 * (longlong)(int)param_3 +
             (ulonglong)uVar17 + (uVar25 & 0x3fffffff) * -4;
    dVar30 = (double)lbl_8200D8DC;
    lVar21 = (uVar24 & 0xfffffff) << 4;
    dVar31 = (double)lbl_820288E0;
    dVar27 = (double)lbl_820288C8;
    lVar20 = (uVar24 - uVar25 & 0xfffffff) << 4;
    do {
      iVar3 = (int)lVar21;
      iVar2 = param_4 + 0xc + iVar3;
      fVar1 = *(float *)((uVar23 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar5 = (float)((double)*(float *)(param_4 + 0xc + iVar3) + dVar33) * fVar11;
      fVar6 = (float)((double)*(float *)(iVar2 + -0xc) + dVar28) * fVar12;
      fVar7 = (float)((double)*(float *)(iVar2 + -8) + dVar32) * fVar12;
      uVar16 = (uint)(fVar5 + fVar1);
      uVar17 = (uint)(fVar6 + fVar1);
      uVar18 = (uint)(fVar7 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar8 = (int)lVar20;
        iVar2 = iVar8 + *(int *)(param_1 + 0x5c);
        dVar28 = (double)((fVar6 - (float)(longlong)(int)uVar17) * fVar14);
        *(float *)(iVar2 + 0x10) = (float)(dVar28 * dVar27 + (double)*(float *)(iVar2 + 0x10));
        dVar33 = (double)((fVar7 - (float)(longlong)(int)uVar18) * fVar14);
        iVar2 = iVar3 + *(int *)(param_1 + 0x5c);
        dVar29 = (double)((fVar5 - (float)(longlong)(int)uVar16) * fVar10);
        dVar32 = (double)(float)(dVar33 * dVar13);
        *(float *)(iVar2 + 0x10) = (float)(dVar28 * dVar31 + (double)*(float *)(iVar2 + 0x10));
        iVar9 = (int)lVar19;
        iVar2 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar2 + 0x10) = (float)(dVar28 * dVar30 + (double)*(float *)(iVar2 + 0x10));
        iVar2 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar33 * dVar27 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar3 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar33 * dVar31 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar33 * dVar30 + (double)*(float *)(iVar2 + 0x14));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x1c) = (float)(dVar29 * dVar27 + (double)*(float *)(iVar8 + 0x1c));
        iVar3 = iVar3 + *(int *)(param_1 + 0x5c);
        dVar28 = (double)(float)(dVar28 * dVar13);
        *(float *)(iVar3 + 0x1c) = (float)(dVar29 * dVar31 + (double)*(float *)(iVar3 + 0x1c));
        iVar9 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar9 + 0x1c) = (float)(dVar29 * dVar30 + (double)*(float *)(iVar9 + 0x1c));
        dVar33 = (double)(float)(dVar29 * dVar13);
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
      uVar22 = uVar16;
      if (0xfe < (int)uVar16) {
        uVar22 = 0xff;
      }
      if ((int)uVar22 < -0xfe) {
        uVar16 = 0xffffff01;
      }
      else if (0xfe < (int)uVar16) {
        uVar16 = 0xff;
      }
      uVar23 = uVar23 + 1;
      lVar21 = lVar15 + lVar21;
      lVar20 = lVar15 + lVar20;
      lVar26 = lVar26 + (uVar25 & 0x3fffffff) * 4;
      *(uint *)lVar26 = ((uVar16 & 0xff) << 8 | uVar18 & 0xff) << 8 | uVar17 & 0xff;
      lVar19 = lVar15 + lVar19;
    } while (uVar23 < *(uint *)(param_1 + 0x68));
  }
  return;
}

