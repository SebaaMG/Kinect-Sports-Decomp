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
extern int fn_829B6DE0();
extern int fn_829B7760();


void fn_829B6EA8(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  iVar2 = param_1[0xc];
  uVar1 = param_1[0xd];
  if (uVar1 < (uint)(iVar2 << 3)) {
    if (uVar1 < (uint)(iVar2 << 2)) {
      if (uVar1 < (uint)(iVar2 << 1)) {
        param_1[0x50] = 8;
        param_1[0x1c] = param_1[7];
        param_1[0x1d] = param_1[8];
      }
      else {
        iVar2 = fn_829B7760(param_1[7],2);
        param_1[0x1c] = iVar2;
        iVar2 = fn_829B7760(param_1[8],2);
        param_1[0x1d] = iVar2;
        param_1[0x50] = 4;
      }
    }
    else {
      iVar2 = fn_829B7760(param_1[7],4);
      param_1[0x1c] = iVar2;
      iVar2 = fn_829B7760(param_1[8],4);
      param_1[0x1d] = iVar2;
      param_1[0x50] = 2;
    }
  }
  else {
    iVar2 = fn_829B7760(param_1[7],8);
    param_1[0x1c] = iVar2;
    iVar2 = fn_829B7760(param_1[8],8);
    param_1[0x1d] = iVar2;
    param_1[0x50] = 1;
  }
  iVar2 = 0;
  if (0 < param_1[9]) {
    piVar4 = (int *)(param_1[0x37] + -0x30);
    do {
      iVar3 = param_1[0x50];
      iVar5 = iVar3;
      if (iVar3 < 8) {
        do {
          if ((param_1[0x4e] * iVar3 < piVar4[0xe] * iVar5 * 2) ||
             (param_1[0x4f] * iVar3 < piVar4[0xf] * iVar5 * 2)) break;
          iVar5 = iVar5 << 1;
        } while (iVar5 < 8);
      }
      piVar4 = piVar4 + 0x15;
      *piVar4 = iVar5;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[9]);
  }
  iVar2 = 0;
  if (0 < param_1[9]) {
    piVar4 = (int *)(param_1[0x37] + 0x24);
    do {
      iVar3 = fn_829B7760((longlong)(piVar4[-7] * *piVar4) * (longlong)param_1[7],
                              param_1[0x4e] << 3);
      piVar4[1] = iVar3;
      iVar3 = fn_829B7760((longlong)(piVar4[-6] * *piVar4) * (longlong)param_1[8],
                              param_1[0x4f] << 3);
      piVar4[2] = iVar3;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x15;
    } while (iVar2 < param_1[9]);
  }
  iVar2 = param_1[0xb];
  if (iVar2 - 1U < 5) {
    if ((iVar2 != 2) && (iVar2 != 3)) {
      if ((iVar2 == 4) || (iVar2 != 1)) {
        param_1[0x1e] = 4;
      }
      else {
        param_1[0x1e] = 1;
      }
      goto LAB_829b70f0;
    }
    iVar2 = 3;
  }
  else {
    iVar2 = param_1[9];
  }
  param_1[0x1e] = iVar2;
LAB_829b70f0:
  iVar2 = 1;
  if (param_1[0x15] == 0) {
    iVar2 = param_1[0x1e];
  }
  param_1[0x1f] = iVar2;
  iVar2 = fn_829B6DE0(param_1);
  if (iVar2 == 0) {
    param_1[0x20] = 1;
  }
  else {
    param_1[0x20] = param_1[0x4f];
  }
  return;
}

