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
extern int fn_8279B1F8();
extern int fn_8279D8C0();


void fn_8279DE58(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  
  piVar9 = (int *)*param_1;
  if (piVar9 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar9 * 5) <= (uint)((piVar9[1] + 1) * 4)) goto LAB_8279deb4;
    lVar5 = ((ulonglong)(uint)piVar9[1] + 1 & 0x7fffffff) << 1;
  }
  fn_8279D8C0(param_1,param_2,lVar5);
LAB_8279deb4:
  piVar9 = (int *)*param_1;
  param_4 = piVar9[1] & param_4;
  *piVar9 = *piVar9 + 1;
  iVar1 = *param_1;
  iVar7 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar7 + 8);
  puVar11 = (uint *)(iVar7 + 8);
  uVar10 = param_4;
  if (iVar2 == -2) {
    *puVar11 = 0xffffffff;
    *(undefined4 *)(iVar7 + 0xc) = *param_3;
    piVar9 = (int *)param_3[1];
    if (piVar9 != (int *)0x0) {
      *piVar9 = *piVar9 + 1;
    }
    *(undefined4 *)(iVar7 + 0x10) = param_3[1];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & *(uint *)(iVar1 + 4);
      iVar8 = uVar10 * 0xc + iVar1;
      piVar9 = (int *)(iVar8 + 8);
    } while (*piVar9 != -2);
    puVar4 = (undefined4 *)(iVar7 + 0xc);
    uVar3 = *(uint *)(iVar7 + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar9 != (int *)0x0) {
        *piVar9 = iVar2;
        *(undefined4 *)(iVar8 + 0xc) = *puVar4;
        piVar9 = *(int **)(iVar7 + 0x10);
        if (piVar9 != (int *)0x0) {
          *piVar9 = *piVar9 + 1;
        }
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
      }
      fn_8279B1F8(puVar4,param_3);
      *puVar11 = uVar10;
    }
    else {
      while (puVar6 = (uint *)(uVar3 * 0xc + iVar1 + 8), *puVar6 != param_4) {
        uVar3 = *puVar6;
      }
      if (piVar9 != (int *)0x0) {
        *piVar9 = iVar2;
        *(undefined4 *)(iVar8 + 0xc) = *puVar4;
        piVar9 = *(int **)(iVar7 + 0x10);
        if (piVar9 != (int *)0x0) {
          *piVar9 = *piVar9 + 1;
        }
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
      }
      *puVar6 = uVar10;
      fn_8279B1F8(puVar4,param_3);
      *puVar11 = 0xffffffff;
    }
  }
  return;
}

