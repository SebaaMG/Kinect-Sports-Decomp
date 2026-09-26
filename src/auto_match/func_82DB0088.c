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
extern unsigned int lbl_8200D8B4;
extern unsigned int lbl_82141EA4;
extern unsigned int lbl_821AAD20;


void fn_82DB0088(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1[6] = param_2;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 0x33;
  *param_1 = &lbl_82141EA4;
  uVar1 = lbl_821AAD20;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x26) = 0x50;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = 0xffffffd1;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  uVar1 = lbl_8200D8B4;
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1 + 0x15;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000001;
  param_1[0x17] = param_1 + 0x1a;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000001;
  param_1[0x16] = 0x200;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 0xfc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 0xcf;
  return;
}

