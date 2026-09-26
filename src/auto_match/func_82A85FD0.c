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
extern int fn_8262FEC8();


void fn_82A85FD0(int param_1)

{
  longlong lVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 700) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 700) + 4))();
    *(undefined4 *)(param_1 + 700) = 0;
  }
  lVar1 = 6;
  piVar2 = (int *)(param_1 + 0x2d8);
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < lVar1);
  lVar1 = 3;
  piVar2 = (int *)(param_1 + 0x2f8);
  do {
    if ((int *)piVar2[-1] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[-1] + 4))();
      piVar2[-1] = 0;
    }
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + -2;
  } while (-1 < lVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  lVar1 = 4;
  piVar2 = (int *)(param_1 + 0x48);
  do {
    if (piVar2[-2] != 0) {
      fn_8262FEC8();
      piVar2[-2] = 0;
    }
    if (piVar2[-1] != 0) {
      fn_8262FEC8();
      piVar2[-1] = 0;
    }
    if (*piVar2 != 0) {
      fn_8262FEC8();
      *piVar2 = 0;
    }
    if (piVar2[1] != 0) {
      fn_8262FEC8();
      piVar2[1] = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + -4;
  } while (-1 < lVar1);
  return;
}

