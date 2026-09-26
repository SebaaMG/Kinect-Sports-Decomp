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
extern int fn_8268DEB8();
extern int iRam831e928c;


undefined4 fn_8268E008(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  sync(1);
  if (iRam831e928c == 0) {
    fn_8268DEB8();
  }
  uVar2 = (uint)*(ushort *)((param_1 >> 2 & 0x3ffffffe) + 0x831e7e84);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(((param_1 & 7) + uVar2) * 4 + -0x7ce17d80);
  }
  return uVar1;
}

