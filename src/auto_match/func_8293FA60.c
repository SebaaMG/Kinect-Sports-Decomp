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


undefined8 fn_8293FA60(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x10;
  *(undefined4 *)(param_1 + 0x54) = 0x10;
  *(undefined4 *)(param_1 + 0x4c) = 0x10;
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x38) = 0x100;
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  *(undefined4 *)(param_1 + 0x40) = 0x20;
  *(undefined4 *)(param_1 + 0x68) = 0xff;
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0x18;
  *(undefined4 *)(param_1 + 0x5c) = 4;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xefbfffff | 0x201;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xc403ffff | 0x13fc0000;
  *(undefined4 *)(param_1 + 0x44) = 0x10;
  *(undefined4 *)(param_1 + 0x1d4) = 0x20;
  *(undefined4 *)(param_1 + 0x158) = 1;
  return 0;
}

