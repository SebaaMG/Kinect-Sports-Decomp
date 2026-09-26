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
extern int fn_828AAAA0();
extern int fn_82A1EFC0();
extern unsigned int lbl_82197CE0;
extern unsigned int lbl_82197CE8;
extern unsigned int lbl_82197D3C;


void fn_8224CA90(undefined4 *param_1)

{
  fn_828AAAA0();
  param_1[0x1c] = &lbl_82197CE0;
  param_1[0x1f] = 0;
  param_1[0x1e] = param_1 + 0x1d;
  param_1[0x1d] = param_1 + 0x1d;
  *param_1 = &lbl_82197CE8;
  param_1[0x20] = 0;
  param_1[0x1c] = &lbl_82197D3C;
  param_1[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x22,0,1000);
}

