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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();


int * fn_82E08FA0(int *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  iVar2 = fn_82CE5410();
  uVar3 = (ulonglong)(uint)param_1[1];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < param_1[1]) {
    piVar4 = (int *)(*param_1 + 8);
    do {
      if (*piVar4 != 0) {
        fn_82CE4118();
      }
      *piVar4 = 0;
      fn_82CED5B8(piVar4 + -1);
      fn_82CED5B8(piVar4 + -2);
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 3;
    } while (uVar3 != 0);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,*param_1,param_1[2] & 0x3fffffff,0xc);
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  if ((param_2 & 1) != 0) {
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),param_1,0xc);
  }
  return param_1;
}

