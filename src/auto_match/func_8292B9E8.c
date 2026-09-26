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
extern unsigned int lbl_8200DD28;
extern unsigned int lbl_820145F8;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_8292B9E8(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
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
    param_4 = fn_829252C0(param_1,param_4);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  dVar31 = (double)lbl_821AAD20;
  lVar21 = (longlong)(int)(*(uint *)(param_1 + 0x68) - 1) * (longlong)(int)(param_2 & 1) * 6 +
           (longlong)*(int *)(param_1 + 0x60) * (longlong)(int)param_2 +
           (longlong)*(int *)(param_1 + 100) * (longlong)(int)param_3 +
           (ulonglong)*(uint *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    uVar22 = 0;
    uVar23 = 1;
  }
  else {
    uVar22 = (ulonglong)*(uint *)(param_1 + 0x68) - 1;
    uVar23 = 0xffffffffffffffff;
  }
  dVar30 = dVar31;
  dVar25 = dVar31;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar12 = lbl_8202EE40;
  fVar11 = lbl_820145F8;
  fVar10 = lbl_8200DD28;
  uVar20 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar16 = (uVar23 + uVar22 & 0xfffffff) << 4;
    lVar18 = (uVar22 & 0xfffffff) << 4;
    dVar27 = (double)lbl_8200D8DC;
    dVar28 = (double)lbl_820288E0;
    dVar29 = (double)lbl_820288C8;
    lVar24 = (uVar23 & 0xfffffff) * 0x10;
    lVar17 = (uVar22 - uVar23 & 0xfffffff) << 4;
    do {
      iVar19 = (int)lVar18;
      iVar15 = param_4 + 8 + iVar19;
      fVar1 = *(float *)((uVar20 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)((double)*(float *)(param_4 + 8 + iVar19) + dVar31) * fVar11;
      fVar4 = (float)((double)*(float *)(iVar15 + -8) + dVar25) * fVar11;
      fVar5 = (float)((double)*(float *)(iVar15 + -4) + dVar30) * fVar11;
      iVar15 = (int)(fVar3 + fVar1);
      iVar13 = (int)(fVar4 + fVar1);
      iVar14 = (int)(fVar5 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar7 = (int)lVar17;
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar4 - (float)(longlong)iVar13) * fVar10);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar29 + (double)*(float *)(iVar6 + 0x10));
        dVar31 = (double)((fVar5 - (float)(longlong)iVar14) * fVar10);
        iVar6 = iVar19 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)((fVar3 - (float)(longlong)iVar15) * fVar10);
        dVar30 = (double)(float)(dVar31 * dVar12);
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
        dVar25 = (double)(float)(dVar25 * dVar12);
        *(float *)(iVar19 + 0x18) = (float)(dVar26 * dVar28 + (double)*(float *)(iVar19 + 0x18));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar26 * dVar27 + (double)*(float *)(iVar8 + 0x18));
        dVar31 = (double)(float)(dVar26 * dVar12);
      }
      iVar19 = iVar13;
      if (0xfffe < iVar13) {
        iVar19 = 0xffff;
      }
      if (iVar19 < 1) {
        iVar13 = 0;
      }
      else if (0xfffe < iVar13) {
        iVar13 = 0xffff;
      }
      iVar19 = iVar14;
      if (0xfffe < iVar14) {
        iVar19 = 0xffff;
      }
      if (iVar19 < 1) {
        iVar14 = 0;
      }
      else if (0xfffe < iVar14) {
        iVar14 = 0xffff;
      }
      iVar19 = iVar15;
      if (0xfffe < iVar15) {
        iVar19 = 0xffff;
      }
      if (iVar19 < 1) {
        iVar15 = 0;
      }
      else if (0xfffe < iVar15) {
        iVar15 = 0xffff;
      }
      puVar9 = (undefined2 *)lVar21;
      puVar9[1] = (short)iVar14;
      uVar20 = uVar20 + 1;
      *puVar9 = (short)iVar15;
      lVar18 = lVar24 + lVar18;
      puVar9[2] = (short)iVar13;
      lVar21 = uVar23 * 6 + lVar21;
      lVar17 = lVar24 + lVar17;
      lVar16 = lVar24 + lVar16;
    } while (uVar20 < *(uint *)(param_1 + 0x68));
  }
  return;
}

