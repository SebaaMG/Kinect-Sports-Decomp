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
extern int fn_83095920();


void fn_83090E68(int param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  puVar8 = param_3 + 9;
  uVar3 = (ulonglong)(uint)param_2[1] + 1 & 0x7fffffff;
  uVar1 = (uint)(uVar3 << 1);
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)puVar8;
    param_3[1] = 0;
    param_3[2] = uVar1 | 0x80000000;
  }
  puVar10 = param_3 + 3;
  if (puVar10 != (uint *)0x0) {
    param_3[4] = 0;
    param_3[5] = uVar1 | 0x80000000;
    *puVar10 = (int)(uVar3 << 3) + (int)puVar8;
  }
  puVar9 = param_3 + 6;
  if (puVar9 != (uint *)0x0) {
    param_3[7] = 0;
    param_3[8] = uVar1 | 0x80000000;
    *puVar9 = (int)(uVar3 << 4) + (int)puVar8;
  }
  puVar5 = (undefined4 *)(param_3[1] * 4 + *param_3);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  param_3[1] = param_3[1] + 1;
  puVar5 = (undefined4 *)(param_3[4] * 4 + *puVar10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  param_3[4] = param_3[4] + 1;
  puVar5 = (undefined4 *)(param_3[7] * 4 + *puVar9);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
  }
  param_3[7] = param_3[7] + 1;
  uVar3 = (ulonglong)(uint)param_2[1];
  piVar6 = (int *)*param_2;
  while (uVar3 = uVar3 - 1, -1 < (longlong)uVar3) {
    puVar4 = (undefined2 *)(param_3[1] * 4 + *param_3);
    puVar2 = (undefined2 *)((uint)*(ushort *)(*piVar6 + 8) * 4 + *(int *)(param_1 + 0xac));
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = param_3[1];
    param_3[1] = uVar1 + 1;
    puVar4 = (undefined2 *)((uVar1 + 1) * 4 + *param_3);
    puVar2 = (undefined2 *)((uint)*(ushort *)(*piVar6 + 10) * 4 + *(int *)(param_1 + 0xac));
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    param_3[1] = param_3[1] + 1;
    puVar4 = (undefined2 *)(param_3[4] * 4 + *puVar10);
    puVar2 = (undefined2 *)((uint)*(ushort *)*piVar6 * 4 + *(int *)(param_1 + 0xb8));
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = param_3[4];
    param_3[4] = uVar1 + 1;
    puVar4 = (undefined2 *)((uVar1 + 1) * 4 + *puVar10);
    puVar2 = (undefined2 *)((uint)*(ushort *)(*piVar6 + 4) * 4 + *(int *)(param_1 + 0xb8));
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    param_3[4] = param_3[4] + 1;
    puVar4 = (undefined2 *)(param_3[7] * 4 + *puVar9);
    puVar2 = (undefined2 *)((uint)*(ushort *)(*piVar6 + 2) * 4 + *(int *)(param_1 + 0xc4));
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    uVar1 = param_3[7];
    param_3[7] = uVar1 + 1;
    puVar4 = (undefined2 *)((uVar1 + 1) * 4 + *puVar9);
    puVar2 = (undefined2 *)((uint)*(ushort *)(*piVar6 + 6) * 4 + *(int *)(param_1 + 0xc4));
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
    }
    piVar6 = piVar6 + 1;
    param_3[7] = param_3[7] + 1;
  }
  lVar7 = 3;
  puVar8 = param_3;
  do {
    if (1 < (int)(puVar8[1] - 1)) {
      fn_83095920((ulonglong)*puVar8 + 4,0,(ulonglong)puVar8[1] - 2,0);
    }
    lVar7 = lVar7 + -1;
    puVar8 = puVar8 + 3;
  } while (lVar7 != 0);
  puVar5 = (undefined4 *)(param_3[1] * 4 + *param_3);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xfffc0000;
  }
  param_3[1] = param_3[1] + 1;
  puVar5 = (undefined4 *)(param_3[4] * 4 + *puVar10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xfffc0000;
  }
  param_3[4] = param_3[4] + 1;
  puVar5 = (undefined4 *)(param_3[7] * 4 + *puVar9);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xfffc0000;
  }
  param_3[7] = param_3[7] + 1;
  return;
}

