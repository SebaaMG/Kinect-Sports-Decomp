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
extern unsigned int lbl_8216DE30;
extern unsigned int lbl_821AAD20;


void fn_82FC85F8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *param_1 = &lbl_8216DE30;
  param_1[0x1f] = 0;
  uVar1 = lbl_821AAD20;
  param_1[0x20] = 0;
  param_1[0x1b] = uVar1;
  param_1[0x25] = 0;
  param_1[0x1c] = uVar1;
  param_1[0x26] = 0;
  param_1[0x1d] = uVar1;
  param_1[0x2b] = 0;
  param_1[0x1e] = uVar1;
  param_1[0x2c] = 0;
  param_1[0x21] = uVar1;
  param_1[0x31] = 0;
  param_1[0x22] = uVar1;
  param_1[0x32] = 0;
  param_1[0x23] = uVar1;
  param_1[0x37] = 0;
  param_1[0x24] = uVar1;
  param_1[0x38] = 0;
  param_1[0x27] = uVar1;
  param_1[0x3d] = 0;
  param_1[0x28] = uVar1;
  param_1[0x3e] = 0;
  param_1[0x29] = uVar1;
  puVar2 = param_1 + 0xb;
  param_1[0x2a] = uVar1;
  lVar3 = 0xc;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = uVar1;
  param_1[0x30] = uVar1;
  param_1[0x33] = uVar1;
  param_1[0x34] = uVar1;
  param_1[0x35] = uVar1;
  param_1[0x36] = uVar1;
  param_1[0x39] = uVar1;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  param_1[0x3c] = uVar1;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x1a] = 0;
  return;
}

