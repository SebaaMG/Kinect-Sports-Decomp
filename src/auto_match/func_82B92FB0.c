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
extern unsigned int lbl_8200DD28;
extern unsigned int lbl_820145F8;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82B92FB0(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar11 = *(uint *)(param_1 + 0x68);
  iVar12 = *(int *)(param_1 + 0x60);
  iVar17 = *(int *)(param_1 + 100);
  uVar16 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  dVar25 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar18 = 0;
    uVar20 = 1;
  }
  else {
    uVar18 = (ulonglong)uVar11 - 1;
    uVar20 = 0xffffffffffffffff;
  }
  dVar26 = dVar25;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar8 = lbl_8202EE40;
  fVar7 = lbl_820145F8;
  fVar6 = lbl_8200DD28;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar13 = (uVar20 + uVar18 & 0xfffffff) << 4;
    lVar15 = (uVar18 & 0xfffffff) << 4;
    lVar14 = (uVar18 - uVar20 & 0xfffffff) << 4;
    lVar19 = ((longlong)(int)(uVar11 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar12 * (longlong)(int)param_2 + (longlong)iVar17 * (longlong)(int)param_3 +
             (ulonglong)uVar16 + (uVar20 & 0x3fffffff) * -4;
    dVar21 = (double)lbl_8200D8DC;
    lVar9 = (uVar20 & 0xfffffff) * 0x10;
    dVar22 = (double)lbl_820288E0;
    dVar23 = (double)lbl_820288C8;
    do {
      iVar17 = (int)lVar15;
      fVar1 = *(float *)((uVar10 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)((double)*(float *)(iVar17 + param_4) + dVar26) * fVar7;
      fVar4 = (float)((double)*(float *)(iVar17 + param_4 + 4) + dVar25) * fVar7;
      uVar11 = (uint)(fVar3 + fVar1);
      iVar12 = (int)(fVar4 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar5 = (int)lVar14 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar3 - (float)(longlong)(int)uVar11) * fVar6);
        *(float *)(iVar5 + 0x10) = (float)(dVar25 * dVar23 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = iVar17 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar5 + 0x10) = (float)(dVar25 * dVar22 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = (int)lVar13 + *(int *)(param_1 + 0x5c);
        dVar24 = (double)((fVar4 - (float)(longlong)iVar12) * fVar6);
        *(float *)(iVar5 + 0x10) = (float)(dVar25 * dVar21 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = (int)lVar14 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar5 + 0x14) = (float)(dVar24 * dVar23 + (double)*(float *)(iVar5 + 0x14));
        iVar17 = iVar17 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar17 + 0x14) = (float)(dVar24 * dVar22 + (double)*(float *)(iVar17 + 0x14));
        iVar17 = (int)lVar13 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)(float)(dVar25 * dVar8);
        *(float *)(iVar17 + 0x14) = (float)(dVar24 * dVar21 + (double)*(float *)(iVar17 + 0x14));
        dVar25 = (double)(float)(dVar24 * dVar8);
      }
      uVar16 = uVar11;
      if (0xfffe < (int)uVar11) {
        uVar16 = 0xffff;
      }
      if ((int)uVar16 < 1) {
        uVar11 = 0;
      }
      else if (0xfffe < (int)uVar11) {
        uVar11 = 0xffff;
      }
      iVar17 = iVar12;
      if (0xfffe < iVar12) {
        iVar17 = 0xffff;
      }
      if (iVar17 < 1) {
        iVar12 = 0;
      }
      else if (0xfffe < iVar12) {
        iVar12 = 0xffff;
      }
      uVar10 = uVar10 + 1;
      lVar15 = lVar9 + lVar15;
      lVar19 = lVar19 + (uVar20 & 0x3fffffff) * 4;
      *(uint *)lVar19 = iVar12 << 0x10 | uVar11;
      lVar14 = lVar9 + lVar14;
      lVar13 = lVar9 + lVar13;
    } while (uVar10 < *(uint *)(param_1 + 0x68));
  }
  return;
}

