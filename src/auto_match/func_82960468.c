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


undefined8 fn_82960468(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 200);
  uVar2 = (ulonglong)uVar1 + 0x1fd00;
  *(uint *)(param_1 + 0x10c) = uVar1;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x60;
    *(undefined4 *)(param_1 + 0x38) = 0x100;
    *(undefined4 *)(param_1 + 0x40) = 0x10;
    *(undefined4 *)(param_1 + 0x68) = 0xff;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined4 *)(param_1 + 0x58) = 0x18;
    *(undefined4 *)(param_1 + 0x5c) = 4;
    *(undefined4 *)(param_1 + 0x4c) = 10;
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x13f80000;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x40400201;
  }
  else {
    if ((uVar2 & 0xffffffff) == 0xff) {
      *(undefined4 *)(param_1 + 0x60) = 0x800;
      *(undefined4 *)(param_1 + 0x40) = 0x800;
      *(undefined4 *)(param_1 + 0x38) = 0x2000;
      *(undefined4 *)(param_1 + 0x28) = 0x10;
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x68) = 0xff;
      *(undefined4 *)(param_1 + 0x54) = 0x10;
      *(undefined4 *)(param_1 + 0x58) = 0x18;
      *(undefined4 *)(param_1 + 0x5c) = 4;
      *(undefined4 *)(param_1 + 0x4c) = 0x10;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400201;
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x13f80000;
      goto LAB_82960634;
    }
    uVar2 = (ulonglong)uVar1 + 0xfd00;
    if ((uVar2 & 0xffffffff) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x10;
      *(undefined4 *)(param_1 + 0x40) = 0x10;
      *(undefined4 *)(param_1 + 0x38) = 0x100;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0x80;
      *(undefined4 *)(param_1 + 0x68) = 0xff;
      uVar3 = 0x1a;
    }
    else {
      if ((uVar2 & 0xffffffff) != 0xff) {
        fn_82975B00(param_1,0,0,0xffffffff820385b8);
        return 0xffffffff80004005;
      }
      uVar3 = 0x10;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0x10;
      *(undefined4 *)(param_1 + 0x60) = 0x10;
      *(undefined4 *)(param_1 + 0x40) = 0x10;
      *(undefined4 *)(param_1 + 0x38) = 0x2000;
      *(undefined4 *)(param_1 + 0x68) = 0xff;
    }
    *(undefined4 *)(param_1 + 0x5c) = 4;
    *(undefined4 *)(param_1 + 0x58) = 0x18;
    *(undefined4 *)(param_1 + 0x48) = 4;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x82c00201;
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x16500000;
  }
  *(undefined4 *)(param_1 + 0x54) = 8;
LAB_82960634:
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  *(undefined4 *)(param_1 + 0x1d4) = 0x20;
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x40000;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
  return 0;
}

