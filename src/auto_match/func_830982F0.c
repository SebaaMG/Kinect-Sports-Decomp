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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821347BC;
extern unsigned int lbl_82134B98;
extern unsigned int lbl_82134BA4;
extern unsigned int lbl_82134BB0;
extern unsigned int lbl_82141F1C;
extern unsigned int lbl_82187BB8;
extern unsigned int lbl_82187BC4;
extern unsigned int lbl_82187BD0;
extern unsigned int lbl_82187BDC;
extern unsigned int lbl_82187BF0;
extern unsigned int lbl_82187BFC;


void fn_830982F0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = &lbl_82141F1C;
  param_1[2] = &lbl_82134B98;
  param_1[3] = &lbl_82134BA4;
  param_1[4] = &lbl_821347BC;
  param_1[5] = &lbl_82134BB0;
  *param_1 = &lbl_82187BFC;
  param_1[4] = &lbl_82187BF0;
  param_1[1] = &lbl_82187BDC;
  param_1[2] = &lbl_82187BD0;
  param_1[3] = &lbl_82187BC4;
  param_1[5] = &lbl_82187BB8;
  uVar1 = lbl_82002AE0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[7] = uVar1;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

