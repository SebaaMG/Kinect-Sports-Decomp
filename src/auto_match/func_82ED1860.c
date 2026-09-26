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


void fn_82ED1860(undefined8 param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = param_4 + param_5;
  iVar4 = iVar3 + param_5;
  piVar2 = (int *)(param_4 * 4 + param_3);
  piVar1 = (int *)(iVar3 * 4 + param_3);
  param_5 = iVar4 + param_5;
  piVar5 = (int *)(param_5 * 4 + param_3);
  *param_2 = (uint)(*(int *)((param_5 + 3) * 4 + param_3) + *(int *)((param_5 + 2) * 4 + param_3) +
                    piVar5[1] +
                    *(int *)((iVar4 + 3) * 4 + param_3) + *(int *)((iVar4 + 2) * 4 + param_3) +
                    *(int *)(iVar4 * 4 + param_3 + 4) +
                    *(int *)((iVar3 + 3) * 4 + param_3) + *(int *)((iVar3 + 2) * 4 + param_3) +
                    piVar1[1] +
                    *(int *)((param_4 + 3) * 4 + param_3) + *(int *)((param_4 + 2) * 4 + param_3) +
                    piVar2[1] + *piVar2 + *piVar1 + *(int *)(iVar4 * 4 + param_3) + *piVar5) >> 4;
  return;
}

