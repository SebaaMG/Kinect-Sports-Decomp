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


void fn_82A6CD50(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar3 = **(int **)(param_1 + 8);
  if (*(int *)(iVar3 + 0x3c) < 3) {
    if (*(int *)(iVar3 + 0xd4) == 0) {
      uVar2 = 0;
      goto LAB_82a6cdb4;
    }
    uVar2 = *(int *)(iVar3 + 8) + 0xb;
  }
  else if (*(int *)(iVar3 + 0x25c) == 0) {
    uVar2 = *(int *)(iVar3 + 8) + 6;
  }
  else {
    uVar2 = *(int *)(iVar3 + 8) + 0x11;
  }
  uVar2 = uVar2 & 0xff;
LAB_82a6cdb4:
  if (uVar2 == ((int)uVar2 >> 3) << 3) {
    return;
  }
  uVar2 = *(int *)(param_1 + 0x30) + uVar1 * 8 + *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x18);
  if (((uVar2 ^ param_2) & 7) != 0) {
    return;
  }
  if (uVar2 <= param_2) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(uint *)(param_1 + 0x48) = param_2 - uVar2 >> 3;
    return;
  }
  uVar2 = uVar2 - param_2 >> 3;
  if (uVar2 <= uVar1) {
    *(uint *)(param_1 + 0x20) = uVar1 - uVar2;
    return;
  }
  iVar3 = uVar2 - uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - iVar3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar3 * -8;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) >> (iVar3 * 8 & 0x38U);
  return;
}

