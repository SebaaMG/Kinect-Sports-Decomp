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


void fn_82A40238(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 == 0x8007000e) {
    return;
  }
  if (uVar2 == 0x80004001) {
    return;
  }
  if (((int)uVar2 >> 0x10 & 0x1fffU) == 0x896) {
    return;
  }
  uVar1 = (ulonglong)uVar2 + 0x7787ff88;
  if (((uVar1 == 0) || ((uVar1 & 0xffffffff) == 0x1e)) || ((uVar1 & 0xffffffff) == 0xfff89)) {
    uVar2 = 0x88960004;
  }
  else {
    if ((uVar1 & 0xffffffff) != 0x1eff89) {
      return;
    }
    uVar2 = 0x88960003;
  }
  *param_1 = uVar2;
  return;
}

