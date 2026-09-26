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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_824FA0F8();
extern int fn_824FA188();
extern int fn_8255A780();
extern int fn_82F4EC30();
extern int fn_82F53418();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D42F8;


void fn_824F8890(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  
  if (*(int *)(param_1 + 0x300) == 0) {
    uVar4 = fn_82F4EC30(0);
    iVar5 = fn_82F53418(uVar4,param_1 + 0x308,1);
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    *(int *)(param_1 + 0x300) = iVar6;
  }
  if (*(int *)(param_1 + 0x304) == 0) {
    uVar4 = fn_82F4EC30(0);
    iVar5 = fn_82F53418(uVar4,param_1 + 0x30c,1);
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    *(int *)(param_1 + 0x304) = iVar6;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x300) + 0x44);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x300) + 0x50U & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x304) + 0x50U & 0xfffffff0);
  uVar14 = *puVar7;
  uVar15 = puVar7[1];
  uVar16 = puVar7[2];
  uVar17 = puVar7[3];
  iVar5 = *(int *)(*(int *)(param_1 + 0x304) + 0x44);
  puVar7 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar7 = *puVar3;
  puVar7[1] = uVar11;
  puVar7[2] = uVar12;
  puVar7[3] = uVar13;
  fVar1 = lbl_821CC160;
  dVar8 = (double)lbl_821CC160;
  puVar7 = &lbl_831D42F8;
  puVar3 = (undefined4 *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar3 = uVar14;
  puVar3[1] = uVar15;
  puVar3[2] = uVar16;
  puVar3[3] = uVar17;
  if (iVar6 == 0) {
    if ((iVar5 != 0) && ((double)fStack_20 != dVar8)) {
      dVar9 = (double)lbl_831D42F8 * (double)fStack_20;
      fStack_2c = fStack_1c;
LAB_824f899c:
      *(float *)(param_1 + 0x220) = -(float)dVar9;
      *(float *)(param_1 + 0x224) = lbl_831D42F8 * fStack_2c;
      puVar7 = &lbl_831D42F8;
      fn_824FA188(param_1,2);
    }
  }
  else if (iVar5 == 0) {
    if ((double)fStack_30 != dVar8) {
      dVar9 = (double)lbl_831D42F8 * (double)fStack_30;
      goto LAB_824f899c;
    }
  }
  else {
    *(float *)(param_1 + 0x220) = fVar1;
  }
  fVar1 = (float)puVar7[1];
  dVar9 = (double)(*(float *)(param_1 + 0x220) - -fVar1);
  fVar2 = *(float *)(param_1 + 0x220);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar9 < dVar8) << 2) | (uint)(NAN(dVar9) || NAN(dVar8)) << 2)) < 0.0)
  {
    fVar2 = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(fVar2 - fVar1) < dVar8) << 2) |
                (uint)(NAN((double)(fVar2 - fVar1)) || NAN(dVar8)) << 2)) < 0.0) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x220) = fVar1;
  fVar2 = (float)puVar7[1];
  dVar9 = (double)(fVar1 - -fVar2);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar9 < dVar8) << 2) | (uint)(NAN(dVar9) || NAN(dVar8)) << 2)) < 0.0)
  {
    fVar1 = -fVar2;
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(fVar1 - fVar2) < dVar8) << 2) |
                (uint)(NAN((double)(fVar1 - fVar2)) || NAN(dVar8)) << 2)) < 0.0) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x224) = fVar2;
  dVar9 = (double)fn_824FA0F8(param_1);
  *(float *)(param_1 + 0x21c) = (float)dVar9;
  if (*(int *)(param_1 + 0x70) != 2) {
    if (*(int *)(param_1 + 0x70) != 3) {
      return;
    }
    dVar10 = (double)*(float *)(param_1 + 0x220);
    fVar1 = (float)(dVar10 + (double)*(float *)(param_1 + 0x218));
    *(float *)(param_1 + 0x218) = fVar1;
    iVar6 = *(int *)(param_1 + 0x2d8) * 0x10 + param_1;
    if (((dVar8 < dVar10) && (*(float *)(iVar6 + 0x2b8) < fVar1)) ||
       ((dVar10 < dVar8 && (*(float *)(param_1 + 0x218) < *(float *)(iVar6 + 0x2b8))))) {
      *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(iVar6 + 0x2b8);
      *(float *)(param_1 + 0x220) = (float)dVar8;
    }
    iVar6 = fn_8255A780(dVar9,(double)*(float *)(iVar6 + 700),
                         (double)((float)puVar7[5] + lbl_821917D4));
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x21c) = (float)((double)*(float *)(param_1 + 0x2dc) + extraout_f1);
      return;
    }
    if ((double)*(float *)(param_1 + 0x220) != dVar8) {
      return;
    }
    uVar4 = 1;
    goto LAB_824f8bc4;
  }
  fVar1 = *(float *)(param_1 + 0x220) * (float)puVar7[8];
  *(float *)(param_1 + 0x220) = fVar1;
  fVar2 = lbl_82193E50;
  fVar1 = fVar1 + *(float *)(param_1 + 0x218);
  *(float *)(param_1 + 0x218) = fVar1;
  if (fVar1 <= fVar2) {
    if (fVar1 < lbl_821956BC) {
      fVar1 = fVar1 + lbl_82193E2C;
      goto LAB_824f8ba0;
    }
  }
  else {
    fVar1 = fVar1 - lbl_82193E2C;
LAB_824f8ba0:
    *(float *)(param_1 + 0x218) = fVar1;
  }
  if (*(float *)(param_1 + 0x220) < -(float)puVar7[4]) {
    return;
  }
  if ((float)puVar7[4] <= *(float *)(param_1 + 0x220)) {
    return;
  }
  uVar4 = 3;
LAB_824f8bc4:
  fn_824FA188(param_1,uVar4);
  return;
}

