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


void fn_8239D518(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar9 = param_1 + 0x8d4;
    iVar7 = 0;
    iVar3 = param_2 * 2;
    lVar11 = 2;
    do {
      iVar4 = iVar3 + iVar7;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 * 0xb0 + iVar9;
      *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = 0;
    iVar7 = (uint)(param_2 == 0) * 2;
    lVar11 = 2;
    do {
      iVar8 = iVar7 + iVar4;
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 * 0xb0 + iVar9;
      *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
    if ((iVar4 == 0) && (*(int *)(*(int *)(param_1 + 0x2e0) + 0xc) == param_2)) {
      iVar4 = 0;
      lVar11 = 2;
      do {
        iVar8 = iVar3 + iVar4;
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 * 0xb0 + iVar9;
        *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    uVar10 = 0;
    piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
    if (*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0) {
      do {
        iVar9 = (iVar3 + uVar10) * 0xb0 + param_1;
        uVar1 = *(uint *)(iVar9 + 0x8e4);
        uVar5 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
        if (uVar1 < uVar5) {
          uVar6 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
          *(undefined4 *)(iVar9 + 0x8e4) = uVar6;
          uVar6 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x3c))();
          *(undefined4 *)((iVar7 + uVar10) * 0xb0 + param_1 + 0x8e4) = uVar6;
        }
        uVar10 = uVar10 + 1;
        piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
      } while (uVar10 < *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
    }
  }
  return;
}

