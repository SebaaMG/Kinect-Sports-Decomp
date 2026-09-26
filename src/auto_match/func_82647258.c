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


void fn_82647258(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  bVar1 = *(byte *)(param_1 + 0x2ac0);
  *(undefined4 *)(uVar2 + 4) = 0x5c8;
  puVar3 = (undefined4 *)(uVar2 + 8);
  *puVar3 = 0x20000;
  if ((bVar1 & 0x40) != 0) {
    *(undefined4 *)(uVar2 + 0xc) = 0xe00;
    *(undefined4 *)(uVar2 + 0x10) = 1;
    *(undefined4 *)(uVar2 + 0x14) = 0xe40;
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    *puVar3 = 1;
  }
  *(undefined4 **)(param_1 + 0x30) = puVar3;
  *(byte *)(param_1 + 0x2ac0) = *(byte *)(param_1 + 0x2ac0) & 0x3f;
  *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xfc;
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  return;
}

