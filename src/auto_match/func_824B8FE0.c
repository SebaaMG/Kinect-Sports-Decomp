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


void fn_824B8FE0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else if (param_2 == 1) {
    iVar2 = 0x52;
  }
  else if (param_2 < 3) {
    iVar2 = 0x1e;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar2 = 0x38;
  }
  if (*(int *)(*(int *)(param_1 + 0x100) + 0x6ac) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x6ac) = 0;
  }
  iVar1 = (iVar2 + 0x152) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x14d) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x14c) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x14b) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x14a) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x156) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x158) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x157) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x14e) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x150) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x14f) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x151) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x148) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x149) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x154) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x155) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar1 = (iVar2 + 0x147) * 4;
  if (*(int *)(iVar1 + *(int *)(param_1 + 0x100)) != 0) {
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x100)) = 0;
  }
  iVar2 = (iVar2 + 0x153) * 4;
  if (*(int *)(iVar2 + *(int *)(param_1 + 0x100)) == 0) {
    return;
  }
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x100)) = 0;
  return;
}

