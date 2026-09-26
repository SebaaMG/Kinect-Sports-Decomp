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


void fn_82635B30(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x9b3] = 0;
  if (param_3 != 0) {
    iVar3 = iVar1 * 0x26d0 + 0x2688;
    uVar2 = param_2 >> 3 & 0x1ffffffc;
    *(uint *)((int)param_1 + uVar2 + iVar3) =
         1 << (param_2 & 0x1f) | *(uint *)((int)param_1 + uVar2 + iVar3);
  }
  iVar3 = iVar1 * 0x26d0 + 0x26a8;
  uVar2 = param_2 >> 3 & 0x1ffffffc;
  *(uint *)((int)param_1 + uVar2 + iVar3) =
       1 << (param_2 & 0x1f) | *(uint *)((int)param_1 + uVar2 + iVar3);
  *(ulonglong *)(param_1 + iVar1 * 0x9b4 + 0x946) =
       1L << (0x1f - (ulonglong)(param_2 >> 5) & 0x7f) |
       *(ulonglong *)(param_1 + iVar1 * 0x9b4 + 0x946);
  return;
}

