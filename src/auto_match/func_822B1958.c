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
extern int fn_8255B620();
extern int fn_8255B740();


void fn_822B1958(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = 5;
  do {
    if (((uint)*(byte *)((int)((uVar1 & 0xffffffff) >> 3) + *(int *)(*(int *)(param_1 + 0xf4) + 8))
        & 1 << ((uint)uVar1 & 7)) != 0) {
      fn_8255B620(param_1,uVar1 - 4);
    }
    uVar1 = uVar1 + 1;
  } while ((uVar1 & 0xffffffff) < 0x37);
  uVar1 = 0x37;
  do {
    if (((uint)*(byte *)((int)((uVar1 & 0xffffffff) >> 3) + *(int *)(*(int *)(param_1 + 0xf4) + 8))
        & 1 << ((uint)uVar1 & 7)) != 0) {
      fn_8255B740(param_1,uVar1 - 0x36);
    }
    uVar1 = uVar1 + 1;
  } while ((uVar1 & 0xffffffff) < 0x3c);
  return;
}

