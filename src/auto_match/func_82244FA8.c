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
extern int fn_8223BBA0();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_82197700;
extern unsigned int lbl_821980D0;
extern unsigned int lbl_821983E8;


undefined4 * fn_82244FA8(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  fn_8223BBA0();
  *param_1 = &lbl_82197700;
  fn_8289D6D0(param_1 + 0xba,8);
  param_1[0xba] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0xcf,1);
  puVar2 = param_1 + 0xe4;
  lVar1 = 7;
  param_1[0xcf] = &lbl_821980D0;
  do {
    fn_8289D6D0(puVar2,4);
    *puVar2 = &lbl_82197100;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  fn_8289D6D0(param_1 + 0x18c,8);
  param_1[0x18c] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x1a1,8);
  param_1[0x1a1] = &lbl_82196CE0;
  fn_8289D7E8(param_1 + 0x1b6,0x10);
  param_1[0x1b6] = &lbl_821983E8;
  fn_8289D6D0(param_1 + 0x1cb,2);
  param_1[0x1cb] = &lbl_82197080;
  fn_8289D7E8(param_1 + 0x1e0,1);
  puVar2 = param_1 + 0x1f5;
  lVar1 = 7;
  param_1[0x1e0] = &lbl_821980D0;
  do {
    fn_8289D6D0(puVar2,4);
    *puVar2 = &lbl_82197100;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  fn_8289D6D0(param_1 + 0x29d,0);
  param_1[0x29d] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x2b2,2);
  param_1[0x2b2] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x2c7,0);
  param_1[0x2c7] = &lbl_82197080;
  return param_1;
}

