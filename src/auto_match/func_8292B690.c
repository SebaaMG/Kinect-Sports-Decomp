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
extern unsigned int lbl_820287F0;
extern unsigned int lbl_820287F4;
extern unsigned int lbl_820287F8;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8292B690(int param_1,uint param_2,uint param_3,float *param_4)

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
  float *pfVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = (float *)fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = (float *)fn_829252C0(param_1,param_4);
  }
  fVar1 = lbl_820287F8;
  fVar7 = lbl_820287F4;
  fVar6 = lbl_820287F0;
  uVar11 = *(uint *)(param_1 + 0x68);
  iVar12 = *(int *)(param_1 + 0x60);
  iVar18 = *(int *)(param_1 + 100);
  uVar17 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  dVar26 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar19 = 0;
    uVar21 = 1;
  }
  else {
    uVar19 = (ulonglong)uVar11 - 1;
    uVar21 = 0xffffffffffffffff;
  }
  uVar10 = 0;
  pfVar16 = param_4;
  if ((ulonglong)uVar11 != 0) {
    do {
      uVar10 = uVar10 + 1;
      *pfVar16 = *pfVar16 * fVar6 + pfVar16[2] * fVar7 + pfVar16[1] * fVar1;
      pfVar16 = pfVar16 + 4;
    } while (uVar10 < *(uint *)(param_1 + 0x68));
  }
  dVar27 = dVar26;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar8 = lbl_8202EE40;
  fVar7 = lbl_820145F8;
  fVar6 = lbl_8200DD28;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar13 = (uVar21 + uVar19 & 0xfffffff) << 4;
    lVar15 = (uVar19 & 0xfffffff) << 4;
    lVar14 = (uVar19 - uVar21 & 0xfffffff) << 4;
    lVar20 = ((longlong)(int)(uVar11 - 1) * (longlong)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (longlong)iVar12 * (longlong)(int)param_2 + (longlong)iVar18 * (longlong)(int)param_3 +
             (ulonglong)uVar17 + (uVar21 & 0x3fffffff) * -4;
    dVar22 = (double)lbl_8200D8DC;
    lVar9 = (uVar21 & 0xfffffff) * 0x10;
    dVar23 = (double)lbl_820288E0;
    dVar24 = (double)lbl_820288C8;
    do {
      iVar18 = (int)lVar15;
      fVar1 = *(float *)((uVar10 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)(dVar27 + (double)*(float *)(iVar18 + (int)param_4)) * fVar7;
      fVar4 = (float)((double)*(float *)((int)param_4 + iVar18 + 0xc) + dVar26) * fVar7;
      uVar11 = (uint)(fVar3 + fVar1);
      iVar12 = (int)(fVar4 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar5 = *(int *)(param_1 + 0x5c) + (int)lVar14;
        dVar26 = (double)((fVar3 - (float)(longlong)(int)uVar11) * fVar6);
        *(float *)(iVar5 + 0x10) = (float)(dVar26 * dVar24 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = *(int *)(param_1 + 0x5c) + iVar18;
        *(float *)(iVar5 + 0x10) = (float)(dVar26 * dVar23 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = *(int *)(param_1 + 0x5c) + (int)lVar13;
        dVar25 = (double)((fVar4 - (float)(longlong)iVar12) * fVar6);
        *(float *)(iVar5 + 0x10) = (float)(dVar26 * dVar22 + (double)*(float *)(iVar5 + 0x10));
        iVar5 = *(int *)(param_1 + 0x5c) + (int)lVar14;
        *(float *)(iVar5 + 0x1c) = (float)(dVar25 * dVar24 + (double)*(float *)(iVar5 + 0x1c));
        iVar18 = *(int *)(param_1 + 0x5c) + iVar18;
        *(float *)(iVar18 + 0x1c) = (float)(dVar25 * dVar23 + (double)*(float *)(iVar18 + 0x1c));
        iVar18 = *(int *)(param_1 + 0x5c) + (int)lVar13;
        dVar27 = (double)(float)(dVar26 * dVar8);
        *(float *)(iVar18 + 0x1c) = (float)(dVar25 * dVar22 + (double)*(float *)(iVar18 + 0x1c));
        dVar26 = (double)(float)(dVar25 * dVar8);
      }
      uVar17 = uVar11;
      if (0xfffe < (int)uVar11) {
        uVar17 = 0xffff;
      }
      if ((int)uVar17 < 1) {
        uVar11 = 0;
      }
      else if (0xfffe < (int)uVar11) {
        uVar11 = 0xffff;
      }
      iVar18 = iVar12;
      if (0xfffe < iVar12) {
        iVar18 = 0xffff;
      }
      if (iVar18 < 1) {
        iVar12 = 0;
      }
      else if (0xfffe < iVar12) {
        iVar12 = 0xffff;
      }
      uVar10 = uVar10 + 1;
      lVar15 = lVar9 + lVar15;
      lVar20 = lVar20 + (uVar21 & 0x3fffffff) * 4;
      *(uint *)lVar20 = iVar12 << 0x10 | uVar11;
      lVar14 = lVar9 + lVar14;
      lVar13 = lVar9 + lVar13;
    } while (uVar10 < *(uint *)(param_1 + 0x68));
  }
  return;
}

