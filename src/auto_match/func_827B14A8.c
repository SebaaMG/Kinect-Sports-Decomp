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


void fn_827B14A8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x6c) + 4;
  uVar1 = *(int *)(param_1 + 0x6c) + 5;
  *(char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar2 & 0xfff)) = (char)param_2;
  *(char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar1 & 0xfff)) = (char)((uint)param_2 >> 8);
  uVar2 = *(int *)(param_1 + 0x6c) + 6;
  uVar1 = *(int *)(param_1 + 0x6c) + 7;
  *(char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar2 & 0xfff)) = (char)param_3;
  *(char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar1 & 0xfff)) = (char)((uint)param_3 >> 8);
  uVar2 = *(int *)(param_1 + 0x6c) + 8;
  uVar1 = *(int *)(param_1 + 0x6c) + 9;
  *(char *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar2 & 0xfff)) = (char)param_4;
  *(char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 8) + 0xc)) +
           (uVar1 & 0xfff)) = (char)((uint)param_4 >> 8);
  return;
}

