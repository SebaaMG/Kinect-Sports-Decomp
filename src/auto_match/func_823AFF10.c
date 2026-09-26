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
extern unsigned int *auStack_30;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern int fn_823B0190();
extern int fn_823B1DB8();
extern int fn_823B1FF0();
extern int fn_823B23B8();
extern int fn_823B2490();
extern int fn_823B2888();
extern unsigned int lbl_821CC160;


void fn_823AFF10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_30 [4];
  float fStack_2c;
  float fStack_28;
  
  dVar7 = (double)*(float *)(param_1 + 0x54);
  fVar1 = (float)((double)*(float *)(param_1 + 0xb0) + dVar7);
  fVar2 = (float)((double)*(float *)(param_1 + 0x138) + (double)*(float *)(param_1 + 0xb0));
  dVar8 = (double)lbl_821CC160;
  if ((double)*(float *)(param_1 + 0x24) < dVar8) {
    fVar3 = *(float *)(param_1 + 4);
    if (fVar1 < fVar3) {
      puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      if (fStack_2c <= fVar1) {
        fVar1 = *(float *)(param_1 + 0x10);
        if ((*(float *)(param_1 + 0x40) <= fVar1) && (fVar1 < *(float *)(param_1 + 0x50))) {
          if ((*(float *)(param_1 + 0x48) <= *(float *)(param_1 + 0x18)) &&
             (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x58))) {
            fn_823B1DB8(param_1,0);
            goto LAB_823afff0;
          }
        }
      }
    }
    if (fVar2 < fVar3) {
      puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      if (fStack_2c <= fVar2) {
        fn_823B2888(param_1,0);
      }
    }
  }
LAB_823afff0:
  if (((*(int *)(param_1 + 0x18c) == 0) || (*(int *)(param_1 + 0x180) != 0)) ||
     (*(int *)(param_1 + 0x1a4) != 0)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a4) != 0)) goto LAB_823b0114;
    fVar1 = *(float *)(param_1 + 0x28);
    if (((double)fVar1 <= dVar8) || (dVar8 <= (double)*(float *)(param_1 + 8))) {
LAB_823b00d8:
      if ((dVar8 <= (double)fVar1) || ((double)*(float *)(param_1 + 8) < dVar8)) goto LAB_823b0114;
      puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      if (dVar8 <= (double)fStack_28) goto LAB_823b0114;
    }
    else {
      puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      if ((double)fStack_28 < dVar8) goto LAB_823b00d8;
    }
    fn_823B23B8(param_1,0);
    goto LAB_823b0114;
  }
  fVar1 = *(float *)(param_1 + 0x28);
  if (((double)fVar1 <= dVar8) || (dVar8 <= (double)*(float *)(param_1 + 8))) {
LAB_823b0048:
    if ((dVar8 <= (double)fVar1) || ((double)*(float *)(param_1 + 8) < dVar8)) goto LAB_823b0114;
    puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar9;
    puVar5[2] = uVar10;
    puVar5[3] = uVar11;
    if (dVar8 <= (double)fStack_28) goto LAB_823b0114;
  }
  else {
    puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar9;
    puVar5[2] = uVar10;
    puVar5[3] = uVar11;
    if ((double)fStack_28 < dVar8) goto LAB_823b0048;
  }
  fn_823B1FF0(dVar7,param_1);
LAB_823b0114:
  if (((double)*(float *)(param_1 + 0x24) < dVar8) && (dVar7 < (double)*(float *)(param_1 + 4))) {
    puVar4 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
    uVar9 = puVar4[1];
    uVar10 = puVar4[2];
    uVar11 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar9;
    puVar5[2] = uVar10;
    puVar5[3] = uVar11;
    if (((double)fStack_2c <= dVar7) &&
       ((iVar6 = fn_823B0190(param_1), iVar6 != 0 && (*(int *)(param_1 + 0x240) != 0)))) {
      fn_823B2490(param_1,0);
    }
  }
  return;
}

