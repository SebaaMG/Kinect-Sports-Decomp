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
extern int fn_82239CB0();
extern int fn_8223A4D8();
extern int fn_82253938();
extern int fn_82365BD8();
extern int fn_82F565A0();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C58;
extern unsigned int lbl_821980B4;
extern unsigned int lbl_821980BC;
extern unsigned int lbl_821981B8;


undefined4 * fn_822569C0(undefined4 *param_1,longlong param_2)

{
  fn_82239CB0();
  *param_1 = &lbl_821980B4;
  param_1[10] = &lbl_821968A4;
  fn_82253938(param_1 + 0xc,param_2 + 0x30);
  fn_8223A4D8(param_1 + 0x2a,param_2 + 0xa8);
  param_1[0x2a] = &lbl_82196C58;
  fn_82F565A0(param_1 + 0x38,param_2 + 0xe0);
  fn_82F565A0(param_1 + 0x3e,param_2 + 0xf8);
  param_1[0x2a] = &lbl_821980BC;
  fn_82365BD8(param_1 + 0x44,param_2 + 0x110);
  param_1[0x2a] = &lbl_821980BC;
  *param_1 = &lbl_821980B4;
  param_1[10] = &lbl_821981B8;
  return param_1;
}

