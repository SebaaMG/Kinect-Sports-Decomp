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
extern int fn_82B7C9B8();
extern int fn_82B7CA68();
extern unsigned int lbl_820DB518;


void fn_82B7CC20(undefined4 *param_1,undefined8 param_2,code *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  param_1[0x169] = (int)param_2;
  param_1[0x15a] = param_6;
  param_1[0x167] = param_4;
  param_1[0x168] = param_3;
  *(undefined1 *)(param_1 + 0x156) = 1;
  param_1[0x2a6] = 0x7fffffff;
  *(undefined1 *)(param_1 + 0x214) = 1;
  *(undefined1 *)((int)param_1 + 0x851) = 1;
  param_1[0x2ac] = 0;
  param_1[0x216] = 0xefba;
  param_1[0x2a7] = 0x7fffffff;
  param_1[0x2a8] = 0x7fffffff;
  param_1[0x2a9] = 0x7fffffff;
  param_1[0x2aa] = 0x10;
  *param_1 = param_5;
  puVar1 = (undefined4 *)(*param_3)(param_2,0x34);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0x10;
    puVar1[9] = 0x10;
    puVar1[8] = 0x100;
    puVar1[10] = 0x100;
    puVar1[3] = 0xfff;
    *puVar1 = &lbl_820DB518;
    puVar1[4] = 4;
    puVar1[1] = 0x40;
    puVar1[5] = 0xfff;
    puVar1[6] = 0x20;
    puVar1[7] = 4;
  }
  param_1[0x154] = puVar1;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  fn_82B7C9B8(param_1);
  fn_82B7CA68(param_1);
  return;
}

