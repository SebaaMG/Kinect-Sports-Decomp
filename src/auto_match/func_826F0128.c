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
extern unsigned int lbl_8200DA00;
extern unsigned int lbl_8200DA08;


void fn_826F0128(undefined8 param_1,undefined4 *param_2)

{
  param_2[1] = 0;
  *param_2 = &lbl_8200D900;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[4] = param_2[4] & 0x3fffff | 0x8400000;
  *(undefined1 *)((int)param_2 + 0x15) = 0;
  param_2[6] = 0;
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 1 | 0x40;
  *(byte *)((int)param_2 + 0x16) = *(byte *)((int)param_2 + 0x16) & 0xf | 0x80;
  param_2[3] = &lbl_8200C4D4;
  param_2[6] = (int)param_2 + 0x187;
  param_2[7] = 0;
  *(undefined8 *)(param_2 + 8) = param_1;
  param_2[10] = 0;
  *(undefined1 *)((int)param_2 + 0x187) = 0;
  *param_2 = &lbl_8200DA08;
  param_2[3] = &lbl_8200DA00;
  param_2[4] = param_2[4] & 0x7ffffff | 0x30000000;
  return;
}

