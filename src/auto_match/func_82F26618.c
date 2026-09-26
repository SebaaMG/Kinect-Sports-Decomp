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
extern int fn_82E9A930();


undefined8 fn_82F26618(int param_1,ulonglong param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 uVar17;
  longlong lVar16;
  ulonglong uVar18;
  undefined2 uVar20;
  int iVar19;
  uint uVar23;
  longlong lVar21;
  ulonglong uVar22;
  byte bVar25;
  uint uVar24;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  
  uVar9 = *(uint *)(param_1 + 0x2d0);
  uVar13 = ((ulonglong)param_3 & 0x7fffffff) * 2 + 1;
  uVar30 = (param_2 & 0x7fffffff) * 2 + 1;
  uVar26 = ((longlong)(int)uVar9 * (longlong)(int)uVar13 & 0x7fffffffU) * 2 + uVar30;
  if (param_4 != 0) {
    iVar19 = (int)((uVar26 & 0xffffffff) << 1);
    sVar1 = *(short *)(*(int *)(param_1 + 0x9f0) + iVar19);
    if (sVar1 == 0x4000) {
LAB_82f26734:
      uVar13 = (longlong)(int)uVar9 * (longlong)(int)param_3 + param_2;
      iVar19 = (int)((uVar13 & 0xffffffff) << 1);
      *(undefined2 *)(*(int *)(param_1 + 0x9f8) + iVar19) = 0x4000;
      *(undefined2 *)(*(int *)(param_1 + 0x9fc) + iVar19) = 0x4000;
      if ((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) == 1)) {
        iVar19 = (int)((uVar13 & 0xffffffff) << 3);
        *(undefined2 *)(iVar19 + *(int *)(param_1 + 0xaec)) = 0;
        *(undefined2 *)(iVar19 + *(int *)(param_1 + 0xaec) + 2) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x1e6c) + (int)uVar13 * 0x114 + 0x54) = 3;
        if (5 < *(int *)(param_1 + 4)) {
          uVar9 = *(uint *)(param_1 + 0x2d0);
          uVar13 = (((longlong)(int)uVar9 * (longlong)(int)param_3 & 0x7fffffffU) * 2 + param_2 &
                   0x7fffffff) * 2;
          iVar19 = (int)((uVar13 & 0x7fffffff) << 1);
          *(undefined2 *)(*(int *)(param_1 + 0x990) + iVar19) = 0x4000;
          *(undefined2 *)(*(int *)(param_1 + 0x990) + iVar19 + 2) = 0x4000;
          iVar28 = (int)((((ulonglong)uVar9 & 0x7fffffff) * 2 + uVar13 & 0x7fffffff) << 1);
          *(undefined2 *)(*(int *)(param_1 + 0x990) + iVar28) = 0x4000;
          *(undefined2 *)(*(int *)(param_1 + 0x990) + iVar28 + 2) = 0x4000;
          *(undefined2 *)(iVar19 + *(int *)(param_1 + 0x994)) = 0x4000;
          *(undefined2 *)(iVar19 + *(int *)(param_1 + 0x994) + 2) = 0x4000;
          *(undefined2 *)(iVar28 + *(int *)(param_1 + 0x994)) = 0x4000;
          *(undefined2 *)(iVar28 + *(int *)(param_1 + 0x994) + 2) = 0x4000;
        }
      }
      return 1;
    }
    uVar13 = (longlong)*(short *)(*(int *)(param_1 + 0x9f4) + iVar19);
    uVar26 = (longlong)sVar1;
    goto LAB_82f26ac4;
  }
  iVar10 = (int)((uVar26 & 0xffffffff) << 1);
  iVar19 = *(int *)(param_1 + 0x9f0);
  iVar28 = *(int *)(param_1 + 0x9f4);
  iVar11 = (int)((uVar26 - 1 & 0xffffffff) << 1);
  uVar26 = (uVar26 - 1) + ((ulonglong)uVar9 & 0x7fffffff) * -2;
  sVar1 = *(short *)(iVar19 + iVar10);
  sVar2 = *(short *)(iVar28 + iVar10);
  iVar10 = (int)((uVar26 & 0xffffffff) << 1);
  iVar12 = (int)((uVar26 + 1 & 0xffffffff) << 1);
  sVar3 = *(short *)(iVar19 + iVar11);
  uVar26 = (ulonglong)sVar1;
  sVar4 = *(short *)(iVar28 + iVar11);
  uVar15 = (ulonglong)sVar3;
  sVar5 = *(short *)(iVar19 + iVar10);
  sVar6 = *(short *)(iVar19 + iVar12);
  sVar7 = *(short *)(iVar28 + iVar10);
  uVar14 = (ulonglong)sVar5;
  uVar18 = (ulonglong)sVar6;
  sVar8 = *(short *)(iVar28 + iVar12);
  uVar29 = (ulonglong)sVar2;
  bVar25 = (sVar6 == 0x4000) + (sVar5 == 0x4000) + (sVar3 == 0x4000) + (sVar1 == 0x4000);
  uVar22 = (ulonglong)sVar4;
  uVar31 = (ulonglong)sVar7;
  uVar32 = (ulonglong)sVar8;
  if (2 < bVar25) goto LAB_82f26734;
  if (bVar25 != 1) {
    if (bVar25 == 2) {
      uVar13 = 0;
      uVar26 = 0;
      if (sVar6 != 0x4000) {
        uVar13 = uVar32;
        uVar26 = uVar18;
      }
      uVar23 = (uint)uVar13;
      uVar24 = (uint)uVar26;
      if (sVar5 != 0x4000) {
        uVar24 = (int)sVar5 + uVar24;
        uVar23 = (int)sVar7 + uVar23;
      }
      if (sVar3 != 0x4000) {
        uVar24 = (int)sVar3 + uVar24;
        uVar23 = (int)sVar4 + uVar23;
      }
      if (sVar1 != 0x4000) {
        uVar24 = (int)sVar1 + uVar24;
        uVar23 = (int)sVar2 + uVar23;
      }
      uVar13 = (longlong)((int)uVar23 >> 1) + (ulonglong)((int)uVar23 < 0 && (uVar23 & 1) != 0);
      uVar26 = (longlong)((int)uVar24 >> 1) + (ulonglong)((int)uVar24 < 0 && (uVar24 & 1) != 0);
    }
    else {
      uVar26 = fn_82E9A930(uVar18);
      uVar13 = fn_82E9A930(uVar32,uVar31,uVar22,uVar29);
    }
    goto LAB_82f26ac4;
  }
  if (sVar6 == 0x4000) {
    if (sVar5 < sVar1) {
      if (sVar3 < sVar5) {
LAB_82f26874:
        uVar26 = uVar14;
      }
      else if (sVar3 < sVar1) {
        uVar26 = uVar15;
      }
    }
    else if ((sVar1 <= sVar3) && (uVar26 = uVar15, sVar5 <= sVar3)) goto LAB_82f26874;
    uVar13 = uVar31;
    if (sVar7 < sVar2) {
joined_r0x82f26904:
      if (sVar4 < sVar7) goto LAB_82f26ac4;
      goto joined_r0x82f26984;
    }
    uVar18 = uVar26;
    if (sVar2 <= sVar4) {
joined_r0x82f269a4:
      uVar13 = uVar22;
      uVar26 = uVar18;
      if (sVar4 < sVar7) goto LAB_82f26ac4;
LAB_82f26a08:
      uVar13 = uVar31;
      uVar26 = uVar18;
      goto LAB_82f26ac4;
    }
  }
  else {
    if (sVar5 == 0x4000) {
      if (sVar6 < sVar1) {
        if (sVar3 < sVar6) {
LAB_82f268f4:
          uVar26 = uVar18;
        }
        else if (sVar3 < sVar1) {
          uVar26 = uVar15;
        }
      }
      else if ((sVar1 <= sVar3) && (uVar26 = uVar15, sVar6 <= sVar3)) goto LAB_82f268f4;
      uVar18 = uVar26;
      uVar13 = uVar32;
      uVar26 = uVar18;
      sVar7 = sVar8;
      if (sVar2 <= sVar8) {
        uVar13 = uVar29;
        if (sVar4 < sVar2) goto LAB_82f26ac4;
LAB_82f26a10:
        uVar13 = uVar32;
        uVar26 = uVar18;
        if (sVar4 < sVar8) {
          uVar13 = uVar22;
        }
        goto LAB_82f26ac4;
      }
      goto joined_r0x82f26904;
    }
    if (sVar3 != 0x4000) {
      uVar26 = uVar30;
      if (sVar1 != 0x4000) goto LAB_82f26ac4;
      if (sVar5 < sVar6) {
        if (sVar3 < sVar5) {
LAB_82f269f4:
          uVar18 = uVar14;
        }
        else if (sVar3 < sVar6) {
          uVar18 = uVar15;
        }
      }
      else if ((sVar6 <= sVar3) && (uVar18 = uVar15, sVar5 <= sVar3)) goto LAB_82f269f4;
      if (sVar8 <= sVar7) {
        uVar13 = uVar32;
        uVar26 = uVar18;
        if (sVar4 < sVar8) goto LAB_82f26ac4;
        goto joined_r0x82f269a4;
      }
      if (sVar7 <= sVar4) goto LAB_82f26a10;
      goto LAB_82f26a08;
    }
    if (sVar5 < sVar1) {
      if (sVar6 < sVar5) {
LAB_82f26964:
        uVar26 = uVar14;
      }
      else if (sVar6 < sVar1) {
        uVar26 = uVar18;
      }
    }
    else if ((sVar1 <= sVar6) && (uVar26 = uVar18, sVar5 <= sVar6)) goto LAB_82f26964;
    uVar22 = uVar32;
    sVar4 = sVar8;
    if (sVar2 <= sVar7) {
      uVar13 = uVar29;
      uVar18 = uVar26;
      if (sVar8 < sVar2) goto LAB_82f26ac4;
      goto joined_r0x82f269a4;
    }
    uVar13 = uVar31;
    if (sVar8 < sVar7) goto LAB_82f26ac4;
joined_r0x82f26984:
    uVar13 = uVar22;
    if (sVar4 < sVar2) goto LAB_82f26ac4;
  }
  uVar13 = uVar29;
LAB_82f26ac4:
  uVar30 = (longlong)(int)uVar9 * (longlong)(int)param_3 + param_2;
  if (0 < *(int *)(param_1 + 0x84c)) {
    uVar22 = uVar26;
    uVar18 = uVar13;
    if (*(int *)(param_1 + 4) == 6) {
      lVar27 = (param_2 & 0x1fffffff) * 8 + (longlong)((int)uVar26 >> 2);
      lVar21 = ((ulonglong)param_3 & 0x1fffffff) * 8 + (longlong)((int)uVar13 >> 2);
      if ((int)lVar27 < -8) {
        uVar22 = uVar26 + (lVar27 + 8U & 0x3fffffff) * -4;
      }
      else {
        lVar16 = ((ulonglong)uVar9 & 0x1fffffff) * 8;
        if ((int)lVar16 < (int)lVar27) {
          uVar22 = (lVar16 - lVar27 & 0x3fffffffU) * 4 + uVar26;
        }
      }
      if ((int)lVar21 < -8) {
        uVar18 = uVar13 + (lVar21 + 8U & 0x3fffffff) * -4;
      }
      else {
        lVar27 = ((ulonglong)*(uint *)(param_1 + 0x2d4) & 0x1fffffff) * 8;
        if ((int)lVar27 < (int)lVar21) {
          uVar18 = (lVar27 - lVar21 & 0x3fffffffU) * 4 + uVar13;
        }
      }
    }
    iVar19 = (int)((uVar30 & 0xffffffff) << 3);
    uVar17 = (undefined2)uVar22;
    uVar20 = (undefined2)uVar18;
    *(undefined2 *)(iVar19 + *(int *)(param_1 + 0xaec)) = uVar17;
    *(undefined2 *)(iVar19 + *(int *)(param_1 + 0xaec) + 2) = uVar20;
    *(undefined4 *)(*(int *)(param_1 + 0x1e6c) + (int)uVar30 * 0x114 + 0x54) = 0;
    if (5 < *(int *)(param_1 + 4)) {
      uVar9 = *(uint *)(param_1 + 0x2d0);
      uVar22 = (((longlong)(int)uVar9 * (longlong)(int)param_3 & 0x7fffffffU) * 2 + param_2 &
               0x7fffffff) * 2;
      iVar19 = (int)((uVar22 & 0x7fffffff) << 1);
      *(undefined2 *)(iVar19 + *(int *)(param_1 + 0x990)) = uVar17;
      *(undefined2 *)(iVar19 + *(int *)(param_1 + 0x990) + 2) = uVar17;
      iVar28 = (int)((((ulonglong)uVar9 & 0x7fffffff) * 2 + uVar22 & 0x7fffffff) << 1);
      *(undefined2 *)(iVar28 + *(int *)(param_1 + 0x990)) = uVar17;
      *(undefined2 *)(iVar28 + *(int *)(param_1 + 0x990) + 2) = uVar17;
      *(undefined2 *)(iVar19 + *(int *)(param_1 + 0x994)) = uVar20;
      *(undefined2 *)(iVar19 + *(int *)(param_1 + 0x994) + 2) = uVar20;
      *(undefined2 *)(iVar28 + *(int *)(param_1 + 0x994)) = uVar20;
      *(undefined2 *)(iVar28 + *(int *)(param_1 + 0x994) + 2) = uVar20;
    }
  }
  uVar9 = *(int *)(((uint)((uVar26 & 0xffffffff) << 2) & 0xc) + 0x831b99c8) + (int)uVar26 >> 1;
  lVar21 = (longlong)(int)uVar9;
  uVar23 = *(int *)(((uint)((uVar13 & 0xffffffff) << 2) & 0xc) + 0x831b99c8) + (int)uVar13 >> 1;
  if (*(int *)(param_1 + 0x314) != 0) {
    if ((uVar9 & 1) != 0) {
      if ((int)uVar9 < 1) {
        lVar21 = lVar21 + 1;
      }
      else {
        lVar21 = lVar21 + -1;
      }
    }
    if ((uVar23 & 1) != 0) {
      if ((int)uVar23 < 1) {
        uVar23 = uVar23 + 1;
      }
      else {
        uVar23 = uVar23 - 1;
      }
    }
  }
  if (*(int *)(param_1 + 4) == 6) {
    lVar27 = (param_2 & 0x1fffffff) * 8 + (longlong)((int)lVar21 >> 2);
    iVar19 = param_3 * 8 + ((int)uVar23 >> 2);
    if ((int)lVar27 < -8) {
      lVar21 = lVar21 + (lVar27 + 8U & 0x3fffffff) * -4;
    }
    else {
      lVar16 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x1fffffff) * 8;
      if ((int)lVar16 < (int)lVar27) {
        lVar21 = (lVar16 - lVar27 & 0x3fffffffU) * 4 + lVar21;
      }
    }
    if (iVar19 < -8) {
      uVar23 = uVar23 + (iVar19 + 8U & 0x3fffffff) * -4;
    }
    else {
      iVar28 = *(int *)(param_1 + 0x2d4) * 8;
      if (iVar28 < iVar19) {
        uVar23 = (iVar28 - iVar19) * 4 + uVar23;
      }
    }
  }
  iVar19 = (int)((uVar30 & 0xffffffff) << 1);
  *(short *)(*(int *)(param_1 + 0x9f8) + iVar19) = (short)lVar21;
  *(short *)(*(int *)(param_1 + 0x9fc) + iVar19) = (short)uVar23;
  return 0;
}

