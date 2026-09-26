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


void fn_82D01B18(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(undefined4 *)(param_1 + 0x20) = puVar1[2];
    *(int *)(param_1 + 0x24) = puVar1[3] * *(int *)(param_1 + 4) + puVar1[2];
    *puVar1 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 0xc) = puVar1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 4);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar7 = 0x100 / (ulonglong)uVar2;
    iVar8 = (int)uVar7;
    trapWord(6,(ulonglong)uVar2,0);
    if (uVar7 == 0) {
      iVar8 = 1;
    }
    if (*(uint *)(param_1 + 0x18) < 0x11) {
      iVar8 = uVar2 * iVar8 + 0x10;
    }
    else {
      iVar8 = *(uint *)(param_1 + 0x18) + uVar2 * iVar8;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x1c) <= uVar2) goto LAB_82d01c28;
    uVar3 = *(uint *)(param_1 + 4);
    uVar7 = (ulonglong)uVar2 / (ulonglong)uVar3;
    trapWord(6,(ulonglong)uVar3,0);
    if (uVar7 < 8) {
      iVar8 = 8;
    }
    else {
      uVar2 = (uint)uVar7;
      iVar8 = (uVar2 >> 1) + uVar2;
    }
    if (*(uint *)(param_1 + 0x18) < 0x11) {
      iVar8 = uVar3 * iVar8 + 0x10;
    }
    else {
      iVar8 = uVar3 * iVar8 + *(uint *)(param_1 + 0x18);
    }
  }
  *(int *)(param_1 + 0x14) = iVar8;
LAB_82d01c28:
  uVar7 = (**(code **)(**(int **)(param_1 + 0x30) + 4))
                    (*(int **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14));
  if ((uVar7 & 0xffffffff) != 0) {
    lVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x10))
                      (*(int **)(param_1 + 0x30),uVar7,*(undefined4 *)(param_1 + 0x14));
    puVar1 = (undefined4 *)uVar7;
    puVar1[1] = (int)lVar4;
    uVar5 = *(uint *)(param_1 + 0x18) + uVar7 + 0xf & ~((ulonglong)*(uint *)(param_1 + 0x18) - 1);
    uVar6 = (undefined4)uVar5;
    puVar1[2] = uVar6;
    trapWord(6,(ulonglong)*(uint *)(param_1 + 4),0);
    puVar1[3] = (int)(((lVar4 - uVar5) + uVar7 & 0xffffffff) / (ulonglong)*(uint *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x20) = uVar6;
    *(int *)(param_1 + 0x24) = puVar1[3] * *(int *)(param_1 + 4) + puVar1[2];
    *puVar1 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 0xc) = puVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + puVar1[3];
    iVar8 = puVar1[3];
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 4);
    *(int *)(param_1 + 0x28) = iVar8 + *(int *)(param_1 + 0x28) + -1;
  }
  return;
}

