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
extern unsigned int *auStack_70;
extern int fn_822ABA88();
extern int fn_8236A100();
extern int fn_8236A360();
extern int fn_823C2148();
extern int fn_823D8598();
extern int fn_824FE498();
extern int fn_824FFDC8();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8288B760();
extern unsigned int lbl_821CC160;


void fn_823CFCE8(double param_1,int param_2,ulonglong param_3,int param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  int aiStack_80 [4];
  undefined1 auStack_70 [112];
  
  bVar8 = false;
  *(undefined1 *)(param_2 + 0x1520) = 0;
  *(undefined1 *)(param_2 + 0x152c) = 0;
  fVar2 = lbl_821CC160;
  dVar9 = (double)lbl_821CC160;
  *(float *)(param_2 + 0x1538) = lbl_821CC160;
  *(undefined1 *)(param_2 + 0x1540) = 0;
  *(float *)(param_2 + 0x1580) = fVar2;
  *(undefined1 *)(param_2 + 0x1560) = 0;
  *(float *)(param_2 + 0x15d0) = fVar2;
  *(undefined1 *)(param_2 + 0x1590) = 0;
  *(undefined1 *)(param_2 + 0x15b0) = 0;
  *(float *)(param_2 + 0x1670) = fVar2;
  *(undefined1 *)(param_2 + 0x1630) = 0;
  *(undefined1 *)(param_2 + 0x1650) = 0;
  *(float *)(param_2 + 0x1620) = fVar2;
  *(undefined1 *)(param_2 + 0x15e0) = 0;
  *(undefined1 *)(param_2 + 0x1600) = 0;
  if (*(int *)(param_2 + 0x9a0) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(*(int *)(param_2 + 0x9a0) + 0x28);
  }
  if ((param_3 & 0xffffffff) != (ulonglong)uVar4) {
    return;
  }
  puVar1 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  *(float *)(param_2 + 0xf90) = (float)param_1;
  lVar7 = 1;
  *(float *)(param_2 + 0xfa8) = fVar2;
  *(float *)(param_2 + 0xfac) = fVar2;
  *(undefined4 *)(param_2 + 4000) = 0;
  *(float *)(param_2 + 0xfb0) = fVar2;
  *(undefined4 *)(param_2 + 0xf98) = 1;
  puVar1 = (undefined4 *)(param_2 + 0xf70U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(undefined4 *)(param_2 + 0xf9c) = 1;
  puVar1 = (undefined4 *)(param_2 + 0xf80U & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  *(undefined4 *)(param_2 + 0xfa4) = 0;
  fn_824FE498(*(undefined4 *)(param_2 + 0xe10));
  fn_823D8598(auStack_70,param_2,param_3,param_4,param_6);
  fn_8236A360(param_2,2);
  piVar6 = *(int **)(**(int **)(param_2 + 8) + param_4 * 4);
  iVar3 = fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + *piVar6),param_3);
  if (*(int *)(iVar3 + 0x24) == 0) {
LAB_823cfe58:
    lVar7 = 0;
  }
  else {
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar4 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if (uVar4 == 0) goto LAB_823cfe58;
  }
  fn_8236A100(param_2,(lVar7 + -1) - (lVar7 + -2 + (ulonglong)(lVar7 + -1 == 0)));
  iVar3 = *(int *)(param_2 + 0xe10);
  if (iVar3 != 0) {
    fn_824FFDC8(iVar3,0,0);
    fn_824FFDC8(iVar3,1,0);
    fn_824FFDC8(*(undefined4 *)(param_2 + 0xe10),0,1);
  }
  if (((*(int *)(param_2 + 0x41c) != 10) || (param_4 != *(int *)(param_2 + 0x420))) ||
     ((int)param_3 != *(int *)(param_2 + 0x420))) {
    *(float *)(param_2 + 0x428) = (float)dVar9;
    *(int *)(param_2 + 0x420) = param_4;
    *(undefined4 *)(param_2 + 0x41c) = 10;
    *(int *)(param_2 + 0x424) = (int)param_3;
  }
  piVar6 = (int *)(param_2 + 0x1004);
  if (piVar6 != (int *)0x0) {
    bVar8 = *piVar6 != 0;
  }
  if (bVar8) {
    aiStack_80[0] = *piVar6;
    aiStack_80[0] =
         fn_82535298(aiStack_80,**(undefined4 **)(param_2 + 0xfe0),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(aiStack_80);
  }
  piVar6 = *(int **)(*(int *)(param_2 + 0x20) + param_4 * 4);
  if ((piVar6[1] - *piVar6 & 0xfffffffcU) == 0) {
    if (*(int *)(param_6 + 0x38) == 1) {
      if (*(int *)(param_2 + 0x4c0) != 0) goto LAB_823cffc4;
      uVar5 = 0xffffffff821b60e4;
    }
    else {
      if (*(int *)(param_2 + 0x4c0) != 0) goto LAB_823cffc4;
      uVar5 = 0xffffffff821b60f4;
    }
  }
  else if (param_7 == 0) {
    if (*(int *)(param_2 + 0x4c0) != 0) goto LAB_823cffc4;
    uVar5 = 0xffffffff821b60d8;
  }
  else {
    if (*(int *)(param_2 + 0x4c0) != 0) goto LAB_823cffc4;
    uVar5 = 0xffffffff821b60cc;
  }
  fn_82508078(*(undefined4 *)(param_2 + 0xa4),uVar5,0);
LAB_823cffc4:
  fn_823C2148(param_2,0,1);
  return;
}

