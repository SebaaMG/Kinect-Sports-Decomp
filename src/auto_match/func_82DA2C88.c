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
extern int fn_82D8C858();
extern int fn_82D99F58();
extern unsigned int lbl_8213C774;


undefined4 * fn_82DA2C88(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 auStack_40 [16];
  
  iVar4 = fn_82CE5410();
  puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x170);
  *(undefined2 *)(puVar5 + 1) = 0x170;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  fn_82D99F58(puVar5,*(undefined4 *)(param_1 + 0x10),param_1 + 0xb0);
  *puVar5 = &lbl_8213C774;
  puVar5[0x58] = 0;
  puVar5[0x59] = 0;
  piVar8 = puVar5 + 0x23;
  puVar5[0x5a] = 0x80000000;
  *(undefined1 *)(puVar5 + 0x5b) = 0;
  puVar5[0xb] = uVar1;
  iVar4 = fn_82CE5410();
  uVar3 = puVar5[0x25] & 0x3fffffff;
  piVar2 = *(int **)(iVar4 + 0x10);
  if ((int)uVar3 < *(int *)(param_1 + 0x90)) {
    if ((puVar5[0x25] & 0x80000000) == 0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,*piVar8,uVar3,4);
    }
    auStack_40[0] = *(undefined4 *)(param_1 + 0x90);
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,auStack_40,4);
    *piVar8 = iVar4;
    puVar5[0x25] = auStack_40[0];
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  uVar6 = (ulonglong)uVar3;
  puVar7 = (undefined4 *)*piVar8;
  puVar5[0x24] = uVar3;
  if (0 < (int)uVar3) {
    iVar4 = *(int *)(param_1 + 0x8c) - (int)puVar7;
    do {
      *puVar7 = *(undefined4 *)(iVar4 + (int)puVar7);
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  piVar8 = puVar5 + 0x26;
  iVar4 = fn_82CE5410();
  uVar3 = puVar5[0x28] & 0x3fffffff;
  piVar2 = *(int **)(iVar4 + 0x10);
  if ((int)uVar3 < *(int *)(param_1 + 0x9c)) {
    if ((puVar5[0x28] & 0x80000000) == 0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,*piVar8,uVar3,4);
    }
    auStack_40[0] = *(undefined4 *)(param_1 + 0x9c);
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,auStack_40,4);
    *piVar8 = iVar4;
    puVar5[0x28] = auStack_40[0];
  }
  uVar3 = *(uint *)(param_1 + 0x9c);
  uVar6 = (ulonglong)uVar3;
  puVar7 = (undefined4 *)*piVar8;
  puVar5[0x27] = uVar3;
  if (0 < (int)uVar3) {
    iVar4 = *(int *)(param_1 + 0x98) - (int)puVar7;
    do {
      *puVar7 = *(undefined4 *)(iVar4 + (int)puVar7);
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  fn_82D8C858(puVar5,param_1);
  return puVar5;
}

