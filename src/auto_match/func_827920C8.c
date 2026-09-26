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


void fn_827920C8(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 == 0) || (bVar3 = false, *(uint *)(iVar1 + 4) <= *(uint *)(param_1 + 0x1c))) {
    bVar3 = true;
  }
  if (bVar3) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 4);
    return;
  }
  piVar5 = (int *)(param_1 + 0x10);
  uVar4 = *(int *)(param_1 + 0x1c) + 1;
  *(uint *)(param_1 + 0x1c) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x14);
  if (((int)uVar2 < 0) || (bVar3 = false, *(uint *)(*piVar5 + 4) <= uVar2)) {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  piVar6 = (int *)(uVar2 * 0xc + *(int *)*piVar5);
  if (uVar4 < (uint)(piVar6[1] + *piVar6)) {
    return;
  }
  if (*(int *)(*piVar5 + 4) <= *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

