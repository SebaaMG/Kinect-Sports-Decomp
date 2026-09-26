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
extern int fn_8226B918();
extern int fn_8265CA60();
extern unsigned int lbl_821A7E9C;


undefined4 *
fn_8226B4D0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_6;
  *param_1 = &lbl_821A7E9C;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = *param_4;
  param_1[0x18] = param_4[1];
  param_1[0x19] = *param_3;
  param_1[0x1a] = param_3[1];
  param_1[0x1b] = *param_5;
  uVar1 = param_5[1];
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)((int)param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x1c] = uVar1;
  fn_8226B918();
  uVar1 = fn_8265CA60(0x280);
  param_1[0x15] = uVar1;
  return param_1;
}

