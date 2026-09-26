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
extern unsigned int lbl_8316566C;


undefined8 fn_82AB8730(undefined4 *param_1)

{
  param_1[1] = 0x100;
  param_1[7] = 8;
  param_1[8] = 8;
  param_1[0xd] = 0x20;
  param_1[2] = 0x10;
  param_1[0xe] = 2;
  *param_1 = &lbl_8316566C;
  param_1[3] = 0x40;
  param_1[9] = 0x20;
  param_1[0xf] = 2;
  param_1[4] = 0xe0;
  param_1[10] = 8;
  param_1[0x10] = 0x1c;
  param_1[5] = 0x10;
  param_1[0xb] = 8;
  param_1[0x11] = 2;
  param_1[6] = 0x40;
  param_1[0xc] = 0x20;
  param_1[0x12] = 2;
  return 0;
}

