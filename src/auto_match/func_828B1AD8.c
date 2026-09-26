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
extern int fn_825089A0();
extern int fn_8265CA20();
extern unsigned int lbl_82024E18;


void fn_828B1AD8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  
  piVar2 = (int *)fn_825089A0();
  dVar4 = (double)(**(code **)(*piVar2 + 8))();
  piVar3 = (int *)(param_1 + 0xcc);
  piVar2 = *(int **)*piVar3;
  if (piVar2 != (int *)*piVar3) {
    dVar5 = (double)lbl_82024E18;
    do {
      if (dVar4 <= (double)(float)((double)(float)piVar2[3] + dVar5)) {
        piVar1 = (int *)*piVar2;
      }
      else {
        piVar1 = (int *)*piVar2;
        if (piVar2 != (int *)*piVar3) {
          *(int **)piVar2[1] = piVar1;
          *(int *)(*piVar2 + 4) = piVar2[1];
          fn_8265CA20();
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
        }
      }
      piVar2 = piVar1;
    } while (piVar1 != (int *)*piVar3);
  }
  return;
}

