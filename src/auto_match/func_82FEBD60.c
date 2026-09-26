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


void fn_82FEBD60(int param_1)

{
  float *pfVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  
  altv207_13(in_vs32,in_vs36);
  altv300_21(in_vs32,in_vs42);
  altv207_13(in_vs36,in_vs43);
  pfVar1 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar1 = in_register_000103f0 * in_register_000103e0;
  pfVar1[1] = in_register_000103f4 * in_register_000103e0;
  pfVar1[2] = in_register_000103f8 * in_register_000103e0;
  pfVar1[3] = in_vr63 * in_register_000103e0;
  pfVar1 = (float *)(param_1 + 0x10U & 0xfffffff0);
  *pfVar1 = in_register_000103d0 * in_register_000103e0;
  pfVar1[1] = in_register_000103d4 * in_register_000103e0;
  pfVar1[2] = in_register_000103d8 * in_register_000103e0;
  pfVar1[3] = in_vr61 * in_register_000103e0;
  return;
}

