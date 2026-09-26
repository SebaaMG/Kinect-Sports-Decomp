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


void fn_827BF240(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = param_1[10];
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = 1;
  }
  else if (uVar2 < 3) {
    uVar2 = 3;
  }
  else if (uVar2 == 3) {
    uVar2 = 3;
  }
  else if (uVar2 < 5) {
    uVar2 = 4;
  }
  else {
    if (uVar2 != 5) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
                    /* WARNING: Could not recover jumptable at 0x827bf280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)();
      return;
    }
    uVar2 = 5;
  }
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  param_1[0x10] = uVar2;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  if (uVar2 == 0) {
    iVar4 = param_1[9];
    param_1[0xf] = iVar4;
    if ((iVar4 < 1) || (10 < iVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1a;
      *(int *)(*param_1 + 0x18) = param_1[0xf];
      *(undefined4 *)(*param_1 + 0x1c) = 10;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = 0;
    if (0 < param_1[0xf]) {
      iVar3 = 0;
      do {
        piVar5 = (int *)(iVar3 + param_1[0x11]);
        iVar3 = iVar3 + 0x54;
        piVar5[3] = 1;
        *piVar5 = iVar4;
        iVar4 = iVar4 + 1;
        piVar5[6] = 0;
        piVar5[2] = 1;
        piVar5[5] = 0;
        piVar5[4] = 0;
      } while (iVar4 < param_1[0xf]);
    }
  }
  else if (uVar2 == 1) {
    puVar1 = (undefined4 *)param_1[0x11];
    *(undefined1 *)(param_1 + 0x31) = 1;
    param_1[0xf] = 1;
    *puVar1 = 1;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  else if (uVar2 < 3) {
    puVar1 = (undefined4 *)param_1[0x11];
    *(undefined1 *)(param_1 + 0x33) = 1;
    param_1[0xf] = 3;
    puVar1[6] = 0;
    puVar1[4] = 0;
    *puVar1 = 0x52;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[5] = 0;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0x54) = 0x47;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 0;
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0xa8) = 0x42;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
  }
  else if (uVar2 == 3) {
    puVar1 = (undefined4 *)param_1[0x11];
    *(undefined1 *)(param_1 + 0x31) = 1;
    param_1[0xf] = 3;
    puVar1[5] = 0;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[6] = 0;
    *puVar1 = 1;
    puVar1[2] = 2;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0x54) = 2;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 1;
    *(undefined4 *)(iVar4 + 0x68) = 1;
    *(undefined4 *)(iVar4 + 0x6c) = 1;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0xa8) = 3;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 1;
    *(undefined4 *)(iVar4 + 0xbc) = 1;
    *(undefined4 *)(iVar4 + 0xc0) = 1;
  }
  else if (uVar2 < 5) {
    puVar1 = (undefined4 *)param_1[0x11];
    *(undefined1 *)(param_1 + 0x33) = 1;
    param_1[0xf] = 4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = 0x43;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0x54) = 0x4d;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 0;
    *(undefined4 *)(iVar4 + 0x68) = 0;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0xa8) = 0x59;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar4 + 0xc0) = 0;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0xfc) = 0x4b;
    *(undefined4 *)(iVar4 + 0x104) = 1;
    *(undefined4 *)(iVar4 + 0x108) = 1;
    *(undefined4 *)(iVar4 + 0x10c) = 0;
    *(undefined4 *)(iVar4 + 0x110) = 0;
    *(undefined4 *)(iVar4 + 0x114) = 0;
  }
  else if (uVar2 == 5) {
    puVar1 = (undefined4 *)param_1[0x11];
    *(undefined1 *)(param_1 + 0x33) = 1;
    param_1[0xf] = 4;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0x54) = 2;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x60) = 1;
    *(undefined4 *)(iVar4 + 100) = 1;
    *(undefined4 *)(iVar4 + 0x68) = 1;
    *(undefined4 *)(iVar4 + 0x6c) = 1;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0xa8) = 3;
    *(undefined4 *)(iVar4 + 0xb0) = 1;
    *(undefined4 *)(iVar4 + 0xb4) = 1;
    *(undefined4 *)(iVar4 + 0xb8) = 1;
    *(undefined4 *)(iVar4 + 0xbc) = 1;
    *(undefined4 *)(iVar4 + 0xc0) = 1;
    iVar4 = param_1[0x11];
    *(undefined4 *)(iVar4 + 0xfc) = 4;
    *(undefined4 *)(iVar4 + 0x104) = 2;
    *(undefined4 *)(iVar4 + 0x108) = 2;
    *(undefined4 *)(iVar4 + 0x10c) = 0;
    *(undefined4 *)(iVar4 + 0x110) = 0;
    *(undefined4 *)(iVar4 + 0x114) = 0;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    (**(code **)*param_1)(param_1);
  }
  return;
}

