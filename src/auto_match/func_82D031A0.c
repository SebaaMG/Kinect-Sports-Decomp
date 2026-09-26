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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82D02A58();
extern int fn_82D03028();
extern int fn_82D030F0();


int fn_82D031A0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_30 [4];
  uint auStack_2c [11];
  
  uVar9 = param_2 + 0x1fU & 0xfffffff0;
  if (uVar9 < 0x100) {
    uVar9 = 0x100;
  }
  iVar3 = fn_82D030F0(param_1,uVar9);
  if (iVar3 != 0) {
    return iVar3;
  }
  pcVar4 = (char *)(**(code **)(**(int **)(param_1 + 0x98) + 4))(auStack_30);
  if ((*pcVar4 == '\0') || (iVar3 = *(int *)(param_1 + 0xa8), iVar3 == param_1 + 0xa4)) {
    auStack_2c[0] =
         (**(code **)(**(int **)(param_1 + 0x98) + 8))(*(int **)(param_1 + 0x98),uVar9 + 0x138);
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x98) + 0xc))
                              (*(int **)(param_1 + 0x98),auStack_2c[0],auStack_2c);
    if (piVar6 == (int *)0x0) {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar6 + 4))(piVar6,uVar9);
      iVar3 = fn_82D030F0(param_1,uVar9);
      if (iVar3 != 0) {
        return iVar3;
      }
      auStack_2c[0] =
           (**(code **)(**(int **)(param_1 + 0x98) + 8))(*(int **)(param_1 + 0x98),uVar9 + 0x138);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x98) + 0xc))
                                (*(int **)(param_1 + 0x98),auStack_2c[0],auStack_2c);
      if (piVar6 == (int *)0x0) goto LAB_82d03298;
    }
    piVar6[2] = 0;
    piVar8 = (int *)(param_1 + 0xa4);
    piVar6[4] = (int)(piVar6 + 6);
    piVar6[3] = auStack_2c[0];
    piVar6[5] = (int)piVar6 + auStack_2c[0];
    piVar6[4] = (int)piVar6 + 0x27U & 0xfffffff0;
    piVar6[5] = (int)piVar6 + auStack_2c[0] & 0xfffffff0;
    for (piVar1 = *(int **)(param_1 + 0xa8); (piVar1 != piVar8 && (piVar1 < piVar6));
        piVar1 = (int *)piVar1[1]) {
    }
    piVar6[1] = (int)piVar1;
    iVar3 = *piVar1;
    *piVar6 = iVar3;
    *(int **)(iVar3 + 4) = piVar6;
    *piVar1 = (int)piVar6;
    if (*(int *)(param_1 + 0x10) != param_1 + 0x9c) {
      *(uint *)(*(int *)(param_1 + 0x10) + 4) = *(uint *)(param_1 + 0x14) | 1;
      *(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) = *(int *)(param_1 + 0x14);
      fn_82D02A58(param_1,*(int *)(param_1 + 0x10),
                    *(uint *)(*(int *)(param_1 + 0x10) + 4) & 0xfffffffc);
    }
    uVar7 = (piVar6[5] - piVar6[4]) - 0x10;
    *(uint *)(param_1 + 0x14) = uVar7;
    iVar3 = piVar6[4];
    *(int *)(param_1 + 0x10) = iVar3;
    *(uint *)(iVar3 + 4) = uVar7 | 1;
    *(int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) = *(int *)(param_1 + 0x14);
    iVar3 = piVar6[5];
    *(undefined4 *)(iVar3 + -0xc) = 2;
    if ((int *)piVar6[1] != piVar8) {
      *(uint *)(iVar3 + -0xc) = ((int *)piVar6[1])[4] - (iVar3 + -0x10) | 2;
    }
    if ((int *)*piVar6 != piVar8) {
      iVar3 = ((int *)*piVar6)[5];
      *(uint *)(iVar3 + -0xc) =
           *(int *)(param_1 + 0x10) - (iVar3 + -0x10) | *(uint *)(iVar3 + -0xc) & 3;
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  else {
    pcVar4 = (char *)fn_82D03028(auStack_30,param_1,*(int *)(iVar3 + 0xc) + uVar9);
    if (*pcVar4 == '\0') {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar6 + 4))(piVar6,uVar9);
      iVar5 = fn_82D030F0(param_1,uVar9);
      if (iVar5 != 0) {
        return iVar5;
      }
      pcVar4 = (char *)fn_82D03028(auStack_30,param_1,*(int *)(iVar3 + 0xc) + uVar9);
      if (*pcVar4 == '\0') {
LAB_82d03298:
        (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),uVar9);
        return 0;
      }
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    iVar5 = *(int *)(param_1 + 0xbc);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0xc0) = iVar3 + uVar9 + -0x10;
  uVar7 = *(int *)(param_1 + 0x14) - uVar9;
  *(uint *)(param_1 + 0xbc) = iVar5 + uVar9;
  *(uint *)(param_1 + 0x10) = iVar2 + uVar9;
  *(uint *)(param_1 + 0x14) = uVar7;
  *(uint *)(iVar2 + uVar9 + 4) = uVar7 | 1;
  *(uint *)(iVar2 + uVar9) = uVar9;
  *(uint *)(iVar2 + 4) = uVar9 | 3;
  return iVar2 + 0x10;
}

