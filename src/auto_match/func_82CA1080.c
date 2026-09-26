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
extern int fn_82F68CC0();
extern unsigned int lbl_83232478;


void fn_82CA1080(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar3 = lbl_83232478;
  lVar4 = (longlong)*(int *)(param_1 + 0xd4) * (longlong)*(int *)(param_1 + 0xcc);
  lVar7 = (longlong)*(int *)(param_1 + 0xd8) * (longlong)*(int *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0x559c) == 0) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0xbc);
    lVar4 = (ulonglong)*(uint *)(param_1 + 0xec0) + (ulonglong)*(uint *)(param_1 + 0xdc);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0xcc);
    lVar10 = (ulonglong)*(uint *)(param_1 + 0xef8) + (ulonglong)*(uint *)(param_1 + 0xdc);
    if (0 < (int)*(uint *)(param_1 + 0xbc)) {
      do {
        fn_82F68CC0(lVar10,lVar4,uVar9);
        uVar8 = uVar8 - 1;
        lVar10 = uVar9 + lVar10;
        lVar4 = uVar9 + lVar4;
      } while (uVar8 != 0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x3d0c) == 0) {
      iVar1 = *(int *)(param_1 + 0xec0);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xef8);
    }
    iVar2 = *(int *)(param_1 + 0x55a4);
    puVar6 = *(undefined1 **)(param_1 + 0xef8);
    if (0 < (int)lVar4) {
      iVar1 = iVar1 - (int)puVar6;
      do {
        *puVar6 = *(undefined1 *)
                   (((int)(((byte)puVar6[iVar1] - 0x80) * (iVar2 + 8) + 4) >> 3) + iVar3 + 0x80);
        puVar6 = puVar6 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (*(int *)(param_1 + 0x55a0) == 0) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 200);
    lVar4 = (ulonglong)*(uint *)(param_1 + 0xec4) + (ulonglong)*(uint *)(param_1 + 0xe0);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0xd0);
    lVar7 = (ulonglong)*(uint *)(param_1 + 0xefc) + (ulonglong)*(uint *)(param_1 + 0xe0);
    if (0 < (int)*(uint *)(param_1 + 200)) {
      do {
        fn_82F68CC0(lVar7,lVar4,uVar9);
        uVar8 = uVar8 - 1;
        lVar7 = uVar9 + lVar7;
        lVar4 = uVar9 + lVar4;
      } while (uVar8 != 0);
    }
    uVar8 = (ulonglong)*(uint *)(param_1 + 200);
    lVar4 = (ulonglong)*(uint *)(param_1 + 0xec8) + (ulonglong)*(uint *)(param_1 + 0xe0);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0xd0);
    lVar7 = (ulonglong)*(uint *)(param_1 + 0xf00) + (ulonglong)*(uint *)(param_1 + 0xe0);
    if (0 < (int)*(uint *)(param_1 + 200)) {
      do {
        fn_82F68CC0(lVar7,lVar4,uVar9);
        uVar8 = uVar8 - 1;
        lVar7 = uVar9 + lVar7;
        lVar4 = uVar9 + lVar4;
      } while (uVar8 != 0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x3d0c) == 0) {
      iVar1 = *(int *)(param_1 + 0xec4);
      iVar2 = *(int *)(param_1 + 0xec8);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xefc);
      iVar2 = *(int *)(param_1 + 0xf00);
    }
    puVar6 = *(undefined1 **)(param_1 + 0xefc);
    iVar5 = *(int *)(param_1 + 0x55a8) + 8;
    if (0 < (int)lVar7) {
      iVar1 = iVar1 - (int)puVar6;
      lVar4 = lVar7;
      do {
        *puVar6 = *(undefined1 *)
                   (((int)(((byte)puVar6[iVar1] - 0x80) * iVar5 + 4) >> 3) + iVar3 + 0x80);
        puVar6 = puVar6 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    puVar6 = *(undefined1 **)(param_1 + 0xf00);
    if (0 < (int)lVar7) {
      iVar2 = iVar2 - (int)puVar6;
      do {
        *puVar6 = *(undefined1 *)
                   (((int)(((byte)puVar6[iVar2] - 0x80) * iVar5 + 4) >> 3) + iVar3 + 0x80);
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return;
}

