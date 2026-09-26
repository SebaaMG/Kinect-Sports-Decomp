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
extern int fn_82CE5410();
extern int fn_82CE6460();
extern int fn_82D7C4B0();


void fn_82D7D078(undefined8 param_1,undefined1 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  ushort *puVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  
  switch(*param_2) {
  case 2:
  case 6:
  case 10:
  case 0xe:
    puVar7 = param_2 + 0x20;
    break;
  default:
    goto LAB_82d7d120;
  case 4:
  case 0xc:
    puVar7 = param_2 + 0x30;
  }
  (**(code **)((uint)(byte)param_2[1] * 0x50 + param_3 + 0x16b4))
            (param_2,puVar7,*(undefined4 *)(param_2 + 8));
LAB_82d7d120:
  puVar12 = (ushort *)(param_2 + 4);
  piVar13 = (int *)(param_2 + 0x10);
  lVar11 = 2;
  do {
    iVar2 = *piVar13;
    uVar1 = *puVar12;
    piVar14 = (int *)(iVar2 + 0x50);
    uVar8 = *(int *)(iVar2 + 0x54) - 1;
    *(uint *)(iVar2 + 0x54) = uVar8;
    if (uVar8 != uVar1) {
      puVar9 = (undefined4 *)((uint)uVar1 * 8 + *piVar14);
      iVar6 = (uVar8 * 8 + *piVar14) - (int)puVar9;
      lVar15 = 2;
      do {
        *puVar9 = *(undefined4 *)(iVar6 + (int)puVar9);
        puVar9 = puVar9 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if ((int)(uint)uVar1 < *(int *)(iVar2 + 0x54)) {
      iVar6 = *(int *)((uint)uVar1 * 8 + *piVar14);
      *(ushort *)((3 - (uint)(iVar2 == *(int *)(iVar6 + 0x10))) * 2 + iVar6) = uVar1;
    }
    iVar6 = fn_82CE5410();
    uVar10 = *(int *)(iVar2 + 0x54) + 3;
    uVar8 = uVar10 >> 0x10;
    uVar3 = (uVar8 | uVar10) >> 8;
    uVar4 = (uVar3 | uVar8 | uVar10) >> 4;
    uVar5 = (uVar4 | uVar3 | uVar8 | uVar10) >> 2;
    if ((int)(((uVar5 | uVar4 | uVar3 | uVar8 | uVar10) >> 1 |
              uVar5 | uVar4 | (uVar8 | uVar10) >> 8 | uVar10 >> 0x10 | uVar10) + 1) <
        (int)(*(uint *)(iVar2 + 0x58) & 0x3fffffff)) {
      fn_82CE6460(*(undefined4 *)(iVar6 + 0x10),piVar14,8,0);
    }
    lVar11 = lVar11 + -1;
    piVar13 = piVar13 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar11 != 0);
  fn_82D7C4B0(param_1,param_2);
  return;
}

