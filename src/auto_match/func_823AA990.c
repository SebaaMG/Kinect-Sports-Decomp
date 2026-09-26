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
extern int fn_8239D490();


void fn_823AA990(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar2 = *(int **)(**(int **)(param_2 + 8) + param_3 * 4);
  fn_8239D490(param_2,param_3,
                    (ulonglong)(uint)(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) + 1);
  piVar2 = (int *)((int *)**(int **)(param_2 + 8))[1];
  piVar1 = *(int **)**(int **)(param_2 + 8);
  iVar4 = (**(code **)(*param_1 + 0x74))
                    (param_1,(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20),
                     (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20));
  if (iVar4 != 0) {
    param_1[0x18] = param_1[0x18] + 1;
  }
  bVar3 = param_3 == 0;
  piVar2 = *(int **)((uint)bVar3 * 4 + **(int **)(param_2 + 8));
  piVar1 = *(int **)(**(int **)(param_2 + 8) + param_3 * 4);
  iVar4 = (**(code **)(*param_1 + 0xc))
                    (param_1,(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20),
                     (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20));
  uVar5 = 0;
  if (iVar4 != param_1[4]) {
    param_1[4] = iVar4;
    param_1[6] = 0;
  }
  param_1[1] = 2;
  if (param_1[0xf] != param_3) {
    param_1[0x10] = 0;
  }
  param_1[0xf] = param_3;
  param_1[0x15] = param_4;
  param_1[0x10] = param_1[0x10] + 1;
  if (((param_4 == 0) || ((1 < param_4 && (param_4 < 9)))) &&
     (piVar2 = *(int **)(**(int **)(param_2 + 8) + (uint)bVar3 * 4),
     *(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0)) {
    do {
      iVar4 = ((uint)bVar3 * 2 + uVar5) * 0xb0 + param_2 + 0x8d4;
      *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
      uVar6 = *(int *)(iVar4 + 0x8c) + 1;
      *(uint *)(iVar4 + 0x8c) = uVar6;
      if (*(uint *)(iVar4 + 0x14) < uVar6) {
        *(uint *)(iVar4 + 0x14) = uVar6;
      }
      uVar5 = uVar5 + 1;
      piVar2 = *(int **)(**(int **)(param_2 + 8) + (uint)bVar3 * 4);
    } while (uVar5 < *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
  }
  return;
}

