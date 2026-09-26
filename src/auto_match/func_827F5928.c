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


void fn_827F5928(int param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xdc);
  *(byte *)(param_1 + 0xdc) = bVar1 | 4;
  *(byte *)(param_1 + 0xdc) =
       (byte)((byte)((ulonglong)-param_2 >> 0x18) & ~(byte)((ulonglong)param_2 >> 0x18)) >> 4 & 8 |
       bVar1 & 0xf7 | 4;
  return;
}

