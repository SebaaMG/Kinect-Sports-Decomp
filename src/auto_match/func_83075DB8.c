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


void fn_83075DB8(int param_1,int param_2)

{
  float *pfVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  
  altv207_13(in_vs32,in_vs43);
  pfVar1 = (float *)(in_r0 + param_2 * 0x20 + param_1 & 0xfffffff0);
  *pfVar1 = in_register_000103f0 + in_register_00010010;
  pfVar1[1] = in_register_000103f4 + in_register_00010014;
  pfVar1[2] = in_register_000103f8 + in_register_00010018;
  pfVar1[3] = in_vr63 + in_vr1;
  return;
}

