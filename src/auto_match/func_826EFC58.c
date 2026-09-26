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
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200D900;
extern unsigned int lbl_8200D9C0;
extern unsigned int lbl_8200DA00;


void fn_826EFC58(undefined4 *param_1,undefined4 param_2,int param_3)

{
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &lbl_8200D900;
  param_1[4] = param_1[4] & 0x3fffff | 0x8400000;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) & 0xf | 0x80;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 1 | 0x40;
  param_1[6] = 0;
  param_1[3] = &lbl_8200C4D4;
  param_1[6] = param_1 + 0x13;
  *param_1 = &lbl_8200D9C0;
  param_1[3] = &lbl_8200DA00;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x3f | 0x80;
  param_1[7] = param_1[7] & 0x7ffffff | 0x50000000;
  *(longlong *)(param_1 + 10) = (longlong)param_3;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}

