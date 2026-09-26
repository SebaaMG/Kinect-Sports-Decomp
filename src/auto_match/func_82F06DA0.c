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
extern int fn_82F1CF90();
extern int fn_82F65350();
extern unsigned int lbl_8208DDB0;
extern unsigned int lbl_8208DE0C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82F06DA0(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar18;
  ulonglong uVar17;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  
  iVar15 = 0;
  iVar14 = 0;
  iVar13 = 0;
  iVar12 = 0;
  lVar11 = 0;
  uVar10 = 0;
  lVar9 = 0;
  uVar8 = 0;
  uVar19 = 0;
  if (*(int *)(param_1 + 0x2d0) != 0) {
    iVar18 = (*(int *)(param_1 + 0x2d4) + -1) * *(int *)(param_1 + 0x2d0) * 8;
    iVar5 = 0;
    iVar12 = 0;
    iVar13 = 0;
    do {
      if (*(short *)(iVar5 + *(int *)(param_1 + 0x9f0)) != 0x4000) {
        lVar20 = (longlong)*(short *)(*(int *)(param_1 + 0x9f4) + iVar5);
        iVar4 = fn_82F1CF90(param_1,lVar20);
        iVar12 = iVar4 + iVar12;
        uVar8 = lVar20 + uVar8;
      }
      if (*(short *)(iVar5 + 2 + *(int *)(param_1 + 0x9f0)) != 0x4000) {
        lVar20 = (longlong)*(short *)(*(int *)(param_1 + 0x9f4) + iVar5 + 2);
        iVar4 = fn_82F1CF90(param_1,lVar20);
        iVar12 = iVar4 + iVar12;
        uVar8 = lVar20 + uVar8;
      }
      iVar5 = iVar5 + 4;
      if (*(short *)(iVar18 + *(int *)(param_1 + 0x9f0)) != 0x4000) {
        lVar20 = (longlong)*(short *)(*(int *)(param_1 + 0x9f4) + iVar18);
        iVar4 = fn_82F1CF90(param_1,-lVar20);
        iVar13 = iVar4 + iVar13;
        lVar9 = lVar20 + lVar9;
      }
      if (*(short *)(iVar18 + 2 + *(int *)(param_1 + 0x9f0)) != 0x4000) {
        lVar20 = (longlong)*(short *)(*(int *)(param_1 + 0x9f4) + iVar18 + 2);
        iVar4 = fn_82F1CF90(param_1,-lVar20);
        iVar13 = iVar4 + iVar13;
        lVar9 = lVar20 + lVar9;
      }
      uVar19 = uVar19 + 1;
      iVar18 = iVar18 + 4;
    } while (uVar19 < *(uint *)(param_1 + 0x2d0));
  }
  uVar17 = 0;
  uVar19 = 0;
  uVar7 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2;
  uVar16 = uVar7 - 2;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    lVar20 = 0;
    iVar14 = 0;
    iVar15 = 0;
    do {
      sVar1 = *(short *)((int)lVar20 + *(int *)(param_1 + 0x9f0));
      if (sVar1 != 0x4000) {
        iVar5 = fn_82F1CF90(param_1,(longlong)sVar1);
        iVar14 = iVar5 + iVar14;
        uVar10 = (longlong)sVar1 + uVar10;
      }
      uVar17 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar17;
      sVar1 = *(short *)((int)((uVar17 & 0xffffffff) << 1) + *(int *)(param_1 + 0x9f0));
      if (sVar1 != 0x4000) {
        iVar5 = fn_82F1CF90(param_1,(longlong)sVar1);
        iVar14 = iVar5 + iVar14;
        uVar10 = (longlong)sVar1 + uVar10;
      }
      sVar1 = *(short *)((int)((uVar16 & 0xffffffff) << 1) + *(int *)(param_1 + 0x9f0));
      uVar17 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar17;
      if (sVar1 != 0x4000) {
        iVar5 = fn_82F1CF90(param_1,-(longlong)sVar1);
        iVar15 = iVar5 + iVar15;
        lVar11 = sVar1 + lVar11;
      }
      uVar16 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar16;
      sVar1 = *(short *)((int)((uVar16 & 0xffffffff) << 1) + *(int *)(param_1 + 0x9f0));
      if (sVar1 != 0x4000) {
        iVar5 = fn_82F1CF90(param_1,-(longlong)sVar1);
        iVar15 = iVar5 + iVar15;
        lVar11 = sVar1 + lVar11;
      }
      uVar19 = uVar19 + 1;
      lVar20 = (uVar17 & 0xffffffff) << 1;
      uVar7 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2;
      uVar16 = uVar7 + uVar16;
    } while (uVar19 < *(uint *)(param_1 + 0x2d4));
  }
  uVar19 = 0;
  uVar21 = 0;
  fVar2 = lbl_8208DDB0;
  if ((*(uint *)(param_1 + 0x984) & 5) != 0) {
    fVar2 = lbl_8208DE0C;
  }
  fVar3 = lbl_8208DDB0;
  if ((*(uint *)(param_1 + 0x984) & 10) != 0) {
    fVar3 = lbl_8208DE0C;
  }
  *(undefined4 *)(param_1 + 0x984) = 0;
  uVar16 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0x7fffffff) << 1;
  if (iVar15 < iVar14) {
    if ((int)((float)uVar16 * fVar2) < iVar14) {
      *(undefined4 *)(param_1 + 0x984) = 1;
LAB_82f070c0:
      uVar21 = (uint)((uVar10 & 0xffffffff) / uVar16);
      trapWord(6,uVar16,0);
    }
  }
  else if ((int)((float)uVar16 * fVar2) < iVar15) {
    uVar10 = -lVar11;
    *(undefined4 *)(param_1 + 0x984) = 4;
    goto LAB_82f070c0;
  }
  if (iVar13 < iVar12) {
    if (iVar12 <= (int)((float)uVar7 * fVar3)) goto LAB_82f0714c;
    *(uint *)(param_1 + 0x984) = *(uint *)(param_1 + 0x984) | 2;
  }
  else {
    if (iVar13 <= (int)((float)uVar7 * fVar3)) goto LAB_82f0714c;
    uVar8 = -lVar9;
    *(uint *)(param_1 + 0x984) = *(uint *)(param_1 + 0x984) | 8;
  }
  uVar19 = (uint)((uVar8 & 0xffffffff) / uVar7);
  trapWord(6,uVar7,0);
LAB_82f0714c:
  if ((*(int *)(param_1 + 0x1a74) != 0) && (*(int *)(param_1 + 0x984) == 0)) {
    uVar6 = fn_82F65350();
    switch((uVar6 & 0xf) - 1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
    case 8:
    case 0xb:
      *(uint *)(param_1 + 0x984) = uVar6 & 0xf;
    }
  }
  lVar9 = 0;
  uVar6 = *(uint *)(param_1 + 0x984) & 5;
  if ((uVar6 != 0) &&
     (lVar9 = (longlong)((int)uVar21 >> 2) + (ulonglong)((int)uVar21 < 0 && (uVar21 & 3) != 0) + 1,
     5 < (int)lVar9)) {
    lVar9 = 6;
  }
  uVar21 = *(uint *)(param_1 + 0x984) & 10;
  if (uVar21 != 0) {
    lVar11 = (longlong)((int)uVar19 >> 2) + (ulonglong)((int)uVar19 < 0 && (uVar19 & 3) != 0) + 1;
    if (5 < (int)lVar11) {
      lVar11 = 6;
    }
    lVar9 = lVar9 + lVar11;
  }
  if ((uVar6 != 0) && (uVar21 != 0)) {
    lVar9 = (longlong)((int)lVar9 + 2 >> 1);
  }
  return lVar9;
}

