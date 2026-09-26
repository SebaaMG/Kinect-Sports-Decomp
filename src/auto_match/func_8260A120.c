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
extern int fn_8260A488();
extern int fn_8260A568();
extern int fn_8260A648();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D93C00();
extern int fn_82D96728();
extern int fn_82D96B50();
extern int fn_82D972A0();
extern int fn_82D97CB8();
extern int fn_82D98230();
extern int fn_82D98360();


int fn_8260A120(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  int in_r0;
  uint uVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if (uVar3 == 0) {
    iVar4 = fn_82CE5410();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x50);
    *(undefined2 *)(iVar4 + 4) = 0x50;
    iVar4 = fn_82D96728();
  }
  else {
    if (uVar3 == 1) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xb0);
      *(undefined2 *)(iVar4 + 4) = 0xb0;
      iVar4 = fn_82D96B50();
      *(undefined2 *)(iVar4 + 0x10) = *(undefined2 *)(param_2 + 4);
      puVar10 = (undefined4 *)((int)param_2 + in_r0 + 0x20 & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(in_r0 + iVar4 + 0x20 & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((uint)(param_2 + 0x10) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(iVar4 + 0x40U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((uint)(param_2 + 0x14) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(iVar4 + 0x50U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((int)param_2 + in_r0 + 0x60 & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(in_r0 + iVar4 + 0x60 & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((uint)(param_2 + 0x1c) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(iVar4 + 0x70U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((uint)(param_2 + 0x20) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(iVar4 + 0x80U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (undefined4 *)((uint)(param_2 + 0x24) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (undefined4 *)(iVar4 + 0x90U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      *(undefined2 *)(iVar4 + 0xa0) = *(undefined2 *)(param_2 + 0x28);
      *(undefined2 *)(iVar4 + 0xa2) = *(undefined2 *)((int)param_2 + 0xa2);
      *(int *)(iVar4 + 0xa4) = param_2[0x29];
      *(int *)(iVar4 + 0xa8) = param_2[0x2a];
      goto LAB_8260a478;
    }
    if (uVar3 < 3) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xe0);
      *(undefined2 *)(iVar4 + 4) = 0xe0;
      iVar4 = fn_82D93C00();
      fn_8260A488(iVar4 + 0x10,param_2 + 4);
      puVar10 = (undefined4 *)(iVar4 + 0xb0);
      *(int *)(iVar4 + 8) = param_2[2];
      piVar9 = *(int **)(iVar4 + 0xb0);
LAB_8260a33c:
      if (piVar9 == (int *)0x0) {
        return iVar4;
      }
      uVar6 = (**(code **)(*piVar9 + 0xc))();
      *puVar10 = uVar6;
      return iVar4;
    }
    if (uVar3 == 6) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xd0);
      *(undefined2 *)(iVar4 + 4) = 0xd0;
      iVar4 = fn_82D972A0();
      fn_8260A568(iVar4 + 0x10,param_2 + 4);
      puVar10 = (undefined4 *)(iVar4 + 0xac);
      *(int *)(iVar4 + 8) = param_2[2];
      piVar9 = *(int **)(iVar4 + 0xac);
      goto LAB_8260a33c;
    }
    if (uVar3 == 7) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x140);
      *(undefined2 *)(iVar4 + 4) = 0x140;
      iVar4 = fn_82D97CB8();
      fn_8260A648(iVar4 + 0x10,param_2 + 4);
      piVar7 = (int *)(iVar4 + 0xe0);
      lVar8 = 3;
      *(int *)(iVar4 + 8) = param_2[2];
      piVar9 = piVar7;
      do {
        if ((int *)*piVar9 != (int *)0x0) {
          iVar5 = (**(code **)(*(int *)*piVar9 + 0xc))();
          *piVar7 = iVar5;
        }
        lVar8 = lVar8 + -1;
        piVar9 = piVar9 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar8 != 0);
      return iVar4;
    }
    if (uVar3 != 8) {
      if (uVar3 != 0xc) {
        return 0;
      }
      uVar2 = fn_8260A120(param_1,param_2[6]);
      iVar4 = fn_82CE5410();
      iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x28);
      *(undefined2 *)(iVar4 + 4) = 0x28;
      iVar4 = fn_82D98360(iVar4,uVar2);
      fn_82CE4118(uVar2);
      *(int *)(iVar4 + 0x20) = param_2[8];
      *(undefined1 *)(iVar4 + 0x24) = *(undefined1 *)(param_2 + 9);
      *(undefined1 *)(iVar4 + 0x25) = *(undefined1 *)((int)param_2 + 0x25);
      *(int *)(iVar4 + 8) = param_2[2];
      return iVar4;
    }
    iVar4 = fn_82CE5410();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x50);
    *(undefined2 *)(iVar4 + 4) = 0x50;
    iVar4 = fn_82D98230();
  }
  *(undefined2 *)(iVar4 + 0x10) = *(undefined2 *)(param_2 + 4);
  puVar10 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  uVar6 = puVar10[1];
  uVar11 = puVar10[2];
  uVar12 = puVar10[3];
  puVar1 = (undefined4 *)(iVar4 + 0x20U & 0xfffffff0);
  *puVar1 = *puVar10;
  puVar1[1] = uVar6;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar10 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  uVar6 = puVar10[1];
  uVar11 = puVar10[2];
  uVar12 = puVar10[3];
  puVar1 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
  *puVar1 = *puVar10;
  puVar1[1] = uVar6;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  *(int *)(iVar4 + 0x40) = param_2[0x10];
  *(int *)(iVar4 + 0x44) = param_2[0x11];
LAB_8260a478:
  *(int *)(iVar4 + 8) = param_2[2];
  return iVar4;
}

