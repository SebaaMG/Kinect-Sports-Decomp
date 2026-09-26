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
extern int fn_829B7760();


void fn_829B5278(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((0xffdc < param_1[8]) || (0xffdc < param_1[7])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x29;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0x36] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_1[0x36];
    (**(code **)*param_1)(param_1);
  }
  if (10 < param_1[9]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    *(int *)(*param_1 + 0x18) = param_1[9];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  param_1[0x4e] = 1;
  iVar2 = 0;
  param_1[0x4f] = 1;
  if (0 < param_1[9]) {
    piVar4 = (int *)(param_1[0x37] + 0xc);
    do {
      if ((((piVar4[-1] < 1) || (4 < piVar4[-1])) || (*piVar4 < 1)) || (4 < *piVar4)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x12;
        (**(code **)*param_1)(param_1);
      }
      iVar3 = param_1[0x4e];
      if (param_1[0x4e] <= piVar4[-1]) {
        iVar3 = piVar4[-1];
      }
      param_1[0x4e] = iVar3;
      iVar3 = param_1[0x4f];
      if (param_1[0x4f] <= *piVar4) {
        iVar3 = *piVar4;
      }
      iVar2 = iVar2 + 1;
      param_1[0x4f] = iVar3;
      piVar4 = piVar4 + 0x15;
    } while (iVar2 < param_1[9]);
  }
  iVar2 = 0;
  param_1[0x50] = 8;
  if (0 < param_1[9]) {
    puVar5 = (undefined4 *)(param_1[0x37] + -8);
    do {
      puVar5[0xb] = 8;
      uVar1 = fn_829B7760((longlong)(int)puVar5[4] * (longlong)param_1[7],param_1[0x4e] << 3);
      puVar5[9] = uVar1;
      uVar1 = fn_829B7760((longlong)(int)puVar5[5] * (longlong)param_1[8],param_1[0x4f] << 3);
      puVar5[10] = uVar1;
      uVar1 = fn_829B7760((longlong)(int)puVar5[4] * (longlong)param_1[7],param_1[0x4e]);
      puVar5[0xc] = uVar1;
      uVar1 = fn_829B7760((longlong)(int)puVar5[5] * (longlong)param_1[8],param_1[0x4f]);
      puVar5[0xd] = uVar1;
      puVar5[0xe] = 1;
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x15;
      *puVar5 = 0;
    } while (iVar2 < param_1[9]);
  }
  iVar2 = fn_829B7760(param_1[8],param_1[0x4f] << 3);
  param_1[0x51] = iVar2;
  if ((param_1[0x53] < param_1[9]) || (param_1[0x38] != 0)) {
    *(undefined4 *)(param_1[0x6e] + 0x10) = 1;
  }
  else {
    *(undefined4 *)(param_1[0x6e] + 0x10) = 0;
  }
  return;
}

