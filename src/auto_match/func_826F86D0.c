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
extern unsigned int lbl_8200DBF8;


void fn_826F86D0(undefined4 *param_1)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200DBF8;
  *(undefined1 *)((int)param_1 + 0xb) = 0x80;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0x10;
  *(undefined1 *)(param_1 + 3) = 0x40;
  *(undefined1 *)((int)param_1 + 0xd) = 0x40;
  *(undefined1 *)((int)param_1 + 0xe) = 0x10;
  *(undefined1 *)((int)param_1 + 0xf) = 0xff;
  *(undefined2 *)(param_1 + 4) = 0x1c2;
  *(undefined2 *)((int)param_1 + 0x12) = 0x50;
  *(undefined2 *)(param_1 + 5) = 0x39;
  *(undefined2 *)((int)param_1 + 0x16) = 0x39;
  param_1[6] = 0;
  return;
}

