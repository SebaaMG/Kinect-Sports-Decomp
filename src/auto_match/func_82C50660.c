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
extern int fn_82C75408();


void fn_82C50660(int param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xe30) = 0;
  *(undefined8 *)(param_1 + 0xe38) = 0;
  *(undefined8 *)(param_1 + 0xe48) = 0;
  *(undefined8 *)(param_1 + 0xe50) = 0;
  *(undefined4 *)(param_1 + 0xe68) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0xf68) = 0;
  *(undefined4 *)(param_1 + 0xf6c) = 0;
  *(undefined4 *)(param_1 + 0xf70) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0xf64) = 0;
  *(undefined4 *)(param_1 + 0xfa4) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0xf74) = 0;
  *(undefined4 *)(param_1 + 0x3cd4) = 0;
  *(undefined4 *)(param_1 + 0x3cd8) = 0;
  *(undefined4 *)(param_1 + 0xe88) = 0;
  *(undefined4 *)(param_1 + 0xe8c) = 0;
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 *)(param_1 + 0xe94) = 1;
  *(undefined4 *)(param_1 + 0xe98) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x3dd8) = 0;
  *(undefined4 *)(param_1 + 0x768) = 0;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  *(undefined4 *)(param_1 + 0x770) = 0;
  *(undefined4 *)(param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x3cfc) = 0;
  *(undefined4 *)(param_1 + 0x3cdc) = 0;
  *(undefined4 *)(param_1 + 0xe74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb98) = 0;
  *(undefined4 *)(param_1 + 0xb9c) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  *(undefined4 *)(param_1 + 0xba8) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x3ce0) = 0;
  *(undefined4 *)(param_1 + 0x3ce4) = 0;
  *(undefined4 *)(param_1 + 0x3ce8) = 0;
  *(undefined4 *)(param_1 + 0x3cec) = 1000;
  *(undefined4 *)(param_1 + 0x3cf0) = 1;
  *(undefined4 *)(param_1 + 0xd34) = 0;
  *(undefined4 *)(param_1 + 0xd38) = 0;
  *(undefined4 *)(param_1 + 0x56e4) = 0;
  iVar1 = fn_82C75408(0xe,0x72,0);
  *(int *)(param_1 + 0x56e4) = iVar1;
  if ((iVar1 == 0) || (iVar1 == -1)) {
    *(undefined4 *)(param_1 + 0x56e4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x56e4) = 1;
  }
  *(undefined4 *)(param_1 + 0x3cd0) = 0;
  *(undefined4 *)(param_1 + 0xd3c) = 0;
  *(undefined4 *)(param_1 + 0x56f4) = 2;
  *(undefined4 *)(param_1 + 0x5610) = 0;
  *(undefined4 *)(param_1 + 0x5614) = 0;
  *(undefined4 *)(param_1 + 0x5618) = 0;
  return;
}

