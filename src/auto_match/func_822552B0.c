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
extern int fn_82233640();
extern int fn_8223B8C8();
extern int fn_8223B930();
extern int fn_82240688();
extern int fn_82240DB8();
extern unsigned int lbl_82198138;
extern unsigned int lbl_82198148;
extern unsigned int lbl_821981C0;
extern unsigned int lbl_821CC160;


undefined4 * fn_822552B0(undefined4 *param_1)

{
  fn_82233640();
  *param_1 = &lbl_82198148;
  fn_82240DB8(param_1 + 0x83,1);
  param_1[0x85] = 5;
  param_1[0x86] = lbl_821CC160;
  param_1[0x83] = &lbl_821981C0;
  fn_82240688(param_1 + 0x99);
  fn_82240688(param_1 + 0xaf);
  fn_82240688(param_1 + 0xc5);
  fn_82240688(param_1 + 0xdb);
  fn_82240688(param_1 + 0xf1);
  fn_8223B930(param_1 + 0x107);
  fn_8223B930(param_1 + 0x121);
  fn_82240DB8(param_1 + 0x13b,1);
  param_1[0x13d] = 7;
  param_1[0x13f] = 1;
  param_1[0x13e] = 0;
  param_1[0x13b] = &lbl_82198138;
  fn_8223B930(param_1 + 0x151);
  fn_8223B8C8(param_1 + 0x16b);
  return param_1;
}

