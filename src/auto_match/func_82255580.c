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
extern unsigned int lbl_82197100;
extern unsigned int lbl_821980D0;
extern unsigned int lbl_82198128;
extern unsigned int lbl_821981D0;


void fn_82255580(undefined4 *param_1)

{
  *param_1 = &lbl_82198128;
  param_1[0x13c] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x13c);
  param_1[0x127] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x127);
  param_1[0x112] = &lbl_821980D0;
  fn_8289D4C0(param_1 + 0x112);
  param_1[0xfb] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0xfb);
  param_1[0xe4] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0xe4);
  param_1[0xcf] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0xcf);
  param_1[0xba] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0xba);
  param_1[0xa5] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0xa5);
  param_1[0x90] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x90);
  param_1[0x7b] = &lbl_821981D0;
  fn_8289D4C0(param_1 + 0x7b);
  fn_82233888(param_1);
  return;
}

