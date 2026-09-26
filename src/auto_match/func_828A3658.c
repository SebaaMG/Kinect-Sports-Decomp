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
extern int fn_825089A0();
extern int fn_82F622A8();


void fn_828A3658(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (0xfffffff - uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff821a8018);
  }
  uVar6 = uVar1 >> 1;
  if (uVar6 < 8) {
    uVar6 = 8;
  }
  if ((param_2 < uVar6) && (uVar1 <= 0xfffffff - uVar6)) {
    param_2 = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0xc) >> 2;
  piVar3 = (int *)fn_825089A0();
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x24))(piVar3,uVar1 + param_2 & 0x3fffffff,1);
  iVar9 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  puVar7 = puVar4 + uVar6;
  for (puVar8 = (undefined4 *)(uVar6 * 4 + iVar2); puVar8 != (undefined4 *)(iVar9 * 4 + iVar2);
      puVar8 = puVar8 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar8;
    }
    puVar7 = puVar7 + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 4);
  if (param_2 < uVar6) {
    puVar5 = puVar8 + param_2;
    for (; puVar8 != puVar5; puVar8 = puVar8 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar8;
      }
      puVar7 = puVar7 + 1;
    }
    iVar9 = *(int *)(param_1 + 4);
    puVar7 = puVar4;
    for (puVar8 = (undefined4 *)(param_2 * 4 + iVar9); uVar1 = param_2,
        puVar8 != (undefined4 *)(uVar6 * 4 + iVar9); puVar8 = puVar8 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar8;
      }
      puVar7 = puVar7 + 1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
    }
  }
  else {
    puVar5 = puVar8 + uVar6;
    for (; puVar8 != puVar5; puVar8 = puVar8 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar8;
      }
      puVar7 = puVar7 + 1;
    }
    for (iVar9 = param_2 - uVar6; puVar8 = puVar4, iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  iVar9 = *(int *)(param_1 + 4);
  if (iVar9 != 0) {
    piVar3 = (int *)fn_825089A0();
    (**(code **)(*piVar3 + 0x28))(piVar3,iVar9);
  }
  *(undefined4 **)(param_1 + 4) = puVar4;
  *(uint *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8);
  return;
}

