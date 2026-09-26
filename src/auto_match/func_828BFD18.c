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
extern int fn_8265CA20();
extern int fn_828BDE70();
extern unsigned int lbl_82025010;
extern unsigned int lbl_82025D50;
extern unsigned int lbl_82025D58;


void fn_828BFD18(undefined4 *param_1)

{
  *param_1 = &lbl_82025D58;
  param_1[0x14] = &lbl_82025D50;
  param_1[0x30] = &lbl_82025010;
  if (param_1[0x31] != 0) {
    fn_8265CA20();
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (0xf < (uint)param_1[0x2e]) {
    fn_8265CA20(param_1[0x29]);
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xf;
  *(undefined1 *)(param_1 + 0x29) = 0;
  fn_828BDE70(param_1);
  return;
}

