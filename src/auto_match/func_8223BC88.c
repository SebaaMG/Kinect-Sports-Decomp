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
extern int fn_8288B338();
extern int fn_82897D88();
extern unsigned int lbl_82196884;
extern unsigned int lbl_821970C0;
extern unsigned int lbl_821970D0;
extern unsigned int lbl_821972A4;
extern unsigned int lbl_821972AC;
extern unsigned int lbl_821972BC;


void fn_8223BC88(undefined4 *param_1)

{
  *param_1 = &lbl_821972A4;
  param_1[0xa9] = &lbl_821970C0;
  fn_82897D88(param_1 + 0xa9);
  param_1[0x93] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x93);
  param_1[0x7d] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x7d);
  param_1[0x67] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x67);
  param_1[0x51] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x51);
  param_1[0x39] = &lbl_821970D0;
  fn_82897D88(param_1 + 0x39);
  param_1[0x23] = &lbl_821972BC;
  fn_82897D88(param_1 + 0x23);
  param_1[0xd] = &lbl_821972AC;
  fn_82897D88(param_1 + 0xd);
  *param_1 = &lbl_82196884;
  fn_8288B338(param_1);
  return;
}

