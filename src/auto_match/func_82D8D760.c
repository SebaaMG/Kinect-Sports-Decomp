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
extern int fn_82D8D6C0();


int fn_82D8D760(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 auStack_40 [16];
  
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0xe0);
  *(undefined2 *)(iVar3 + 4) = 0xe0;
  iVar3 = fn_82D8D6C0(iVar3,param_1 + 0xb0,*(undefined4 *)(param_1 + 0x2c));
  piVar7 = (int *)(iVar3 + 0x8c);
  iVar4 = fn_82CE5410();
  uVar2 = *(uint *)(iVar3 + 0x94) & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar2 < *(int *)(param_1 + 0x90)) {
    if ((*(uint *)(iVar3 + 0x94) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar7,uVar2,4);
    }
    auStack_40[0] = *(undefined4 *)(param_1 + 0x90);
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_40,4);
    *piVar7 = iVar4;
    *(undefined4 *)(iVar3 + 0x94) = auStack_40[0];
  }
  uVar2 = *(uint *)(param_1 + 0x90);
  uVar5 = (ulonglong)uVar2;
  puVar6 = (undefined4 *)*piVar7;
  *(uint *)(iVar3 + 0x90) = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = *(int *)(param_1 + 0x8c) - (int)puVar6;
    do {
      *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  piVar7 = (int *)(iVar3 + 0x98);
  iVar4 = fn_82CE5410();
  uVar2 = *(uint *)(iVar3 + 0xa0) & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar2 < *(int *)(param_1 + 0x9c)) {
    if ((*(uint *)(iVar3 + 0xa0) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*piVar7,uVar2,4);
    }
    auStack_40[0] = *(undefined4 *)(param_1 + 0x9c);
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,auStack_40,4);
    *piVar7 = iVar4;
    *(undefined4 *)(iVar3 + 0xa0) = auStack_40[0];
  }
  uVar2 = *(uint *)(param_1 + 0x9c);
  uVar5 = (ulonglong)uVar2;
  puVar6 = (undefined4 *)*piVar7;
  *(uint *)(iVar3 + 0x9c) = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = *(int *)(param_1 + 0x98) - (int)puVar6;
    do {
      *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  fn_82D8C858(iVar3,param_1);
  return iVar3;
}

