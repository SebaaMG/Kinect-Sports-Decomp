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
extern int fn_828BDDA0();
extern unsigned int lbl_82025010;
extern unsigned int lbl_82025D50;
extern unsigned int lbl_82025D58;


undefined4 * fn_828BFC90(undefined4 *param_1)

{
  fn_828BDDA0();
  *param_1 = &lbl_82025D58;
  param_1[0x14] = &lbl_82025D50;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xf;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x30] = &lbl_82025010;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x35) = 0x8000;
  return param_1;
}

