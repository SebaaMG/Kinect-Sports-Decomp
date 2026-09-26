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


void fn_82ED1960(undefined8 param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = param_4 + param_5;
  piVar2 = (int *)(iVar5 * 4 + param_3);
  iVar10 = iVar5 + param_5;
  piVar3 = (int *)(iVar10 * 4 + param_3);
  iVar6 = iVar10 + param_5;
  piVar1 = (int *)(param_4 * 4 + param_3);
  piVar7 = (int *)(iVar6 * 4 + param_3);
  piVar4 = (int *)((param_4 + 4) * 4 + param_3);
  iVar8 = param_4 + 4 + param_5;
  *param_2 = (uint)(*(int *)((iVar6 + 3) * 4 + param_3) + *(int *)((iVar6 + 2) * 4 + param_3) +
                    piVar7[1] + *piVar7 +
                   *(int *)((iVar10 + 3) * 4 + param_3) + *(int *)((iVar10 + 2) * 4 + param_3) +
                   piVar3[1] + *piVar3 +
                   *(int *)((iVar5 + 3) * 4 + param_3) + *(int *)((iVar5 + 2) * 4 + param_3) +
                   piVar2[1] + *piVar2 +
                   *(int *)((param_4 + 3) * 4 + param_3) + *(int *)((param_4 + 2) * 4 + param_3) +
                   piVar1[1] + *piVar1) >> 4;
  piVar1 = (int *)(iVar8 * 4 + param_3);
  iVar5 = iVar8 + param_5;
  iVar10 = iVar5 + param_5;
  piVar2 = (int *)(iVar5 * 4 + param_3);
  piVar3 = (int *)(iVar10 * 4 + param_3);
  iVar6 = param_4 + 8 + param_5;
  piVar7 = (int *)((param_4 + 8) * 4 + param_3);
  param_2[1] = (uint)(*(int *)((iVar10 + 3) * 4 + param_3) + *(int *)((iVar10 + 2) * 4 + param_3) +
                      piVar3[1] + *piVar3 +
                     *(int *)((iVar5 + 3) * 4 + param_3) + *(int *)((iVar5 + 2) * 4 + param_3) +
                     piVar2[1] + *piVar2 +
                     *(int *)((iVar8 + 3) * 4 + param_3) + *(int *)((iVar8 + 2) * 4 + param_3) +
                     piVar1[1] + *piVar1 +
                     *(int *)((param_4 + 7) * 4 + param_3) + *(int *)((param_4 + 6) * 4 + param_3) +
                     piVar4[1] + *piVar4) >> 4;
  piVar1 = (int *)(iVar6 * 4 + param_3);
  iVar10 = iVar6 + param_5;
  iVar8 = iVar10 + param_5;
  piVar2 = (int *)(iVar8 * 4 + param_3);
  iVar5 = (param_4 + 0xc) * 4;
  iVar9 = param_4 + 0xc + param_5;
  param_2[2] = (uint)(*(int *)((iVar8 + 3) * 4 + param_3) + *(int *)((iVar8 + 2) * 4 + param_3) +
                      piVar2[1] + *piVar2 +
                     *(int *)((iVar10 + 3) * 4 + param_3) + *(int *)((iVar10 + 2) * 4 + param_3) +
                     *(int *)(iVar10 * 4 + param_3 + 4) + *(int *)(iVar10 * 4 + param_3) +
                     *(int *)((iVar6 + 3) * 4 + param_3) + *(int *)((iVar6 + 2) * 4 + param_3) +
                     piVar1[1] + *piVar1 +
                     *(int *)((param_4 + 0xb) * 4 + param_3) +
                     *(int *)((param_4 + 10) * 4 + param_3) + piVar7[1] + *piVar7) >> 4;
  piVar1 = (int *)(iVar9 * 4 + param_3);
  iVar10 = iVar9 + param_5;
  param_5 = iVar10 + param_5;
  piVar2 = (int *)(param_5 * 4 + param_3);
  param_2[3] = (uint)(*(int *)((param_5 + 3) * 4 + param_3) + *(int *)((param_5 + 2) * 4 + param_3)
                      + piVar2[1] + *piVar2 +
                     *(int *)((iVar10 + 3) * 4 + param_3) + *(int *)((iVar10 + 2) * 4 + param_3) +
                     *(int *)(iVar10 * 4 + param_3 + 4) + *(int *)(iVar10 * 4 + param_3) +
                     *(int *)((iVar9 + 3) * 4 + param_3) + *(int *)((iVar9 + 2) * 4 + param_3) +
                     piVar1[1] + *piVar1 +
                     *(int *)((param_4 + 0xf) * 4 + param_3) +
                     *(int *)((param_4 + 0xe) * 4 + param_3) + *(int *)(iVar5 + param_3 + 4) +
                     *(int *)(iVar5 + param_3)) >> 4;
  return;
}

