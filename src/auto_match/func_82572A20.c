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


void fn_82572A20(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(*(int *)(param_1 + 0xa0) + 0xc) == param_2)) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if ((*(int *)(param_1 + 0x110) != 0) && (*(int *)(*(int *)(param_1 + 0x110) + 0xc) == param_2)) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  for (uVar2 = *(uint *)(param_1 + 4); uVar2 < uVar1; uVar2 = uVar2 + 0x60) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0(param_1 + 4,uVar2);
      uVar2 = uVar2 - 0x60;
      uVar1 = uVar1 - 0x60;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  for (uVar2 = *(uint *)(param_1 + 0x18); uVar2 < uVar1; uVar2 = uVar2 + 0x60) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0(param_1 + 0x18,uVar2);
      uVar2 = uVar2 - 0x60;
      uVar1 = uVar1 - 0x60;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  for (uVar2 = *(uint *)(param_1 + 0x2c); uVar2 < uVar1; uVar2 = uVar2 + 0x50) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0(param_1 + 0x2c,uVar2);
      uVar2 = uVar2 - 0x50;
      uVar1 = uVar1 - 0x50;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  for (uVar2 = *(uint *)(param_1 + 0x40); uVar2 < uVar1; uVar2 = uVar2 + 0x50) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0((uint *)(param_1 + 0x40),uVar2);
      uVar2 = uVar2 - 0x50;
      uVar1 = uVar1 - 0x50;
    }
  }
  return;
}

