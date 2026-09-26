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
extern int fn_82645110();


void fn_82649690(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x2aa4) = (param_2 & 3) << 0xc | *(uint *)(param_1 + 0x2aa4) & 0xffffcfff;
  if (*(uint *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar1 + 4) = 0x5c8;
  *(undefined4 *)(uVar1 + 8) = 0x20000;
  *(undefined4 *)(uVar1 + 0xc) = 0xf01;
  *(undefined4 *)(uVar1 + 0x10) = *(undefined4 *)(param_1 + 0x2aa4);
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar1 + 0x10);
  return;
}

