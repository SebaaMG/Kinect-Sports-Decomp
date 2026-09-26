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


void fn_824BC050(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x100) + 0x8bc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x8bc) = 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x100) + 0x8c0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x8c0) = 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x100) + 0x8cc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x8cc) = 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x100) + 0x8d0) == 0) {
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x8d0) = 0;
    return;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else if (param_2 == 1) {
    iVar2 = 0x1f;
  }
  else if (param_2 < 3) {
    iVar2 = 0x3e;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar2 = 0x5d;
  }
  iVar1 = (iVar2 + 0x1b2) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b3) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b4) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b5) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b6) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b7) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b8) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1b9) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1ba) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1bb) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1bc) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1bd) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1be) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1bf) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c0) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c1) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c2) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c3) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c4) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c5) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c6) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c8) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x1c7) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar2 = (iVar2 + 0x1c9) * 4;
  if (*(int *)(iVar2 + *(int *)(param_1 + 0x100)) == 0) {
    return;
  }
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x100)) = 0;
  return;
}

