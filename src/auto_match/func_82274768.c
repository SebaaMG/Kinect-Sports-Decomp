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


void fn_82274768(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    do {
      iVar5 = 0;
      if (*(int **)(param_1 + 0x44) != (int *)0x0) {
        iVar5 = **(int **)(param_1 + 0x44);
      }
      uVar9 = *(uint *)(param_1 + 0x50) >> 2;
      if (*(uint *)(iVar5 + 8) <= uVar9) {
        uVar9 = uVar9 - *(uint *)(iVar5 + 8);
      }
      puVar3 = *(undefined4 **)
                (*(int *)(*(int *)(iVar5 + 4) + uVar9 * 4) + (*(uint *)(param_1 + 0x50) & 3) * 4);
      piVar7 = *(int **)(param_1 + 0x24);
      if (*(int **)(param_1 + 0x24) != *(int **)(param_1 + 0x28)) {
LAB_822747e8:
        piVar8 = piVar7 + 2;
        if ((undefined4 *)*piVar7 != puVar3) goto code_r0x822747f8;
        piVar1 = *(int **)(param_1 + 0x28);
        if (piVar8 != piVar1) {
          piVar7 = piVar7 + -2;
          do {
            piVar7[2] = *piVar8;
            piVar4 = piVar8 + 1;
            piVar8 = piVar8 + 2;
            piVar7[3] = *piVar4;
            piVar7 = piVar7 + 2;
          } while (piVar8 != piVar1);
        }
        iVar2 = *(int *)(param_1 + 0x28);
        for (iVar5 = iVar2 + -8; iVar5 != iVar2; iVar5 = iVar5 + 8) {
        }
        *(int *)(param_1 + 0x28) = iVar2 + -8;
        *(undefined4 *)(param_1 + 0x18) = 1;
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
LAB_8227487c:
      if ((ulonglong)*(uint *)(param_1 + 0x54) != 0) {
        uVar9 = *(int *)(param_1 + 0x50) + 1;
        *(uint *)(param_1 + 0x50) = uVar9;
        if ((uint)(*(int *)(param_1 + 0x4c) << 2) <= uVar9) {
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
        lVar6 = (ulonglong)*(uint *)(param_1 + 0x54) - 1;
        *(int *)(param_1 + 0x54) = (int)lVar6;
        if (lVar6 == 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
    } while (*(int *)(param_1 + 0x54) != 0);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar5 = 0;
      if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
        iVar5 = **(int **)(param_1 + 0x5c);
      }
      uVar9 = *(uint *)(param_1 + 0x68) >> 2;
      if (*(uint *)(iVar5 + 8) <= uVar9) {
        uVar9 = uVar9 - *(uint *)(iVar5 + 8);
      }
      puVar3 = *(undefined4 **)
                (*(int *)(*(int *)(iVar5 + 4) + uVar9 * 4) + (*(uint *)(param_1 + 0x68) & 3) * 4);
      piVar7 = *(int **)(param_1 + 0x34);
      if (*(int **)(param_1 + 0x34) != *(int **)(param_1 + 0x38)) {
LAB_8227492c:
        piVar8 = piVar7 + 2;
        if ((undefined4 *)*piVar7 != puVar3) goto code_r0x8227493c;
        piVar1 = *(int **)(param_1 + 0x38);
        if (piVar8 != piVar1) {
          piVar7 = piVar7 + -2;
          do {
            piVar7[2] = *piVar8;
            piVar4 = piVar8 + 1;
            piVar8 = piVar8 + 2;
            piVar7[3] = *piVar4;
            piVar7 = piVar7 + 2;
          } while (piVar8 != piVar1);
        }
        iVar2 = *(int *)(param_1 + 0x38);
        for (iVar5 = iVar2 + -8; iVar5 != iVar2; iVar5 = iVar5 + 8) {
        }
        *(int *)(param_1 + 0x38) = iVar2 + -8;
        *(undefined4 *)(param_1 + 0x18) = 1;
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
LAB_822749c0:
      if ((ulonglong)*(uint *)(param_1 + 0x6c) != 0) {
        uVar9 = *(int *)(param_1 + 0x68) + 1;
        *(uint *)(param_1 + 0x68) = uVar9;
        if ((uint)(*(int *)(param_1 + 100) << 2) <= uVar9) {
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
        lVar6 = (ulonglong)*(uint *)(param_1 + 0x6c) - 1;
        *(int *)(param_1 + 0x6c) = (int)lVar6;
        if (lVar6 == 0) {
          *(undefined4 *)(param_1 + 0x68) = 0;
        }
      }
    } while (*(int *)(param_1 + 0x6c) != 0);
  }
  return;
code_r0x822747f8:
  piVar7 = piVar8;
  if (piVar8 == *(int **)(param_1 + 0x28)) goto LAB_8227487c;
  goto LAB_822747e8;
code_r0x8227493c:
  piVar7 = piVar8;
  if (piVar8 == *(int **)(param_1 + 0x38)) goto LAB_822749c0;
  goto LAB_8227492c;
}

