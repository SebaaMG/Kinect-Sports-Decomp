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
extern int fn_82FC99C0();
extern unsigned int lbl_8216E424;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82FDA1D0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &lbl_8216E424;
  fn_82FC99C0(param_1 + 3);
  uVar1 = lbl_821AAD20;
  param_1[0x4b] = lbl_821AAD20;
  param_1[0x4c] = uVar1;
  param_1[0x4a] = uVar1;
  param_1[0x5a] = 0;
  param_1[0x56] = uVar1;
  param_1[0x5b] = 0;
  param_1[0x57] = uVar1;
  param_1[0x60] = 0;
  param_1[0x58] = uVar1;
  param_1[0x61] = 0;
  param_1[0x59] = uVar1;
  param_1[0x66] = 0;
  param_1[0x5c] = uVar1;
  param_1[0x67] = 0;
  param_1[0x5d] = uVar1;
  param_1[0x5e] = uVar1;
  param_1[0x5f] = uVar1;
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  param_1[100] = uVar1;
  param_1[0x65] = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  return param_1;
}

