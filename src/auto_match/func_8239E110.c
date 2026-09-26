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
extern int fn_82366908();
extern int fn_82A1EFC0();
extern unsigned int lbl_821B51E8;


void fn_8239E110(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  fn_82366908(param_1,param_3,0xffffffff821b51d4);
  param_1[0x90] = param_2;
  param_1[0xa3] = 0;
  *param_1 = &lbl_821B51E8;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x91,0,0x3c);
}

