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
extern unsigned int lbl_82196290;
extern unsigned int lbl_82196298;
extern unsigned int lbl_821C3738;
extern unsigned int lbl_821CC160;


void fn_8252DAB8(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = &lbl_821C3738;
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 8) = lbl_82196290;
  *(undefined8 *)(param_1 + 10) = lbl_82196298;
  uVar2 = lbl_821CC160;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x10) = lbl_82196290;
  *(undefined8 *)(param_1 + 0x12) = lbl_82196298;
  *(undefined8 *)(param_1 + 0xc) = lbl_82196290;
  *(undefined8 *)(param_1 + 0xe) = lbl_82196298;
  *(undefined8 *)(param_1 + 0x14) = lbl_82196290;
  uVar1 = lbl_82196298;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar2;
  param_1[0x1c] = 0;
  param_1[0x1b] = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1d] = uVar2;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  param_1[0x47] = param_1;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x66] = param_1;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  return;
}

