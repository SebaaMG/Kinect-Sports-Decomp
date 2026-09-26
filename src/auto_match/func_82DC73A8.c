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


undefined8 fn_82DC73A8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0x11) {
    return 0x10;
  }
  if (iVar1 < 0x21) {
    return 0x20;
  }
  if (iVar1 < 0x31) {
    return 0x30;
  }
  if (iVar1 < 0x41) {
    return 0x40;
  }
  if (iVar1 < 0x61) {
    return 0x60;
  }
  if (iVar1 < 0x81) {
    return 0x80;
  }
  if (iVar1 < 0xa1) {
    return 0xa0;
  }
  if (iVar1 < 0xc1) {
    return 0xc0;
  }
  if (iVar1 < 0x101) {
    return 0x100;
  }
  if (iVar1 < 0x141) {
    return 0x140;
  }
  if (iVar1 < 0x201) {
    return 0x200;
  }
  if (iVar1 < 0x221) {
    return 0x220;
  }
  if (iVar1 < 0x401) {
    return 0x400;
  }
  if (iVar1 < 0x801) {
    return 0x800;
  }
  if (iVar1 < 0x1001) {
    return 0x1000;
  }
  if (0x2000 < iVar1) {
    return param_1;
  }
  return 0x2000;
}

