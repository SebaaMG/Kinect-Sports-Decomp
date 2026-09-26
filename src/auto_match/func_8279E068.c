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
extern int fn_8279B108();
extern int fn_8279D8C0();


void fn_8279E068(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  
  piVar10 = (int *)*param_1;
  if (piVar10 == (int *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((uint)(*piVar10 * 5) <= (uint)((piVar10[1] + 1) * 4)) goto LAB_8279e0c4;
    lVar6 = ((ulonglong)(uint)piVar10[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8279D8C0(param_1,param_2,lVar6);
LAB_8279e0c4:
  piVar10 = (int *)*param_1;
  param_4 = piVar10[1] & param_4;
  *piVar10 = *piVar10 + 1;
  iVar1 = *param_1;
  iVar8 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar8 + 8);
  puVar12 = (uint *)(iVar8 + 8);
  uVar11 = param_4;
  if (iVar2 == -2) {
    *puVar12 = 0xffffffff;
    *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)*param_3;
    piVar10 = (int *)param_3[1];
    piVar3 = (int *)*piVar10;
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    *(int *)(iVar8 + 0x10) = *piVar10;
  }
  else {
    do {
      uVar11 = uVar11 + 1 & *(uint *)(iVar1 + 4);
      iVar9 = uVar11 * 0xc + iVar1;
      piVar10 = (int *)(iVar9 + 8);
    } while (*piVar10 != -2);
    puVar5 = (undefined4 *)(iVar8 + 0xc);
    uVar4 = *(uint *)(iVar8 + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar4 == param_4) {
      if (piVar10 != (int *)0x0) {
        *piVar10 = iVar2;
        *(undefined4 *)(iVar9 + 0xc) = *puVar5;
        piVar10 = *(int **)(iVar8 + 0x10);
        if (piVar10 != (int *)0x0) {
          *piVar10 = *piVar10 + 1;
        }
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      }
      fn_8279B108(puVar5,param_3);
      *puVar12 = uVar11;
    }
    else {
      while (puVar7 = (uint *)(uVar4 * 0xc + iVar1 + 8), *puVar7 != param_4) {
        uVar4 = *puVar7;
      }
      if (piVar10 != (int *)0x0) {
        *piVar10 = iVar2;
        *(undefined4 *)(iVar9 + 0xc) = *puVar5;
        piVar10 = *(int **)(iVar8 + 0x10);
        if (piVar10 != (int *)0x0) {
          *piVar10 = *piVar10 + 1;
        }
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      }
      *puVar7 = uVar11;
      fn_8279B108(puVar5,param_3);
      *puVar12 = 0xffffffff;
    }
  }
  return;
}

