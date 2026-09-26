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
extern int fn_8223A060();
extern int fn_8223A0D0();
extern int fn_82242198();
extern int fn_822422B0();
extern int fn_822423C8();
extern int fn_822424F8();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82197334;
extern unsigned int lbl_8219735C;
extern unsigned int lbl_8219736C;
extern unsigned int lbl_82197408;
extern unsigned int lbl_82197410;


undefined4 * fn_82242070(undefined4 *param_1,longlong param_2)

{
  fn_82239CB0();
  *param_1 = &lbl_82197408;
  param_1[10] = &lbl_821968A4;
  fn_8223A0D0(param_1 + 0xc,param_2 + 0x30);
  param_1[0xc] = &lbl_82197334;
  fn_82242198(param_1 + 0x16,param_2 + 0x58);
  fn_822422B0(param_1 + 0x32,param_2 + 200);
  fn_822423C8(param_1 + 0x4e,param_2 + 0x138);
  param_1[0x4e] = &lbl_8219735C;
  fn_8223A060(param_1 + 0x70,param_2 + 0x1c0);
  fn_822424F8(param_1 + 0x8a,param_2 + 0x228);
  param_1[0x8a] = &lbl_8219736C;
  fn_8223A060(param_1 + 0xaa,param_2 + 0x2a8);
  *param_1 = &lbl_82197408;
  param_1[10] = &lbl_82197410;
  return param_1;
}

