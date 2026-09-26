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


int * fn_825932A8(int param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x1c))();
  }
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x10);
  }
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    piVar2 = piVar3 + *piVar2 * 0x11;
    for (; piVar3 < piVar2; piVar3 = piVar3 + 0x11) {
      if (*(short *)piVar3 == param_2) {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}

