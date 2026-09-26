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


undefined4 fn_82368C30(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined4 *puStack_10;
  undefined4 *apuStack_c [3];
  
  if (*(int *)(param_1 + 0x41c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x424);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x420) * 4 + **(int **)(param_1 + 8));
  iVar3 = *(int *)(piVar2[4] * 4 + *piVar2);
  puStack_10 = *(undefined4 **)(iVar3 + 4);
  puVar4 = (undefined4 *)puStack_10[1];
  while (puVar5 = puVar4, *(char *)((int)puVar5 + 0x15) == '\0') {
    if ((uint)puVar5[3] < uVar1) {
      puVar4 = (undefined4 *)puVar5[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
      puStack_10 = puVar5;
    }
  }
  apuStack_c[0] = *(undefined4 **)(iVar3 + 4);
  if ((puStack_10 == apuStack_c[0]) || (uVar1 < (uint)puStack_10[3])) {
    ppuVar6 = apuStack_c;
  }
  else {
    ppuVar6 = &puStack_10;
  }
  return (*ppuVar6)[4];
}

