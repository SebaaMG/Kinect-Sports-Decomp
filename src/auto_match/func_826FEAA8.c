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
extern int fn_826F8678();
extern int fn_826FDD68();


void fn_826FEAA8(int *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  
  piVar7 = (int *)*param_1;
  if (piVar7 == (int *)0x0) {
    lVar5 = 8;
  }
  else {
    if ((uint)(*piVar7 * 5) <= (uint)((piVar7[1] + 1) * 4)) goto LAB_826feb04;
    lVar5 = ((ulonglong)(uint)piVar7[1] + 1 & 0x7fffffff) << 1;
  }
  fn_826FDD68(param_1,param_2,lVar5);
LAB_826feb04:
  piVar7 = (int *)*param_1;
  param_4 = piVar7[1] & param_4;
  *piVar7 = *piVar7 + 1;
  iVar1 = *param_1;
  iVar8 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar8 + 8);
  puVar11 = (uint *)(iVar8 + 8);
  uVar10 = param_4;
  if (iVar2 == -2) {
    *puVar11 = 0xffffffff;
    iVar1 = *param_3;
    *(int *)(iVar8 + 0xc) = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar8 + 0x10) = param_3[1];
  }
  else {
    do {
      uVar10 = uVar10 + 1 & *(uint *)(iVar1 + 4);
      iVar6 = uVar10 * 0xc + iVar1;
      piVar7 = (int *)(iVar6 + 8);
    } while (*piVar7 != -2);
    piVar4 = (int *)(iVar8 + 0xc);
    uVar3 = *(uint *)(*(int *)(iVar8 + 0xc) + 0xc) & *(uint *)(iVar1 + 4);
    if (uVar3 == param_4) {
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar6 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      }
      fn_826F8678(piVar4,param_3);
      *puVar11 = uVar10;
    }
    else {
      while (puVar9 = (uint *)(uVar3 * 0xc + iVar1 + 8), *puVar9 != param_4) {
        uVar3 = *puVar9;
      }
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
        iVar1 = *piVar4;
        *(int *)(iVar6 + 0xc) = iVar1;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x10);
      }
      *puVar9 = uVar10;
      fn_826F8678(piVar4,param_3);
      *puVar11 = 0xffffffff;
    }
  }
  return;
}

