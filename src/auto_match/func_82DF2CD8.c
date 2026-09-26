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
extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82DF2948();


int fn_82DF2CD8(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 auStack_30 [12];
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    iVar4 = fn_82CE5410();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x60);
    *(undefined2 *)(iVar4 + 4) = 0x60;
    iVar4 = fn_82DF2948(iVar4,*(undefined4 *)*param_2);
    puVar7 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    uVar11 = puVar7[3];
    puVar3 = (undefined4 *)(iVar4 + 0x20U & 0xfffffff0);
    *puVar3 = *puVar7;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    piVar8 = (int *)(iVar4 + 0x54);
    puVar7 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    uVar11 = puVar7[3];
    puVar3 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
    *puVar3 = *puVar7;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    iVar5 = fn_82CE5410();
    uVar2 = *(uint *)(iVar4 + 0x5c) & 0x3fffffff;
    piVar1 = *(int **)(iVar5 + 0x10);
    if ((int)uVar2 < *(int *)(param_1 + 0x58)) {
      if ((*(uint *)(iVar4 + 0x5c) & 0x80000000) == 0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,*piVar8,uVar2,4);
      }
      auStack_30[0] = *(undefined4 *)(param_1 + 0x58);
      iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_30,4);
      *piVar8 = iVar5;
      *(undefined4 *)(iVar4 + 0x5c) = auStack_30[0];
    }
    uVar2 = *(uint *)(param_1 + 0x58);
    uVar6 = (ulonglong)uVar2;
    puVar7 = (undefined4 *)*piVar8;
    *(uint *)(iVar4 + 0x58) = uVar2;
    if (0 < (int)uVar2) {
      iVar5 = *(int *)(param_1 + 0x54) - (int)puVar7;
      do {
        *puVar7 = *(undefined4 *)(iVar5 + (int)puVar7);
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

