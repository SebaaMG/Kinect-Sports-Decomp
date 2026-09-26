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


void fn_82250CA0(int param_1)

{
  undefined4 *in_r8;
  undefined4 *in_r9;
  undefined4 in_r10;
  undefined4 *puVar1;
  undefined4 in_r11;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    *in_r9 = in_r11;
    in_r9 = in_r9 + 1;
    in_cr6 = (in_r9 == in_r8) << 1;
  }
  *(undefined4 *)(param_1 + 0x30) = in_r11;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = in_r10;
  for (puVar1 = (undefined4 *)(param_1 + 0x3c); puVar1 != (undefined4 *)(param_1 + 0x58);
      puVar1 = puVar1 + 1) {
    *puVar1 = in_r11;
  }
  *(undefined4 *)(param_1 + 0x58) = in_r10;
  puVar1 = (undefined4 *)(param_1 + 0x5c);
  if (puVar1 != (undefined4 *)(param_1 + 0x78)) {
    do {
      *puVar1 = in_r11;
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(param_1 + 0x78));
    return;
  }
  return;
}

