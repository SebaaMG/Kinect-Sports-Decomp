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


int * fn_82644B28(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2a9c);
  uVar2 = *(uint *)(param_1 + 0x2a90);
  uVar3 = *(uint *)(param_1 + 0x3b1c) & 3 | *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x3468) = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x346c) = *(uint *)(param_1 + 0x3b1c);
  *(undefined4 *)(param_2 + 4) = 0xc0003b00;
  *(undefined4 *)(param_2 + 8) = 0x7fff;
  if ((*(byte *)(param_1 + 0x2ac0) & 0x80) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 0xc0001000;
    *(undefined4 *)(param_2 + 0x10) = 0x77777777;
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = 0x5c8;
    *(undefined4 *)(param_2 + 0x10) = 0x20000;
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & 0x7fffffffffffffff;
    *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xfc;
    *(byte *)(param_1 + 0x2ac0) = *(byte *)(param_1 + 0x2ac0) & 0x7f;
  }
  *(undefined4 *)(param_2 + 0x14) = 0xc0025800;
  *(undefined4 *)(param_2 + 0x18) = 3;
  *(uint *)(param_2 + 0x1c) = ((uVar2 + 4 >> 0x14) + 0x200 & 0x1000) + (uVar2 + 4 & 0x1fffffff) | 2;
  *(uint *)(param_2 + 0x20) = uVar3;
  *(undefined4 *)(param_2 + 0x24) = 0xc0025800;
  *(undefined4 *)(param_2 + 0x28) = 3;
  *(uint *)(param_2 + 0x2c) = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) | 2;
  *(int *)(param_2 + 0x30) = iVar1;
  if ((*(int *)(param_1 + 0x54f4) == 0) && ((*(byte *)(param_1 + 0x2abd) & 2) != 0)) {
    **(int **)(param_1 + 0x2a90) = iVar1;
    *(uint *)(*(int *)(param_1 + 0x2a90) + 4) = uVar3;
  }
  *(int *)(param_1 + 0x2a9c) = iVar1 + 2;
  return (int *)(param_2 + 0x30);
}

