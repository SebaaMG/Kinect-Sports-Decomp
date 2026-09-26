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


undefined4 fn_822CEE40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  if (*(uint *)(*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 + **(int **)(param_1 + 0x1c)) + 8) < 2)
  {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = **(int **)(*(int *)(param_1 + 0x1c0) + 8);
  if (iVar1 < 2) {
    uVar5 = 1 - iVar1;
    piVar3 = *(int **)(iVar2 + *(int *)(param_1 + 0x2c) * 4);
    iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
  }
  else {
    uVar5 = iVar1 - 1;
    piVar3 = *(int **)(iVar2 + *(int *)(param_1 + 0x2c) * 4);
    iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
  }
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 4))[1];
  puStack_10 = *(undefined4 **)(iVar1 + 4);
  while (puVar6 = puVar4, *(char *)((int)puVar6 + 0x15) == '\0') {
    if ((uint)puVar6[3] < uVar5) {
      puVar4 = (undefined4 *)puVar6[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar6;
      puStack_10 = puVar6;
    }
  }
  if ((puStack_10 == *(undefined4 **)(iVar1 + 4)) || (uVar5 < (uint)puStack_10[3])) {
    apuStack_c[0] = *(undefined4 **)(iVar1 + 4);
    ppuVar7 = apuStack_c;
  }
  else {
    ppuVar7 = &puStack_10;
  }
  return (*ppuVar7)[4];
}

