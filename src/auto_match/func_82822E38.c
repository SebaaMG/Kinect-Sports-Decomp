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
extern int fn_82822BE0();
extern unsigned int lbl_8320A778;


void fn_82822E38(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar3 = lbl_8320A778;
  piVar5 = param_1;
  if (((int *)param_1[1] != lbl_8320A778) && (piVar4 = (int *)param_1[2], piVar4 != lbl_8320A778)) {
    piVar1 = (int *)piVar4[1];
    piVar5 = piVar4;
    while (piVar4 = piVar1, piVar4 != lbl_8320A778) {
      piVar5 = piVar4;
      piVar1 = (int *)piVar4[1];
    }
  }
  piVar4 = (int *)piVar5[1];
  if (piVar4 == lbl_8320A778) {
    piVar4 = (int *)piVar5[2];
  }
  *piVar4 = *piVar5;
  piVar1 = (int *)*piVar5;
  if (piVar1 != piVar3) {
    if (piVar5 == (int *)piVar1[1]) {
      piVar1[1] = (int)piVar4;
    }
    else {
      piVar1[2] = (int)piVar4;
    }
  }
  if (piVar5 != param_1) {
    *piVar5 = *param_1;
    iVar2 = *param_1;
    if (param_1 == *(int **)(iVar2 + 4)) {
      *(int **)(iVar2 + 4) = piVar5;
    }
    else if (param_1 == *(int **)(iVar2 + 8)) {
      *(int **)(iVar2 + 8) = piVar5;
    }
    piVar5[2] = param_1[2];
    *(int **)param_1[2] = piVar5;
    piVar5[1] = param_1[1];
    *(int **)param_1[1] = piVar5;
  }
  iVar2 = piVar5[3];
  piVar5[3] = param_1[3];
  if (iVar2 == 1) {
    fn_82822BE0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

