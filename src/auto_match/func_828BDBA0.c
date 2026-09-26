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


int * fn_828BDBA0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_3;
  if (param_3 != (int *)*param_2) {
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    piVar2 = (int *)param_3[6];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,param_3 + 2 != piVar2);
      param_3[6] = 0;
    }
    fn_8265CA20(param_3);
    param_2[1] = param_2[1] + -1;
  }
  *param_1 = iVar1;
  return param_1;
}

