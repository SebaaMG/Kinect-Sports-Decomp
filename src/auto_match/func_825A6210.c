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
extern int fn_82A1EFC0();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821C8024;
extern unsigned int lbl_821CA460;


void fn_825A6210(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &lbl_821C8024;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  uVar1 = lbl_821917C0;
  param_1[0x5a] = 0;
  param_1[0x5b] = uVar1;
  param_1[0x5e] = param_2;
  param_1[0x5c] = 0;
  uVar1 = lbl_821CA460;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = uVar1;
  param_1[0x54] = uVar1;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x18,0,0x60);
}

