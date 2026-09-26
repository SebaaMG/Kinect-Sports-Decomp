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
extern int fn_82CE5458();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134508;


undefined2 * fn_82D98100(undefined2 *param_1)

{
  undefined4 auStack_20 [4];
  
  *param_1 = 2;
  param_1[0x48] = 0x13;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined1 *)(param_1 + 0x72) = 1;
  param_1[0x70] = 0x11;
  *(undefined1 *)(param_1 + 0x77) = 1;
  auStack_20[0] = lbl_82002AE0;
  param_1[0x76] = 0xf;
  *(undefined1 *)(param_1 + 0x81) = 1;
  param_1[0x80] = 0x10;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  param_1[0x8a] = 0x10;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x94] = 5;
  *(undefined1 *)(param_1 + 0x95) = 0;
  fn_82CE5458((int)param_1 + 299,auStack_20);
  *(undefined4 *)(param_1 + 0x96) = lbl_82134508;
  return param_1;
}

