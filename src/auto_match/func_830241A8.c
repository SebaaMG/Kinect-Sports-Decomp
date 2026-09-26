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


void fn_830241A8(int param_1,ulonglong param_2,ulonglong param_3)

{
  if ((param_3 & 1) != 0) {
    *(byte *)(param_1 + 0x2c) =
         (byte)((param_2 & 0xffffffff) << 7) | *(byte *)(param_1 + 0x2c) & 0x7f;
  }
  if ((param_3 & 2) != 0) {
    *(byte *)(param_1 + 0x40) =
         (byte)((param_2 & 0xffffffff) << 6) & 0x80 | *(byte *)(param_1 + 0x40) & 0x7f;
  }
  if ((param_3 & 4) != 0) {
    *(byte *)(param_1 + 0x54) =
         (byte)((param_2 & 0xffffffff) << 5) & 0x80 | *(byte *)(param_1 + 0x54) & 0x7f;
  }
  if ((param_3 & 8) != 0) {
    *(byte *)(param_1 + 0x68) =
         (byte)((param_2 & 0xffffffff) << 4) & 0x80 | *(byte *)(param_1 + 0x68) & 0x7f;
  }
  if ((param_3 & 0x10) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x6c) =
       (byte)((param_2 & 0xffffffff) << 3) & 0x80 | *(byte *)(param_1 + 0x6c) & 0x7f;
  return;
}

