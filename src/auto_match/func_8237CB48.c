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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_28;
extern int fn_822315A0();
extern int fn_8237CE20();
extern int fn_8237E180();
extern int fn_8237E330();
extern int fn_8237E468();
extern int fn_8237E710();
extern int fn_8237FA88();
extern int fn_824D2AE8();
extern int fn_82570840();
extern int fn_825709D8();
extern int fn_82809CB0();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CB374;
extern unsigned int lbl_831D1CA8;
extern unsigned int lbl_831D267C;
extern unsigned int lbl_831D26D8;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_8237CB48(double param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  int iStack_40;
  int iStack_3c;
  float afStack_30 [2];
  float fStack_28;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_2 + 0x240);
  *(float *)(param_2 + 0x288) = (float)(param_1 + (double)*(float *)(param_2 + 0x288));
  iVar2 = *(int *)(iVar1 + 0x54);
  if (iVar2 == 0) {
    if (param_4 != 0) {
      lVar8 = 1;
LAB_8237cc4c:
      uVar7 = 2;
      goto LAB_8237cc50;
    }
  }
  else if (iVar2 == 5) {
    if ((*(int *)(iVar1 + 0x9d8) != 0) && (*(int *)(param_2 + 0x284) != 5)) {
      lVar8 = 1;
      uVar7 = 5;
      goto LAB_8237cc50;
    }
  }
  else if (iVar2 == 6) {
    if (*(int *)(param_2 + 0x284) != 3) {
      lVar8 = 1;
      uVar7 = 3;
      goto LAB_8237cc50;
    }
  }
  else if ((iVar2 == 0xc) || (iVar2 == 0xf)) {
    if ((*(int *)(param_2 + 0x284) != 4) &&
       ((*(int *)(iVar1 + 0xa0) == 0 || (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) != 1)))) {
      lVar8 = 1;
      uVar7 = 4;
      goto LAB_8237cc50;
    }
  }
  else if (iVar2 == 0x12) {
    lVar8 = 0;
    uVar7 = 1;
LAB_8237cc50:
    fn_8237E710(param_2,uVar7,lVar8);
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x284);
    if (uVar3 != 2) {
      lVar8 = (ulonglong)uVar3 - 1;
      lVar8 = lVar8 - (((ulonglong)uVar3 - 2) + (ulonglong)(lVar8 == 0));
      goto LAB_8237cc4c;
    }
  }
  fn_824D2AE8(uVar5 - 0x40,param_2 + 0x24c);
  dVar10 = (double)lbl_821CC160;
  if ((iStack_40 != 0) && (*(int *)(iStack_40 + 0xa0) != 0)) {
    puVar4 = (undefined4 *)(iStack_40 + 0x20U & 0xfffffff0);
    in_register_00010000 = *puVar4;
    in_ACC = puVar4[1];
    in_register_00010008 = puVar4[2];
    in_vr0 = puVar4[3];
    puVar4 = (undefined4 *)((int)afStack_30 + (int)in_r0 & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    dVar9 = (double)fn_82809CB0((double)fStack_28);
    if (dVar9 < (double)lbl_831D267C) {
      dVar9 = (double)afStack_30[0];
      *(float *)(param_2 + 0x2c8) = afStack_30[0];
      if (dVar9 <= dVar10) {
        dVar9 = dVar9 - (double)lbl_831D26D8;
      }
      else {
        dVar9 = (double)lbl_831D26D8 + dVar9;
      }
      *(float *)(param_2 + 0x2c8) = (float)dVar9;
    }
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  uVar3 = *(uint *)(param_2 + 0x284);
  *(undefined **)(param_2 + 0x2a4) = &lbl_831CB374;
  if (uVar3 < 2) {
    *(undefined **)(param_2 + 0x298) = &lbl_831D1CA8;
    lVar8 = -0x7ce2e334;
  }
  else if (uVar3 == 2) {
    fn_8237CE20(param_1,param_2);
    lVar8 = (ulonglong)*(uint *)(param_2 + 0x298) + 0x24;
  }
  else {
    if (uVar3 < 4) {
      fn_8237E180(param_2);
    }
    else {
      if (uVar3 != 4) {
        if (5 < uVar3) goto LAB_8237cd80;
        fn_8237E468(param_2);
        lVar8 = (ulonglong)*(uint *)(param_2 + 0x2a0) + 0x3c;
        goto LAB_8237cd74;
      }
      fn_8237E330(param_2);
    }
    lVar8 = (ulonglong)*(uint *)(param_2 + 0x29c) + 0x1c;
  }
LAB_8237cd74:
  fn_8237FA88(param_1,param_2,lVar8);
LAB_8237cd80:
  iVar1 = *(int *)(param_2 + 0x2e8);
  if (iVar1 == -1) {
    if ((*(int *)(param_2 + 0x2d8) != 0) && (*(int *)(param_2 + 0x2c4) != 0)) {
      uVar6 = fn_82570840(*(int *)(param_2 + 0x2c4),param_2 + 0x2d8,1,param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x2e8) = uVar6;
    }
  }
  else {
    dVar9 = (double)lbl_821CA460;
    if (*(int *)(param_2 + 0x284) == 2) {
      dVar9 = dVar10;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x2c4);
    loadVectorLeftIndexed128(in_r0,uVar5 - 0x40);
    puVar4 = (undefined4 *)((int)afStack_30 + (int)in_r0 & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    fn_825709D8(dVar9,uVar6,iVar1,uVar5 - 0x30);
  }
  return;
}

