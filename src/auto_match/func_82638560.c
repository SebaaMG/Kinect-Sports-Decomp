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


void fn_82638560(int param_1,longlong param_2)

{
  ulonglong uVar1;
  
  *(uint *)(param_1 + 0x28b4) = -(uint)(param_2 != 0) & 0x1000;
  *(uint *)(param_1 + 0x2944) = *(uint *)(param_1 + 0x2944) & 0xffffffc0 | (uint)param_2;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar1 | 0x80;
  *(ulonglong *)(param_1 + 0x10) = uVar1 | 0x100000000080;
  return;
}

