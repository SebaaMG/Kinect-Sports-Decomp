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
extern int fn_82B7BD28();
extern int fn_82B7C490();


void fn_82B7C9B8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xaac) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x7f8);
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0x7f4) = 0xffffffff;
  lVar3 = 0x14;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined1 *)(param_1 + 0x7ed) = 0;
  *(undefined1 *)(param_1 + 0x7e9) = 0;
  *(undefined1 *)(param_1 + 0x7ea) = 0;
  *(undefined1 *)(param_1 + 0x7ec) = 0;
  *(undefined1 *)(param_1 + 0x7eb) = 0;
  *(undefined1 *)(param_1 + 0x7ee) = 0;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  do {
    puVar2[-0x7d] = 0;
    puVar2[-0x69] = 0;
    puVar2[-0x55] = 0;
    puVar2[-0x41] = 0;
    puVar2[-0x2d] = 0;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 0;
  do {
    fn_82B7C490(param_1,lVar3);
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < 3);
  uVar1 = fn_82B7BD28(*(undefined4 *)(param_1 + 0x5a8),0x2000);
  *(undefined4 *)(param_1 + 0x5d8) = uVar1;
  *(undefined4 *)(param_1 + 0x5dc) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  return;
}

