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
extern int fn_822B5F90();
extern int fn_82381BC0();


void fn_822AE3C0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  int *apiStack_40 [16];
  
  for (piVar2 = (int *)*param_2; piVar2 < (int *)param_2[1]; piVar2 = piVar2 + 1) {
    piVar1 = *(int **)(*(int *)(((int *)*piVar2)[4] * 4 + *(int *)*piVar2) + 4);
    apiStack_40[0] = (int *)*piVar1;
    while (apiStack_40[0] != piVar1) {
      if ((bool)param_4 == (*(int *)(apiStack_40[0][4] + 0x24) != 0)) {
        fn_822B5F90(param_1);
      }
      fn_82381BC0(apiStack_40);
    }
  }
  return;
}

