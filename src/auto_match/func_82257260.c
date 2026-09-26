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
extern int fn_8223B930();
extern int fn_82240DB8();
extern int fn_8288B300();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82198278;
extern unsigned int lbl_82198298;


undefined4 * fn_82257260(undefined4 *param_1)

{
  fn_8288B300(param_1,1);
  *param_1 = &lbl_82198298;
  fn_82240DB8(param_1 + 0xd,2);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xd] = &lbl_821970C0;
  fn_82240DB8(param_1 + 0x23,1);
  param_1[0x26] = 0;
  param_1[0x25] = 7;
  param_1[0x27] = 4;
  param_1[0x23] = &lbl_82198278;
  fn_82240DB8(param_1 + 0x39,1);
  param_1[0x3b] = 7;
  param_1[0x3d] = 4;
  param_1[0x3c] = 0;
  param_1[0x39] = &lbl_82198278;
  fn_82240DB8(param_1 + 0x4f,2);
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x4f] = &lbl_821970C0;
  fn_82240DB8(param_1 + 0x65,2);
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x65] = &lbl_821970C0;
  fn_8223B930(param_1 + 0x7b);
  return param_1;
}

