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
extern unsigned int lbl_821CC160;


void fn_823AAF00(int param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = lbl_821CC160;
  *(uint *)((param_3 + 0x19) * 4 + param_1) = param_4;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0xc) = param_3;
  *(uint *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 8;
  *(undefined4 *)(param_1 + 0x44) = 8;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  *(undefined4 *)(param_1 + 0x54) = 9;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(uint *)((param_3 + 0x1b) * 4 + param_1) = param_4 ^ 1;
  return;
}

