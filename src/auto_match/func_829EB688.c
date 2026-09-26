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
extern int fn_829EAC30();
extern int fn_829EB580();
extern unsigned int lbl_820798D0;


int fn_829EB688(int param_1)

{
  fn_829EB580(param_1 + 0x28);
  fn_829EB580(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined ***)(param_1 + 0x180) = &lbl_820798D0;
  *(undefined4 *)(param_1 + 0x18c) = 1;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x198) = 1;
  *(undefined4 *)(param_1 + 0x19c) = 1;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 4;
  *(undefined4 *)(param_1 + 0x1a0) = 4;
  *(undefined4 *)(param_1 + 0x188) = 2;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 1;
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 4;
  *(undefined ***)(param_1 + 0x1b4) = &lbl_820798D0;
  *(undefined4 *)(param_1 + 0x1d4) = 4;
  *(undefined4 *)(param_1 + 0x1bc) = 2;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  fn_829EAC30(param_1);
  return param_1;
}

