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


void fn_82638DF8(int param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  *(int *)(param_1 + 0x2fb0) = (int)param_2;
  if (*(int *)(param_1 + 0x314c) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x288c);
  uVar2 = (ulonglong)(uVar1 >> 0x10) & 0xf;
  if ((((uVar2 != 2) && (uVar2 != 3)) && (uVar2 != 10)) && (uVar2 != 0xc)) {
    return;
  }
  if (((ulonglong)(uVar1 >> 0x13) & 1) == param_2) {
    return;
  }
  *(uint *)(param_1 + 0x288c) =
       uVar1 & 0xfff0ffff |
       ((uint)((~(param_2 - 1) & 0xffffffff) << 0x10) & ((int)uVar2 + 3) * 0x20000 |
       (uint)(((uVar2 >> 1) - 3 & param_2 - 1 & 0xffffffff) << 0x10)) & 0xf0000;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x40000000000000;
  return;
}

