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
extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82D4B040();
extern int fn_82D4F750();
extern unsigned int lbl_82138944;
extern unsigned int lbl_82138964;


undefined4 * fn_82D50070(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 auStack_40 [16];
  
  fn_82D4B040((double)*(float *)(param_2 + 0x50),param_1,param_2,
                    *(undefined4 *)(param_2 + 0x30));
  iVar4 = 0;
  *param_1 = &lbl_82138964;
  param_1[4] = &lbl_82138944;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  puVar9 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar5 = puVar9[1];
  uVar10 = puVar9[2];
  uVar11 = puVar9[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar3 = *puVar9;
  puVar3[1] = uVar5;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar8 = 0;
    do {
      fn_82D4F750(param_1,(ulonglong)*(uint *)(param_2 + 0x34) + lVar8);
      iVar4 = iVar4 + 1;
      lVar8 = lVar8 + 0x38;
    } while (iVar4 < *(int *)(param_2 + 0x38));
  }
  puVar9 = param_1 + 0x10;
  iVar4 = fn_82CE5410();
  uVar2 = param_1[0x12] & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar2 < *(int *)(param_2 + 0x44)) {
    if ((param_1[0x12] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*puVar9,uVar2,2);
    }
    auStack_40[0] = *(undefined4 *)(param_2 + 0x44);
    uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_40,2);
    *puVar9 = uVar5;
    param_1[0x12] = auStack_40[0];
  }
  uVar2 = *(uint *)(param_2 + 0x44);
  uVar6 = (ulonglong)uVar2;
  puVar7 = (undefined2 *)*puVar9;
  param_1[0x11] = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = *(int *)(param_2 + 0x40) - (int)puVar7;
    do {
      *puVar7 = *(undefined2 *)(iVar4 + (int)puVar7);
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x4c);
  return param_1;
}

