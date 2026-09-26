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


void fn_82822080(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x28) == 0) {
    return;
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x44) + -10);
  do {
    uVar3 = uVar3 + 1;
    piVar1 = (int *)((int)piVar4 + 0xe);
    iVar2 = (uint)*(byte *)((int)piVar4 + 0x16) * 0x21 + *(int *)(param_1 + 0x30);
    piVar4 = (int *)((int)piVar4 + 0xe);
    *piVar4 = *(int *)(iVar2 + -0x14) + *(int *)(iVar2 + -0x10) + *piVar1;
  } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x1c) + 0x28));
  return;
}

