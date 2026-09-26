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
extern int fn_8267ADA8();
extern int fn_826854A0();
extern unsigned int lbl_82005B34;
extern unsigned int lbl_82005B44;


undefined4 * fn_82685D28(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = param_2;
  *param_1 = &lbl_82005B44;
  param_1[3] = 0x300000;
  param_1[1] = 1;
  param_1[5] = 0;
  param_1[4] = &lbl_82005B34;
  param_1[6] = 0;
  param_1[0xb] = param_1 + 7;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x7f;
  param_1[10] = 0;
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = param_1 + 0xe;
  param_1[0xf] = param_1 + 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x7f;
  param_1[0x13] = 0;
  param_1[0x14] = param_1 + 0x10;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x16] = param_1 + 0x15;
  fn_8267ADA8(param_1 + 0x17,0);
  param_1[0x1e] = 1;
  param_1[0x1f] = 1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  fn_826854A0(param_1,param_1[3]);
  return param_1;
}

