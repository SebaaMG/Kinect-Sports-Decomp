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
extern unsigned int *auStack_30;


void fn_82A95910(int param_1)

{
  undefined4 auStack_30 [8];
  
  auStack_30[param_1 >> 0x12 & 7] = 0x10203;
  auStack_30[param_1 >> 0x15 & 7] = 0x4050607;
  auStack_30[param_1 >> 0x18 & 7] = 0x8090a0b;
  auStack_30[param_1 >> 0x1b & 7] = 0xc0d0e0f;
  return;
}

