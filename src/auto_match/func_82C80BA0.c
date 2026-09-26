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
extern int fn_82A1DDC0();
extern int fn_82C802F8();


undefined8 fn_82C80BA0(int *param_1,ulonglong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  if (((param_2 & 0xffffffff) == 0) || (uVar20 = (ulonglong)(uint)param_1[0x4c], uVar20 == 0)) {
    return 0;
  }
  iVar4 = fn_82C802F8();
  if (iVar4 == 1) {
    uVar15 = 0;
    uVar14 = 0;
    uVar17 = 0;
    iVar4 = *(int *)(*param_1 + 0x10);
    lVar18 = 0;
    uVar16 = 0;
    lVar12 = 0;
    lVar9 = 0;
    lVar8 = 0;
    if (((iVar4 == 0x56555949) || (iVar4 == 0x30323449)) || (iVar4 == 0x32315659)) {
      uVar15 = param_1[9];
      uVar10 = param_1[3];
      uVar17 = (ulonglong)uVar10;
      uVar5 = param_1[4];
      uVar14 = ((int)uVar15 >> 1) + (uint)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      lVar18 = (longlong)((int)uVar10 >> 1) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      uVar10 = param_1[2];
      uVar19 = (longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      uVar16 = (longlong)((int)uVar19 >> 1) + (ulonglong)((int)uVar19 < 0 && (uVar19 & 1) != 0);
      uVar13 = (longlong)param_1[10] * (longlong)(int)uVar15;
      uVar5 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
      if (param_3 == 0) {
        uVar6 = uVar10 * uVar14;
        uVar2 = param_1[1];
        lVar8 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
        lVar11 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
        lVar9 = lVar11 + lVar8;
        lVar12 = (longlong)(int)uVar10 * (longlong)(int)uVar15 + (ulonglong)uVar2;
        lVar8 = (longlong)((int)uVar5 >> 2) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 3) != 0) +
                lVar11 + lVar8;
      }
      else {
        uVar2 = param_1[1];
        lVar11 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
        lVar8 = (longlong)
                (int)(((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0) + 1) *
                (longlong)(int)uVar14;
        lVar9 = lVar11 + lVar8;
        lVar12 = (longlong)(int)(uVar10 + 1) * (longlong)(int)uVar15 + (ulonglong)uVar2;
        lVar8 = (longlong)((int)uVar5 >> 2) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 3) != 0) +
                lVar11 + lVar8;
      }
    }
    else {
      uVar19 = 0;
      if (iVar4 != 0x31313450) goto LAB_82c80dd8;
      uVar15 = param_1[9];
      uVar10 = param_1[3];
      uVar17 = (ulonglong)uVar10;
      uVar5 = param_1[4];
      uVar14 = ((int)uVar15 >> 2) + (uint)((int)uVar15 < 0 && (uVar15 & 3) != 0);
      lVar18 = (longlong)((int)uVar10 >> 2) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 3) != 0);
      uVar16 = (longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      uVar19 = uVar16;
      if (param_3 == 0) {
        uVar13 = (longlong)param_1[10] * (longlong)(int)uVar15;
        uVar10 = param_1[1];
        uVar5 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar11 = (longlong)((int)uVar10 >> 2) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 3) != 0);
        lVar8 = (longlong)param_1[2] * (longlong)(int)uVar14;
        lVar12 = (longlong)param_1[2] * (longlong)(int)uVar15 + (ulonglong)uVar10;
        lVar9 = lVar11 + uVar13 + lVar8;
        lVar8 = (longlong)((int)uVar5 >> 2) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 3) != 0) +
                lVar11 + lVar8;
        goto LAB_82c80dd8;
      }
      uVar13 = (longlong)param_1[10] * (longlong)(int)uVar15;
      uVar10 = param_1[1];
      uVar5 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
      lVar11 = (longlong)((int)uVar10 >> 2) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 3) != 0);
      lVar8 = (longlong)(param_1[2] + 1) * (longlong)(int)uVar14;
      lVar9 = lVar11 + lVar8;
      lVar12 = (longlong)(param_1[2] + 1) * (longlong)(int)uVar15 + (ulonglong)uVar10;
      lVar8 = (longlong)((int)uVar5 >> 2) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 3) != 0) + lVar11
              + lVar8;
    }
    lVar9 = lVar9 + uVar13;
LAB_82c80dd8:
    lVar12 = lVar12 + param_2;
    lVar9 = lVar9 + param_2;
    lVar8 = lVar8 + param_2;
    lVar11 = ((ulonglong)uVar14 & 0x7fffffff) * 2;
    if (0 < (int)uVar19) {
      do {
        fn_82A1DDC0(uVar20,lVar12,uVar17);
        uVar19 = uVar19 - 1;
        lVar12 = ((ulonglong)uVar15 & 0x7fffffff) * 2 + lVar12;
        uVar20 = uVar17 + uVar20;
      } while (uVar19 != 0);
    }
    uVar17 = uVar16;
    if (0 < (int)uVar16) {
      do {
        fn_82A1DDC0(uVar20,lVar9,lVar18);
        uVar17 = uVar17 - 1;
        lVar9 = lVar11 + lVar9;
        uVar20 = lVar18 + uVar20;
      } while (uVar17 != 0);
    }
    if ((int)uVar16 < 1) {
      return 1;
    }
    do {
      fn_82A1DDC0(uVar20,lVar8,lVar18);
      uVar16 = uVar16 - 1;
      lVar8 = lVar11 + lVar8;
      uVar20 = lVar18 + uVar20;
    } while (uVar16 != 0);
    return 1;
  }
  if (iVar4 != 2) {
    return 0;
  }
  iVar4 = *param_1;
  bVar3 = false;
  uVar15 = param_1[4];
  uVar1 = *(ushort *)(iVar4 + 0xe);
  uVar14 = (int)(param_1[9] * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3;
  lVar9 = (longlong)((int)(param_1[3] * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3);
  lVar8 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
  if ((*(uint *)(iVar4 + 0x10) < 4) && (0 < *(int *)(iVar4 + 8))) {
    bVar3 = true;
  }
  uVar10 = (uint)uVar1;
  if (param_3 == 0) {
    if (bVar3) {
      uVar5 = param_1[10] >> 0x1f;
      uVar10 = param_1[1] * uVar10;
      lVar18 = (longlong)(int)((((param_1[10] ^ uVar5) - uVar5) - param_1[2]) - uVar15) *
               (longlong)(int)uVar14 +
               (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
      goto LAB_82c80fa8;
    }
    uVar10 = param_1[1] * uVar10;
    lVar12 = (longlong)param_1[2] * (longlong)(int)uVar14;
    lVar18 = (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
  }
  else {
    if (bVar3) {
      uVar5 = param_1[10] >> 0x1f;
      iVar4 = param_1[1];
      iVar7 = ((param_1[10] ^ uVar5) - uVar5) + ((1 - param_1[2]) - uVar15);
    }
    else {
      iVar4 = param_1[1];
      iVar7 = param_1[2] + 1;
    }
    uVar10 = iVar4 * uVar10;
    lVar18 = (longlong)iVar7 * (longlong)(int)uVar14;
    lVar12 = (longlong)((int)uVar10 >> 3) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 7) != 0);
  }
  lVar18 = lVar18 + lVar12;
LAB_82c80fa8:
  lVar18 = lVar18 + param_2;
  if (0 < (int)lVar8) {
    do {
      fn_82A1DDC0(uVar20,lVar18,lVar9);
      lVar8 = lVar8 + -1;
      lVar18 = ((ulonglong)uVar14 & 0x7fffffff) * 2 + lVar18;
      uVar20 = uVar20 + lVar9;
    } while (lVar8 != 0);
  }
  return 1;
}

