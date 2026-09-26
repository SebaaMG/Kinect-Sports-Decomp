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


void fn_827AED80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 3) & 7) != 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_2 + 3) & 7 | *(byte *)(param_1 + 3) & 0xf8;
  }
  if ((*(byte *)(param_2 + 3) & 8) != 0) {
    *param_1 = *param_2;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
  }
  if ((*(byte *)(param_2 + 3) & 0x10) != 0) {
    uVar1 = param_2[1];
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
    param_1[1] = uVar1;
  }
  if ((*(byte *)(param_2 + 3) & 0x20) == 0) {
    return;
  }
  uVar1 = param_2[2];
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
  param_1[2] = uVar1;
  return;
}

