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
extern int fn_82D937A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8213B63C;
extern unsigned int lbl_821415C4;


undefined4 * fn_82D8AAA8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  fn_82D937A8(param_1,param_2,1);
  uVar1 = lbl_82002C5C;
  *param_1 = &lbl_821415C4;
  uVar2 = lbl_820162A0;
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar2;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((int)param_1 + 0xb2) = 0x8000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x80000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x80000000;
  *(undefined1 *)((int)param_1 + 0xdf) = 1;
  uVar1 = lbl_82002AE0;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0xde) = 3;
  param_1[0x7e] = 0;
  param_1[0x38] = &lbl_8213B63C;
  param_1[0x80] = 0;
  *(undefined2 *)(param_1 + 0x81) = 0;
  *(undefined2 *)((int)param_1 + 0x206) = 0x8000;
  param_1[0x82] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  *(undefined2 *)((int)param_1 + 0x20e) = 0x8000;
  param_1[0x84] = 0;
  param_1[0x27] = uVar1;
  *(undefined2 *)(param_1 + 0x2a) = 0xffff;
  param_1[0x33] = 0;
  param_1[0x85] = 0;
  param_1[0x26] = 0;
  param_1[0x35] = 0xffffffff;
  param_1[0x29] = 0;
  *(undefined1 *)((int)param_1 + 0xd1) = 0;
  param_1[0x28] = 0;
  return param_1;
}

