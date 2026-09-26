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


undefined8
fn_82963F20(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  *(undefined8 *)(param_2 + 10) = param_1;
  param_2[1] = param_3;
  param_2[2] = 0xffffffff;
  param_2[3] = param_4;
  param_2[4] = param_5;
  param_2[5] = 0xffffffff;
  param_2[6] = 1;
  *param_2 = 0;
  param_2[0xc] = 0xffffffff;
  param_2[0xd] = 0xffffffff;
  param_2[0xe] = 0xffffffff;
  param_2[0x10] = 0xffffffff;
  param_2[0xf] = 0;
  param_2[0x11] = 0xffffffff;
  param_2[0x12] = 0xffffffff;
  param_2[0x13] = 0xffffffff;
  param_2[0x14] = 0xffffffff;
  param_2[0x15] = 0xffffffff;
  param_2[0x16] = 0xffffffff;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0xffffffff;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0xffffffff;
  return 0;
}

