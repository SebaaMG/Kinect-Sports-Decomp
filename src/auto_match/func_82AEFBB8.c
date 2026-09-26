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


bool fn_82AEFBB8(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar1 = param_2 & 0x1e;
  uVar3 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = param_2 & 0xe;
  }
  else {
    if ((uVar3 == 0) || (bVar2 = true, 0x52 < uVar3)) {
      bVar2 = false;
    }
    if (bVar2) {
      return true;
    }
  }
  return uVar1 == 0;
}

