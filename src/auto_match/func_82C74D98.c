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
extern unsigned int iStack0000002c;
extern int (*lbl_8329F140)();
extern int (*lbl_8329F150)();
extern int (*lbl_8329F154)();
extern int (*lbl_8329F158)();
extern int (*lbl_8329F15C)();


void fn_82C74D98(int param_1,ulonglong param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iStack0000002c;
  
  lVar10 = (ulonglong)*(uint *)(param_1 + 0xec4) + (ulonglong)*(uint *)(param_1 + 0xe0);
  lVar8 = (ulonglong)*(uint *)(param_1 + 0xec8) + (ulonglong)*(uint *)(param_1 + 0xe0);
  lVar12 = (ulonglong)*(uint *)(param_1 + 0xec0) + (ulonglong)*(uint *)(param_1 + 0xdc);
  if ((*(int *)(param_1 + 0x3e5c) == 0) || (*(int *)(param_1 + 0x4fc0) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0xeb0) + 0x268) =
         *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268);
    uVar2 = *(uint *)(param_1 + 0xe8);
    lVar13 = (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)*(uint *)(param_1 + 0xef8);
    uVar3 = *(uint *)(param_1 + 0xe4);
    lVar9 = (ulonglong)*(uint *)(param_1 + 0xf00) + (ulonglong)*(uint *)(param_1 + 0xe0);
    lVar11 = (ulonglong)*(uint *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xefc);
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    uVar5 = *(uint *)(param_1 + 0x88);
    uVar6 = *(undefined4 *)(param_1 + 0xd0);
    uVar15 = param_2;
    iStack0000002c = param_4;
    if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
      do {
        lVar18 = lVar12;
        if (iStack0000002c == 0) {
          lVar18 = lVar13;
        }
        uVar17 = 0;
        if (uVar5 != 0) {
          lVar14 = lVar12 - lVar18;
          do {
            if (iStack0000002c == 0) {
              (*lbl_8329F150)(lVar18,lVar14 + lVar18,*(undefined4 *)(param_1 + 0xcc),uVar4);
            }
            (*lbl_8329F15C)(param_1,lVar18,uVar17,uVar15,*(undefined4 *)(param_1 + 0xf8),uVar4);
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 0x10;
          } while ((uVar17 & 0xffffffff) < (ulonglong)uVar5);
        }
        uVar15 = uVar15 + 1;
        lVar12 = (ulonglong)*(uint *)(param_1 + 0xe4) + lVar12;
        lVar13 = (ulonglong)uVar3 + lVar13;
      } while ((uVar15 & 0xffffffff) < (ulonglong)param_3);
    }
    uVar15 = param_2;
    if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
      do {
        lVar12 = lVar10;
        if (iStack0000002c == 0) {
          lVar12 = lVar11;
        }
        uVar17 = 0;
        if (uVar5 != 0) {
          lVar13 = lVar10 - lVar12;
          do {
            if (iStack0000002c == 0) {
              (*lbl_8329F154)(lVar12,lVar13 + lVar12,*(undefined4 *)(param_1 + 0xd0),uVar6);
            }
            (*lbl_8329F158)(param_1,lVar12,uVar17,uVar15,*(undefined4 *)(param_1 + 0xf8),uVar6);
            uVar17 = uVar17 + 1;
            lVar12 = lVar12 + 8;
          } while ((uVar17 & 0xffffffff) < (ulonglong)uVar5);
        }
        uVar15 = uVar15 + 1;
        lVar10 = (ulonglong)*(uint *)(param_1 + 0xe8) + lVar10;
        lVar11 = (ulonglong)uVar2 + lVar11;
      } while ((uVar15 & 0xffffffff) < (ulonglong)param_3);
    }
    uVar15 = param_2;
    if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
      do {
        lVar10 = lVar8;
        if (iStack0000002c == 0) {
          lVar10 = lVar9;
        }
        uVar17 = 0;
        if (uVar5 != 0) {
          lVar12 = lVar8 - lVar10;
          do {
            if (iStack0000002c == 0) {
              (*lbl_8329F154)(lVar10,lVar12 + lVar10,*(undefined4 *)(param_1 + 0xd0),uVar6);
            }
            (*lbl_8329F158)(param_1,lVar10,uVar17,uVar15,*(undefined4 *)(param_1 + 0xf8),uVar6);
            uVar17 = uVar17 + 1;
            lVar10 = lVar10 + 8;
          } while ((uVar17 & 0xffffffff) < (ulonglong)uVar5);
        }
        uVar15 = uVar15 + 1;
        lVar8 = (ulonglong)*(uint *)(param_1 + 0xe8) + lVar8;
        lVar9 = (ulonglong)uVar2 + lVar9;
      } while ((uVar15 & 0xffffffff) < (ulonglong)param_3);
    }
    if (*(int *)(param_1 + 0x3cd8) != 0) {
      lVar10 = (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)*(uint *)(param_1 + 0xef8);
      lVar12 = (ulonglong)*(uint *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xefc);
      lVar8 = (ulonglong)*(uint *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xf00);
      if ((param_2 & 0xffffffff) < (ulonglong)param_3) {
        do {
          uVar16 = 0;
          if (uVar5 != 0) {
            lVar9 = lVar10;
            lVar11 = lVar12;
            do {
              if ((((uVar16 != 0) && (uVar16 != *(int *)(param_1 + 0x88) - 1U)) &&
                  ((param_2 & 0xffffffff) != 0)) &&
                 ((param_2 & 0xffffffff) != (ulonglong)(*(int *)(param_1 + 0x8c) - 1))) {
                (*lbl_8329F140)(lVar9,lVar11,(lVar8 - lVar12) + lVar11,
                                *(undefined4 *)(param_1 + 0xf8),uVar4,uVar6,uVar6);
              }
              uVar16 = uVar16 + 1;
              lVar9 = lVar9 + 0x10;
              lVar11 = lVar11 + 8;
            } while (uVar16 < uVar5);
          }
          param_2 = param_2 + 1;
          lVar12 = (ulonglong)uVar2 + lVar12;
          lVar10 = (ulonglong)uVar3 + lVar10;
          lVar8 = (ulonglong)uVar2 + lVar8;
        } while ((param_2 & 0xffffffff) < (ulonglong)param_3);
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xeb0);
    iVar7 = *(int *)(iVar1 + 0x250) * 0x44 + iVar1;
    *(int *)(iVar1 + 0x250) = *(int *)(iVar1 + 0x250) + 1;
    *(undefined4 *)(iVar7 + 0x30) = 1;
    *(undefined4 *)(iVar7 + 0x34) = *(undefined4 *)(param_1 + 0xea0);
    *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(iVar7 + 0x4c) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(param_1 + 0xe8);
    *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(param_1 + 0x3cd8);
    *(int *)(iVar7 + 100) = (int)param_2;
    *(uint *)(iVar7 + 0x68) = param_3;
  }
  return;
}

