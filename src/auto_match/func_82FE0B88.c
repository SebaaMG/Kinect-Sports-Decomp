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
extern int fn_82FE0080();
extern int fn_82FE0190();
extern int fn_82FE02A0();
extern unsigned int lbl_821AAD20;


undefined8 fn_82FE0B88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (*(char *)(param_1 + 0x170) != '\0') {
    iVar2 = *(int *)(param_1 + 0x158);
    *(undefined1 *)(param_1 + 0xcd) = 0;
    if (iVar2 == 1) {
      uVar8 = (uint)*(byte *)(param_1 + 0xd0);
    }
    else if ((1 < iVar2) && (iVar2 < 4)) {
      uVar8 = 1;
    }
    iVar2 = *(int *)(param_1 + 0x160);
    *(char *)(param_1 + 0xce) = (char)uVar8;
    if (iVar2 == 1) {
      uVar8 = *(byte *)(param_1 + 0xd0) + uVar8;
    }
    else if ((1 < iVar2) && (iVar2 < 4)) {
      uVar8 = uVar8 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x168);
    *(char *)(param_1 + 0xcf) = (char)uVar8;
    if (iVar2 == 1) {
      uVar8 = *(byte *)(param_1 + 0xd0) + uVar8;
    }
    else if ((1 < iVar2) && (iVar2 < 4)) {
      uVar8 = uVar8 + 1;
    }
  }
  *(char *)(param_1 + 0xcc) = (char)uVar8;
  if (uVar8 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1a0) + 4))(*(int **)(param_1 + 0x1a0),uVar8 * 0x28);
    *(int *)(param_1 + 0xd8) = iVar2;
    uVar1 = lbl_821AAD20;
    if (iVar2 == 0) {
      return 0x34;
    }
    uVar3 = 0;
    if (3 < uVar8) {
      lVar4 = 0;
      do {
        lVar6 = lVar4 + (ulonglong)*(uint *)(param_1 + 0xd8);
        if (lVar6 != 0) {
          iVar2 = (int)lVar6;
          *(undefined4 *)(iVar2 + 0x14) = uVar1;
          *(undefined4 *)(iVar2 + 0x18) = uVar1;
          *(undefined4 *)(iVar2 + 0x1c) = uVar1;
          *(undefined4 *)(iVar2 + 0x20) = uVar1;
        }
        lVar6 = lVar4 + (ulonglong)*(uint *)(param_1 + 0xd8);
        if (lVar6 != -0x28) {
          iVar2 = (int)lVar6;
          *(undefined4 *)(iVar2 + 0x3c) = uVar1;
          *(undefined4 *)(iVar2 + 0x40) = uVar1;
          *(undefined4 *)(iVar2 + 0x44) = uVar1;
          *(undefined4 *)(iVar2 + 0x48) = uVar1;
        }
        lVar6 = lVar4 + 0x78 + (ulonglong)*(uint *)(param_1 + 0xd8);
        if (lVar6 != 0x28) {
          iVar2 = (int)lVar6;
          *(undefined4 *)(iVar2 + -0x14) = uVar1;
          *(undefined4 *)(iVar2 + -0x10) = uVar1;
          *(undefined4 *)(iVar2 + -0xc) = uVar1;
          *(undefined4 *)(iVar2 + -8) = uVar1;
        }
        lVar6 = lVar4 + 0x78 + (ulonglong)*(uint *)(param_1 + 0xd8);
        if (lVar6 != 0) {
          iVar2 = (int)lVar6;
          *(undefined4 *)(iVar2 + 0x14) = uVar1;
          *(undefined4 *)(iVar2 + 0x18) = uVar1;
          *(undefined4 *)(iVar2 + 0x1c) = uVar1;
          *(undefined4 *)(iVar2 + 0x20) = uVar1;
        }
        uVar3 = uVar3 + 4;
        lVar4 = lVar4 + 0xa0;
      } while (uVar3 < uVar8 - 3);
    }
    if (uVar3 < uVar8) {
      iVar2 = uVar8 - uVar3;
      iVar5 = uVar3 * 0x28;
      do {
        iVar7 = iVar5 + *(int *)(param_1 + 0xd8);
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x14) = uVar1;
          *(undefined4 *)(iVar7 + 0x18) = uVar1;
          *(undefined4 *)(iVar7 + 0x1c) = uVar1;
          *(undefined4 *)(iVar7 + 0x20) = uVar1;
        }
        iVar5 = iVar5 + 0x28;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  fn_82FE0080(param_1);
  fn_82FE0190(param_1);
  fn_82FE02A0(param_1);
  return 1;
}

