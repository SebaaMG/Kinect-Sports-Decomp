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
extern int fn_82232CC8();
extern int fn_82233250();
extern int fn_82240DB8();
extern unsigned int lbl_82198278;
extern unsigned int lbl_821983D0;
extern unsigned int lbl_821983E0;


undefined4 * fn_822589B8(undefined4 *param_1)

{
  fn_82232CC8();
  *param_1 = &lbl_821983E0;
  fn_82233250(param_1 + 0x39);
  fn_82233250(param_1 + 0x83);
  fn_82233250(param_1 + 0xcd);
  fn_82233250(param_1 + 0x117);
  fn_82233250(param_1 + 0x161);
  fn_82233250(param_1 + 0x1ab);
  fn_82240DB8(param_1 + 0x1f5,1);
  param_1[0x1f7] = 7;
  param_1[0x1f9] = 4;
  param_1[0x1f8] = 0;
  param_1[0x1f5] = &lbl_821983D0;
  fn_82240DB8(param_1 + 0x20b,1);
  param_1[0x20d] = 7;
  param_1[0x20f] = 4;
  param_1[0x20e] = 0;
  param_1[0x20b] = &lbl_82198278;
  return param_1;
}

