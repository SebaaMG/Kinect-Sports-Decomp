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
extern int fn_82547C80();


void fn_8235DA80(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  
  if (*(int *)(param_1 + 0xc14) == 0) {
    return;
  }
  if (*(int **)(param_1 + 0x2ba8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2ba8) + 4))();
  }
  uVar1 = *(uint *)(param_1 + 0x2bb0);
  if (uVar1 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x194) + 0x200);
    if (iVar2 == 5) {
      cVar5 = '\0';
    }
    else if (((iVar2 == 2) || (iVar2 == 3)) || (cVar5 = '\x01', iVar2 == 1)) {
      cVar5 = *(char *)(*(int *)(param_1 + 0x194) + 0x1fc);
    }
    if (cVar5 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x2b40) != 0) {
      return;
    }
    piVar3 = *(int **)(param_1 + 0x2ba8);
    if (piVar3 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar3 + 8))(piVar3,*(undefined4 *)(param_1 + 0x2bac));
    uVar4 = 1;
  }
  else if (uVar1 == 1) {
    if ((*(int *)(param_1 + 0x2ba8) != 0) && (*(int *)(*(int *)(param_1 + 0x2ba8) + 0x18) != 0)) {
      return;
    }
    uVar4 = 2;
  }
  else {
    if (2 < uVar1) {
      return;
    }
    if (*(int *)(param_1 + 0x2ba8) != 0) {
      fn_82547C80((ulonglong)*(uint *)(*(int *)(param_1 + 0x2ba8) + 0xc) + 0xd0,0,0);
    }
    uVar4 = 3;
  }
  *(undefined4 *)(param_1 + 0x2bb0) = uVar4;
  return;
}

