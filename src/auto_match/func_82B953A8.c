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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE60;
extern unsigned int lbl_8202EE64;
extern unsigned int lbl_821AAD20;


void fn_82B953A8(undefined8 param_1,ulonglong param_2,uint param_3,undefined8 param_4)

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
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
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
  
  iVar17 = fn_82F6A540();
  if (*(int *)(iVar17 + 0x54) != 0) {
    param_4 = fn_82924628(iVar17,param_4);
  }
  if (*(int *)(iVar17 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(iVar17,param_4);
  }
  uVar21 = *(uint *)(iVar17 + 0x68);
  iVar2 = *(int *)(iVar17 + 0x60);
  iVar3 = *(int *)(iVar17 + 100);
  uVar19 = *(uint *)(iVar17 + 0x20);
  iVar4 = *(int *)(iVar17 + 0x34);
  dVar37 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar27 = 0;
    uVar29 = 1;
  }
  else {
    uVar27 = (ulonglong)uVar21 - 1;
    uVar29 = 0xffffffffffffffff;
  }
  dVar32 = dVar37;
  dVar36 = dVar37;
  dVar38 = dVar37;
  if (*(int *)(iVar17 + 0x5c) != 0) {
    fn_82B90378(iVar17,param_4);
  }
  fVar16 = lbl_8202EE64;
  fVar15 = lbl_8202EE60;
  dVar14 = lbl_8202EE40;
  fVar13 = lbl_82015BE0;
  fVar12 = lbl_8200BF40;
  uVar26 = 0;
  if (*(int *)(iVar17 + 0x68) != 0) {
    lVar22 = (uVar29 + uVar27 & 0xfffffff) << 4;
    dVar34 = (double)lbl_8200D8DC;
    dVar35 = (double)lbl_820288E0;
    dVar31 = (double)lbl_820288C8;
    lVar25 = (uVar27 & 0xfffffff) << 4;
    lVar30 = (uVar29 & 0xfffffff) * 0x10;
    lVar23 = (uVar27 - uVar29 & 0xfffffff) << 4;
    iVar11 = (int)param_4 + 8;
    lVar28 = ((longlong)(int)(uVar21 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar2 * (longlong)(int)(uint)param_2 +
             (longlong)iVar3 * (longlong)(int)param_3 + (ulonglong)uVar19 +
             (uVar29 & 0x3fffffff) * -4;
    do {
      iVar3 = (int)lVar25;
      iVar2 = iVar11 + iVar3;
      fVar1 = *(float *)((uVar26 & 3) * 4 + (((uint)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar4);
      fVar6 = (float)(dVar32 + (double)*(float *)(iVar11 + iVar3)) * fVar15;
      fVar7 = (float)((double)*(float *)(iVar2 + -8) + dVar38) * fVar15;
      fVar8 = (float)((double)*(float *)(iVar2 + -4) + dVar36) * fVar15;
      fVar5 = (float)((double)*(float *)(iVar2 + 4) + dVar37) * fVar12;
      uVar21 = (uint)(fVar6 + fVar1);
      uVar19 = (uint)(fVar7 + fVar1);
      uVar20 = (uint)(fVar8 + fVar1);
      uVar18 = (uint)(fVar5 + fVar1);
      if (*(int *)(iVar17 + 0x5c) != 0) {
        iVar9 = (int)lVar23;
        iVar2 = iVar9 + *(int *)(iVar17 + 0x5c);
        dVar32 = (double)((fVar7 - (float)(longlong)(int)uVar19) * fVar16);
        *(float *)(iVar2 + 0x10) = (float)(dVar32 * dVar31 + (double)*(float *)(iVar2 + 0x10));
        iVar2 = iVar3 + *(int *)(iVar17 + 0x5c);
        *(float *)(iVar2 + 0x10) = (float)(dVar32 * dVar35 + (double)*(float *)(iVar2 + 0x10));
        iVar10 = (int)lVar22;
        iVar2 = iVar10 + *(int *)(iVar17 + 0x5c);
        dVar37 = (double)((fVar8 - (float)(longlong)(int)uVar20) * fVar16);
        *(float *)(iVar2 + 0x10) = (float)(dVar32 * dVar34 + (double)*(float *)(iVar2 + 0x10));
        iVar2 = iVar9 + *(int *)(iVar17 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar37 * dVar31 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar3 + *(int *)(iVar17 + 0x5c);
        *(float *)(iVar2 + 0x14) = (float)(dVar37 * dVar35 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar10 + *(int *)(iVar17 + 0x5c);
        dVar33 = (double)((fVar6 - (float)(longlong)(int)uVar21) * fVar16);
        *(float *)(iVar2 + 0x14) = (float)(dVar37 * dVar34 + (double)*(float *)(iVar2 + 0x14));
        iVar2 = iVar9 + *(int *)(iVar17 + 0x5c);
        *(float *)(iVar2 + 0x18) = (float)(dVar33 * dVar31 + (double)*(float *)(iVar2 + 0x18));
        iVar2 = iVar3 + *(int *)(iVar17 + 0x5c);
        dVar38 = (double)(float)(dVar32 * dVar14);
        *(float *)(iVar2 + 0x18) = (float)(dVar33 * dVar35 + (double)*(float *)(iVar2 + 0x18));
        iVar2 = iVar10 + *(int *)(iVar17 + 0x5c);
        dVar36 = (double)(float)(dVar37 * dVar14);
        *(float *)(iVar2 + 0x18) = (float)(dVar33 * dVar34 + (double)*(float *)(iVar2 + 0x18));
        iVar9 = iVar9 + *(int *)(iVar17 + 0x5c);
        dVar32 = (double)(float)(dVar33 * dVar14);
        dVar37 = (double)((fVar5 - (float)(longlong)(int)uVar18) * fVar13);
        *(float *)(iVar9 + 0x1c) = (float)(dVar37 * dVar31 + (double)*(float *)(iVar9 + 0x1c));
        iVar3 = iVar3 + *(int *)(iVar17 + 0x5c);
        *(float *)(iVar3 + 0x1c) = (float)(dVar37 * dVar35 + (double)*(float *)(iVar3 + 0x1c));
        iVar10 = iVar10 + *(int *)(iVar17 + 0x5c);
        *(float *)(iVar10 + 0x1c) = (float)(dVar37 * dVar34 + (double)*(float *)(iVar10 + 0x1c));
        dVar37 = (double)(float)(dVar37 * dVar14);
      }
      uVar24 = uVar19;
      if (0x1fe < (int)uVar19) {
        uVar24 = 0x1ff;
      }
      if ((int)uVar24 < -0x1fe) {
        uVar19 = 0xfffffe01;
      }
      else if (0x1fe < (int)uVar19) {
        uVar19 = 0x1ff;
      }
      uVar24 = uVar20;
      if (0x1fe < (int)uVar20) {
        uVar24 = 0x1ff;
      }
      if ((int)uVar24 < -0x1fe) {
        uVar20 = 0xfffffe01;
      }
      else if (0x1fe < (int)uVar20) {
        uVar20 = 0x1ff;
      }
      uVar24 = uVar21;
      if (0x1fe < (int)uVar21) {
        uVar24 = 0x1ff;
      }
      if ((int)uVar24 < -0x1fe) {
        uVar21 = 0xfffffe01;
      }
      else if (0x1fe < (int)uVar21) {
        uVar21 = 0x1ff;
      }
      uVar24 = uVar18;
      if (2 < (int)uVar18) {
        uVar24 = 3;
      }
      if ((int)uVar24 < -2) {
        uVar18 = 0xfffffffd;
      }
      else if (2 < (int)uVar18) {
        uVar18 = 3;
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar30 + lVar25;
      lVar23 = lVar30 + lVar23;
      lVar28 = lVar28 + (uVar29 & 0x3fffffff) * 4;
      *(uint *)lVar28 =
           (((uVar18 & 0xfff) << 10 | uVar21 & 0x3ff) << 10 | uVar20 & 0x3ff) << 10 | uVar19 & 0x3ff
      ;
      lVar22 = lVar30 + lVar22;
    } while (uVar26 < *(uint *)(iVar17 + 0x68));
  }
  fn_82F6A58C();
  return;
}

