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
extern int fn_82CE5410();


void fn_825FF908(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int aiStack_30 [12];
  
  *param_2 = *(undefined4 *)(param_1 + 0x364);
  iVar1 = *(int *)(param_1 + 0x364);
  iVar4 = fn_82CE5410();
  uVar3 = param_3[2] & 0x3fffffff;
  piVar2 = *(int **)(iVar4 + 0x10);
  if ((int)uVar3 < *(int *)(iVar1 + 0x24)) {
    if ((param_3[2] & 0x80000000U) == 0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,*param_3,uVar3,4);
    }
    aiStack_30[0] = *(int *)(iVar1 + 0x24);
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,aiStack_30,4);
    *param_3 = iVar4;
    param_3[2] = aiStack_30[0];
  }
  uVar3 = *(uint *)(iVar1 + 0x24);
  uVar6 = (ulonglong)uVar3;
  puVar5 = (undefined4 *)*param_3;
  param_3[1] = uVar3;
  if (0 < (int)uVar3) {
    iVar1 = *(int *)(iVar1 + 0x20) - (int)puVar5;
    do {
      *puVar5 = *(undefined4 *)(iVar1 + (int)puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

