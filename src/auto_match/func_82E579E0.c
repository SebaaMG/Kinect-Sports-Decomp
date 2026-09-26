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


void fn_82E579E0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*param_1 != 0) {
    do {
      piVar1 = (int *)param_1[1];
      *param_1 = *param_1 + -1;
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      (**(code **)(*(int *)piVar1[2] + 8))();
      piVar1[2] = 0;
      puVar4 = (undefined4 *)param_1[5];
      piVar1[1] = (int)puVar4;
      *piVar1 = (int)(param_1 + 4);
      *puVar4 = piVar1;
      param_1[5] = (int)piVar1;
      param_1[3] = param_1[3] + 1;
    } while (*param_1 != 0);
  }
  param_1[6] = 0;
  return;
}

