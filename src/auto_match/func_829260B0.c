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
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_8202EE50;
extern unsigned int lbl_821AAD20;


void fn_829260B0(int param_1,uint param_2,uint param_3,int param_4)

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
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
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
    param_4 = fn_829252C0(param_1,param_4);
  }
  uVar16 = *(uint *)(param_1 + 0x68);
  iVar17 = *(int *)(param_1 + 0x60);
  iVar22 = *(int *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x34);
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
  fVar14 = lbl_8202EE50;
  fVar13 = lbl_8202EE4C;
  fVar12 = lbl_8202EE48;
  dVar11 = lbl_8202EE40;
  fVar10 = lbl_820288C0;
  uVar23 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar18 = (uVar25 + uVar24 & 0xfffffff) << 4;
    lVar15 = (uVar25 & 0xfffffff) * 0x10;
    lVar26 = ((longlong)(int)(uVar16 - 1) * (longlong)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (longlong)iVar17 * (longlong)(int)param_2 + (longlong)iVar22 * (longlong)(int)param_3 +
             (ulonglong)uVar2 + (uVar25 & 0x7fffffff) * -2;
    dVar30 = (double)lbl_8200D8DC;
    lVar20 = (uVar24 & 0xfffffff) << 4;
    dVar31 = (double)lbl_820288E0;
    dVar27 = (double)lbl_820288C8;
    lVar19 = (uVar24 - uVar25 & 0xfffffff) << 4;
    do {
      iVar22 = (int)lVar20;
      iVar17 = param_4 + 8 + iVar22;
      fVar1 = *(float *)((uVar23 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar3);
      fVar5 = (float)((double)*(float *)(param_4 + 8 + iVar22) + dVar33) * fVar12;
      fVar6 = (float)((double)*(float *)(iVar17 + -8) + dVar28) * fVar12;
      fVar4 = (float)((double)*(float *)(iVar17 + -4) + dVar32) * fVar10;
      iVar17 = (int)(fVar5 + fVar1);
      uVar16 = (uint)(fVar6 + fVar1);
      uVar2 = (uint)(fVar4 + fVar1);
      uVar24 = (ulonglong)uVar2;
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar8 = (int)lVar19;
        iVar7 = iVar8 + *(int *)(param_1 + 0x5c);
        dVar28 = (double)((fVar6 - (float)(longlong)(int)uVar16) * fVar13);
        *(float *)(iVar7 + 0x10) = (float)(dVar28 * dVar27 + (double)*(float *)(iVar7 + 0x10));
        dVar33 = (double)((fVar4 - (float)(longlong)(int)uVar2) * fVar14);
        iVar7 = iVar22 + *(int *)(param_1 + 0x5c);
        dVar29 = (double)((fVar5 - (float)(longlong)iVar17) * fVar13);
        dVar32 = (double)(float)(dVar33 * dVar11);
        *(float *)(iVar7 + 0x10) = (float)(dVar28 * dVar31 + (double)*(float *)(iVar7 + 0x10));
        iVar9 = (int)lVar18;
        iVar7 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x10) = (float)(dVar28 * dVar30 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar33 * dVar27 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar22 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar33 * dVar31 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar33 * dVar30 + (double)*(float *)(iVar7 + 0x14));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar29 * dVar27 + (double)*(float *)(iVar8 + 0x18));
        iVar22 = iVar22 + *(int *)(param_1 + 0x5c);
        dVar28 = (double)(float)(dVar28 * dVar11);
        *(float *)(iVar22 + 0x18) = (float)(dVar29 * dVar31 + (double)*(float *)(iVar22 + 0x18));
        iVar9 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar9 + 0x18) = (float)(dVar29 * dVar30 + (double)*(float *)(iVar9 + 0x18));
        dVar33 = (double)(float)(dVar29 * dVar11);
      }
      uVar21 = uVar16;
      if (0x1e < (int)uVar16) {
        uVar21 = 0x1f;
      }
      if ((int)uVar21 < 1) {
        uVar16 = 0;
      }
      else if (0x1e < (int)uVar16) {
        uVar16 = 0x1f;
      }
      uVar21 = uVar2;
      if (0x3e < (int)uVar2) {
        uVar21 = 0x3f;
      }
      if ((int)uVar21 < 1) {
        uVar24 = 0;
      }
      else if (0x3e < (int)uVar2) {
        uVar24 = 0x3f;
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
      uVar23 = uVar23 + 1;
      lVar20 = lVar15 + lVar20;
      lVar19 = lVar15 + lVar19;
      lVar18 = lVar15 + lVar18;
      lVar26 = lVar26 + (uVar25 & 0x7fffffff) * 2;
      *(ushort *)lVar26 =
           (ushort)((((ulonglong)uVar16 & 0x3ffffff) << 6 | uVar24) << 5) | (ushort)iVar17;
    } while (uVar23 < *(uint *)(param_1 + 0x68));
  }
  return;
}

