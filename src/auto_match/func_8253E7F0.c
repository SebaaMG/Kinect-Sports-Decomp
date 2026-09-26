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


void fn_8253E7F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = param_2;
  while (iVar5 = iVar3, iVar5 != 0) {
    iVar4 = iVar5;
    iVar3 = *(int *)(iVar5 + 0xc);
  }
  if (*(char *)(iVar4 + 0x18) == '\x01') {
    iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = *(int *)(param_3 + 0xc);
  iVar5 = param_3;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar5 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  if (*(char *)(iVar5 + 0x18) == '\x01') {
    iVar5 = *(char *)(iVar5 + 0x10) + iVar5;
  }
  else {
    iVar5 = 0;
  }
  if (iVar4 == 0) {
    if (iVar5 == 0) {
      return;
    }
  }
  else {
    if (iVar4 == *(int *)(param_1 + 0x18)) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(char *)(iVar4 + 0xe8) == '\x05') || (bVar2 = false, *(char *)(iVar4 + 0xe8) == '\x04'))
      {
        bVar2 = true;
      }
      if (bVar2) {
        return;
      }
    }
  }
  if (iVar5 != 0) {
    if (iVar5 == *(int *)(param_1 + 0x18)) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(char *)(iVar5 + 0xe8) == '\x05') || (bVar2 = false, *(char *)(iVar5 + 0xe8) == '\x04'))
      {
        bVar2 = true;
      }
      if (bVar2) {
        return;
      }
    }
  }
  iVar4 = *(int *)(param_2 + 0xc);
  iVar3 = param_2;
  while (iVar5 = iVar4, iVar5 != 0) {
    iVar3 = iVar5;
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  *(int *)(param_1 + 8) = iVar3;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  iVar4 = *(int *)(param_3 + 0xc);
  iVar3 = param_3;
  while (iVar5 = iVar4, iVar5 != 0) {
    iVar3 = iVar5;
    iVar4 = *(int *)(iVar5 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

