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
extern int fn_82F68CC0();
extern unsigned int lbl_1000000E;


int fn_82630C60(undefined4 *param_1)

{
  *param_1 = 0xc0003b00;
  param_1[1] = 0x300;
  param_1[2] = 0xc0192b00;
  param_1[3] = 0;
  param_1[4] = 0x18;
  fn_82F68CC0(param_1 + 5,0xffffffff8218d880,0x60);
  param_1[0x1d] = 0xc00a2b00;
  param_1[0x1e] = 1;
  param_1[0x1f] = 9;
  fn_82F68CC0(param_1 + 0x20,0xffffffff8218d85c,0x24);
  param_1[0x29] = 0x12180;
  param_1[0x2a] = &lbl_1000000E;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x22100;
  param_1[0x2d] = 0xffff;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x2293;
  param_1[0x31] = 0;
  param_1[0x32] = 0x22204;
  param_1[0x33] = 0x10000;
  param_1[0x34] = 0x10000;
  param_1[0x35] = 0x300;
  param_1[0x36] = 0x2312;
  param_1[0x37] = 0xffff;
  param_1[0x38] = 0x200d;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x2200;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x2203;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x2208;
  param_1[0x3f] = 4;
  param_1[0x40] = 0x2104;
  param_1[0x41] = 0;
  param_1[0x42] = 0x2280;
  param_1[0x43] = 0x80008;
  param_1[0x44] = 0x2302;
  param_1[0x45] = 4;
  param_1[0x46] = 0x22080;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0x100010;
  return (int)(param_1 + 0x49) + (4 - (int)param_1) >> 2;
}

