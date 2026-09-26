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


undefined8 fn_82EDC950(int param_1,ulonglong param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  if (((param_2 & 0xffffffff) == 0) || (uVar19 = (ulonglong)*(uint *)(param_1 + 0x160), uVar19 == 0)
     ) {
    return 0;
  }
  iVar5 = fn_82EDBFD8();
  if (iVar5 == 1) {
    uVar14 = 0;
    uVar11 = 0;
    uVar17 = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    lVar16 = 0;
    uVar18 = 0;
    lVar15 = 0;
    lVar8 = 0;
    lVar12 = 0;
    lVar7 = 0;
    if (((iVar5 == 0x56555949) || (iVar5 == 0x30323449)) || (iVar5 == 0x32315659)) {
      uVar14 = *(uint *)(param_1 + 0x28);
      uVar2 = *(uint *)(param_1 + 0x10);
      uVar17 = (ulonglong)uVar2;
      uVar3 = *(uint *)(param_1 + 0x14);
      uVar11 = ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      uVar13 = (longlong)*(int *)(param_1 + 0x2c) * (longlong)(int)uVar14;
      lVar16 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0);
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar18 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
      lVar15 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
      if (param_3 == 0) {
        uVar6 = uVar2 * uVar11;
        uVar3 = *(uint *)(param_1 + 8);
        lVar7 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
        uVar6 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar9 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
        lVar8 = (longlong)(int)uVar2 * (longlong)(int)uVar14 + (ulonglong)uVar3;
        lVar12 = lVar9 + uVar13 + lVar7;
        lVar7 = (longlong)((int)uVar6 >> 2) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 3) != 0) +
                lVar9 + lVar7;
      }
      else {
        uVar3 = *(uint *)(param_1 + 8);
        uVar6 = (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
        lVar9 = (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
        lVar7 = (longlong)(int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 1)
                * (longlong)(int)uVar11;
        lVar8 = (longlong)(int)(uVar2 + 1) * (longlong)(int)uVar14 + (ulonglong)uVar3;
        lVar12 = lVar9 + lVar7 + uVar13;
        lVar7 = (longlong)((int)uVar6 >> 2) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 3) != 0) +
                lVar9 + lVar7;
      }
    }
    lVar8 = lVar8 + param_2;
    lVar12 = lVar12 + param_2;
    lVar7 = lVar7 + param_2;
    lVar9 = ((ulonglong)uVar11 & 0x7fffffff) * 2;
    if (0 < (int)uVar18) {
      do {
        fn_82F68CC0(uVar19,lVar8,uVar17);
        uVar18 = uVar18 - 1;
        lVar8 = ((ulonglong)uVar14 & 0x7fffffff) * 2 + lVar8;
        uVar19 = uVar17 + uVar19;
      } while (uVar18 != 0);
    }
    lVar8 = lVar15;
    if (0 < (int)lVar15) {
      do {
        fn_82F68CC0(uVar19,lVar12,lVar16);
        lVar8 = lVar8 + -1;
        lVar12 = lVar9 + lVar12;
        uVar19 = lVar16 + uVar19;
      } while (lVar8 != 0);
    }
    if ((int)lVar15 < 1) {
      return 1;
    }
    do {
      fn_82F68CC0(uVar19,lVar7,lVar16);
      lVar15 = lVar15 + -1;
      lVar7 = lVar9 + lVar7;
      uVar19 = lVar16 + uVar19;
    } while (lVar15 != 0);
    return 1;
  }
  if (iVar5 != 2) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 4);
  uVar1 = *(ushort *)(iVar5 + 0xe);
  lVar7 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)(uint)uVar1;
  if (lVar7 < 1) {
    lVar7 = -lVar7;
  }
  iVar10 = 1;
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar10 = -1;
  }
  uVar14 = *(uint *)(param_1 + 0x14);
  bVar4 = false;
  lVar8 = (longlong)((int)(*(int *)(param_1 + 0x10) * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3);
  uVar17 = (longlong)((int)((int)lVar7 + 0x1fU & 0xffffffe0) >> 3) * (longlong)iVar10;
  lVar7 = (longlong)((int)uVar14 >> 1) + (ulonglong)((int)uVar14 < 0 && (uVar14 & 1) != 0);
  if (((param_4 == 0) && (*(uint *)(iVar5 + 0x10) < 4)) && (0 < *(int *)(iVar5 + 8))) {
    bVar4 = true;
  }
  uVar11 = (uint)uVar1;
  iVar5 = (int)uVar17;
  if (param_3 == 0) {
    if (bVar4) {
      uVar2 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
      uVar11 = *(int *)(param_1 + 8) * uVar11;
      lVar15 = (longlong)
               (int)((((*(uint *)(param_1 + 0x2c) ^ uVar2) - uVar2) - *(int *)(param_1 + 0xc)) -
                    uVar14) * (longlong)iVar5 +
               (longlong)((int)uVar11 >> 3) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 7) != 0);
      goto LAB_82edccb4;
    }
    uVar11 = *(int *)(param_1 + 8) * uVar11;
    lVar12 = (longlong)*(int *)(param_1 + 0xc) * (longlong)iVar5;
    lVar15 = (longlong)((int)uVar11 >> 3) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 7) != 0);
  }
  else if (bVar4) {
    uVar2 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
    uVar11 = *(int *)(param_1 + 8) * uVar11;
    lVar12 = (longlong)((int)uVar11 >> 3) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 7) != 0);
    lVar15 = (longlong)
             (int)(((*(uint *)(param_1 + 0x2c) ^ uVar2) - uVar2) +
                  ((1 - *(int *)(param_1 + 0xc)) - uVar14)) * (longlong)iVar5;
  }
  else {
    uVar11 = *(int *)(param_1 + 8) * uVar11;
    lVar15 = (longlong)(*(int *)(param_1 + 0xc) + 1) * (longlong)iVar5;
    lVar12 = (longlong)((int)uVar11 >> 3) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 7) != 0);
  }
  lVar15 = lVar15 + lVar12;
LAB_82edccb4:
  lVar15 = lVar15 + param_2;
  if (0 < (int)lVar7) {
    do {
      fn_82F68CC0(uVar19,lVar15,lVar8);
      lVar7 = lVar7 + -1;
      lVar15 = (uVar17 & 0x7fffffff) * 2 + lVar15;
      uVar19 = uVar19 + lVar8;
    } while (lVar7 != 0);
  }
  return 1;
}

