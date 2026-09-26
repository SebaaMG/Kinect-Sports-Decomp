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
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82B90888(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar15 = *(uint *)(param_1 + 0x68);
  iVar13 = *(int *)(param_1 + 0x60);
  iVar19 = *(int *)(param_1 + 100);
  uVar14 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  dVar31 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar22 = 0;
    uVar23 = 1;
  }
  else {
    uVar22 = (ulonglong)uVar15 - 1;
    uVar23 = 0xffffffffffffffff;
  }
  dVar30 = dVar31;
  dVar25 = dVar31;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar11 = lbl_8202EE40;
  fVar10 = lbl_82005CCC;
  fVar9 = lbl_82005328;
  uVar21 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar12 = (uVar23 & 0xfffffff) * 0x10;
    lVar16 = (uVar23 + uVar22 & 0xfffffff) << 4;
    lVar24 = ((longlong)(int)(uVar15 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar13 * (longlong)(int)param_2 + (longlong)iVar19 * (longlong)(int)param_3 +
             (ulonglong)uVar14 + (uVar23 & 0x3fffffff) * -4;
    lVar18 = (uVar22 & 0xfffffff) << 4;
    dVar27 = (double)lbl_8200D8DC;
    dVar28 = (double)lbl_820288E0;
    lVar17 = (uVar22 - uVar23 & 0xfffffff) << 4;
    dVar29 = (double)lbl_820288C8;
    do {
      iVar19 = (int)lVar18;
      iVar13 = param_4 + 8 + iVar19;
      fVar1 = *(float *)((uVar21 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)((double)*(float *)(param_4 + 8 + iVar19) + dVar31) * fVar10;
      fVar4 = (float)((double)*(float *)(iVar13 + -8) + dVar25) * fVar10;
      fVar5 = (float)((double)*(float *)(iVar13 + -4) + dVar30) * fVar10;
      uVar15 = (uint)(fVar3 + fVar1);
      iVar13 = (int)(fVar4 + fVar1);
      uVar14 = (uint)(fVar5 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar7 = (int)lVar17;
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar4 - (float)(longlong)iVar13) * fVar9);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar29 + (double)*(float *)(iVar6 + 0x10));
        dVar31 = (double)((fVar5 - (float)(longlong)(int)uVar14) * fVar9);
        iVar6 = iVar19 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)((fVar3 - (float)(longlong)(int)uVar15) * fVar9);
        dVar30 = (double)(float)(dVar31 * dVar11);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar28 + (double)*(float *)(iVar6 + 0x10));
        iVar8 = (int)lVar16;
        iVar6 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar27 + (double)*(float *)(iVar6 + 0x10));
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar31 * dVar29 + (double)*(float *)(iVar6 + 0x14));
        iVar6 = iVar19 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar31 * dVar28 + (double)*(float *)(iVar6 + 0x14));
        iVar6 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar31 * dVar27 + (double)*(float *)(iVar6 + 0x14));
        iVar7 = iVar7 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x18) = (float)(dVar26 * dVar29 + (double)*(float *)(iVar7 + 0x18));
        iVar19 = iVar19 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)(float)(dVar25 * dVar11);
        *(float *)(iVar19 + 0x18) = (float)(dVar26 * dVar28 + (double)*(float *)(iVar19 + 0x18));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar26 * dVar27 + (double)*(float *)(iVar8 + 0x18));
        dVar31 = (double)(float)(dVar26 * dVar11);
      }
      iVar19 = iVar13;
      if (0xfe < iVar13) {
        iVar19 = 0xff;
      }
      if (iVar19 < 1) {
        iVar13 = 0;
      }
      else if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      uVar20 = uVar14;
      if (0xfe < (int)uVar14) {
        uVar20 = 0xff;
      }
      if ((int)uVar20 < 1) {
        uVar14 = 0;
      }
      else if (0xfe < (int)uVar14) {
        uVar14 = 0xff;
      }
      uVar20 = uVar15;
      if (0xfe < (int)uVar15) {
        uVar20 = 0xff;
      }
      if ((int)uVar20 < 1) {
        uVar15 = 0;
      }
      else if (0xfe < (int)uVar15) {
        uVar15 = 0xff;
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar12 + lVar18;
      lVar17 = lVar12 + lVar17;
      lVar16 = lVar12 + lVar16;
      lVar24 = lVar24 + (uVar23 & 0x3fffffff) * 4;
      *(uint *)lVar24 = (iVar13 << 8 | uVar14) << 8 | uVar15;
    } while (uVar21 < *(uint *)(param_1 + 0x68));
  }
  return;
}

