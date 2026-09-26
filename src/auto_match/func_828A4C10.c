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
extern int fn_828A4240();


void fn_828A4C10(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar6;
  ulonglong uVar5;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x240);
  fn_828A4240(piVar7,4);
  piVar3 = (int *)0x0;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*piVar7, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar6 = *(uint *)(param_1 + 0x24c) >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar6) {
    uVar6 = uVar6 - *(uint *)(iVar4 + 8);
  }
  piVar3 = (int *)0x0;
  *(undefined4 *)(*(int *)(uVar6 * 4 + *(int *)(iVar4 + 4)) + (*(uint *)(param_1 + 0x24c) & 3) * 4)
       = 0;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*piVar7, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x24c) + 1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar4 + 8);
  }
  piVar3 = (int *)0x0;
  *(undefined4 *)
   (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) + (int)((uVar2 & 3) << 2)) = 1;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*piVar7, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x24c) + 2;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar4 + 8);
  }
  piVar3 = (int *)0x0;
  *(undefined4 *)
   (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) + (int)((uVar2 & 3) << 2)) = 2;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*piVar7, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x24c) + 3;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar4 + 8);
  }
  *(undefined4 *)
   (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) + (int)((uVar2 & 3) << 2)) = 3;
  return;
}

