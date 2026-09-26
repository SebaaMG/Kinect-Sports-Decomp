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


void fn_82F00740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x784c) = *(undefined4 *)(param_1 + 0x7844);
  *(undefined4 *)(param_1 + 0x7848) = *(undefined4 *)(param_1 + 0x7840);
  *(undefined4 *)(param_1 + 0x782c) = *(undefined4 *)(param_1 + 0x7824);
  *(int *)(param_1 + 0x7828) = *(int *)(param_1 + 0x7820);
  if (((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) != 0)) &&
     (*(int *)(param_1 + 0x6de8) == 1)) {
    return;
  }
  if ((*(int *)(param_1 + 0x84c) != 0) && (1 < *(longlong *)(param_1 + 0x2e0))) {
    return;
  }
  if (*(int *)(param_1 + 0x7808) != 0) {
    if (*(int *)(param_1 + 0x7810) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x2e0) < 2) {
      return;
    }
    if ((*(uint *)(param_1 + 0x1e4c) & 1) != 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x7820) + 1;
    *(int *)(param_1 + 0x7820) = iVar2;
    if (8 < iVar2) {
      iVar2 = 1;
    }
    iVar1 = iVar2 + 1;
    *(int *)(param_1 + 0x7820) = iVar2;
    *(int *)(param_1 + 0x7824) = iVar1;
    if (8 < iVar1) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x7824) = iVar1;
    *(int *)(param_1 + 0x7844) = iVar1;
    *(undefined4 *)(param_1 + 0x7840) = *(undefined4 *)(param_1 + 0x7820);
    return;
  }
  *(undefined4 *)(param_1 + 0x7824) = 0;
  *(undefined4 *)(param_1 + 0x7820) = 0;
  if (0x17 < param_2) {
    param_2 = param_2 + -0x17;
    *(int *)(param_1 + 0x7820) = param_2;
    if (7 < param_2) {
      param_2 = 8;
    }
    iVar2 = param_2 + 2;
    *(int *)(param_1 + 0x7820) = param_2;
    *(int *)(param_1 + 0x7824) = iVar2;
    if (7 < iVar2) {
      iVar2 = 8;
    }
    *(int *)(param_1 + 0x7824) = iVar2;
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - param_2;
  }
  *(int *)(param_1 + 0x7840) = *(int *)(param_1 + 0x7820);
  *(int *)(param_1 + 0x7844) = *(int *)(param_1 + 0x7824);
  if ((*(int *)(param_1 + 0x7820) == *(int *)(param_1 + 0x7828)) &&
     (*(int *)(param_1 + 0x7824) == *(int *)(param_1 + 0x782c))) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7814) = 1;
  *(undefined4 *)(param_1 + 0x7818) = 1;
  return;
}

