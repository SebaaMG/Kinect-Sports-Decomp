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
extern int fn_8287D950();
extern int fn_8287FD98();
extern int fn_8287FFD0();
extern int fn_82886608();
extern int fn_828866B8();
extern int fn_82886C90();
extern int fn_82886F60();
extern int fn_82886FA0();
extern int fn_82887108();
extern int fn_828872C8();
extern int fn_82887E70();
extern int fn_82888068();
extern int fn_82888170();
extern int fn_82888178();
extern int fn_82888228();
extern int fn_82888700();
extern int fn_82888710();
extern int fn_8289F160();
extern unsigned int iStack_60;
extern int (*lbl_832129D8)();


void fn_82881378(int param_1,undefined8 param_2,undefined8 param_3,int *param_4,ulonglong param_5,
                  undefined8 param_6)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar5;
  int *piVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar7;
  ulonglong uVar8;
  int iStack_60;
  int aiStack_5c [23];
  
  iVar5 = (**(code **)(*param_4 + 0x28))(param_4);
  if (iVar5 != 0) {
    piVar6 = (int *)(*lbl_832129D8)(param_4[8]);
    (**(code **)(*piVar6 + 0x48))(piVar6,param_3);
    if ((int)param_3 != (int)param_2) {
      (**(code **)(*piVar6 + 0x4c))(piVar6,param_2);
    }
    (**(code **)(*piVar6 + 0x34))(piVar6,param_5);
    piVar7 = (int *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x70) != 0) {
      *(int **)(*(int *)(param_1 + 0x70) + 0x34) = piVar6;
    }
    piVar6[0xc] = *piVar7;
    *piVar7 = (int)piVar6;
    piVar6[0xd] = 0;
    if (*(int *)(param_1 + 0x74) == 0) {
      *(int **)(param_1 + 0x74) = piVar6;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    piVar6[0xb] = (int)piVar7;
  }
  iVar5 = (**(code **)(*param_4 + 0x2c))(param_4);
  if ((iVar5 != 0) && (iVar5 = fn_82888700(), iVar5 == 0)) {
    piVar6 = *(int **)(param_1 + 0x7c);
    while (piVar7 = piVar6, piVar7 != (int *)0x0) {
      piVar6 = (int *)piVar7[0xc];
      iVar5 = fn_82886608(piVar7);
      if ((iVar5 != 0) && (iVar5 = fn_828866B8(piVar7,param_4[8]), iVar5 != 0)) {
        iVar5 = (**(code **)(*piVar7 + 0x2c))(piVar7);
        if ((iVar5 == 0) &&
           ((iVar5 = (**(code **)(*piVar7 + 0x28))(piVar7), iVar5 == 0 &&
            (iVar5 = (**(code **)(*piVar7 + 0x30))(piVar7), iVar5 == 0)))) {
          uVar3 = fn_82886608(piVar7);
          fn_82888068(param_3,param_6,0x2f,uVar3,1);
          uVar3 = fn_82886608(piVar7);
          uVar4 = (**(code **)(*piVar7 + 4))(piVar7);
          fn_82888178(uVar4,0x2f,uVar3,1);
          fn_82888068(param_3,param_6,0x30,
                            (param_5 & 0xffffffff) - (*(ulonglong *)(piVar7 + 0x12) & 0xffffffff),1)
          ;
          uVar8 = *(ulonglong *)(piVar7 + 0x12);
          uVar3 = (**(code **)(*piVar7 + 4))(piVar7);
          fn_82888178(uVar3,0x30,(param_5 & 0xffffffff) - (uVar8 & 0xffffffff),1);
        }
        (**(code **)(*piVar7 + 4))(piVar7);
        iVar5 = fn_82886C90();
        if (iVar5 == 0) {
          fn_8287FFD0(param_1 + 0x7c,piVar7);
          (**(code **)*piVar7)(piVar7,1);
        }
        else {
          iVar5 = fn_82888710();
          if (iVar5 == 0) {
            uVar1 = *(undefined2 *)((int)piVar7 + 0x26);
            uVar3 = (**(code **)(*piVar7 + 4))(piVar7);
            fn_82886F60(*(undefined4 *)(param_1 + 0xb4),uVar3,uVar1);
            fn_8287FFD0(param_1 + 0x7c,piVar7);
            fn_82887108(1);
            (**(code **)*piVar7)(piVar7,1);
            fn_82887108(0);
          }
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0x70);
    while (piVar7 = piVar6, piVar7 != (int *)0x0) {
      piVar6 = (int *)piVar7[0xc];
      iVar5 = fn_82886608(piVar7);
      if ((iVar5 != 0) && (iVar5 = fn_828866B8(piVar7,param_4[8]), iVar5 != 0)) {
        iVar5 = (**(code **)(*piVar7 + 0x2c))(piVar7);
        if ((iVar5 == 0) &&
           ((iVar5 = (**(code **)(*piVar7 + 0x28))(piVar7), iVar5 == 0 &&
            (iVar5 = (**(code **)(*piVar7 + 0x30))(piVar7), iVar5 == 0)))) {
          uVar3 = fn_82886608(piVar7);
          fn_82888068(param_3,param_6,0x2f,uVar3,1);
          uVar3 = fn_82886608(piVar7);
          uVar4 = (**(code **)(*piVar7 + 4))(piVar7);
          fn_82888178(uVar4,0x2f,uVar3,1);
          fn_82888068(param_3,param_6,0x30,
                            (param_5 & 0xffffffff) - (*(ulonglong *)(piVar7 + 0x12) & 0xffffffff),1)
          ;
          uVar8 = *(ulonglong *)(piVar7 + 0x12);
          uVar3 = (**(code **)(*piVar7 + 4))(piVar7);
          fn_82888178(uVar3,0x30,(param_5 & 0xffffffff) - (uVar8 & 0xffffffff),1);
        }
        (**(code **)(*piVar7 + 4))(piVar7);
        iVar5 = fn_82886C90();
        if (iVar5 == 0) {
          fn_8287FFD0(param_1 + 0x70,piVar7);
          (**(code **)*piVar7)(piVar7,1);
        }
        else {
          iVar5 = fn_82888710();
          if (iVar5 == 0) {
            uVar1 = *(undefined2 *)((int)piVar7 + 0x26);
            uVar3 = (**(code **)(*piVar7 + 4))(piVar7);
            fn_82886F60(*(undefined4 *)(param_1 + 0xb4),uVar3,uVar1);
            fn_8287FFD0(param_1 + 0x70,piVar7);
            fn_82887108(1);
            (**(code **)*piVar7)(piVar7,1);
            fn_82887108(0);
          }
        }
      }
    }
    iStack_60 = param_4[8];
    fn_8289F160(aiStack_5c,param_1 + 0x88,&iStack_60);
    if (aiStack_5c[0] != *(int *)(param_1 + 0x8c)) {
      puVar2 = *(undefined4 **)(aiStack_5c[0] + 0x10);
      uVar3 = fn_8287FD98();
      fn_8287D950(uVar3,puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      fn_828872C8(aiStack_5c,param_1 + 0x88,aiStack_5c[0]);
    }
  }
  fn_82888170(param_3,param_6,0x1a,1);
  uVar3 = (**(code **)(*param_4 + 4))(param_4);
  fn_82888228(uVar3,0x1a,1);
  (**(code **)(*param_4 + 4))(param_4);
  iVar5 = fn_82886C90();
  if (iVar5 != 0) {
    fn_82887E70(param_3);
    uVar1 = *(undefined2 *)((int)param_4 + 0x26);
    uVar3 = (**(code **)(*param_4 + 4))(param_4);
    iVar5 = fn_82886FA0(*(undefined4 *)(param_1 + 0xb4),uVar3,uVar1);
    if (iVar5 == 0) goto LAB_82881970;
  }
  iVar5 = (**(code **)(*param_4 + 0x20))(param_4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x9c);
    piVar6 = (int *)(param_1 + 0x98);
    if (iVar5 == 0) {
      if (*piVar6 != 0) {
        *(int **)(*piVar6 + 0x34) = param_4;
      }
      param_4[0xc] = *piVar6;
      *piVar6 = (int)param_4;
    }
    else {
      if (*(int *)(iVar5 + 0x30) != 0) {
        *(int **)(*(int *)(iVar5 + 0x30) + 0x34) = param_4;
      }
      param_4[0xc] = *(int *)(iVar5 + 0x30);
      *(int **)(iVar5 + 0x30) = param_4;
    }
    param_4[0xd] = iVar5;
    if (*(int *)(param_1 + 0x9c) == iVar5) {
      *(int **)(param_1 + 0x9c) = param_4;
    }
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    param_4[0xb] = (int)piVar6;
    return;
  }
LAB_82881970:
  (**(code **)*param_4)(param_4,1);
  return;
}

