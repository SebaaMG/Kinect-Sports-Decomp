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


undefined8 fn_8297F548(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 == param_3) {
    return 0;
  }
  switch(param_2) {
  case 1:
  case 2:
  case 6:
    if (param_3 < 1) {
      return 1;
    }
    bVar1 = 9 < param_3;
    break;
  case 3:
  case 7:
    if (param_3 < 1) {
      return 1;
    }
    if (param_3 < 4) {
      return 0;
    }
    if (param_3 < 6) {
      return 1;
    }
    bVar1 = 7 < param_3;
    break;
  case 4:
  case 8:
    if (param_3 < 1) {
      return 1;
    }
    if (param_3 < 3) {
      return 0;
    }
    if (param_3 == 4) {
      return 0;
    }
    if (param_3 == 6) {
      return 0;
    }
    bVar1 = param_3 == 8;
    goto code_r0x8297f5e8;
  case 5:
  case 9:
    if (param_3 < 1) {
      return 1;
    }
    if (param_3 < 3) {
      return 0;
    }
    if (param_3 < 5) {
      return 1;
    }
    if (param_3 < 7) {
      return 0;
    }
    bVar1 = param_3 == 9;
    goto code_r0x8297f5e8;
  case 10:
    if (param_3 < 10) {
      return 1;
    }
    bVar1 = 0xd < param_3;
    break;
  case 0xb:
    if (param_3 < 10) {
      return 1;
    }
    bVar1 = 0xb < param_3;
    break;
  case 0xc:
    if (param_3 == 10) {
      return 0;
    }
    bVar1 = param_3 == 0xc;
    goto code_r0x8297f5e8;
  case 0xd:
    if (param_3 == 10) {
      return 0;
    }
    bVar1 = param_3 == 0xd;
code_r0x8297f5e8:
    if (bVar1) {
      return 0;
    }
    return 1;
  default:
    goto code_r0x8297f59c;
  }
  if (!bVar1) {
    return 0;
  }
code_r0x8297f59c:
  return 1;
}

