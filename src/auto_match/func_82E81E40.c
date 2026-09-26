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


void fn_82E81E40(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (0x4d5800 < iVar2) {
    *(undefined4 *)(param_1 + 0x644) = 0;
  }
  if (1 < *(int *)(param_1 + 0x1fa8)) {
    *(undefined4 *)(param_1 + 0x648) = 1;
  }
  *(uint *)(param_1 + 0x76b8) =
       (int)((~param_2 & 0xffffffff) >> 0x1f) + (uint)(param_2 < 0x4d5801) & 1;
  if (0x4d57ff < iVar2) {
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  if (*(int *)(param_1 + 0x888) != 2) {
    return;
  }
  if (1 < *(int *)(param_1 + 0x1fa8)) {
    uVar1 = (int)((~param_2 & 0xffffffff) >> 0x1f) + (uint)(0x707fff < param_2) & 1;
    *(uint *)(param_1 + 0x62c) = uVar1;
    *(uint *)(param_1 + 0x630) = uVar1;
    return;
  }
  iVar2 = (uint)(param_2 < 0x2e6801) - (iVar2 >> 0x1f);
  *(int *)(param_1 + 0x62c) = iVar2;
  *(int *)(param_1 + 0x630) = iVar2;
  return;
}

