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
extern int fn_8251E5A0();


void fn_82572B80(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  else {
    if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0xa0) == param_2)) {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    if ((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x110) == param_2)) {
      *(undefined1 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    uVar1 = *(uint *)(param_1 + 8);
    for (uVar2 = *(uint *)(param_1 + 4); uVar2 < uVar1; uVar2 = uVar2 + 0x60) {
      if (*(int *)(uVar2 + 0x40) == param_2) {
        fn_8251E5A0(param_1 + 4,uVar2);
        uVar2 = uVar2 - 0x60;
        uVar1 = uVar1 - 0x60;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x1c);
    for (uVar2 = *(uint *)(param_1 + 0x18); uVar2 < uVar1; uVar2 = uVar2 + 0x60) {
      if (*(int *)(uVar2 + 0x40) == param_2) {
        fn_8251E5A0(param_1 + 0x18,uVar2);
        uVar2 = uVar2 - 0x60;
        uVar1 = uVar1 - 0x60;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x30);
    for (uVar2 = *(uint *)(param_1 + 0x2c); uVar2 < uVar1; uVar2 = uVar2 + 0x50) {
      if (*(int *)(uVar2 + 0x40) == param_2) {
        fn_8251E5A0(param_1 + 0x2c,uVar2);
        uVar2 = uVar2 - 0x50;
        uVar1 = uVar1 - 0x50;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x44);
    for (uVar2 = *(uint *)(param_1 + 0x40); uVar2 < uVar1; uVar2 = uVar2 + 0x50) {
      if (*(int *)(uVar2 + 0x40) == param_2) {
        fn_8251E5A0(param_1 + 0x40,uVar2);
        uVar2 = uVar2 - 0x50;
        uVar1 = uVar1 - 0x50;
      }
    }
  }
  return;
}

