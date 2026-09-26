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


void fn_82791DF0(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  piVar4 = (int *)(param_1 + 0x14);
  if (((int)uVar1 < 0) || (bVar2 = false, *(uint *)(*piVar4 + 4) <= uVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4);
    return;
  }
  puVar3 = (uint *)(uVar1 * 0xc + *(int *)*piVar4);
  uVar1 = *puVar3;
  if (*(uint *)(param_1 + 0x20) < uVar1) {
    *(uint *)(param_1 + 0x20) = uVar1;
    return;
  }
  *(uint *)(param_1 + 0x20) = puVar3[1] + *(uint *)(param_1 + 0x20);
  if (*(int *)(*piVar4 + 4) <= *(int *)(param_1 + 0x18)) {
    return;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

