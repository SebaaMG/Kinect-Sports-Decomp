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
extern unsigned int lbl_8200D8A0;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015CF0;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_8292A510(int param_1,uint param_2,uint param_3,int param_4)

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
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
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
    param_4 = fn_829252C0(param_1,param_4);
  }
  uVar14 = *(uint *)(param_1 + 0x68);
  iVar11 = *(int *)(param_1 + 0x60);
  iVar17 = *(int *)(param_1 + 100);
  uVar16 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  dVar25 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar18 = 0;
    uVar19 = 1;
  }
  else {
    uVar18 = (ulonglong)uVar14 - 1;
    uVar19 = 0xffffffffffffffff;
  }
  dVar26 = dVar25;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar8 = lbl_8202EE40;
  fVar7 = lbl_82015CF0;
  fVar6 = lbl_8200D8A0;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar9 = (uVar19 & 0xfffffff) * 0x10;
    lVar15 = (uVar18 & 0xfffffff) << 4;
    lVar12 = (uVar19 + uVar18 & 0xfffffff) << 4;
    lVar13 = (uVar18 - uVar19 & 0xfffffff) << 4;
    lVar20 = ((longlong)(int)(uVar14 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar11 * (longlong)(int)param_2 + (longlong)iVar17 * (longlong)(int)param_3 +
             (ulonglong)uVar16 + (uVar19 & 0x3fffffff) * -4;
    dVar21 = (double)lbl_8200D8DC;
    dVar22 = (double)lbl_820288E0;
    dVar23 = (double)lbl_820288C8;
    do {
      iVar17 = (int)lVar15;
      fVar1 = *(float *)((uVar10 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)((double)*(float *)(iVar17 + param_4) + dVar26) * fVar6;
      fVar4 = (float)((double)*(float *)(iVar17 + param_4 + 4) + dVar25) * fVar6;
      uVar14 = (uint)(fVar3 + fVar1);
      iVar11 = (int)(fVar4 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar5 = (int)lVar13 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar3 - (float)(longlong)(int)uVar14) * fVar7);
        *(float *)(iVar5 + 0x10) = (float)(dVar25 * dVar23 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = iVar17 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar5 + 0x10) = (float)(dVar25 * dVar22 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = (int)lVar12 + *(int *)(param_1 + 0x5c);
        dVar24 = (double)((fVar4 - (float)(longlong)iVar11) * fVar7);
        *(float *)(iVar5 + 0x10) = (float)(dVar25 * dVar21 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = (int)lVar13 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar5 + 0x14) = (float)(dVar24 * dVar23 + (double)*(float *)(iVar5 + 0x14));
        iVar17 = iVar17 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar17 + 0x14) = (float)(dVar24 * dVar22 + (double)*(float *)(iVar17 + 0x14));
        iVar17 = (int)lVar12 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)(float)(dVar25 * dVar8);
        *(float *)(iVar17 + 0x14) = (float)(dVar24 * dVar21 + (double)*(float *)(iVar17 + 0x14));
        dVar25 = (double)(float)(dVar24 * dVar8);
      }
      uVar16 = uVar14;
      if (0x7ffe < (int)uVar14) {
        uVar16 = 0x7fff;
      }
      if ((int)uVar16 < -0x7ffe) {
        uVar14 = 0xffff8001;
      }
      else if (0x7ffe < (int)uVar14) {
        uVar14 = 0x7fff;
      }
      iVar17 = iVar11;
      if (0x7ffe < iVar11) {
        iVar17 = 0x7fff;
      }
      if (iVar17 < -0x7ffe) {
        iVar11 = -0x7fff;
      }
      else if (0x7ffe < iVar11) {
        iVar11 = 0x7fff;
      }
      uVar10 = uVar10 + 1;
      lVar20 = lVar20 + (uVar19 & 0x3fffffff) * 4;
      *(uint *)lVar20 = iVar11 << 0x10 | uVar14 & 0xffff;
      lVar15 = lVar9 + lVar15;
      lVar13 = lVar9 + lVar13;
      lVar12 = lVar9 + lVar12;
    } while (uVar10 < *(uint *)(param_1 + 0x68));
  }
  return;
}

