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
extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197294;
extern unsigned int lbl_821983E8;


undefined4 * fn_8223BBA0(undefined4 *param_1)

{
  fn_8288B668();
  *param_1 = &lbl_82197294;
  fn_8289D7E8(param_1 + 0x12,8);
  param_1[0x12] = &lbl_82196CE0;
  fn_8289D7E8(param_1 + 0x27,0x10);
  param_1[0x27] = &lbl_821983E8;
  fn_8289D6D0(param_1 + 0x3c,2);
  param_1[0x3c] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x51,0);
  param_1[0x51] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x66,0);
  param_1[0x66] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x7b,0);
  param_1[0x7b] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x90,0);
  param_1[0x90] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0xa5,0);
  param_1[0xa5] = &lbl_82197080;
  return param_1;
}

