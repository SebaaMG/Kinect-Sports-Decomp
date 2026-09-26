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
extern unsigned int lbl_821550CC;
extern unsigned int lbl_82162E1C;
extern unsigned int lbl_82162E30;


void fn_82F3E710(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = &lbl_821550CC;
  *param_1 = &lbl_82162E30;
  param_1[1] = &lbl_82162E1C;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xb] = param_1 + 0xb;
  param_1[10] = 0;
  param_1[0xf] = param_1 + 0xe;
  param_1[0xe] = param_1 + 0xe;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_8202E618;
  param_1[5] = lbl_8202E61C;
  param_1[6] = lbl_8202E620;
  uVar1 = lbl_8202E624;
  *(undefined8 *)(param_1 + 8) = 0x18;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[7] = uVar1;
  return;
}

