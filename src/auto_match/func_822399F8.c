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
extern int fn_8223A1B0();
extern int fn_8223A2D8();
extern int fn_82253B40();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196E28;
extern unsigned int lbl_82196E38;
extern unsigned int lbl_82196E70;
extern unsigned int lbl_82196E78;


undefined4 * fn_822399F8(undefined4 *param_1,longlong param_2)

{
  fn_82239CB0();
  *param_1 = &lbl_82196E70;
  param_1[10] = &lbl_821968A4;
  fn_8223A1B0(param_1 + 0xc,param_2 + 0x30);
  param_1[0xc] = &lbl_82196E28;
  fn_82253B40(param_1 + 0x2c,param_2 + 0xb0);
  fn_82253B40(param_1 + 0x48,param_2 + 0x120);
  fn_8223A2D8(param_1 + 100,param_2 + 400);
  param_1[100] = &lbl_82196E38;
  *param_1 = &lbl_82196E70;
  param_1[10] = &lbl_82196E78;
  return param_1;
}

