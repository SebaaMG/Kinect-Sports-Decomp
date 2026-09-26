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


void fn_828145A4(int param_1,int param_2)

{
  uint in_r8;
  int in_r9;
  int in_r10;
  uint uVar1;
  uint in_r11;
  uint uVar2;
  byte in_cr6;
  
  while (((bool)(in_cr6 >> 3 & 1) && (param_1 == 0))) {
    if (param_2 == *(int *)(in_r11 + 4)) {
      param_1 = 1;
    }
    in_r11 = in_r11 + 0x14;
    in_cr6 = (in_r11 < in_r8) << 3;
  }
  uVar2 = *(uint *)(in_r10 + 0x30);
  uVar1 = (uint)*(byte *)(in_r9 + 0x51) * 0x21 + uVar2;
  while( true ) {
    if (uVar1 <= uVar2) {
      return;
    }
    if (param_1 != 0) break;
    if (param_2 == *(int *)(uVar2 + 0xd)) {
      param_1 = 1;
    }
    uVar2 = uVar2 + 0x21;
  }
  return;
}

