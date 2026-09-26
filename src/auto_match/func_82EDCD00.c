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
extern int fn_82EDBFD8();
extern int fn_82F68CC0();


undefined8 fn_82EDCD00(int param_1,ulonglong param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar8;
  longlong lVar7;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  
  if (((param_2 & 0xffffffff) == 0) || (*(int *)(param_1 + 0x160) == 0)) {
    return 0;
  }
  iVar4 = fn_82EDBFD8();
  if (iVar4 == 1) {
    uVar17 = 0;
    lVar16 = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    uVar18 = 0;
    lVar15 = 0;
    uVar14 = 0;
    uVar10 = 0;
    lVar6 = 0;
    lVar12 = 0;
    lVar5 = 0;
    if (((iVar4 == 0x56555949) || (iVar4 == 0x30323449)) || (iVar4 == 0x32315659)) {
      uVar10 = *(uint *)(param_1 + 0x20);
      uVar17 = (ulonglong)uVar10;
      uVar2 = *(uint *)(param_1 + 0x24);
      uVar14 = *(uint *)(param_1 + 0x30);
      lVar16 = (longlong)((int)uVar10 >> 1) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      uVar18 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
      uVar13 = (longlong)*(int *)(param_1 + 0x34) * (longlong)(int)uVar14;
      lVar15 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      uVar10 = ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      if (param_3 == 0) {
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar8 = *(int *)(param_1 + 0x1c) * uVar10;
        lVar5 = (longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0);
        uVar8 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar7 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
        lVar12 = lVar7 + uVar13 + lVar5;
        lVar6 = (longlong)*(int *)(param_1 + 0x1c) * (longlong)(int)uVar14 + (ulonglong)uVar2;
        lVar5 = (longlong)((int)uVar8 >> 2) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 3) != 0) +
                lVar7 + lVar5;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x1c);
        uVar8 = *(uint *)(param_1 + 0x18);
        uVar19 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar7 = (longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0);
        lVar5 = (longlong)(int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 1)
                * (longlong)(int)uVar10;
        lVar6 = (longlong)(int)(uVar2 + 1) * (longlong)(int)uVar14 + (ulonglong)uVar8;
        lVar12 = lVar7 + lVar5 + uVar13;
        lVar5 = (longlong)((int)uVar19 >> 2) + (ulonglong)((int)uVar19 < 0 && (uVar19 & 3) != 0) +
                lVar7 + lVar5;
      }
    }
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x164);
    lVar6 = lVar6 + param_2;
    lVar12 = lVar12 + param_2;
    lVar5 = lVar5 + param_2;
    lVar7 = ((ulonglong)uVar10 & 0x7fffffff) * 2;
    if (0 < (int)uVar18) {
      do {
        fn_82F68CC0(lVar6,uVar13,uVar17);
        uVar18 = uVar18 - 1;
        lVar6 = ((ulonglong)uVar14 & 0x7fffffff) * 2 + lVar6;
        uVar13 = uVar17 + uVar13;
      } while (uVar18 != 0);
    }
    lVar6 = lVar15;
    if (0 < (int)lVar15) {
      do {
        fn_82F68CC0(lVar12,uVar13,lVar16);
        lVar6 = lVar6 + -1;
        lVar12 = lVar7 + lVar12;
        uVar13 = lVar16 + uVar13;
      } while (lVar6 != 0);
    }
    if ((int)lVar15 < 1) {
      return 1;
    }
    do {
      fn_82F68CC0(lVar5,uVar13,lVar16);
      lVar15 = lVar15 + -1;
      lVar5 = lVar7 + lVar5;
      uVar13 = lVar16 + uVar13;
    } while (lVar15 != 0);
    return 1;
  }
  if (iVar4 != 2) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0x30);
  uVar1 = *(ushort *)(iVar4 + 0xe);
  lVar5 = (longlong)((int)(*(int *)(param_1 + 0x20) * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3);
  if (iVar11 < 1) {
    iVar11 = -iVar11;
    iVar9 = -1;
  }
  else {
    iVar9 = 1;
  }
  uVar14 = *(uint *)(param_1 + 0x24);
  bVar3 = false;
  uVar17 = (longlong)((int)(iVar11 * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3) * (longlong)iVar9;
  lVar6 = (longlong)((int)uVar14 >> 1) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 1) != 0);
  if (((param_4 == 0) && (*(uint *)(iVar4 + 0x10) < 4)) && (0 < *(int *)(iVar4 + 8))) {
    bVar3 = true;
  }
  uVar18 = (ulonglong)*(uint *)(param_1 + 0x164);
  uVar10 = (uint)uVar1;
  iVar4 = (int)uVar17;
  if (param_3 == 0) {
    if (bVar3) {
      uVar2 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
      uVar10 = *(int *)(param_1 + 0x18) * uVar10;
      lVar15 = (longlong)
               (int)((((*(uint *)(param_1 + 0x34) ^ uVar2) - uVar2) - *(int *)(param_1 + 0x1c)) -
                    uVar14) * (longlong)iVar4 +
               (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
      goto LAB_82edd070;
    }
    uVar10 = *(int *)(param_1 + 0x18) * uVar10;
    lVar12 = (longlong)*(int *)(param_1 + 0x1c) * (longlong)iVar4;
    lVar15 = (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
  }
  else if (bVar3) {
    uVar2 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
    uVar10 = *(int *)(param_1 + 0x18) * uVar10;
    lVar12 = (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
    lVar15 = (longlong)
             (int)(((*(uint *)(param_1 + 0x34) ^ uVar2) - uVar2) +
                  ((1 - *(int *)(param_1 + 0x1c)) - uVar14)) * (longlong)iVar4;
  }
  else {
    uVar10 = *(int *)(param_1 + 0x18) * uVar10;
    lVar15 = (longlong)(*(int *)(param_1 + 0x1c) + 1) * (longlong)iVar4;
    lVar12 = (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
  }
  lVar15 = lVar15 + lVar12;
LAB_82edd070:
  lVar15 = lVar15 + param_2;
  if (0 < (int)lVar6) {
    do {
      fn_82F68CC0(lVar15,uVar18,lVar5);
      lVar6 = lVar6 + -1;
      lVar15 = (uVar17 & 0x7fffffff) * 2 + lVar15;
      uVar18 = uVar18 + lVar5;
    } while (lVar6 != 0);
  }
  return 1;
}

