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
extern int fn_82D3FC68();


void fn_82D40058(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int aiStack_30 [12];
  
  piVar8 = (int *)(param_1 + 0x54);
  iVar5 = fn_82CE5410();
  uVar2 = *(uint *)(param_1 + 0x5c) & 0x3fffffff;
  piVar1 = *(int **)(iVar5 + 0x10);
  if ((int)uVar2 < param_2[1]) {
    if ((*(uint *)(param_1 + 0x5c) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar8,uVar2,0x10);
    }
    aiStack_30[0] = param_2[1];
    iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_30,0x10);
    *piVar8 = iVar5;
    *(int *)(param_1 + 0x5c) = aiStack_30[0];
  }
  uVar2 = param_2[1];
  uVar6 = (ulonglong)uVar2;
  iVar5 = *piVar8;
  *(uint *)(param_1 + 0x58) = uVar2;
  if (0 < (int)uVar2) {
    iVar7 = *param_2 - iVar5;
    do {
      puVar3 = (undefined4 *)(iVar7 + iVar5 & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      iVar5 = iVar5 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    fn_82D3FC68(param_1);
  }
  return;
}

