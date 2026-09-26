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
extern int fn_822315A0();
extern int fn_82271830();
extern int fn_8265CA20();


void fn_82271780(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    if ((piVar3[0x42d] == 0) || (piVar3[2] == param_2)) {
      piVar2 = (int *)*piVar3;
    }
    else {
      fn_82271830(param_1,piVar3 + 2);
      piVar2 = (int *)*piVar3;
      if (piVar3 != *(int **)(param_1 + 0xa8)) {
        *(int **)piVar3[1] = piVar2;
        *(int *)(*piVar3 + 4) = piVar3[1];
        if (piVar3[4] != 0) {
          fn_822315A0();
        }
        fn_8265CA20(piVar3);
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
      }
    }
    piVar3 = piVar2;
    piVar1 = *(int **)(param_1 + 0xa8);
  }
  return;
}

