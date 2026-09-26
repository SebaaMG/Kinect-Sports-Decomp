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
extern int fn_82645110();


void fn_8262FD28(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar3 + 4) = 0xa31;
  *(undefined4 *)(uVar3 + 8) = 0x3000200;
  uVar2 = ((param_2 >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff);
  uVar1 = uVar2 & 0xfffff000;
  *(undefined4 *)(uVar3 + 0xc) = 0x10a2f;
  *(uint *)(uVar3 + 0x10) = (uVar2 + param_3 + 0xfff & 0xfffff000) - uVar1;
  *(uint *)(uVar3 + 0x14) = uVar1;
  *(undefined4 *)(uVar3 + 0x18) = 0xc0043c00;
  *(undefined4 *)(uVar3 + 0x1c) = 3;
  *(undefined4 *)(uVar3 + 0x20) = 0xa31;
  *(undefined4 *)(uVar3 + 0x24) = 0;
  *(undefined4 *)(uVar3 + 0x28) = 0x80000000;
  *(undefined4 *)(uVar3 + 0x2c) = 8;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar3 + 0x2c);
  return;
}

