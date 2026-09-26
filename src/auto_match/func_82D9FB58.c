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


void fn_82D9FB58(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int aiStack_30 [12];
  
  iVar6 = fn_82CE5410();
  uVar2 = param_2[2] & 0x3fffffff;
  piVar1 = *(int **)(iVar6 + 0x10);
  if ((int)uVar2 < *(int *)(param_1 + 0x24)) {
    if ((param_2[2] & 0x80000000U) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*param_2,uVar2,0x10);
    }
    aiStack_30[0] = *(int *)(param_1 + 0x24);
    iVar6 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_30,0x10);
    *param_2 = iVar6;
    param_2[2] = aiStack_30[0];
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar7 = (ulonglong)uVar2;
  iVar6 = *param_2;
  param_2[1] = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = *(int *)(param_1 + 0x20) - iVar6;
    do {
      puVar3 = (undefined4 *)(iVar4 + iVar6 & 0xfffffff0);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar5 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
      *puVar5 = *puVar3;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      iVar6 = iVar6 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

