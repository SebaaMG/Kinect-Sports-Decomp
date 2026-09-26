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
extern int fn_82239010();
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_82887890();
extern int fn_8288C358();
extern int fn_8289F4C8();
extern int fn_8289F560();
extern int fn_828A1C98();
extern int fn_828A3578();
extern int fn_828A35E0();
extern int fn_828A56F0();
extern int fn_828A61C8();
extern int fn_828A7E40();
extern int fn_828A7ED8();
extern int fn_828A8160();
extern int fn_828AC488();
extern int fn_828B22F0();
extern unsigned int lbl_82024340;
extern unsigned int lbl_83213F18;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828A8678(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  *param_1 = &lbl_82024340;
  fn_828A8160(lbl_83213F18,param_1);
  uStack_4c = param_1[10];
  fn_828A1C98(&uStack_48,0xffffffff83213f00,&uStack_4c);
  fn_82887890(&uStack_4c,0xffffffff83213f00,uStack_48,uStack_44);
  puVar8 = (undefined4 *)param_1[0xc0];
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  fn_828A3578(param_1 + 0xbd);
  fn_8265CA20(param_1[0xbd]);
  fn_828A56F0(param_1 + 0xba);
  fn_8265CA20(param_1[0xba]);
  if (0xf < (uint)param_1[0xb8]) {
    fn_8265CA20(param_1[0xb3]);
  }
  param_1[0xb7] = 0;
  param_1[0xb8] = 0xf;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  puVar8 = (undefined4 *)param_1[0xb0];
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  puVar8 = (undefined4 *)param_1[0xaf];
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  puVar8 = (undefined4 *)param_1[0xae];
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  fn_828AC488(param_1 + 0x9e);
  fn_8289F560(&uStack_4c,param_1 + 0x9a,*(undefined4 *)param_1[0x9b]);
  fn_8265CA20(param_1[0x9b]);
  if (param_1[0x96] != 0) {
    fn_8265CA20();
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  fn_8288C358(param_1 + 0x90);
  uVar2 = param_1[0x90];
  piVar5 = (int *)fn_825089A0();
  (**(code **)(*piVar5 + 0x28))(piVar5,uVar2);
  param_1[0x90] = 0;
  fn_8289F4C8(&uStack_4c,param_1 + 0x8b,*(undefined4 *)param_1[0x8c]);
  fn_8265CA20(param_1[0x8c]);
  fn_8289F4C8(&uStack_4c,param_1 + 0x87,*(undefined4 *)param_1[0x88]);
  fn_8265CA20(param_1[0x88]);
  fn_8289F4C8(&uStack_4c,param_1 + 0x83,*(undefined4 *)param_1[0x84]);
  fn_8265CA20(param_1[0x84]);
  fn_8289F4C8(&uStack_4c,param_1 + 0x7f,*(undefined4 *)param_1[0x80]);
  fn_8265CA20(param_1[0x80]);
  if (param_1[0x78] != 0) {
    fn_8265CA20();
  }
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  fn_828B22F0(param_1 + 0x74);
  fn_8265CA20(param_1[0x74]);
  fn_8289F560(&uStack_4c,param_1 + 0x70,*(undefined4 *)param_1[0x71]);
  fn_8265CA20(param_1[0x71]);
  fn_828A35E0(param_1 + 0x6c);
  fn_828B22F0(param_1 + 0x68);
  fn_8265CA20(param_1[0x68]);
  iVar3 = param_1[0x62];
  if (iVar3 != 0) {
    piVar5 = (int *)fn_825089A0();
    (**(code **)(*piVar5 + 0x28))(piVar5,iVar3);
  }
  param_1[0x62] = 0;
  lVar7 = 3;
  param_1[99] = 0;
  param_1[100] = 0;
  piVar5 = param_1 + 0x62;
  do {
    piVar1 = piVar5 + -4;
    if (*piVar1 != 0) {
      fn_82239010(*piVar1,piVar5[-3],piVar5 + -1,uStack_50);
      iVar3 = *piVar1;
      piVar6 = (int *)fn_825089A0();
      (**(code **)(*piVar6 + 0x28))(piVar6,iVar3);
    }
    lVar7 = lVar7 + -1;
    *piVar1 = 0;
    piVar5[-3] = 0;
    piVar5[-2] = 0;
    piVar5 = piVar1;
  } while (-1 < lVar7);
  lVar7 = 3;
  piVar5 = param_1 + 0x52;
  do {
    piVar1 = piVar5 + -4;
    if (*piVar1 != 0) {
      fn_82239010(*piVar1,piVar5[-3],piVar5 + -1,uStack_50);
      iVar3 = *piVar1;
      piVar6 = (int *)fn_825089A0();
      (**(code **)(*piVar6 + 0x28))(piVar6,iVar3);
    }
    lVar7 = lVar7 + -1;
    *piVar1 = 0;
    piVar5[-3] = 0;
    piVar5[-2] = 0;
    piVar5 = piVar1;
  } while (-1 < lVar7);
  fn_828A61C8(&uStack_4c,param_1 + 0x3e,*(undefined4 *)param_1[0x3f]);
  fn_8265CA20(param_1[0x3f]);
  fn_828A7ED8(&uStack_4c,param_1 + 0x3a,*(undefined4 *)param_1[0x3b]);
  fn_8265CA20(param_1[0x3b]);
  fn_828A61C8(&uStack_4c,param_1 + 0x36,*(undefined4 *)param_1[0x37]);
  fn_8265CA20(param_1[0x37]);
  fn_828B22F0(param_1 + 0x33);
  fn_8265CA20(param_1[0x33]);
  puVar8 = (undefined4 *)param_1[0x23];
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(puVar8,0);
    piVar5 = (int *)fn_825089A0();
    (**(code **)(*piVar5 + 0x28))(piVar5,puVar8);
  }
  fn_828AC488(param_1 + 0x18);
  puVar4 = (undefined4 *)param_1[0x16];
  puVar8 = param_1 + 0x16;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar7 = 3;
  do {
    puVar8 = puVar8 + -1;
    puVar4 = (undefined4 *)*puVar8;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      piVar5 = (int *)fn_825089A0();
      (**(code **)(*piVar5 + 0x28))(piVar5,puVar4);
    }
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  puVar8 = param_1 + 0x12;
  lVar7 = 3;
  do {
    puVar8 = puVar8 + -1;
    puVar4 = (undefined4 *)*puVar8;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      piVar5 = (int *)fn_825089A0();
      (**(code **)(*piVar5 + 0x28))(piVar5,puVar4);
    }
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  fn_828A7E40(&uStack_4c,param_1 + 3,*(undefined4 *)param_1[4]);
  fn_8265CA20(param_1[4]);
  return;
}

