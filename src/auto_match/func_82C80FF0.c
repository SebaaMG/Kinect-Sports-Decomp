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


undefined8 fn_82C80FF0(int *param_1,ulonglong param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  
  if (((param_2 & 0xffffffff) == 0) || (param_1[0x4c] == 0)) {
    return 0;
  }
  iVar3 = fn_82C802F8();
  if (iVar3 == 1) {
    lVar17 = 0;
    lVar16 = 0;
    lVar14 = 0;
    iVar3 = *(int *)(*param_1 + 0x10);
    uVar13 = 0;
    lVar12 = 0;
    uVar15 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    if (((iVar3 == 0x56555949) || (iVar3 == 0x30323449)) || (iVar3 == 0x32315659)) {
      uVar9 = param_1[7];
      uVar13 = (ulonglong)uVar9;
      uVar18 = param_1[8];
      uVar10 = param_1[0xb];
      lVar12 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
      uVar15 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      uVar11 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
      uVar9 = ((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0);
      if (param_1[0x1f] != 0) {
        uVar10 = param_1[0x24];
        uVar9 = param_1[0x25];
        if (param_3 == 0) {
          uVar18 = param_1[5];
          iVar3 = param_1[6];
          uVar6 = iVar3 * uVar9;
          lVar7 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
          uVar4 = iVar3 * param_1[0x26];
          lVar14 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
          lVar16 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0) +
                   lVar7;
          lVar17 = (longlong)iVar3 * (longlong)(int)uVar10 + (ulonglong)uVar18;
        }
        else {
          uVar18 = param_1[6];
          uVar4 = param_1[5];
          iVar3 = ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) + 1;
          lVar7 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
          lVar14 = (longlong)iVar3 * (longlong)param_1[0x26];
          lVar17 = (longlong)(int)(uVar18 + 1) * (longlong)(int)uVar10 + (ulonglong)uVar4;
          lVar16 = (longlong)iVar3 * (longlong)(int)uVar9 + lVar7;
        }
        lVar17 = (ulonglong)(uint)param_1[0x21] + lVar17;
        lVar16 = (ulonglong)(uint)param_1[0x22] + lVar16;
        lVar14 = (ulonglong)(uint)param_1[0x23] + lVar14 + lVar7;
        goto LAB_82c812f0;
      }
      uVar8 = (longlong)param_1[0xc] * (longlong)(int)uVar10;
      if (param_3 == 0) {
        uVar18 = param_1[5];
        uVar4 = param_1[6] * uVar9;
        uVar6 = (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
        lVar14 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
        lVar7 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
        lVar16 = lVar7 + lVar14;
        lVar17 = (longlong)param_1[6] * (longlong)(int)uVar10 + (ulonglong)uVar18;
        lVar14 = (longlong)((int)uVar6 >> 2) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 3) != 0) +
                 lVar7 + lVar14;
      }
      else {
        uVar18 = param_1[6];
        uVar4 = param_1[5];
        uVar6 = (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
        lVar7 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
        lVar14 = (longlong)
                 (int)(((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) + 1) *
                 (longlong)(int)uVar9;
        lVar16 = lVar7 + lVar14;
        lVar17 = (longlong)(int)(uVar18 + 1) * (longlong)(int)uVar10 + (ulonglong)uVar4;
        lVar14 = (longlong)((int)uVar6 >> 2) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 3) != 0) +
                 lVar7 + lVar14;
      }
      lVar16 = lVar16 + uVar8;
      lVar17 = lVar17 + param_2;
      lVar14 = lVar14 + param_2;
    }
    else {
      if (iVar3 != 0x31313450) goto LAB_82c812f0;
      uVar9 = param_1[7];
      uVar13 = (ulonglong)uVar9;
      uVar18 = param_1[8];
      uVar10 = param_1[0xb];
      lVar12 = (longlong)((int)uVar9 >> 2) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 3) != 0);
      uVar8 = (longlong)param_1[0xc] * (longlong)(int)uVar10;
      uVar11 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      uVar9 = ((int)uVar10 >> 2) + (uint)((int)uVar10 < 0 && (uVar10 & 3) != 0);
      uVar18 = (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
      uVar15 = uVar11;
      if (param_3 == 0) {
        uVar4 = param_1[5];
        lVar7 = (longlong)((int)uVar4 >> 2) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 3) != 0);
        lVar14 = (longlong)param_1[6] * (longlong)(int)uVar9;
        lVar16 = lVar7 + uVar8 + lVar14;
        lVar17 = (longlong)param_1[6] * (longlong)(int)uVar10 + (ulonglong)uVar4 + param_2;
        lVar14 = (longlong)((int)uVar18 >> 2) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 3) != 0) +
                 lVar7 + lVar14 + param_2;
      }
      else {
        uVar4 = param_1[5];
        lVar7 = (longlong)((int)uVar4 >> 2) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 3) != 0);
        lVar14 = (longlong)(param_1[6] + 1) * (longlong)(int)uVar9;
        lVar16 = lVar7 + lVar14 + uVar8;
        lVar17 = (longlong)(param_1[6] + 1) * (longlong)(int)uVar10 + (ulonglong)uVar4 + param_2;
        lVar14 = (longlong)((int)uVar18 >> 2) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 3) != 0) +
                 lVar7 + lVar14 + param_2;
      }
    }
    lVar16 = lVar16 + param_2;
LAB_82c812f0:
    uVar8 = (ulonglong)(uint)param_1[0x4d];
    lVar7 = ((ulonglong)uVar9 & 0x7fffffff) * 2;
    if (0 < (int)uVar15) {
      do {
        fn_82A1DDC0(lVar17,uVar8,uVar13);
        uVar15 = uVar15 - 1;
        lVar17 = ((ulonglong)uVar10 & 0x7fffffff) * 2 + lVar17;
        uVar8 = uVar13 + uVar8;
      } while (uVar15 != 0);
    }
    uVar15 = uVar11;
    if (0 < (int)uVar11) {
      do {
        fn_82A1DDC0(lVar16,uVar8,lVar12);
        uVar15 = uVar15 - 1;
        lVar16 = lVar7 + lVar16;
        uVar8 = lVar12 + uVar8;
      } while (uVar15 != 0);
    }
    if ((int)uVar11 < 1) {
      return 1;
    }
    do {
      fn_82A1DDC0(lVar14,uVar8,lVar12);
      uVar11 = uVar11 - 1;
      lVar14 = lVar7 + lVar14;
      uVar8 = lVar12 + uVar8;
    } while (uVar11 != 0);
    return 1;
  }
  if (iVar3 != 2) {
    return 0;
  }
  iVar3 = *param_1;
  bVar2 = false;
  uVar10 = param_1[8];
  uVar15 = (ulonglong)(uint)param_1[0x4d];
  uVar1 = *(ushort *)(iVar3 + 0xe);
  lVar16 = (longlong)((int)(param_1[7] * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3);
  uVar9 = (int)(param_1[0xb] * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3;
  lVar14 = (longlong)((int)uVar10 >> 1) + (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0);
  if ((*(uint *)(iVar3 + 0x10) < 4) && (0 < *(int *)(iVar3 + 8))) {
    bVar2 = true;
  }
  uVar18 = (uint)uVar1;
  if (param_3 == 0) {
    if (bVar2) {
      uVar4 = param_1[0xc] >> 0x1f;
      uVar18 = param_1[5] * uVar18;
      lVar12 = (longlong)(int)((((param_1[0xc] ^ uVar4) - uVar4) - param_1[6]) - uVar10) *
               (longlong)(int)uVar9 +
               (longlong)((int)uVar18 >> 3) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 7) != 0);
      goto LAB_82c814b4;
    }
    uVar18 = param_1[5] * uVar18;
    lVar17 = (longlong)param_1[6] * (longlong)(int)uVar9;
    lVar12 = (longlong)((int)uVar18 >> 3) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 7) != 0);
  }
  else {
    if (bVar2) {
      uVar4 = param_1[0xc] >> 0x1f;
      iVar3 = param_1[5];
      iVar5 = ((param_1[0xc] ^ uVar4) - uVar4) + ((1 - param_1[6]) - uVar10);
    }
    else {
      iVar3 = param_1[5];
      iVar5 = param_1[6] + 1;
    }
    uVar18 = iVar3 * uVar18;
    lVar12 = (longlong)iVar5 * (longlong)(int)uVar9;
    lVar17 = (longlong)((int)uVar18 >> 3) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 7) != 0);
  }
  lVar12 = lVar12 + lVar17;
LAB_82c814b4:
  lVar12 = lVar12 + param_2;
  if (0 < (int)lVar14) {
    do {
      fn_82A1DDC0(lVar12,uVar15,lVar16);
      lVar14 = lVar14 + -1;
      lVar12 = ((ulonglong)uVar9 & 0x7fffffff) * 2 + lVar12;
      uVar15 = uVar15 + lVar16;
    } while (lVar14 != 0);
  }
  return 1;
}

