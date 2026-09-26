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


void fn_82CC67D0(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar15;
  longlong lVar14;
  int iVar16;
  uint uVar18;
  longlong lVar17;
  longlong lVar19;
  
  iVar6 = (int)param_3;
  iVar5 = (int)param_2;
  uVar11 = *(uint *)(param_1 + 0x20);
  trapWord(6,(ulonglong)uVar11,0);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x30) + 4);
  uVar10 = (ulonglong)uVar2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  uVar18 = (uVar2 - 1) * uVar11;
  uVar15 = (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1) * uVar11;
  uVar7 = (int)(((ulonglong)uVar2 & 0x1ffffff) << 7) / (int)uVar11;
  iVar4 = uVar2 * 2;
  iVar16 = iVar4 * iVar5;
  iVar8 = (int)uVar18 / (int)uVar2;
  trapWord(6,uVar10,0);
  iVar1 = (int)uVar15 / (int)uVar2;
  lVar14 = (longlong)iVar1;
  trapWord(6,uVar10,0);
  iVar13 = iVar16 + *(int *)(param_1 + 0x34);
  trapWord(5,uVar10 & ~((((ulonglong)uVar15 & 0x7fffffff) << 1 | (ulonglong)(uVar15 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,(ulonglong)uVar11 &
             ~((((ulonglong)uVar2 & 0xffffff) << 8 | ((ulonglong)uVar2 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  trapWord(5,uVar10 & ~((((ulonglong)uVar18 & 0x7fffffff) << 1 | (ulonglong)(uVar18 >> 0x1f)) - 1),
           0xffff);
  lVar12 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  uVar7 = 0xffffffffU - ((int)uVar7 >> 0x1f) & uVar7;
  if (iVar5 < iVar6) {
    lVar17 = param_3 - param_2;
    puVar9 = (undefined1 *)(uVar11 * iVar5 + *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      if (0 < iVar8) {
        lVar19 = (longlong)iVar8;
        do {
          uVar2 = uVar11 & 0x7f;
          uVar15 = (int)uVar11 >> 6 & 0xfffffffe;
          uVar11 = uVar11 + uVar7;
          puVar9[1] = (char)((int)((uint)*(byte *)(uVar15 + iVar13) * (0x80 - uVar2) +
                                  *(byte *)(iVar13 + 2 + uVar15) * uVar2) >> 7);
          puVar9 = puVar9 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar19 = (longlong)iVar8;
      if (iVar8 < *(int *)(param_1 + 0x20)) {
        do {
          uVar2 = (int)uVar11 >> 6;
          lVar19 = lVar19 + 1;
          uVar11 = uVar11 + uVar7;
          puVar9 = puVar9 + 1;
          *puVar9 = *(undefined1 *)((uVar2 & 0xfffffffe) + iVar13);
        } while ((int)lVar19 < *(int *)(param_1 + 0x20));
      }
      lVar17 = lVar17 + -1;
      iVar13 = iVar13 + iVar4;
    } while (lVar17 != 0);
  }
  iVar13 = (int)lVar12;
  iVar8 = iVar16 + *(int *)(param_1 + 0x34) + 1;
  if (iVar5 < iVar6) {
    lVar17 = param_3 - param_2;
    puVar9 = (undefined1 *)
             (*(int *)(param_1 + 0x20) * iVar3 + iVar13 * iVar5 + *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      if (0 < iVar1) {
        lVar19 = lVar14;
        do {
          uVar2 = uVar11 & 0x7f;
          uVar15 = (int)uVar11 >> 5 & 0xfffffffc;
          uVar11 = uVar11 + uVar7;
          puVar9[1] = (char)((int)((uint)*(byte *)(uVar15 + iVar8) * (0x80 - uVar2) +
                                  *(byte *)(iVar8 + 4 + uVar15) * uVar2) >> 7);
          puVar9 = puVar9 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (iVar1 < iVar13) {
        lVar19 = lVar12 - lVar14;
        do {
          uVar2 = (int)uVar11 >> 5;
          uVar11 = uVar11 + uVar7;
          puVar9 = puVar9 + 1;
          *puVar9 = *(undefined1 *)((uVar2 & 0xfffffffc) + iVar8);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar17 = lVar17 + -1;
      iVar8 = iVar8 + iVar4;
    } while (lVar17 != 0);
  }
  iVar8 = iVar16 + *(int *)(param_1 + 0x34) + 3;
  if (iVar5 < iVar6) {
    param_3 = param_3 - param_2;
    puVar9 = (undefined1 *)
             ((*(int *)(param_1 + 0x20) + iVar13) * iVar3 + iVar13 * iVar5 +
              *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      if (0 < iVar1) {
        lVar17 = lVar14;
        do {
          uVar2 = uVar11 & 0x7f;
          uVar15 = (int)uVar11 >> 5 & 0xfffffffc;
          uVar11 = uVar11 + uVar7;
          puVar9[1] = (char)((int)((uint)*(byte *)(uVar15 + iVar8) * (0x80 - uVar2) +
                                  *(byte *)(iVar8 + 4 + uVar15) * uVar2) >> 7);
          puVar9 = puVar9 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (iVar1 < iVar13) {
        lVar17 = lVar12 - lVar14;
        do {
          uVar2 = (int)uVar11 >> 5;
          uVar11 = uVar11 + uVar7;
          puVar9 = puVar9 + 1;
          *puVar9 = *(undefined1 *)((uVar2 & 0xfffffffc) + iVar8);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      param_3 = param_3 + -1;
      iVar8 = iVar8 + iVar4;
    } while (param_3 != 0);
  }
  return;
}

