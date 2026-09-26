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
extern unsigned int *auStack_50;
extern int fn_8265CA20();
extern int fn_8289DF30();
extern int fn_828A64E0();
extern int fn_828A6E70();
extern int fn_828E3AF0();
extern int fn_828E3EF8();


int * fn_828A6F90(int *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_50 [80];
  
  piVar4 = param_2 + 3;
  iVar2 = fn_828E3AF0(piVar4,param_3);
  if (*(int **)(iVar2 + 0x18) == (int *)*param_4) {
    iVar1 = *(int *)*param_4;
    piVar3 = (int *)fn_828E3EF8(auStack_50,param_2,param_3);
    if (iVar1 == *piVar3) {
      fn_828A64E0(auStack_50,piVar4,iVar2);
    }
    else {
      piVar4 = (int *)fn_828A6E70(piVar4,param_3);
      *piVar4 = iVar1;
    }
  }
  param_4 = (int *)*param_4;
  iVar2 = *param_4;
  if (param_4 != (int *)*param_2) {
    *(int *)param_4[1] = *param_4;
    *(int *)(*param_4 + 4) = param_4[1];
    if (param_4[3] != 0) {
      fn_8289DF30();
    }
    fn_8265CA20(param_4);
    param_2[1] = param_2[1] + -1;
  }
  *param_1 = iVar2;
  return param_1;
}

