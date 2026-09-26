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


void fn_82D02B68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0xc);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar5 == param_2) {
    iVar5 = *(int *)(param_2 + 0x14);
    piVar3 = (int *)(param_2 + 0x14);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_2 + 0x10);
      piVar3 = (int *)(param_2 + 0x10);
      if (iVar5 == 0) goto LAB_82d02bdc;
    }
    while ((piVar4 = (int *)(iVar5 + 0x14), *(int *)(iVar5 + 0x14) != 0 ||
           (piVar4 = (int *)(iVar5 + 0x10), *(int *)(iVar5 + 0x10) != 0))) {
      piVar3 = piVar4;
      iVar5 = *piVar4;
    }
    *piVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 8);
    *(int *)(iVar2 + 0xc) = iVar5;
    *(int *)(iVar5 + 8) = iVar2;
  }
LAB_82d02bdc:
  if (iVar1 == 0) {
    return;
  }
  iVar2 = (*(int *)(param_2 + 0x1c) + 6) * 4;
  if (param_2 == *(int *)(iVar2 + param_1)) {
    *(int *)(iVar2 + param_1) = iVar5;
    if (iVar5 == 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(1 << (*(uint *)(param_2 + 0x1c) & 0x3f));
      return;
    }
  }
  else {
    if (*(int *)(iVar1 + 0x10) == param_2) {
      *(int *)(iVar1 + 0x10) = iVar5;
    }
    else {
      *(int *)(iVar1 + 0x14) = iVar5;
    }
    if (iVar5 == 0) {
      return;
    }
  }
  *(int *)(iVar5 + 0x18) = iVar1;
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    *(int *)(iVar5 + 0x10) = iVar1;
    *(int *)(iVar1 + 0x18) = iVar5;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(iVar5 + 0x14) = iVar1;
  *(int *)(iVar1 + 0x18) = iVar5;
  return;
}

