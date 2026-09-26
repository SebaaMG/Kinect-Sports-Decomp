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
extern int fn_8251F720();


void fn_822A86B0(int param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if (puVar1 != (uint *)0x0) {
    uVar2 = (ulonglong)*puVar1;
    if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
      fn_8251F720(puVar1,0);
    }
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x10) + 4);
  if (puVar1 != (uint *)0x0) {
    uVar2 = (ulonglong)*puVar1;
    if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
      fn_8251F720(puVar1,0);
    }
  }
  uVar3 = 8;
  do {
    puVar1 = (uint *)(uVar3 + *(int *)(param_1 + 0x10));
    if (puVar1 != (uint *)0x0) {
      uVar2 = (ulonglong)*puVar1;
      if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x24);
  uVar3 = 0x24;
  do {
    puVar1 = (uint *)(uVar3 + *(int *)(param_1 + 0x10));
    if (puVar1 != (uint *)0x0) {
      uVar2 = (ulonglong)*puVar1;
      if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x2c);
  uVar3 = 0x40;
  do {
    puVar1 = (uint *)(uVar3 + *(int *)(param_1 + 0x10) + -0x14);
    if (puVar1 != (uint *)0x0) {
      uVar2 = (ulonglong)*puVar1;
      if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    puVar1 = (uint *)(uVar3 + *(int *)(param_1 + 0x10));
    if (puVar1 != (uint *)0x0) {
      uVar2 = (ulonglong)*puVar1;
      if (uVar2 != (uVar2 - 1) + (ulonglong)(uVar2 == 0)) {
        fn_8251F720(puVar1,0);
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x54);
  return;
}

