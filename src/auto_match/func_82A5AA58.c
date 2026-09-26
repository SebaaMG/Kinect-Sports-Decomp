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
extern int fn_82A5A1A8();
extern unsigned int lbl_82089670;
extern unsigned int lbl_8208DE68;


undefined4 *
fn_82A5AA58(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  param_1[1] = 0;
  *param_1 = &lbl_8208DE68;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x10] = &lbl_82089670;
  param_1[0x18] = 0;
  param_1[0x19] = param_2;
  param_1[0x1a] = param_3;
  param_1[0x1b] = param_4;
  param_1[0x1c] = param_5;
  param_1[0x1d] = param_6;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  fn_82A5A1A8(param_1 + 0x21);
  fn_82A5A1A8(param_1 + 0x58);
  param_1[0x8f] = 0;
  param_1[0xa4] = param_1 + 0x90;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  return param_1;
}

