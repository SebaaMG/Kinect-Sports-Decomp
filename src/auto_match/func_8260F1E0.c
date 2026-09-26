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
extern int fn_82586B60();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8260F1E0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_5 == 0) {
    uVar1 = *(uint *)(param_3 + 0x50);
    uStack_38 = 1;
    uStack_34 = 8;
    if (uVar1 == 0) {
      iVar2 = **(int **)(param_1 + 0x60);
      iVar4 = fn_82586B60(param_3 + 0x10);
      puVar3 = *(undefined4 **)(iVar2 + 0x314);
      for (puVar7 = *(undefined4 **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
        if (puVar7[1] == iVar4) {
          (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_38);
        }
      }
      return;
    }
    if ((uVar1 & 0xffff) == 0) {
      return;
    }
    for (puVar7 = *(undefined4 **)(**(int **)(param_1 + 0x60) + 0x310);
        puVar7 < *(undefined4 **)(**(int **)(param_1 + 0x60) + 0x314); puVar7 = puVar7 + 2) {
      piVar6 = (int *)*puVar7;
      if ((uint)*(ushort *)(piVar6 + 0x22e) == (uVar1 & 0xffff)) goto LAB_8260f460;
    }
    piVar6 = (int *)0x0;
LAB_8260f460:
    if (piVar6 == (int *)0x0) {
      return;
    }
    puVar7 = &uStack_38;
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 3) {
        return;
      }
      uVar1 = *(uint *)(param_3 + 0x50);
      uStack_4c = 8;
      uStack_50 = 1;
      uStack_48 = 2;
      uStack_44 = 8;
      if (uVar1 == 0) {
        iVar2 = **(int **)(param_1 + 0x60);
        iVar4 = fn_82586B60(param_3 + 0x10);
        puVar3 = *(undefined4 **)(iVar2 + 0x314);
        for (puVar7 = *(undefined4 **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
          if (puVar7[1] == iVar4) {
            (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_50);
          }
        }
        iVar2 = **(int **)(param_1 + 0x60);
        iVar4 = fn_82586B60(param_3 + 0x10);
        puVar3 = *(undefined4 **)(iVar2 + 0x314);
        for (puVar7 = *(undefined4 **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
          if (puVar7[1] == iVar4) {
            (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_48);
          }
        }
        return;
      }
      if ((uVar1 & 0xffff) == 0) {
        return;
      }
      for (piVar5 = *(int **)(**(int **)(param_1 + 0x60) + 0x310);
          piVar5 < *(int **)(**(int **)(param_1 + 0x60) + 0x314); piVar5 = piVar5 + 2) {
        piVar6 = (int *)*piVar5;
        if ((uint)*(ushort *)(piVar6 + 0x22e) == (uVar1 & 0xffff)) goto LAB_8260f26c;
      }
      piVar6 = (int *)0x0;
LAB_8260f26c:
      if (piVar6 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar6 + 0xc))(piVar6,&uStack_50);
      iVar2 = *piVar6;
      puVar7 = &uStack_48;
      goto LAB_8260f474;
    }
    uVar1 = *(uint *)(param_3 + 0x50);
    uStack_40 = 2;
    uStack_3c = 8;
    if (uVar1 == 0) {
      iVar2 = **(int **)(param_1 + 0x60);
      iVar4 = fn_82586B60(param_3 + 0x10);
      puVar3 = *(undefined4 **)(iVar2 + 0x314);
      for (puVar7 = *(undefined4 **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
        if (puVar7[1] == iVar4) {
          (**(code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_40);
        }
      }
      return;
    }
    if ((uVar1 & 0xffff) == 0) {
      return;
    }
    for (puVar7 = *(undefined4 **)(**(int **)(param_1 + 0x60) + 0x310);
        puVar7 < *(undefined4 **)(**(int **)(param_1 + 0x60) + 0x314); puVar7 = puVar7 + 2) {
      piVar6 = (int *)*puVar7;
      if ((uint)*(ushort *)(piVar6 + 0x22e) == (uVar1 & 0xffff)) goto LAB_8260f3a0;
    }
    piVar6 = (int *)0x0;
LAB_8260f3a0:
    if (piVar6 == (int *)0x0) {
      return;
    }
    puVar7 = &uStack_40;
  }
  iVar2 = *piVar6;
LAB_8260f474:
  (**(code **)(iVar2 + 0xc))(piVar6,puVar7);
  return;
}

