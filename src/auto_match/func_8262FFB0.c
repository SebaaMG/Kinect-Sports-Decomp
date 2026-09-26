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


uint fn_8262FFB0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0xf;
  if (uVar2 == 3) {
    uVar1 = param_1[0xc] >> 9 & 3;
    if (uVar1 == 3) {
      uVar2 = 0x12;
    }
    else if (uVar1 == 2) {
      uVar2 = 0x11;
    }
    else if (uVar1 == 0) {
      uVar2 = 0x14;
    }
    else if ((param_1[8] & 0x400) != 0) {
      uVar2 = 0x13;
    }
  }
  else if (((uVar2 == 4) && ((*param_1 & 0x40000000) != 0)) &&
          ((*(uint *)(param_1[6] + 0x30) & 0x600) == 0x400)) {
    uVar2 = 0x10;
  }
  return uVar2;
}

