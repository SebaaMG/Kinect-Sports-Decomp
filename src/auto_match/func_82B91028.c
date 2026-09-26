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
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_821AAD20;


void fn_82B91028(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
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
  uVar14 = *(uint *)(param_1 + 0x68);
  iVar15 = *(int *)(param_1 + 0x60);
  iVar20 = *(int *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x34);
  dVar31 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar22 = 0;
    uVar23 = 1;
  }
  else {
    uVar22 = (ulonglong)uVar14 - 1;
    uVar23 = 0xffffffffffffffff;
  }
  dVar30 = dVar31;
  dVar25 = dVar31;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  fVar12 = lbl_8202EE4C;
  fVar11 = lbl_8202EE48;
  dVar10 = lbl_8202EE40;
  uVar21 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar13 = (uVar23 & 0xfffffff) * 0x10;
    lVar16 = (uVar23 + uVar22 & 0xfffffff) << 4;
    lVar24 = ((longlong)(int)(uVar14 - 1) * (longlong)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (longlong)iVar15 * (longlong)(int)param_2 + (longlong)iVar20 * (longlong)(int)param_3 +
             (ulonglong)uVar2 + (uVar23 & 0x7fffffff) * -2;
    lVar18 = (uVar22 & 0xfffffff) << 4;
    dVar27 = (double)lbl_8200D8DC;
    dVar28 = (double)lbl_820288E0;
    lVar17 = (uVar22 - uVar23 & 0xfffffff) << 4;
    dVar29 = (double)lbl_820288C8;
    do {
      iVar20 = (int)lVar18;
      iVar15 = param_4 + 8 + iVar20;
      fVar1 = *(float *)((uVar21 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar3);
      fVar4 = (float)((double)*(float *)(param_4 + 8 + iVar20) + dVar31) * fVar11;
      fVar5 = (float)((double)*(float *)(iVar15 + -8) + dVar25) * fVar11;
      fVar6 = (float)((double)*(float *)(iVar15 + -4) + dVar30) * fVar11;
      iVar15 = (int)(fVar4 + fVar1);
      uVar14 = (uint)(fVar5 + fVar1);
      uVar2 = (uint)(fVar6 + fVar1);
      uVar22 = (ulonglong)uVar2;
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar8 = (int)lVar17;
        iVar7 = iVar8 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar5 - (float)(longlong)(int)uVar14) * fVar12);
        *(float *)(iVar7 + 0x10) = (float)(dVar25 * dVar29 + (double)*(float *)(iVar7 + 0x10));
        dVar31 = (double)((fVar6 - (float)(longlong)(int)uVar2) * fVar12);
        iVar7 = iVar20 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)((fVar4 - (float)(longlong)iVar15) * fVar12);
        dVar30 = (double)(float)(dVar31 * dVar10);
        *(float *)(iVar7 + 0x10) = (float)(dVar25 * dVar28 + (double)*(float *)(iVar7 + 0x10));
        iVar9 = (int)lVar16;
        iVar7 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x10) = (float)(dVar25 * dVar27 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar31 * dVar29 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar20 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar31 * dVar28 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar31 * dVar27 + (double)*(float *)(iVar7 + 0x14));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar26 * dVar29 + (double)*(float *)(iVar8 + 0x18));
        iVar20 = iVar20 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)(float)(dVar25 * dVar10);
        *(float *)(iVar20 + 0x18) = (float)(dVar26 * dVar28 + (double)*(float *)(iVar20 + 0x18));
        iVar9 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar9 + 0x18) = (float)(dVar26 * dVar27 + (double)*(float *)(iVar9 + 0x18));
        dVar31 = (double)(float)(dVar26 * dVar10);
      }
      uVar19 = uVar14;
      if (0x1e < (int)uVar14) {
        uVar19 = 0x1f;
      }
      if ((int)uVar19 < 1) {
        uVar14 = 0;
      }
      else if (0x1e < (int)uVar14) {
        uVar14 = 0x1f;
      }
      uVar19 = uVar2;
      if (0x1e < (int)uVar2) {
        uVar19 = 0x1f;
      }
      if ((int)uVar19 < 1) {
        uVar22 = 0;
      }
      else if (0x1e < (int)uVar2) {
        uVar22 = 0x1f;
      }
      iVar20 = iVar15;
      if (0x1e < iVar15) {
        iVar20 = 0x1f;
      }
      if (iVar20 < 1) {
        iVar15 = 0;
      }
      else if (0x1e < iVar15) {
        iVar15 = 0x1f;
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar13 + lVar18;
      lVar17 = lVar13 + lVar17;
      lVar16 = lVar13 + lVar16;
      lVar24 = lVar24 + (uVar23 & 0x7fffffff) * 2;
      *(ushort *)lVar24 =
           (ushort)((((ulonglong)uVar14 & 0x7ffffff) << 5 | uVar22) << 5) | (ushort)iVar15;
    } while (uVar21 < *(uint *)(param_1 + 0x68));
  }
  return;
}

