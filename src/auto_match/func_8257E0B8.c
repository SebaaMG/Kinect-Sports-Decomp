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


void fn_8257E0B8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0x24;
  piVar5 = (int *)(iVar1 + 4);
  do {
    for (iVar2 = *piVar5; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      piVar3 = (int *)(iVar2 + -0x10);
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      (**(code **)(*piVar3 + 0x18))(piVar3,param_2);
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 2;
  } while (lVar4 != 0);
  for (iVar2 = *(int *)(iVar1 + 300); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    piVar5 = (int *)(iVar2 + -0x10);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    (**(code **)(*piVar5 + 0x18))(piVar5,param_2);
  }
  for (iVar1 = *(int *)(iVar1 + 0x124); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    piVar5 = (int *)(iVar1 + -0x10);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    (**(code **)(*piVar5 + 0x18))(piVar5,param_2);
  }
  return;
}

