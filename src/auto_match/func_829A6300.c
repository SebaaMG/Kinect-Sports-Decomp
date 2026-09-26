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
extern int fn_82975B00();


undefined8 fn_829A6300(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x38) = 0x100;
  uVar2 = (ulonglong)*(uint *)(param_1 + 200) + 0x1feff;
  *(uint *)(param_1 + 0x70) = uVar1 | 0x1000000;
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 200);
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xc;
    *(undefined4 *)(param_1 + 100) = 10;
    uVar1 = uVar1 | 0x21020000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x40;
  }
  else if ((uVar2 & 0xffffffff) == 0xff) {
    *(undefined4 *)(param_1 + 0x2c) = 0xc;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0x10;
    *(undefined4 *)(param_1 + 0x40) = 0x10;
    uVar1 = uVar1 | 0x21000000;
    *(undefined4 *)(param_1 + 0x68) = 0xff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400200;
    *(undefined4 *)(param_1 + 0x54) = 8;
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  else if ((uVar2 & 0xffffffff) == 0x101) {
    *(undefined4 *)(param_1 + 0x2c) = 0xd;
    *(undefined4 *)(param_1 + 0x38) = 0x2000;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0x10;
    *(undefined4 *)(param_1 + 0x40) = 0x10;
    *(undefined4 *)(param_1 + 0x68) = 0xff;
    *(undefined4 *)(param_1 + 100) = 1;
    uVar1 = uVar1 | 0x11000000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400201;
    *(undefined4 *)(param_1 + 0x54) = 8;
    *(undefined4 *)(param_1 + 0x58) = 0x18;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 200) = 0xfffe0201;
  }
  else {
    if ((uVar2 & 0xffffffff) != 0x1fe) {
      fn_82975B00(param_1,0,0,0xffffffff82051e20);
      return 0xffffffff80004005;
    }
    *(undefined4 *)(param_1 + 0x60) = 0x800;
    *(undefined4 *)(param_1 + 0x2c) = 0x20;
    *(undefined4 *)(param_1 + 0x40) = 0x800;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x38) = 0x2000;
    *(undefined4 *)(param_1 + 0x68) = 0xff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400201;
    uVar1 = uVar1 | 0x11000000;
    *(undefined4 *)(param_1 + 0x54) = 0x10;
    *(undefined4 *)(param_1 + 0x58) = 0x18;
    *(undefined4 *)(param_1 + 0x5c) = 4;
  }
  *(uint *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0x10;
  *(undefined4 *)(param_1 + 0x44) = 0x10;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x1000000;
  *(uint *)(param_1 + 0x70) = uVar1 | 0x600000;
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}

