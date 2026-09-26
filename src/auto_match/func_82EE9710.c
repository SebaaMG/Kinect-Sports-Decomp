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
extern int fn_82A1E658();
extern int fn_82A29A38();
extern int fn_82E4FE40();
extern int fn_82EE9FF0();


void fn_82EE9710(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      fn_82A1E658();
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    while (*(int *)(param_1 + 0x1098) != 0) {
      piVar1 = *(int **)(param_1 + 0x109c);
      *(int *)(param_1 + 0x1098) = *(int *)(param_1 + 0x1098) + -1;
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      if ((int *)piVar1[3] != (int *)0x0) {
        (**(code **)(*(int *)piVar1[3] + 8))();
        piVar1[3] = 0;
      }
      fn_82E4FE40(piVar1);
    }
    fn_82EE9FF0(param_1);
  }
  else {
    fn_82A29A38();
  }
  return;
}

