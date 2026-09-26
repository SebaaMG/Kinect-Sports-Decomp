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
extern int fn_82490EA0();


void fn_8248FAB0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x1c);
  uVar3 = fn_82490EA0(-(double)*(float *)(param_1 + 0x24),param_2,uVar6);
  *(int *)(param_1 + 0x34) = (int)uVar3;
  uVar4 = fn_82490EA0((double)*(float *)(param_1 + 0x28),param_2,*(undefined4 *)(param_1 + 0x20));
  iVar5 = (int)uVar4;
  *(int *)(param_1 + 0x38) = iVar5;
  iVar1 = (int)param_2;
  if ((int)uVar3 == -1) {
    if (iVar5 == -1) {
      for (puVar9 = *(uint **)(iVar1 + 4); puVar9 != *(uint **)(iVar1 + 8); puVar9 = puVar9 + 2) {
        uVar10 = *puVar9;
        if ((uVar6 & 0xffffffff) < (ulonglong)uVar10) goto LAB_8248fb3c;
      }
      uVar10 = 0xffffffff;
LAB_8248fb3c:
      *(uint *)(param_1 + 0x34) = uVar10;
      if (uVar10 == 0xffffffff) {
        if (*(undefined4 **)(iVar1 + 4) == *(undefined4 **)(iVar1 + 8)) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = **(undefined4 **)(iVar1 + 4);
        }
        *(undefined4 *)(param_1 + 0x34) = uVar11;
      }
      iVar5 = *(int *)(param_1 + 0x34);
      for (piVar12 = *(int **)(iVar1 + 4);
          (iVar2 = iVar5, piVar12 != *(int **)(iVar1 + 8) && (*piVar12 != iVar5));
          piVar12 = piVar12 + 2) {
      }
      do {
        iVar8 = iVar2;
        piVar12 = piVar12 + 2;
        if (piVar12 == *(int **)(iVar1 + 8)) break;
        iVar2 = *piVar12;
        iVar5 = iVar8;
      } while (iVar8 + 1 == *piVar12);
      *(int *)(param_1 + 0x38) = iVar5;
    }
    else {
      for (puVar9 = *(uint **)(iVar1 + 4);
          (uVar3 = uVar4, puVar9 != *(uint **)(iVar1 + 8) &&
          ((ulonglong)*puVar9 != (uVar4 & 0xffffffff))); puVar9 = puVar9 + 2) {
      }
      do {
        uVar11 = (undefined4)uVar4;
        puVar9 = puVar9 + -2;
        if (puVar9 == *(uint **)(iVar1 + 4)) break;
        uVar11 = (undefined4)uVar3;
        uVar6 = uVar3 - 1;
        uVar4 = uVar3;
        uVar3 = (ulonglong)*puVar9;
      } while ((uVar6 & 0xffffffff) == (ulonglong)*puVar9);
      *(undefined4 *)(param_1 + 0x34) = uVar11;
    }
  }
  else {
    for (puVar9 = *(uint **)(iVar1 + 4);
        (uVar6 = uVar3, puVar9 != *(uint **)(iVar1 + 8) &&
        ((ulonglong)*puVar9 != (uVar3 & 0xffffffff))); puVar9 = puVar9 + 2) {
    }
    do {
      uVar7 = uVar6;
      puVar9 = puVar9 + 2;
      if (puVar9 == *(uint **)(iVar1 + 8)) break;
      uVar6 = (ulonglong)*puVar9;
      uVar3 = uVar7;
    } while ((uVar7 + 1 & 0xffffffff) == (ulonglong)*puVar9);
    if ((iVar5 == -1) || ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff))) {
      *(int *)(param_1 + 0x38) = (int)uVar3;
    }
  }
  return;
}

