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


void fn_827A3088(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = param_1 + -1;
  lVar2 = 5;
  do {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    *(undefined1 *)puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined1 *)(param_1 + 0x14) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 3;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 8;
  param_1[0xc] = 0xff000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0x18;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x10;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xff00;
  *(undefined1 *)(param_1 + 0x13) = 0x21;
  return;
}

