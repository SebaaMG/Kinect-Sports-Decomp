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


void fn_826905F8(uint *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_2;
  iVar1 = param_2[5];
  if (piVar5 == param_2) {
    piVar5 = (int *)param_2[7];
    puVar3 = (uint *)(param_2 + 7);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)param_2[6];
      puVar3 = (uint *)(param_2 + 6);
      if (piVar5 == (int *)0x0) goto LAB_8269066c;
    }
    while ((puVar4 = (uint *)((int)piVar5 + 0x1c), *(int *)((int)piVar5 + 0x1c) != 0 ||
           (puVar4 = (uint *)((int)piVar5 + 0x18), *(int *)((int)piVar5 + 0x18) != 0))) {
      puVar3 = puVar4;
      piVar5 = (int *)*puVar4;
    }
    *puVar3 = 0;
  }
  else {
    piVar2 = (int *)param_2[1];
    *piVar2 = (int)piVar5;
    piVar5[1] = (int)piVar2;
  }
LAB_8269066c:
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == (int *)param_1[param_2[8] + 1]) {
    param_1[param_2[8] + 1] = (uint)piVar5;
    if (piVar5 == (int *)0x0) {
      *param_1 = *param_1 & ~(1 << (param_2[8] & 0x3fU));
      return;
    }
  }
  else {
    *(int **)((7 - (uint)(param_2 == *(int **)(iVar1 + 0x18))) * 4 + iVar1) = piVar5;
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  *(int *)((int)piVar5 + 0x14) = iVar1;
  iVar1 = param_2[6];
  if (iVar1 != 0) {
    *(int *)((int)piVar5 + 0x18) = iVar1;
    *(int **)(iVar1 + 0x14) = piVar5;
  }
  iVar1 = param_2[7];
  if (iVar1 == 0) {
    return;
  }
  *(int *)((int)piVar5 + 0x1c) = iVar1;
  *(int **)(iVar1 + 0x14) = piVar5;
  return;
}

