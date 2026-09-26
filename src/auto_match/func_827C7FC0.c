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
extern int fn_827C1AA0();


void fn_827C7FC0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if ((((param_1[8] == 0) || (param_1[7] == 0)) || (param_1[0xf] < 1)) || (param_1[9] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x20;
    (**(code **)*param_1)(param_1);
  }
  if ((0xffdc < param_1[8]) || (0xffdc < param_1[7])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x29;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0xe] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_1[0xe];
    (**(code **)*param_1)(param_1);
  }
  if (10 < param_1[0xf]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    *(int *)(*param_1 + 0x18) = param_1[0xf];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = 0;
  param_1[0x36] = 1;
  param_1[0x37] = 1;
  if (0 < param_1[0xf]) {
    piVar4 = (int *)(param_1[0x11] + 0xc);
    do {
      if (((piVar4[-1] < 1) || (4 < piVar4[-1])) || ((*piVar4 < 1 || (4 < *piVar4)))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x12;
        (**(code **)*param_1)(param_1);
      }
      iVar3 = param_1[0x36];
      if (param_1[0x36] <= piVar4[-1]) {
        iVar3 = piVar4[-1];
      }
      param_1[0x36] = iVar3;
      iVar3 = param_1[0x37];
      if (param_1[0x37] <= *piVar4) {
        iVar3 = *piVar4;
      }
      iVar2 = iVar2 + 1;
      param_1[0x37] = iVar3;
      piVar4 = piVar4 + 0x15;
    } while (iVar2 < param_1[0xf]);
  }
  iVar2 = 0;
  if (0 < param_1[0xf]) {
    puVar5 = (undefined1 *)(param_1[0x11] + -0x24);
    do {
      *(int *)(puVar5 + 0x28) = iVar2;
      *(undefined4 *)(puVar5 + 0x48) = 8;
      uVar1 = fn_827C1AA0((longlong)*(int *)(puVar5 + 0x2c) * (longlong)param_1[7],
                            param_1[0x36] << 3);
      *(undefined4 *)(puVar5 + 0x40) = uVar1;
      uVar1 = fn_827C1AA0((longlong)*(int *)(puVar5 + 0x30) * (longlong)param_1[8],
                            param_1[0x37] << 3);
      *(undefined4 *)(puVar5 + 0x44) = uVar1;
      uVar1 = fn_827C1AA0((longlong)*(int *)(puVar5 + 0x2c) * (longlong)param_1[7],param_1[0x36]);
      *(undefined4 *)(puVar5 + 0x4c) = uVar1;
      uVar1 = fn_827C1AA0((longlong)*(int *)(puVar5 + 0x30) * (longlong)param_1[8],param_1[0x37]);
      *(undefined4 *)(puVar5 + 0x50) = uVar1;
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x54;
      *puVar5 = 1;
    } while (iVar2 < param_1[0xf]);
  }
  iVar2 = fn_827C1AA0(param_1[8],param_1[0x37] << 3);
  param_1[0x38] = iVar2;
  return;
}

