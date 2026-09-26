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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int fStack_bc;
extern unsigned int fStack_cc;
extern int fn_824B5408();
extern int fn_824B5770();
extern int fn_824D68B0();
extern int fn_824D6A88();
extern int fn_824D6C28();
extern unsigned int iStack_e0;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D40A8;
extern unsigned int lbl_831D40AC;
extern unsigned int lbl_831D40B0;
extern unsigned int lbl_831D40B4;
extern unsigned int lbl_831D40B8;
extern unsigned int lbl_831D40BC;
extern unsigned int lbl_831D40C0;
extern unsigned int lbl_831D40C4;


undefined8
fn_824D6498(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             float *param_6,float *param_7,undefined4 *param_8,int *param_9)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  int in_r0;
  int iVar9;
  undefined8 uVar8;
  int iVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *in_stack_00000064;
  int iStack_e0;
  int aiStack_dc [3];
  undefined1 auStack_d0 [4];
  float fStack_cc;
  undefined1 auStack_c0 [4];
  float fStack_bc;
  
  iVar12 = *(int *)(param_2 + 0x164);
  *param_8 = 0;
  fVar1 = lbl_821CC160;
  dVar14 = (double)lbl_821CC160;
  *param_6 = lbl_821CC160;
  *param_7 = fVar1;
  if (iVar12 == 0) {
    return 0;
  }
  fn_824D6A88(auStack_d0,param_2,2,1,0);
  fn_824D6A88(auStack_c0,param_2,2,0,0);
  aiStack_dc[0] = 0;
  param_3 = param_3 * 0x20;
  lVar11 = 0;
  puVar4 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  uVar15 = puVar4[1];
  uVar16 = puVar4[2];
  uVar17 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar15;
  puVar5[2] = uVar16;
  puVar5[3] = uVar17;
  if ((fStack_cc < *(float *)(&lbl_831D40A8 + param_3)) ||
     (*(float *)(&lbl_831D40AC + param_3) <= fStack_cc)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    lVar11 = fn_824D68B0(param_1,(double)*(float *)(&lbl_831D40B0 + param_3),param_2,2,1);
    aiStack_dc[0] = (int)lVar11;
    if (lVar11 != 0) {
      *in_stack_00000064 = 1;
    }
  }
  iVar12 = (int)lVar11;
  fVar1 = *(float *)(&lbl_831D40A8 + param_3);
  iStack_e0 = 0;
  lVar11 = 0;
  puVar4 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  uVar15 = puVar4[1];
  uVar16 = puVar4[2];
  uVar17 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar15;
  puVar5[2] = uVar16;
  puVar5[3] = uVar17;
  if ((fStack_bc < fVar1) || (*(float *)(&lbl_831D40AC + param_3) <= fStack_bc)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    lVar11 = fn_824D68B0(param_1,(double)*(float *)(&lbl_831D40B0 + param_3),param_2,2,0);
    iStack_e0 = (int)lVar11;
    if (lVar11 != 0) {
      *in_stack_00000064 = 2;
    }
  }
  iVar10 = (int)lVar11;
  if (((*(int **)(param_2 + 0x154) != (int *)0x0) &&
      (dVar13 = (double)(**(code **)(**(int **)(param_2 + 0x154) + 0x14))(), dVar13 != dVar14)) &&
     ((iVar12 != 0 || (iVar10 != 0)))) {
    *param_8 = 1;
  }
  iVar3 = *(int *)(&lbl_831D40BC + param_3);
  if (iVar12 == 0) {
    if (iVar10 == 0) goto LAB_824d67b0;
    if (iVar3 == 0) {
      if (*(int *)(param_2 + 300) != 0) {
        dVar13 = (double)fn_824B5408();
        goto LAB_824d6750;
      }
    }
    else {
      dVar13 = (double)fn_824B5770(*(undefined4 *)(param_2 + 0x10c),
                                    *(undefined4 *)(&lbl_831D40B4 + param_3),
                                    *(undefined4 *)(&lbl_831D40B8 + param_3),iVar3);
LAB_824d6750:
      *param_6 = (float)dVar13;
    }
    fVar1 = *(float *)(*(int *)(param_2 + 0x104) + 0x48);
    *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x44) = 0;
    *param_7 = fVar1;
    piVar2 = *(int **)(param_2 + 0x104);
    piVar2[0x11] = 0;
    iVar9 = (**(code **)(*piVar2 + 0x2c))(piVar2);
    piVar2[0x10] = iVar9;
    *(undefined4 *)(*(int *)(param_2 + 0x108) + 0x44) = 0;
    piVar2 = *(int **)(param_2 + 0x10c);
    piVar2[0x11] = 0;
    iVar9 = (**(code **)(*piVar2 + 0x2c))(piVar2);
    piVar2[0x10] = iVar9;
    goto LAB_824d67b0;
  }
  if (iVar3 == 0) {
    if (*(int *)(param_2 + 0x128) != 0) {
      dVar13 = (double)fn_824B5408();
      goto LAB_824d66c0;
    }
  }
  else {
    dVar13 = (double)fn_824B5770(*(undefined4 *)(param_2 + 0x108),
                                  *(undefined4 *)(&lbl_831D40B4 + param_3),
                                  *(undefined4 *)(&lbl_831D40B8 + param_3),iVar3);
LAB_824d66c0:
    *param_6 = (float)dVar13;
  }
  piVar2 = *(int **)(param_2 + 0x100);
  piVar2[0x11] = 0;
  *param_7 = (float)piVar2[0x12];
  iVar9 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  piVar2[0x10] = iVar9;
  *(undefined4 *)(*(int *)(param_2 + 0x104) + 0x44) = 0;
  piVar2 = *(int **)(param_2 + 0x108);
  piVar2[0x11] = 0;
  iVar9 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  piVar2[0x10] = iVar9;
  *(undefined4 *)(*(int *)(param_2 + 0x10c) + 0x44) = 0;
LAB_824d67b0:
  if ((iVar3 != 0) && ((bVar6 || (bVar7)))) {
    dVar13 = (double)fn_824D6C28(param_2,*(undefined4 *)(&lbl_831D40C4 + param_3),aiStack_dc,
                                       &iStack_e0);
    iVar12 = *(int *)(param_2 + 0x144);
    *param_6 = (float)dVar13;
    if ((iVar12 != 0) && (*(int *)(param_2 + 0x148) != 0)) {
      if (aiStack_dc[0] == 0) {
        if (iStack_e0 != 0) {
          dVar14 = (double)*(float *)(*(int *)(param_2 + 0x148) + 0x70);
        }
      }
      else {
        dVar14 = (double)*(float *)(iVar12 + 0x70);
      }
    }
    *param_7 = (float)dVar14;
    *in_stack_00000064 = 0;
    if (aiStack_dc[0] != 0) {
      *in_stack_00000064 = 1;
    }
    iVar12 = aiStack_dc[0];
    iVar10 = iStack_e0;
    if (iStack_e0 != 0) {
      *in_stack_00000064 = 2;
    }
  }
  if ((*(int *)(&lbl_831D40C0 + param_3) != 0) && (*param_6 < lbl_8218E8E8)) {
    iVar12 = 0;
    *in_stack_00000064 = 0;
    iVar10 = 0;
  }
  *param_9 = iVar12;
  if ((iVar12 != 0) || (uVar8 = 0, iVar10 != 0)) {
    uVar8 = 1;
  }
  return uVar8;
}

