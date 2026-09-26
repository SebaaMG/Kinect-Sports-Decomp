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
extern int fn_82CE6310();
extern int fn_82D33AF8();
extern int fn_82D35308();
extern int fn_82D35448();
extern int fn_82D363A0();
extern int fn_82D36810();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_58;


void fn_82D36E38(int param_1,int param_2,undefined4 *param_3,ulonglong param_4,undefined4 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  
  iVar4 = (int)param_4;
  *(int *)(param_1 + 0x18) = iVar4;
  if (iVar4 != 0) {
    iVar3 = fn_82CE5410();
    if ((int)(param_5[2] & 0x3fffffff) < iVar4) {
      uVar8 = ((ulonglong)(uint)param_5[2] & 0x3fffffff) << 1;
      if ((int)uVar8 <= iVar4) {
        uVar8 = param_4;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_5,uVar8,4);
    }
    param_5[1] = iVar4;
    puVar6 = (undefined4 *)(param_1 + 0x14);
    piVar7 = (int *)(param_1 + 0x10);
    fn_82D35448(param_1 + 0x1c,(param_4 & 0x7fffffff) * 2 + -1,piVar7,puVar6);
    iVar3 = fn_82D363A0(param_1 + 0x1c,piVar7,puVar6,puVar6);
    *(int *)(param_1 + 0x10) = iVar3;
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 0x7fffffff;
    iStack_60 = 0;
    iStack_5c = 0;
    uStack_58 = 0x80000000;
    iVar3 = fn_82CE5410();
    if ((int)(uStack_58 & 0x3fffffff) < iVar4) {
      uVar8 = ((ulonglong)uStack_58 & 0x3fffffff) << 1;
      if ((int)uVar8 <= iVar4) {
        uVar8 = param_4;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),&iStack_60,uVar8,0x20);
    }
    if (0 < iVar4) {
      iVar3 = 0;
      uVar8 = param_4;
      do {
        puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        iVar5 = iVar3 + iStack_60;
        iVar3 = iVar3 + 0x20;
        puVar2 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        param_2 = param_2 + 0x20;
        puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (iVar4 == 1) {
      iVar3 = *piVar7;
      *(undefined4 *)(iVar3 + 0x20) = *param_3;
      *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 0x80000000;
      *(undefined4 *)(*piVar7 + 0x2c) = 0x7fffffff;
      *(undefined4 *)*param_5 = *puVar6;
      iStack_5c = iVar4;
    }
    else {
      iStack_5c = iVar4;
      fn_82D36810(param_1,iStack_60,param_3,param_4,*piVar7,param_5,0);
    }
    fn_82D33AF8(param_1,*piVar7,*puVar6,0x7fffffff);
    fn_82D35308(param_1,*piVar7,0);
    iVar4 = fn_82CE5410();
    iStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),iStack_60,uStack_58 & 0x3fffffff,0x20);
    }
  }
  return;
}

