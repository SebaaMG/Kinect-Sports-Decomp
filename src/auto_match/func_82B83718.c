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


void fn_82B83718(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = 1;
  if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
    uVar4 = *(uint *)(param_2 + 0x14);
    iVar3 = param_2 + 0x10;
  }
  else if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar4 = *(uint *)(param_2 + 0x1c);
    iVar3 = param_2 + 0x18;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x24);
    iVar3 = param_2 + 0x20;
  }
  uVar4 = -(uint)((uVar4 & 1) == 0) & uVar4;
  while( true ) {
    if (uVar4 == 0) {
      return;
    }
    do {
      *(uint *)(uVar4 + 0x14) = uVar1 << 3 | *(uint *)(uVar4 + 0x14) & 7;
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | 0x40000000;
      if (uVar1 < 0x1fffffff) {
        uVar1 = uVar1 + 1;
      }
      uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 0x28);
    } while (((uVar4 & 1) == 0) && (uVar4 != 0));
    iVar2 = param_2 + 0x20;
    if (iVar3 == iVar2) break;
    if ((iVar3 == param_2 + 0x18) || ((*(uint *)(param_2 + 0x1c) & 1) != 0)) {
      uVar4 = *(uint *)(param_2 + 0x24);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x1c);
      iVar2 = param_2 + 0x18;
    }
    iVar3 = iVar2;
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  return;
}

