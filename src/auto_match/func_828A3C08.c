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
extern int fn_8265CA20();
extern int fn_828B55B0();
extern unsigned int lbl_8200D898;


void fn_828A3C08(double param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  
  piVar1 = (int *)**(int **)(param_2 + 0x2f4);
  if (piVar1 != *(int **)(param_2 + 0x2f4)) {
    dVar3 = (double)lbl_8200D898;
    do {
      if ((double)(float)(param_1 - (double)(float)piVar1[2]) <= dVar3) {
        piVar2 = (int *)*piVar1;
      }
      else {
        piVar2 = (int *)*piVar1;
        if (piVar1 != *(int **)(param_2 + 0x2f4)) {
          *(int **)piVar1[1] = piVar2;
          *(int *)(*piVar1 + 4) = piVar1[1];
          fn_828B55B0(piVar1 + 3);
          fn_8265CA20(piVar1);
          *(int *)(param_2 + 0x2f8) = *(int *)(param_2 + 0x2f8) + -1;
        }
      }
      piVar1 = piVar2;
    } while (piVar2 != *(int **)(param_2 + 0x2f4));
  }
  return;
}

