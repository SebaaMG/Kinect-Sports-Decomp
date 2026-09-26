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


void fn_82F42300(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar15 = 0;
  lVar8 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x3fffffff) * 4;
  uVar11 = (param_3 - param_2 & 0xfffffff) * 0x10;
  uVar16 = 0;
  uVar18 = 0;
  uVar13 = lVar8 + 0x10;
  uVar17 = 0;
  iVar7 = (int)param_2;
  uVar12 = uVar11;
  if (iVar7 == 0) {
    uVar12 = uVar11 + 0x10;
  }
  if ((param_3 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x2d4)) {
    uVar12 = uVar12 + 0x10;
    uVar11 = (ulonglong)*(uint *)(param_1 + 800) + (param_3 & 0xfffffff) * -0x10 + uVar11 &
             0xfffffffe;
  }
  if (*(int *)(param_1 + 0x5268) != 0) {
    iVar3 = *(int *)(param_1 + 0x31c);
    iVar9 = (int)lVar8;
    if (*(int *)(param_1 + 0x6de4) == 0) {
      lVar8 = ((longlong)iVar3 * (longlong)iVar7 & 0x7ffffffU) * 0x20 +
              (ulonglong)*(uint *)(param_1 + 0x1abc);
      lVar4 = ((longlong)iVar9 * (longlong)iVar7 & 0x1fffffffU) * 8 +
              (ulonglong)*(uint *)(param_1 + 0x1a90);
    }
    else {
      lVar8 = (longlong)((int)((param_2 & 0xffffffff) << 5) + 1) * (longlong)iVar3 +
              (ulonglong)*(uint *)(param_1 + 0x1abc);
      lVar4 = (longlong)((int)((param_2 & 0xffffffff) << 3) + 1) * (longlong)iVar9 +
              (ulonglong)*(uint *)(param_1 + 0x1a90);
    }
    (**(code **)(param_1 + 0x1bac))
              (lVar8,iVar3,iVar3 << 1,lVar4,
               ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x1fffffff) << 3,uVar11);
  }
  iVar3 = *(int *)(param_1 + 0x6de8);
  iVar14 = (int)uVar13;
  iVar9 = (int)uVar12 >> 1;
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x4f30) != 1)) {
    if (iVar7 == 0) {
      uVar19 = (ulonglong)*(uint *)(param_1 + 0x14);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98);
      if (*(int *)(param_1 + 0x6d8c) != 0) {
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x18);
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x1c);
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4);
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8);
      }
    }
    else {
      iVar7 = iVar7 + 1;
      lVar8 = ((longlong)iVar7 * (longlong)iVar14 & 0x1fffffffU) * 8;
      uVar19 = ((longlong)*(int *)(param_1 + 0x564) * (longlong)iVar7 & 0xfffffffU) * 0x10 +
               (ulonglong)*(uint *)(param_1 + 0x14);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar8;
      if (*(int *)(param_1 + 0x6d8c) != 0) {
        lVar4 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar7 & 0x1fffffffU) * 8;
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4) + lVar8;
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar4;
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x1c) + lVar4;
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8) + lVar8;
      }
    }
    lVar4 = (uVar13 & 0x7fffffff) << 1;
    (**(code **)(param_1 + 0x1bac))
              (uVar19,*(int *)(param_1 + 0x564) >> 1,*(int *)(param_1 + 0x564),uVar11,lVar4,uVar12);
    lVar8 = (longlong)(*(int *)(param_1 + 0x564) >> 1);
    (**(code **)(param_1 + 0x1bac))
              (lVar8 + uVar19,lVar8,*(int *)(param_1 + 0x564),uVar11 + uVar13,lVar4,uVar12);
    if (*(int *)(param_1 + 0x6d8c) == 0) {
      return;
    }
    (**(code **)(param_1 + 0x1bb0))
              (uVar16,*(int *)(param_1 + 0x568) >> 1,*(int *)(param_1 + 0x568),uVar18,lVar4,iVar9);
    lVar8 = (longlong)(*(int *)(param_1 + 0x568) >> 1);
    (**(code **)(param_1 + 0x1bb0))
              (lVar8 + uVar16,lVar8,*(int *)(param_1 + 0x568),uVar18 + uVar13,lVar4,iVar9);
    (**(code **)(param_1 + 0x1bb0))
              (uVar15,*(int *)(param_1 + 0x568) >> 1,*(int *)(param_1 + 0x568),uVar17,lVar4,iVar9);
    iVar7 = *(int *)(param_1 + 0x568);
    uVar17 = uVar17 + uVar13;
    lVar8 = (longlong)(iVar7 >> 1);
    uVar15 = lVar8 + uVar15;
    goto LAB_82f42978;
  }
  if (*(int *)(param_1 + 0xaf0) == 2) {
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1ae8) == 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x564);
      iVar10 = *(int *)(param_1 + 0x6d8c);
      *(undefined4 *)(param_1 + 0x1ae8) = 0;
      if (*(int *)(param_1 + 0x6de4) == 0) {
        lVar4 = (longlong)((int)((param_2 & 0xffffffff) << 3) + 1) * (longlong)iVar14;
        lVar8 = ((longlong)iVar3 * (longlong)iVar7 & 0xfffffffU) * 0x10 + (longlong)(iVar3 >> 1) +
                (ulonglong)*(uint *)(param_1 + 0x1e7c);
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar4;
        if (iVar10 != 0) {
          uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4) + lVar4;
          lVar5 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar7 & 0x1fffffffU) * 8 +
                  (longlong)(*(int *)(param_1 + 0x568) >> 1);
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8) + lVar4;
          uVar16 = (ulonglong)*(uint *)(param_1 + 0x1e80) + lVar5;
          uVar15 = (ulonglong)*(uint *)(param_1 + 0x1e84) + lVar5;
        }
      }
      else {
        lVar4 = ((longlong)iVar14 * (longlong)iVar7 & 0x1fffffffU) * 8;
        lVar8 = ((longlong)iVar3 * (longlong)iVar7 & 0xfffffffU) * 0x10 +
                (ulonglong)*(uint *)(param_1 + 0x1e7c);
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar4;
        if (iVar10 != 0) {
          lVar5 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar7 & 0x1fffffffU) * 8;
          uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4) + lVar4;
          uVar16 = (ulonglong)*(uint *)(param_1 + 0x1e80) + lVar5;
          uVar15 = (ulonglong)*(uint *)(param_1 + 0x1e84) + lVar5;
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8) + lVar4;
        }
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x564);
      iVar6 = (int)((param_2 & 0x7ffffff) << 5);
      if (*(int *)(param_1 + 0x6de4) == 0) {
        iVar10 = *(int *)(param_1 + 0x6d8c);
        lVar4 = (longlong)((int)((param_2 & 0xffffffff) << 3) + 1) * (longlong)iVar14;
        lVar8 = (longlong)(iVar6 + -0x1f) * (longlong)(iVar3 >> 1) +
                (ulonglong)*(uint *)(param_1 + 0x4a94) + -0x20;
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a9c) + lVar4;
        if (iVar10 != 0) {
          uVar18 = (ulonglong)*(uint *)(param_1 + 0x1aac);
          iVar14 = *(int *)(param_1 + 0x568) >> 1;
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab0);
          iVar6 = (int)((param_2 & 0xffffffff) << 4) + -0xf;
LAB_82f428a4:
          uVar17 = uVar17 + lVar4;
          uVar18 = uVar18 + lVar4;
          uVar15 = ((ulonglong)*(uint *)(param_1 + 0x4a9c) + (longlong)iVar14 * (longlong)iVar6) -
                   0x10;
          uVar16 = ((ulonglong)*(uint *)(param_1 + 0x4a98) + (longlong)iVar14 * (longlong)iVar6) -
                   0x10;
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x6d8c);
        lVar4 = ((longlong)iVar14 * (longlong)iVar7 & 0x1fffffffU) * 8;
        lVar8 = (longlong)(iVar6 + -0x20) * (longlong)(iVar3 >> 1) +
                (ulonglong)*(uint *)(param_1 + 0x4a94) + -0x20;
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a9c) + lVar4;
        if (iVar10 != 0) {
          iVar14 = *(int *)(param_1 + 0x568);
          uVar1 = *(uint *)(param_1 + 0x1aac);
          uVar2 = *(uint *)(param_1 + 0x1ab0);
LAB_82f4289c:
          iVar14 = iVar14 >> 1;
          uVar17 = (ulonglong)uVar2;
          uVar18 = (ulonglong)uVar1;
          iVar6 = (int)((param_2 & 0xffffffff) << 4) + -0x10;
          goto LAB_82f428a4;
        }
      }
    }
  }
  else if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1ae8) == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x564);
    iVar10 = *(int *)(param_1 + 0x6d8c);
    if (*(int *)(param_1 + 0x6de4) == 0) {
      lVar4 = (longlong)((int)((param_2 & 0xffffffff) << 3) + 1) * (longlong)iVar14;
      lVar8 = ((longlong)iVar3 * (longlong)iVar7 & 0xfffffffU) * 0x10 + (longlong)(iVar3 >> 1) +
              (ulonglong)*(uint *)(param_1 + 0x14);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4) + lVar4;
        lVar5 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar7 & 0x1fffffffU) * 8 +
                (longlong)(*(int *)(param_1 + 0x568) >> 1);
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8) + lVar4;
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar5;
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x1c) + lVar5;
      }
    }
    else {
      lVar4 = ((longlong)iVar14 * (longlong)iVar7 & 0x1fffffffU) * 8;
      lVar8 = ((longlong)iVar3 * (longlong)iVar7 & 0xfffffffU) * 0x10 +
              (ulonglong)*(uint *)(param_1 + 0x14);
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        lVar5 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar7 & 0x1fffffffU) * 8;
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4) + lVar4;
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar5;
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x1c) + lVar5;
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8) + lVar4;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x564);
    iVar6 = (int)((param_2 & 0x7ffffff) << 5);
    if (*(int *)(param_1 + 0x6de4) == 0) {
      iVar10 = *(int *)(param_1 + 0x6d8c);
      lVar4 = (longlong)((int)((param_2 & 0xffffffff) << 3) + 1) * (longlong)iVar14;
      lVar8 = (longlong)(iVar6 + -0x1f) * (longlong)(iVar3 >> 1) +
              (ulonglong)*(uint *)(param_1 + 0x4a94) + -0x20;
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        uVar18 = (ulonglong)*(uint *)(param_1 + 0x1ab4);
        iVar14 = *(int *)(param_1 + 0x568) >> 1;
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x1ab8);
        iVar6 = (int)((param_2 & 0xffffffff) << 4) + -0xf;
        goto LAB_82f428a4;
      }
    }
    else {
      iVar10 = *(int *)(param_1 + 0x6d8c);
      lVar4 = ((longlong)iVar14 * (longlong)iVar7 & 0x1fffffffU) * 8;
      lVar8 = (longlong)(iVar6 + -0x20) * (longlong)(iVar3 >> 1) +
              (ulonglong)*(uint *)(param_1 + 0x4a94) + -0x20;
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        iVar14 = *(int *)(param_1 + 0x568);
        uVar1 = *(uint *)(param_1 + 0x1ab4);
        uVar2 = *(uint *)(param_1 + 0x1ab8);
        goto LAB_82f4289c;
      }
    }
  }
  if ((uVar11 & 0xffffffff) == 0) {
    return;
  }
  if (iVar7 != 0) {
    lVar4 = (uVar13 & 0x1fffffff) * 8;
    uVar11 = lVar4 + uVar11;
    lVar8 = ((ulonglong)(uint)(iVar3 >> 1) & 0x7ffffff) * 0x20 + lVar8;
    if (iVar10 != 0) {
      uVar18 = lVar4 + uVar18;
      uVar17 = lVar4 + uVar17;
      lVar4 = ((ulonglong)(uint)(*(int *)(param_1 + 0x568) >> 1) & 0xfffffff) * 0x10;
      uVar16 = lVar4 + uVar16;
      uVar15 = lVar4 + uVar15;
    }
  }
  lVar4 = (uVar13 & 0x7fffffff) << 1;
  (**(code **)(param_1 + 0x1bac))(lVar8,iVar3 >> 1,iVar3,uVar11,lVar4,uVar12);
  if (*(int *)(param_1 + 0x6d8c) == 0) {
    return;
  }
  (**(code **)(param_1 + 0x1bb0))
            (uVar16,*(int *)(param_1 + 0x568) >> 1,*(int *)(param_1 + 0x568),uVar18,lVar4,iVar9);
  iVar7 = *(int *)(param_1 + 0x568);
  lVar8 = (longlong)(iVar7 >> 1);
LAB_82f42978:
  (**(code **)(param_1 + 0x1bb0))(uVar15,lVar8,iVar7,uVar17,lVar4,iVar9);
  return;
}

