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
extern int fn_823AA990();


void fn_823AB000(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = *(int **)**(int **)(param_2 + 8);
  piVar2 = (int *)((int *)**(int **)(param_2 + 8))[1];
  iVar3 = (**(code **)(*param_1 + 0xc))
                    (param_1,(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20),
                     (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20));
  iVar4 = (**(code **)(*param_1 + 4))(param_1);
  if (iVar3 == iVar4) {
    uVar5 = (**(code **)(*param_1 + 0x14))(param_1);
    iVar3 = (**(code **)(*param_1 + 8))(param_1);
    iVar3 = iVar3 + 0x1b;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x10))();
    iVar3 = (**(code **)(*param_1 + 4))(param_1);
    param_1[iVar3 + 0x1b] = uVar5 ^ 1;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = uVar5 ^ 1;
    iVar3 = (**(code **)(*param_1 + 4))(param_1);
    iVar3 = iVar3 + 0x19;
  }
  param_1[iVar3] = uVar5;
  fn_823AA990(param_1,param_2,param_3,param_4);
  return;
}

