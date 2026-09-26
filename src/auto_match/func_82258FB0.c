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
extern int fn_82233888();
extern int fn_8289D4C0();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82198348;
extern unsigned int lbl_821983E8;
extern unsigned int lbl_82198450;
extern unsigned int lbl_821B9610;


void fn_82258FB0(undefined4 *param_1)

{
  *param_1 = &lbl_82198450;
  param_1[0x177] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x177);
  param_1[0x162] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x162);
  param_1[0x14d] = &lbl_821983E8;
  fn_8289D4C0(param_1 + 0x14d);
  fn_8289D4C0(param_1 + 0x138);
  param_1[0x123] = &lbl_82198348;
  fn_8289D4C0(param_1 + 0x123);
  param_1[0x10e] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x10e);
  param_1[0xf9] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0xf9);
  param_1[0xe4] = &lbl_821B9610;
  fn_8289D4C0(param_1 + 0xe4);
  param_1[0xcf] = &lbl_821B9610;
  fn_8289D4C0(param_1 + 0xcf);
  param_1[0xba] = &lbl_821B9610;
  fn_8289D4C0(param_1 + 0xba);
  param_1[0xa5] = &lbl_821B9610;
  fn_8289D4C0(param_1 + 0xa5);
  param_1[0x90] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x90);
  param_1[0x7b] = &lbl_821983E8;
  fn_8289D4C0(param_1 + 0x7b);
  fn_82233888(param_1);
  return;
}

