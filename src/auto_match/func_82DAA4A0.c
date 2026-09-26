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
extern int fn_82F68B70();


undefined8 fn_82DAA4A0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  puVar3 = (undefined4 *)(param_3 + -4);
  puVar4 = (undefined4 *)(param_4 + 8);
  lVar9 = 8;
  do {
    puVar4[-2] = puVar3[1];
    puVar4[-1] = puVar3[2];
    *puVar4 = *(undefined4 *)(((int)param_3 - param_4) + (int)puVar4);
    puVar3 = puVar3 + 4;
    puVar4[1] = *puVar3;
    puVar4 = puVar4 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar6 = **(int **)(param_3 + 0x1c);
  *(undefined4 *)(param_4 + 0x14) =
       *(undefined4 *)((uint)*(ushort *)(param_4 + 0x10) * 4 + *(int *)(iVar6 + 0x28));
  switch(*param_3) {
  case 0:
    if (1 < *(int *)(param_3 + 0x20)) {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + -1;
      *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
      *(undefined4 *)(param_4 + 0x20) = 1;
      return 1;
    }
    break;
  case 1:
    if (0x80 < *(ushort *)(param_3 + 0x26)) {
      *(ushort *)(param_3 + 0x26) = *(ushort *)(param_3 + 0x26) - 0x80;
      *(short *)(param_3 + 0x24) = *(short *)(param_3 + 0x24) + 0x80;
      *(undefined2 *)(param_4 + 0x26) = 0x80;
      return 1;
    }
    break;
  case 3:
  case 6:
  case 0xe:
    puVar8 = (undefined8 *)(param_3 + -8);
    puVar7 = (undefined8 *)(param_4 + -8);
    lVar9 = 0x10;
    do {
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    break;
  case 4:
  case 10:
    if (**(int **)(param_3 + 0x20) != 0) {
      *(int *)(param_3 + 0x20) = **(int **)(param_3 + 0x20);
      return 1;
    }
    break;
  case 7:
    uVar5 = *(int *)(param_3 + 0x20) + 0x4000;
    if (uVar5 < *(uint *)(param_3 + 0x24)) {
      *(uint *)(param_3 + 0x20) = uVar5;
      *(uint *)(param_4 + 0x24) = uVar5;
      return 1;
    }
    break;
  case 8:
    if (*(char *)(*(undefined4 **)(param_3 + 0x2c) + 7) == '\0') {
      *(undefined4 *)(param_3 + 0x2c) = **(undefined4 **)(param_3 + 0x2c);
      return 1;
    }
    break;
  case 9:
    if (*(int *)(param_3 + 0x20) + 0x4000U < *(uint *)(param_3 + 0x24)) {
      iVar6 = *(int *)(param_3 + 0x20) + 0x4000;
      *(int *)(param_3 + 0x20) = iVar6;
      *(int *)(param_4 + 0x24) = iVar6;
      return 1;
    }
    break;
  case 0xb:
    if (0x80 < *(ushort *)(param_3 + 0x34)) {
      *(ushort *)(param_3 + 0x34) = *(ushort *)(param_3 + 0x34) - 0x80;
      *(short *)(param_3 + 0x36) = *(short *)(param_3 + 0x36) + 0x80;
      *(undefined2 *)(param_4 + 0x34) = 0x80;
      return 1;
    }
    if (*(int *)(param_3 + 0x20) != 0) {
      *param_3 = 10;
      return 1;
    }
    break;
  case 0xc:
    uVar2 = fn_82F68B70(param_3,iVar6 + 0x28,param_4);
    return uVar2;
  case 0xd:
    uVar1 = *(ushort *)(param_3 + 0x2a);
    if (uVar1 < *(ushort *)(param_3 + 0x28)) {
      *(ushort *)(param_3 + 0x28) = *(ushort *)(param_3 + 0x28) - uVar1;
      *(uint *)(param_3 + 0x40) = (uint)uVar1 + *(int *)(param_3 + 0x40);
      *(short *)(param_3 + 0x24) = *(short *)(param_3 + 0x24) + 1;
      *(ushort *)(param_4 + 0x28) = uVar1;
      *(undefined2 *)(param_4 + 0x44) = 0x200;
      return 1;
    }
    break;
  case 0xf:
    uVar1 = *(ushort *)(param_3 + 0x2a);
    if (uVar1 < *(ushort *)(param_3 + 0x28)) {
      *(ushort *)(param_3 + 0x28) = *(ushort *)(param_3 + 0x28) - uVar1;
      *(short *)(param_3 + 0x24) = *(short *)(param_3 + 0x24) + 1;
      *(ushort *)(param_4 + 0x28) = uVar1;
      return 1;
    }
  }
  return 0;
}

