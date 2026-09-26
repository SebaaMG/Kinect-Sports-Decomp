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
extern int fn_822315A0();
extern int fn_82233720();
extern int fn_82897D88();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_821972BC;
extern unsigned int lbl_82198390;
extern unsigned int lbl_821983D0;
extern unsigned int lbl_82198460;


void fn_82258D88(undefined4 *param_1)

{
  *param_1 = &lbl_82198460;
  param_1[0x18d] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x18d);
  param_1[0x177] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x177);
  param_1[0x161] = &lbl_821972BC;
  fn_82897D88(param_1 + 0x161);
  if (param_1[0x160] != 0) {
    fn_822315A0();
  }
  fn_82897D88(param_1 + 0x149);
  param_1[0x133] = &lbl_82198390;
  fn_82897D88(param_1 + 0x133);
  param_1[0x11d] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x11d);
  param_1[0x107] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x107);
  param_1[0xf1] = &lbl_821983D0;
  fn_82897D88(param_1 + 0xf1);
  param_1[0xdb] = &lbl_821983D0;
  fn_82897D88(param_1 + 0xdb);
  param_1[0xc5] = &lbl_821983D0;
  fn_82897D88(param_1 + 0xc5);
  param_1[0xaf] = &lbl_821983D0;
  fn_82897D88(param_1 + 0xaf);
  param_1[0x99] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x99);
  param_1[0x83] = &lbl_821972BC;
  fn_82897D88(param_1 + 0x83);
  fn_82233720(param_1);
  return;
}

