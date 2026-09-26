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
extern int fn_82814D10();
extern int fn_82820290();
extern int fn_82820EF8();


void fn_82821728(int param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  int aiStack_50 [20];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 == '\0')) {
    fn_82820290(*(int *)(param_1 + 0x20),1,aiStack_50);
    iVar1 = aiStack_50[0] + iVar1;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  *(uint *)(param_1 + 0x34) = (uint)*(byte *)(*(int *)(param_1 + 0x1c) + 0x51) * 0x21 + iVar1;
  iVar1 = fn_82814D10(param_1);
  if (((iVar1 != 0) && (param_3 == '\0')) &&
     (uVar2 = 0, *(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0')) {
    lVar3 = 0;
    do {
      lVar4 = lVar3 + (ulonglong)*(uint *)(param_1 + 0x30);
      fn_82820EF8(lVar4 + 0xd,4);
      fn_82820EF8(lVar4,4);
      fn_82820EF8(lVar4 + 5,4);
      fn_82820EF8(lVar4 + 9,4);
      fn_82820EF8(lVar4 + 0x1d,4);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x21;
    } while (uVar2 < *(byte *)(*(int *)(param_1 + 0x1c) + 0x51));
  }
  if (param_2 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
    iVar5 = iVar1 + *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x34));
    iVar1 = fn_82814D10(param_1);
    if (iVar1 != 0) {
      fn_82820EF8((int *)(param_1 + 0x38),4);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      puVar6 = (undefined4 *)(iVar5 + 4);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      iVar5 = iVar5 + 4;
      *(int *)(param_1 + 0x3c) = iVar5;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24) * 4 + iVar5;
      *(int *)(param_1 + 0x40) = iVar5;
      puVar6 = (undefined4 *)(iVar1 + iVar5);
    }
    *(undefined4 *)(param_1 + 0x28) = *puVar6;
    iVar1 = fn_82814D10(param_1);
    if (iVar1 != 0) {
      fn_82820EF8((int *)(param_1 + 0x28),4);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    puVar6 = puVar6 + 1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 **)(param_1 + 0x44) = puVar6;
    }
    else {
      *(undefined4 **)(param_1 + 0x2c) = puVar6;
      *(int *)(param_1 + 0x44) = (int)puVar6 + iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar1 + 0x70);
    *(int *)(param_1 + 0x48) = iVar5;
    iVar5 = *(int *)(iVar1 + 0x2c) * 0x14 + iVar5;
    *(int *)(param_1 + 0x4c) = iVar5;
    iVar5 = *(int *)(iVar1 + 0x30) * 4 + iVar5;
    *(int *)(param_1 + 0x50) = iVar5;
    iVar5 = *(int *)(iVar1 + 0x3c) * 0x14 + iVar5;
    *(int *)(param_1 + 0x54) = iVar5;
    iVar5 = *(int *)(iVar1 + 0x40) * 4 + iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    iVar5 = *(int *)(iVar1 + 0x34) * 0xc + iVar5;
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar5 = *(int *)(iVar1 + 0x38) * 4 + iVar5;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 100) = *(int *)(iVar1 + 0x44) * 0xc + iVar5;
    iVar1 = fn_82814D10(param_1);
    if ((iVar1 != 0) && (param_3 == '\0')) {
      if ((*(int *)(param_1 + 0x3c) != 0) &&
         (uVar2 = 0, *(int *)(*(int *)(param_1 + 0x1c) + 0x24) != 0)) {
        lVar3 = 0;
        do {
          fn_82820EF8(lVar3 + (ulonglong)*(uint *)(param_1 + 0x3c),4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 4;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x24));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x28) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8(lVar3 + (ulonglong)*(uint *)(param_1 + 0x44),4);
          fn_82820EF8(lVar3 + (ulonglong)*(uint *)(param_1 + 0x44) + 0xc,1);
          fn_82820EF8(lVar3 + (ulonglong)*(uint *)(param_1 + 0x44) + 8,4);
          fn_82820EF8(lVar3 + (ulonglong)*(uint *)(param_1 + 0x44) + 4,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0xe;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x28));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x48) + lVar3,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x48) + lVar3 + 0xc,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x48) + lVar3 + 4,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x48) + lVar3 + 0x10,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x48) + lVar3 + 8,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0x14;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x2c));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x30) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x4c) + lVar3,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 4;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x30));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x50) + lVar3,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x50) + lVar3 + 0xc,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x50) + lVar3 + 4,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x50) + lVar3 + 0x10,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x50) + lVar3 + 8,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0x14;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x3c));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x40) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x54) + lVar3,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 4;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x40));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x34) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x58) + lVar3,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x58) + lVar3 + 4,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x58) + lVar3 + 8,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0xc;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x34));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x5c) + lVar3,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 4;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x38));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x44) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x60) + lVar3,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x60) + lVar3 + 4,4);
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 0x60) + lVar3 + 8,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 0xc;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x44));
      }
      uVar2 = 0;
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x48) != 0) {
        lVar3 = 0;
        do {
          fn_82820EF8((ulonglong)*(uint *)(param_1 + 100) + lVar3,4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 4;
        } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x48));
      }
    }
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0') {
      iVar1 = 0;
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x30) + iVar1 + 5);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 0x74) =
               *(undefined4 *)(iVar5 * 0xe + *(int *)(param_1 + 0x44) + -0xe);
          return;
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x21;
      } while (uVar2 < *(byte *)(*(int *)(param_1 + 0x1c) + 0x51));
    }
  }
  return;
}

