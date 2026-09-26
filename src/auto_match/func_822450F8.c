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
extern int fn_8223B998();
extern int fn_8289D4C0();
extern unsigned int lbl_82196A24;
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_82197700;
extern unsigned int lbl_821980D0;
extern unsigned int lbl_821983E8;


void fn_822450F8(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_82197700;
  param_1[0x2c7] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x2c7);
  param_1[0x2b2] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x2b2);
  param_1[0x29d] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x29d);
  lVar1 = 7;
  puVar2 = param_1 + 0x29d;
  do {
    puVar2 = puVar2 + -0x15;
    *puVar2 = &lbl_82197100;
    fn_8289D4C0(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  param_1[0x1e0] = &lbl_821980D0;
  fn_8289D4C0(param_1 + 0x1e0);
  param_1[0x1cb] = &lbl_82197080;
  fn_8289D4C0(param_1 + 0x1cb);
  param_1[0x1b6] = &lbl_821983E8;
  fn_8289D4C0(param_1 + 0x1b6);
  param_1[0x1a1] = &lbl_82196CE0;
  fn_8289D4C0(param_1 + 0x1a1);
  param_1[0x18c] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0x18c);
  puVar2 = param_1 + 0x18c;
  lVar1 = 7;
  do {
    puVar2 = puVar2 + -0x15;
    *puVar2 = &lbl_82197100;
    fn_8289D4C0(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  param_1[0xcf] = &lbl_821980D0;
  fn_8289D4C0(param_1 + 0xcf);
  param_1[0xba] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0xba);
  *param_1 = &lbl_82196A24;
  fn_8223B998(param_1);
  return;
}

