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


void fn_82B63208(short *param_1,ushort param_2,ushort param_3)

{
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  param_1[2] = param_2 * 0xd8 + param_3 * 0x28;
  *param_1 = param_2 * 0x101;
  param_1[1] = param_3 * 0x101;
  param_1[3] = param_3 * 0x48 + param_2 * 0xb8;
  param_1[4] = param_3 * 0x70 + param_2 * 0x90;
  param_1[5] = param_3 * 0x90 + param_2 * 0x70;
  param_1[6] = param_3 * 0xb8 + param_2 * 0x48;
  param_1[7] = param_3 * 0xd8 + param_2 * 0x28;
  return;
}

