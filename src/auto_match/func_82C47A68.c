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
extern unsigned int lbl_83231E48;
extern U64 storeWordConditionalIndexed();


void fn_82C47A68(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char in_RESERVE;
  byte in_cr0;
  
  if (*(int *)(param_1 + 0xd78) == 0) {
    if ((*(int *)(param_1 + 0x3d0c) == 0) || (*(int *)(param_1 + 0xd68) == 0)) {
      if (*(int *)(param_1 + 0xd68) == 0) {
        iVar3 = *(int *)(param_1 + 0xea4);
      }
      else {
        iVar3 = *(int *)(param_1 + 0xea0);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xeb0);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xeb4);
  }
  piVar2 = (int *)(param_1 + 0xebc);
  if (iVar3 == *piVar2) {
    return;
  }
  do {
    iVar1 = lbl_83231E48;
    if (in_RESERVE != '\0') {
      lbl_83231E48 = storeWordConditionalIndexed(1,0,0xffffffff83231e48);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  while (iVar1 != 0) {
    do {
    } while (lbl_83231E48 != 0);
    do {
      iVar1 = lbl_83231E48;
      if (in_RESERVE != '\0') {
        lbl_83231E48 = storeWordConditionalIndexed(1,0,0xffffffff83231e48);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x26c) = *(int *)(iVar3 + 0x26c) + 1;
  }
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x26c) = *(int *)(iVar1 + 0x26c) + -1;
  }
  *piVar2 = iVar3;
  lbl_83231E48 = 0;
  return;
}

