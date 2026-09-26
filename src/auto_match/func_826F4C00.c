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
extern int fn_826F45C0();


void fn_826F4C00(int param_1)

{
  int iVar1;
  
  iVar1 = fn_826F45C0(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x2cc);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x2e0);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  return;
}

