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


void fn_8275CE20(double param_1,int param_2,undefined1 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = param_5;
  *(float *)(param_3 + 4) = (float)param_1;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_2 + 0x58);
  return;
}

