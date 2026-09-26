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
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820AA970;


void fn_82A81918(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_820AA970;
  param_1[4] = 0;
  param_1[5] = param_1 + 6;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[6] = 0;
  iVar1 = param_1[5];
  *(undefined4 *)(iVar1 + 8) = param_1[4];
  param_1[4] = iVar1 + 4;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xf] = param_1 + 0x10;
  param_1[0x17] = 1;
  param_1[0x10] = 0;
  iVar1 = param_1[0xf];
  *(undefined4 *)(iVar1 + 8) = param_1[0xe];
  param_1[0xe] = iVar1 + 4;
  param_1[0x18] = 1;
  param_1[0x19] = lbl_8202E618;
  param_1[0x1a] = lbl_8202E61C;
  param_1[0x1b] = lbl_8202E620;
  uVar2 = lbl_8202E624;
  param_1[0x1d] = 1;
  param_1[0x1c] = uVar2;
  return;
}

