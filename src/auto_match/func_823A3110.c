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


undefined8 fn_823A3110(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  piVar1 = (int *)**(int **)(*(int *)(param_1 + 8) + 8);
  piVar2 = (int *)*piVar1;
  piVar1 = (int *)piVar1[1];
  if (((iVar4 == 0) || (*(int *)(iVar4 + 0x40) != 1)) &&
     (piVar3 = *(int **)(*(int *)(param_1 + 8) + 0x2e0),
     iVar4 = (**(code **)(*piVar3 + 0x74))
                       (piVar3,(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20),
                        (int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20)), iVar4 != 0)) {
    return 1;
  }
  return 0;
}

