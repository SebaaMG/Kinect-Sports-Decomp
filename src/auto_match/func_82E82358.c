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
extern int fn_82F65350();


void fn_82E82358(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_82F65350();
  *(uint *)(param_1 + 0x4fc) = uVar1 & 1;
  if (*(int *)(param_1 + 0x7908) == 2) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x644) = uVar1 & 1;
  }
  if (*(int *)(param_1 + 0x7910) == 2) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x978) = uVar1 & 3;
    if ((uVar1 & 3) == 3) {
      *(undefined4 *)(param_1 + 0x978) = 1;
    }
  }
  if (*(int *)(param_1 + 0x7904) == 2) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x648) = uVar1 & 1;
  }
  if (*(int *)(param_1 + 0x791c) == 2) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x920) = uVar1 & 1;
  }
  if (*(int *)(param_1 + 31000) == 2) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x314) = uVar1 & 1;
  }
  if (*(int *)(param_1 + 0x7938) == 2) {
    uVar1 = fn_82F65350();
    *(uint *)(param_1 + 0x59c) = uVar1 & 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = fn_82F65350();
      *(uint *)(param_1 + 0x5a0) = uVar1 & 1;
    }
    else {
      uVar1 = fn_82F65350();
      *(uint *)(param_1 + 0x594) = uVar1 & 1;
      *(undefined4 *)(param_1 + 0x5a0) = 0;
    }
    if ((*(int *)(param_1 + 0x59c) != 0) || (uVar2 = 0, *(int *)(param_1 + 0x5a0) != 0)) {
      uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0x598) = uVar2;
  }
  return;
}

