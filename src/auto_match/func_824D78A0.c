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


void fn_824D78A0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xf8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf8) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(uint *)(*(int *)(param_1 + 0xfc) + 0x3c) = (uint)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    *(uint *)(*(int *)(param_1 + 0x104) + 0x3c) = (uint)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x108) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    *(uint *)(*(int *)(param_1 + 0x10c) + 0x3c) = (uint)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    *(uint *)(*(int *)(param_1 + 0x114) + 0x3c) = (uint)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x120) + 0x3c) = param_2;
  return;
}

