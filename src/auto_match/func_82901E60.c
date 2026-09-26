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
extern unsigned int lbl_82005F78;


void fn_82901E60(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x23] = param_2;
  *(undefined8 *)(param_1 + 0x2e) = lbl_82005F78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0x7ff0000000000000;
  *(undefined8 *)(param_1 + 0x2c) = 0xfff0000000000000;
  return;
}

