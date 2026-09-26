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


void fn_825DE6A8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x254;
  *(int *)(param_2 + 0xeec) = iVar1;
  *(int *)(param_2 + 0xef0) = param_2 + 0x130;
  *(int *)(param_2 + 0xef8) = param_2 + 0xb80;
  if (*(int *)(param_1 + 0x1c0) == 0) {
    iVar1 = param_2 + 0x378;
  }
  *(int *)(param_2 + 0xee8) = iVar1;
  *(int *)(param_2 + 0xef8) = param_2 + 0xb80;
  *(int *)(param_2 + 0xec8) = param_2 + 0x6e0;
  *(int *)(param_2 + 0xecc) = param_2 + 0xe0;
  *(int *)(param_2 + 0xed0) = param_2 + 0x82c;
  *(int *)(param_2 + 0xed4) = param_2 + 0x83c;
  *(int *)(param_2 + 0xed8) = param_2 + 0x5c0;
  *(int *)(param_2 + 0xee0) = param_2 + 0x800;
  *(int *)(param_2 + 0xee4) = param_2 + 0x810;
  *(int *)(param_2 + 0xef4) = param_2 + 0x90;
  *(int *)(param_2 + 0xefc) = param_2 + 0x860;
  *(int *)(param_2 + 0xedc) = param_2 + 0x40;
  *(int *)(param_2 + 0xf00) = param_2 + 0x40;
  *(int *)(param_2 + 0xf04) = param_2 + 0xf14;
  *(int *)(param_2 + 0xf08) = param_2 + 0xf3c;
  *(undefined4 *)(param_2 + 0xf0c) = *(undefined4 *)(param_1 + 0x1a0);
  *(int *)(param_2 + 0xf10) = param_1 + 0x4d0;
  return;
}

