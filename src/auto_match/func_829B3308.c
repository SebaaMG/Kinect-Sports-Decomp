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
extern int fn_82930318();
extern int fn_829B3170();


int fn_829B3308(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  
  iVar1 = fn_82930318(0x78);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_829B3170();
  }
  if (iVar1 == 0) {
LAB_829b3340:
    iVar1 = 0;
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 0x40);
    puVar4 = (undefined4 *)(iVar1 + 0x34);
    *(undefined8 *)(iVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    lVar7 = 2;
    *(undefined8 *)(iVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(iVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(iVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    do {
      *puVar4 = *(undefined4 *)((param_1 - iVar1) + (int)puVar4);
      puVar4[2] = puVar3[-1];
      puVar3 = puVar3 + 1;
      puVar4[4] = *puVar3;
      puVar4 = puVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar5 = 0;
    piVar6 = (int *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x74);
    do {
      if ((int *)*piVar6 != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)*piVar6 + 4))();
        *(int *)((iVar1 - param_1) + (int)piVar6) = iVar2;
        if (iVar2 == 0) goto LAB_829b3340;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < 2);
    if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x5c) + 4))();
      *(int *)(iVar1 + 0x5c) = iVar2;
      if (iVar2 == 0) goto LAB_829b3340;
    }
    uVar5 = 0;
    piVar6 = (int *)(param_1 + 0x60);
    do {
      if ((int *)*piVar6 != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)*piVar6 + 4))();
        *(int *)((int)piVar6 + (iVar1 - param_1)) = iVar2;
        if (iVar2 == 0) goto LAB_829b3340;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  }
  return iVar1;
}

