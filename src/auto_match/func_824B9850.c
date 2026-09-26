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


void fn_824B9850(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else if (param_2 == 1) {
      iVar2 = 0x84;
    }
    else if (param_2 < 3) {
      iVar2 = 0x21;
    }
    else {
      if (param_2 != 3) {
        return;
      }
      iVar2 = 99;
    }
  }
  else {
    iVar2 = 0x42;
  }
  iVar1 = (iVar2 + 0x67) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x68) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x69) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x78) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x79) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x7a) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x7b) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x6a) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x6b) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x6c) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x6d) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x6e) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x6f) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x71) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x72) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x73) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x70) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x74) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x75) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x76) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x77) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x7f) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x7d) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x7c) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x7e) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x80) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar2 = (iVar2 + 0x81) * 4;
  if (*(int *)(iVar2 + *(int *)(param_1 + 0x100)) == 0) {
    return;
  }
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x100)) = 0;
  return;
}

