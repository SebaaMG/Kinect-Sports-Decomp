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
extern int fn_82F22718();
extern int fn_82F23F28();


void fn_82F0EC20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar19 = (longlong)iVar1 * (longlong)*(int *)(param_2 + 0x108);
    fn_82F22718(param_1,*(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd8),
                      *(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xd4),
                      *(undefined4 *)(param_2 + 0xdc),*(undefined4 *)(param_2 + 0xe4),
                      (uVar19 + (uVar19 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                      (ulonglong)*(uint *)(param_1 + 0x874));
    iVar1 = (int)*(uint *)(param_1 + 0x568) >> 1;
    if (*(int *)(param_2 + 4) == 0) {
      uVar4 = *(undefined4 *)(param_2 + 0xe0);
      lVar6 = (longlong)iVar1 * (longlong)*(int *)(param_1 + 0x6de4) +
              ((ulonglong)*(uint *)(param_1 + 0x568) & 0x1fffffff) * 8;
      lVar5 = (longlong)((int)*(uint *)(param_1 + 0x564) >> 1) *
              (longlong)*(int *)(param_1 + 0x6de4) +
              ((ulonglong)*(uint *)(param_1 + 0x564) & 0x1fffffff) * 8;
      lVar10 = ((ulonglong)*(uint *)(param_2 + 0x10c) & 0x7fffffff) * 2 + -1;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x108);
      uVar4 = *(undefined4 *)(param_2 + 0xe0);
      lVar5 = (longlong)(*(int *)(param_1 + 0x564) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
              ((longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x564) & 0xfffffffU) * 0x10;
      lVar6 = (longlong)iVar1 * (longlong)*(int *)(param_1 + 0x6de4) +
              ((longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
      lVar10 = ((ulonglong)*(uint *)(param_2 + 0x10c) - (ulonglong)uVar2 & 0x7fffffff) << 1;
    }
    fn_82F23F28(param_1,lVar5 + (ulonglong)*(uint *)(param_1 + 0x4a94),
                  (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar6,
                  (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar6,lVar10,
                  *(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd8),uVar4);
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x108);
    uVar19 = (ulonglong)uVar2;
    uVar3 = *(uint *)(param_2 + 0x10c);
    uVar18 = uVar19;
    if (uVar19 < uVar3) {
      uVar18 = uVar19 + 1;
    }
    if ((uVar18 & 0xffffffff) < (ulonglong)uVar3) {
      lVar5 = (uVar18 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar5 + *(int *)(param_1 + 0x8d8)) != 0) break;
        uVar18 = uVar18 + 1;
        lVar5 = lVar5 + 4;
      } while ((uVar18 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar3 = *(uint *)(param_1 + 0x564);
    uVar17 = (ulonglong)*(uint *)(param_2 + 0xd0);
    uVar16 = (ulonglong)*(uint *)(param_2 + 0xd8);
    uVar15 = (ulonglong)*(uint *)(param_2 + 0xe0);
    uVar14 = (ulonglong)*(uint *)(param_2 + 0xd4);
    uVar13 = (ulonglong)*(uint *)(param_2 + 0xdc);
    uVar12 = (ulonglong)*(uint *)(param_2 + 0xe4);
    lVar6 = (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
            ((longlong)*(int *)(param_1 + 0x568) * (longlong)(int)uVar2 & 0x1fffffffU) * 8;
    lVar5 = (longlong)((int)uVar3 >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
            ((longlong)(int)uVar3 * (longlong)(int)uVar2 & 0xfffffffU) * 0x10 +
            (ulonglong)*(uint *)(param_1 + 0x4a94);
    lVar10 = (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar6;
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar6;
    uVar20 = uVar18 - uVar19;
    while (uVar20 != 0) {
      if (((uVar19 & 0xffffffff) == 0) ||
         (*(int *)(*(int *)(param_1 + 0x8d8) + (int)((uVar19 & 0xffffffff) << 2)) != 0)) {
        lVar9 = ((ulonglong)uVar3 & 0x1fffffff) << 3;
        lVar11 = ((ulonglong)*(uint *)(param_1 + 0x568) & 0x1fffffff) << 3;
      }
      else {
        lVar9 = 0;
        lVar11 = 0;
      }
      iVar21 = (int)uVar20;
      uVar7 = (longlong)(int)uVar19 * (longlong)*(int *)(param_1 + 0x2d0);
      fn_82F22718(param_1,uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,
                        (uVar7 + (uVar7 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                        (ulonglong)*(uint *)(param_1 + 0x874));
      if (((uVar19 & 0xffffffff) == 0) ||
         (lVar8 = 0, *(int *)(*(int *)(param_1 + 0x8d8) + (int)((uVar19 & 0xffffffff) << 2)) != 0))
      {
        lVar8 = 1;
      }
      fn_82F23F28(param_1,lVar5 + lVar9,lVar10 + lVar11,lVar6 + lVar11,
                    (uVar20 & 0x7fffffff) * 2 - lVar8,uVar17,uVar16,uVar15);
      uVar3 = *(uint *)(param_1 + 0x564);
      uVar2 = *(uint *)(param_2 + 0x10c);
      lVar11 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar21 & 0x1fffffffU) * 8;
      lVar8 = (longlong)iVar21 * (longlong)(int)(iVar1 + 3U >> 2);
      lVar9 = (longlong)iVar21 * (longlong)(int)(iVar1 + 1U & 0xfffffffe);
      uVar17 = lVar9 + uVar17;
      uVar16 = lVar8 + uVar16;
      uVar15 = lVar8 + uVar15;
      uVar14 = lVar9 + uVar14;
      uVar13 = lVar8 + uVar13;
      uVar12 = lVar8 + uVar12;
      lVar5 = ((longlong)(int)uVar3 * (longlong)iVar21 & 0xfffffffU) * 0x10 + lVar5;
      lVar10 = lVar11 + lVar10;
      lVar6 = lVar11 + lVar6;
      uVar7 = uVar18;
      if (((uVar18 & 0xffffffff) < (ulonglong)uVar2) &&
         (uVar7 = uVar18 + 1, (uVar7 & 0xffffffff) < (ulonglong)uVar2)) {
        lVar9 = (uVar7 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar9 + *(int *)(param_1 + 0x8d8)) != 0) break;
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 4;
        } while ((uVar7 & 0xffffffff) < (ulonglong)uVar2);
      }
      uVar20 = uVar7 - uVar18;
      uVar19 = uVar18;
      uVar18 = uVar7;
    }
  }
  return;
}

