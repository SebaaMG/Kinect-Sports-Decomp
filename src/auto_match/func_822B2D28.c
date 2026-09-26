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
extern int fn_822B4040();
extern int fn_822B46C0();
extern int fn_8265CA20();


int fn_822B2D28(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  for (piVar3 = *(int **)(param_1 + 0x10); piVar3 != *(int **)(param_1 + 0x14); piVar3 = piVar3 + 1)
  {
    if (*piVar3 != 0) {
      fn_8265CA20();
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 4);
  cVar1 = *(char *)((int)piVar3 + 0x51);
  while (cVar1 == '\0') {
    fn_822B46C0(param_1,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_822B4040(piVar3 + 8);
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x51);
  }
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 4));
  fn_8265CA20(param_1);
  return param_1;
}

