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


void fn_82C7BA80(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xd40);
  uVar5 = (ulonglong)uVar1;
  iVar4 = 0;
  trapWord(6,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0xe0);
  trapWord(6,uVar5,0);
  *(undefined4 *)(param_1 + 0xf24) = 0;
  trapWord(6,uVar5,0);
  *(uint *)(param_1 + 0xf28) = *(uint *)(param_1 + 0xbc) / uVar1;
  trapWord(6,uVar5,0);
  *(undefined4 *)(param_1 + 0xf2c) = 0;
  *(uint *)(param_1 + 0xf30) = *(uint *)(param_1 + 200) / uVar1;
  *(uint *)(param_1 + 0xf1c) = *(uint *)(param_1 + 0x8c) / uVar1;
  *(uint *)(param_1 + 0xf20) = *(uint *)(param_1 + 0x88) / uVar1;
  *(int *)(param_1 + 0xf34) = iVar2;
  *(int *)(param_1 + 0xf38) = iVar3;
  *(uint *)(param_1 + 0xf40) = *(uint *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 0xecc) != 0) {
    iVar4 = *(int *)(param_1 + 0xecc) + iVar2;
  }
  *(int *)(param_1 + 0xee4) = iVar4;
  *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xec0) + iVar2;
  *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xec4) + iVar3;
  *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xec8) + iVar3;
  return;
}

