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


void fn_82CC7008(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  
  iVar6 = (int)param_3;
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar11 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  trapWord(6,(ulonglong)uVar1,0);
  iVar16 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x30) + 4);
  uVar17 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  iVar26 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  lVar12 = ((ulonglong)uVar3 & 0x1ffffff) * 0x80;
  uVar22 = lVar12 - 0x80;
  uVar21 = (uVar17 & 0x1ffffff) * 0x80 - 0x80;
  uVar11 = (int)lVar12 / (int)uVar1;
  uVar13 = (ulonglong)(int)uVar11;
  iVar4 = (int)param_2;
  trapWord(6,uVar13,0);
  trapWord(6,uVar13,0);
  trapWord(5,(ulonglong)uVar1 &
             ~((((ulonglong)uVar3 & 0xffffff) << 8 | ((ulonglong)uVar3 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  iVar19 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  trapWord(5,uVar13 & ~(((uVar22 & 0x7fffffff) << 1 | (uVar22 & 0xffffffff) >> 0x1f) - 1),0xffff);
  lVar20 = (longlong)((int)uVar22 / (int)uVar11) + -1;
  trapWord(5,uVar13 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  lVar12 = (longlong)((int)uVar21 / (int)uVar11) + -1;
  iVar9 = uVar3 * iVar4 + *(int *)(param_1 + 0x34);
  if (((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) != 0)) ||
     (*(int *)(param_1 + 8) != 0)) {
    iVar18 = *(int *)(param_1 + 0x20);
    iVar15 = iVar18 * iVar4 + *(int *)(param_1 + 0x40);
  }
  else {
    iVar15 = *(int *)(param_1 + 0x50);
    iVar18 = *(int *)(param_1 + 0x5c);
  }
  uVar13 = (ulonglong)(uVar11 >> 0x1f) - 1 & uVar13;
  if (iVar4 < iVar6) {
    param_3 = param_3 - param_2;
    do {
      lVar14 = 0;
      iVar5 = 0;
      if (0 < (int)lVar20) {
        lVar27 = lVar20;
        do {
          iVar23 = (int)(uint)lVar14 >> 7;
          uVar11 = (uint)lVar14 & 0x7f;
          lVar14 = lVar14 + uVar13;
          *(char *)(iVar5 + iVar15) =
               (char)((int)((uint)*(byte *)(iVar23 + iVar9) * (0x80 - uVar11) +
                           *(byte *)(iVar9 + 1 + iVar23) * uVar11) >> 7);
          iVar5 = iVar5 + 1;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (iVar5 < *(int *)(param_1 + 0x20)) {
        iVar23 = uVar3 - 1;
        do {
          iVar24 = (int)(uint)lVar14 >> 7;
          uVar11 = (uint)lVar14 & 0x7f;
          iVar7 = iVar24 + 1;
          if ((iVar23 < iVar24 + 1) && (iVar7 = iVar23, iVar23 < iVar24)) {
            iVar24 = iVar23;
          }
          lVar14 = lVar14 + uVar13;
          *(char *)(iVar5 + iVar15) =
               (char)((int)((uint)*(byte *)(iVar24 + iVar9) * (0x80 - uVar11) +
                           *(byte *)(iVar7 + iVar9) * uVar11) >> 7);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x20));
      }
      param_3 = param_3 + -1;
      iVar15 = iVar18 + iVar15;
      iVar9 = iVar9 + uVar3;
    } while (param_3 != 0);
  }
  iVar9 = *(int *)(param_1 + 0x2c);
  uVar11 = iVar9 * iVar4;
  iVar15 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  iVar18 = (int)uVar17;
  lVar20 = (longlong)iVar15 * (longlong)iVar18 + (ulonglong)*(uint *)(param_1 + 0x34) +
           (longlong)(int)uVar3 * (longlong)iVar26;
  if (((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) != 0)) ||
     (*(int *)(param_1 + 8) != 0)) {
    iVar5 = iVar15 * iVar16 + *(int *)(param_1 + 0x20) * iVar26 + *(int *)(param_1 + 0x40);
    iVar23 = iVar16;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar23 = *(int *)(param_1 + 0x60);
  }
  uVar11 = iVar9 * iVar6;
  iVar24 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  if (iVar15 < iVar24) {
    do {
      uVar21 = 0;
      iVar24 = 0;
      iVar9 = (int)lVar20;
      if (0 < (int)lVar12) {
        lVar14 = lVar12;
        do {
          uVar11 = (uint)uVar21;
          iVar7 = ((int)uVar11 >> 7) + (uint)((int)uVar11 < 0 && (uVar21 & 0x7f) != 0);
          uVar21 = uVar21 + uVar13;
          *(char *)(iVar24 + iVar5) =
               (char)((int)((uint)*(byte *)(iVar7 + iVar9) * (0x80 - (uVar11 & 0x7f)) +
                           (uint)*(byte *)(iVar9 + 1 + iVar7) * (uVar11 & 0x7f)) >> 7);
          iVar24 = iVar24 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (iVar24 < iVar16) {
        iVar7 = iVar16 - iVar24;
        iVar25 = iVar18 + -1;
        do {
          uVar11 = (uint)uVar21;
          iVar10 = ((int)uVar11 >> 7) + (uint)((int)uVar11 < 0 && (uVar21 & 0x7f) != 0);
          iVar8 = iVar10 + 1;
          if ((iVar25 < iVar10 + 1) && (iVar8 = iVar25, iVar25 < iVar10)) {
            iVar10 = iVar25;
          }
          uVar21 = uVar21 + uVar13;
          *(char *)(iVar24 + iVar5) =
               (char)((int)((uint)*(byte *)(iVar10 + iVar9) * (0x80 - (uVar11 & 0x7f)) +
                           (uint)*(byte *)(iVar8 + iVar9) * (uVar11 & 0x7f)) >> 7);
          iVar24 = iVar24 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar9 = *(int *)(param_1 + 0x2c);
      iVar15 = iVar15 + 1;
      iVar5 = iVar23 + iVar5;
      uVar11 = iVar9 * iVar6;
      lVar20 = lVar20 + uVar17;
      iVar24 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
    } while (iVar15 < iVar24);
  }
  uVar11 = *(int *)(param_1 + 0x2c) * iVar4;
  lVar20 = (longlong)
           (int)(((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) +
                *(int *)(param_1 + 0x2c) * iVar19) * (longlong)iVar18 +
           (ulonglong)*(uint *)(param_1 + 0x34) + (longlong)(int)uVar3 * (longlong)iVar26;
  if (((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) != 0)) ||
     (*(int *)(param_1 + 8) != 0)) {
    uVar11 = *(int *)(param_1 + 0x2c) * iVar4;
    iVar26 = (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) +
             *(int *)(param_1 + 0x2c) * iVar19) * iVar16 + *(int *)(param_1 + 0x20) * iVar26 +
             *(int *)(param_1 + 0x40);
    iVar19 = iVar16;
  }
  else {
    iVar26 = *(int *)(param_1 + 0x58);
    iVar19 = *(int *)(param_1 + 100);
  }
  uVar11 = iVar9 * iVar4;
  iVar4 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  if (iVar4 < iVar24) {
    do {
      lVar14 = 0;
      iVar15 = 0;
      iVar9 = (int)lVar20;
      if (0 < (int)lVar12) {
        lVar27 = lVar12;
        do {
          iVar5 = (int)(uint)lVar14 >> 7;
          uVar11 = (uint)lVar14 & 0x7f;
          lVar14 = lVar14 + uVar13;
          *(char *)(iVar15 + iVar26) =
               (char)((int)((uint)*(byte *)(iVar5 + iVar9) * (0x80 - uVar11) +
                           *(byte *)(iVar9 + 1 + iVar5) * uVar11) >> 7);
          iVar15 = iVar15 + 1;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (iVar15 < iVar16) {
        iVar23 = iVar16 - iVar15;
        iVar5 = iVar18 + -1;
        do {
          iVar24 = (int)(uint)lVar14 >> 7;
          uVar11 = (uint)lVar14 & 0x7f;
          iVar7 = iVar24 + 1;
          if ((iVar5 < iVar24 + 1) && (iVar7 = iVar5, iVar5 < iVar24)) {
            iVar24 = iVar5;
          }
          lVar14 = lVar14 + uVar13;
          *(char *)(iVar15 + iVar26) =
               (char)((int)((uint)*(byte *)(iVar24 + iVar9) * (0x80 - uVar11) +
                           *(byte *)(iVar7 + iVar9) * uVar11) >> 7);
          iVar15 = iVar15 + 1;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar26 = iVar19 + iVar26;
      uVar11 = *(int *)(param_1 + 0x2c) * iVar6;
      lVar20 = lVar20 + uVar17;
    } while (iVar4 < (int)(((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)));
  }
  return;
}

