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
extern int fn_82AC6560();


void fn_82AC68F0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_82AC6560(param_1,0x74,5);
  *(uint *)(iVar1 + 0x14) = iVar1 - 0x14U | 1;
  *(uint *)(iVar1 + 0x10) = iVar1 + 0x14U | 1;
  *(uint *)(iVar1 + 0x18) = iVar1 + 0x1cU | 1;
  *(uint *)(iVar1 + 0x1c) = iVar1 - 0xcU | 1;
  *(uint *)(iVar1 + 0x20) = iVar1 + 0x24U | 1;
  *(uint *)(iVar1 + 0x24) = iVar1 - 4U | 1;
  *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) & 0xf0000000 | 1;
  uVar2 = *(uint *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = uVar2 + 1;
  *(uint *)(iVar1 + 0x30) = uVar2 & 0x7ffff | *(uint *)(iVar1 + 0x30) & 0xfff80000;
  uVar2 = *(uint *)(iVar1 + 0x4c) & 0xfff80000 | *(uint *)(param_1 + 0x20) & 0x7ffff;
  *(uint *)(iVar1 + 0x4c) = uVar2;
  if ((*(uint *)(param_1 + 0x28) & 0x20000000) != 0) {
    *(uint *)(iVar1 + 0x4c) = uVar2 | 0x80000;
  }
  return;
}

