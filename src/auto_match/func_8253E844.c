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


void fn_8253E844(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_r9;
  int in_r10;
  int iVar4;
  int in_r11;
  byte in_cr6;
  
  while (iVar4 = in_r10, !(bool)(in_cr6 >> 1 & 1)) {
    in_r10 = *(int *)(iVar4 + 0xc);
    in_cr6 = (in_r10 == 0) << 1;
    in_r11 = iVar4;
  }
  if (*(char *)(in_r11 + 0x18) == '\x01') {
    iVar4 = *(char *)(in_r11 + 0x10) + in_r11;
  }
  else {
    iVar4 = 0;
  }
  if (in_r9 == 0) {
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    if (in_r9 == *(int *)(param_1 + 0x18)) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(char *)(in_r9 + 0xe8) == '\x05') || (bVar1 = false, *(char *)(in_r9 + 0xe8) == '\x04'))
      {
        bVar1 = true;
      }
      if (bVar1) {
        return;
      }
    }
  }
  if (iVar4 != 0) {
    if (iVar4 == *(int *)(param_1 + 0x18)) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(char *)(iVar4 + 0xe8) == '\x05') || (bVar1 = false, *(char *)(iVar4 + 0xe8) == '\x04'))
      {
        bVar1 = true;
      }
      if (bVar1) {
        return;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = param_2;
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar4 = iVar2;
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  *(int *)(param_1 + 8) = iVar4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar4 = param_3;
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar4 = iVar2;
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

