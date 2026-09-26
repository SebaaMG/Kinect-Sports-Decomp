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


undefined8 fn_82399BA0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x2e0) == 0) {
    uVar3 = 0;
  }
  else {
    piVar1 = (int *)((int *)**(int **)(param_1 + 8))[1];
    piVar2 = *(int **)**(int **)(param_1 + 8);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x2e0) + 0x28))
                      (*(int **)(param_1 + 0x2e0),
                       (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20),
                       (int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20));
  }
  return uVar3;
}

