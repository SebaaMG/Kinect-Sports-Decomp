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
extern int fn_822337D0();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_821980D0;
extern unsigned int lbl_82198128;
extern unsigned int lbl_82198150;
extern unsigned int lbl_821981D0;


undefined4 * fn_82255478(undefined4 *param_1)

{
  fn_822337D0();
  *param_1 = &lbl_82198128;
  fn_8289D6D0(param_1 + 0x7b,5);
  param_1[0x7b] = &lbl_821981D0;
  fn_8289D6D0(param_1 + 0x90,0);
  param_1[0x90] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xa5,0);
  param_1[0xa5] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xba,0);
  param_1[0xba] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xcf,0);
  param_1[0xcf] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xe4,4);
  param_1[0xf9] = 0;
  param_1[0xe4] = &lbl_82198150;
  param_1[0xfa] = 0;
  fn_8289D6D0(param_1 + 0xfb,4);
  param_1[0xfb] = &lbl_82198150;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  fn_8289D7E8(param_1 + 0x112,1);
  param_1[0x112] = &lbl_821980D0;
  fn_8289D6D0(param_1 + 0x127,4);
  param_1[0x127] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0x13c,4);
  param_1[0x13c] = &lbl_82197100;
  return param_1;
}

