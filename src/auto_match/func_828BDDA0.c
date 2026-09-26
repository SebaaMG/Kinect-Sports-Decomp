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
extern unsigned int *auStack_20;
extern int fn_828B5608();
extern int fn_828BDAB0();
extern unsigned int lbl_82025550;
extern unsigned int lbl_82025988;
extern unsigned int lbl_821AECB0;


undefined4 * fn_828BDDA0(undefined4 *param_1)

{
  undefined1 auStack_20 [8];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = &lbl_821AECB0;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x17] = 0;
  *param_1 = &lbl_82025550;
  param_1[0x14] = &lbl_82025988;
  fn_828B5608(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  param_1[0x1b] = 0;
  fn_828BDAB0(param_1 + 0x1c,auStack_20);
  return param_1;
}

