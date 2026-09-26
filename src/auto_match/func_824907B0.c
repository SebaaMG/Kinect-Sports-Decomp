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
extern int fn_8229EBD8();
extern int fn_8248FAB0();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8329618C;


void fn_824907B0(uint *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar3 = fn_8265C9E0(0x18);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229EBD8();
  }
  param_1[0x17] = uVar4;
  piVar1 = (int *)param_1[7];
  param_1[0x10] = 1;
  param_1[0xe] = lbl_821CC160;
  if (piVar1 == (int *)0x0) {
    uVar4 = *(uint *)param_1[1];
  }
  else {
    (**(code **)(*piVar1 + 4))(piVar1,param_1);
    if (param_1[7] != 0) {
      fn_8248FAB0(param_1[7],param_1);
    }
    uVar4 = *(uint *)(param_1[7] + 0x34);
    if (uVar4 < *(uint *)param_1[1]) {
      param_1[5] = *(uint *)param_1[1];
      goto LAB_82490854;
    }
  }
  param_1[5] = uVar4;
LAB_82490854:
  puVar5 = (undefined4 *)param_1[8];
  puVar2 = (undefined4 *)param_1[9];
  param_1[5] = (param_1[0x16] + param_1[5]) - 1 & ~(param_1[0x16] - 1);
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    (**(code **)(*(int *)*puVar5 + 4))((int *)*puVar5,(ulonglong)*param_1 - 1);
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1);
    uVar4 = piVar1[0xb];
    param_1[0x15] = uVar4;
    if (lbl_8329618C == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lbl_8329618C + 4);
    }
    *(uint *)(iVar3 + 0x820) = uVar4;
  }
  return;
}

