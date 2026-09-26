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
extern int fn_8256BDE0();
extern int fn_8265CA20();


int * fn_825E75E8(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_8256BDE0(param_2,param_3 + 2);
  piVar1 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x10));
  if ((int *)piVar1[1] == param_3) {
    if ((int *)*piVar1 == param_3) {
      *piVar1 = *(int *)(param_2 + 4);
      *(undefined4 *)(iVar2 * 8 + *(int *)(param_2 + 0x10) + 4) = *(undefined4 *)(param_2 + 4);
    }
    else {
      piVar1[1] = param_3[1];
    }
  }
  else if ((int *)*piVar1 == param_3) {
    *piVar1 = *param_3;
  }
  iVar2 = *param_3;
  if (param_3 != *(int **)(param_2 + 4)) {
    *(int *)param_3[1] = iVar2;
    *(int *)(*param_3 + 4) = param_3[1];
    fn_8265CA20(param_3);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = iVar2;
  return param_1;
}

