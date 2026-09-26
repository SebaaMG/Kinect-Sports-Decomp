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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_8305EB60();
extern int fn_83060570();
extern int fn_83066770();
extern int fn_83066778();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8305ED48(int param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  double dVar13;
  double dVar14;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  fn_8305EB60(param_1,4);
  pfVar12 = (float *)(param_1 + 0x34);
  uVar7 = fn_83066770(param_2);
  fn_82810360(uVar7,pfVar12);
  dVar13 = (double)fn_82809CB0((double)*(float *)(param_1 + 0x34));
  dVar14 = (double)fn_82809CB0((double)*(float *)(param_1 + 0x38));
  if (dVar13 < dVar14) {
LAB_8305ede8:
    dVar13 = (double)fn_82809CB0((double)*(float *)(param_1 + 0x38));
    dVar14 = (double)fn_82809CB0((double)*pfVar12);
    if (dVar14 <= dVar13) {
      dVar13 = (double)fn_82809CB0((double)*(float *)(param_1 + 0x38));
      dVar14 = (double)fn_82809CB0((double)*(float *)(param_1 + 0x3c));
      if (dVar14 <= dVar13) {
        fStack_b0 = *param_3;
        iVar11 = 2;
        fStack_a8 = param_4[2];
        fStack_a0 = *param_4;
        fStack_98 = param_3[2];
        fStack_90 = fStack_b0;
        fStack_88 = fStack_98;
        fStack_80 = fStack_a0;
        fStack_78 = fStack_a8;
        goto LAB_8305ee8c;
      }
    }
    fStack_b0 = *param_3;
    iVar11 = 3;
    fStack_7c = param_3[1];
    fStack_a0 = *param_4;
    fStack_90 = fStack_b0;
    fStack_80 = fStack_a0;
  }
  else {
    dVar13 = (double)fn_82809CB0((double)*pfVar12);
    dVar14 = (double)fn_82809CB0((double)*(float *)(param_1 + 0x3c));
    if (dVar13 < dVar14) goto LAB_8305ede8;
    fStack_7c = param_3[1];
    iVar11 = 1;
    fStack_a8 = param_4[2];
    fStack_98 = param_3[2];
    fStack_88 = fStack_a8;
    fStack_78 = fStack_98;
  }
  fStack_9c = param_4[1];
  fStack_ac = fStack_7c;
  fStack_8c = fStack_9c;
LAB_8305ee8c:
  iVar8 = fn_83066778(param_2);
  dVar13 = (double)(*(float *)(iVar8 + 8) * *(float *)(param_1 + 0x3c));
  iVar8 = fn_83066778(param_2);
  dVar13 = (double)(float)((double)*(float *)(iVar8 + 4) * (double)*(float *)(param_1 + 0x38) +
                          dVar13);
  pfVar9 = (float *)fn_83066778(param_2);
  fVar1 = -(float)((double)*pfVar9 * (double)*pfVar12 + dVar13);
  if (iVar11 == 1) {
    fVar2 = param_3[1] * *(float *)(param_1 + 0x38);
    fVar4 = param_4[2] * *(float *)(param_1 + 0x3c);
    fVar5 = param_3[2] * *(float *)(param_1 + 0x3c);
    fVar3 = param_4[1] * *(float *)(param_1 + 0x38);
    fVar6 = lbl_82002AE0 / *pfVar12;
    fStack_b0 = -((fVar4 + fVar2 + fVar1) * fVar6);
    fStack_80 = -((fVar5 + fVar2 + fVar1) * fVar6);
    fStack_a0 = -((fVar3 + fVar5 + fVar1) * fVar6);
    fStack_90 = -((fVar3 + fVar4 + fVar1) * fVar6);
  }
  else if (iVar11 == 2) {
    fVar2 = param_4[2] * *(float *)(param_1 + 0x3c);
    fVar4 = *pfVar12 * *param_3;
    fVar5 = *pfVar12 * *param_4;
    fVar3 = param_3[2] * *(float *)(param_1 + 0x3c);
    fVar6 = lbl_82002AE0 / *(float *)(param_1 + 0x38);
    fStack_ac = -((fVar4 + fVar2 + fVar1) * fVar6);
    fStack_7c = -((fVar5 + fVar2 + fVar1) * fVar6);
    fStack_9c = -((fVar3 + fVar5 + fVar1) * fVar6);
    fStack_8c = -((fVar3 + fVar4 + fVar1) * fVar6);
  }
  else if (iVar11 == 3) {
    fVar2 = param_3[1] * *(float *)(param_1 + 0x38);
    fVar4 = *pfVar12 * *param_3;
    fVar5 = *pfVar12 * *param_4;
    fVar3 = param_4[1] * *(float *)(param_1 + 0x38);
    fVar6 = lbl_82002AE0 / *(float *)(param_1 + 0x3c);
    fStack_a8 = -((fVar4 + fVar2 + fVar1) * fVar6);
    fStack_78 = -((fVar5 + fVar2 + fVar1) * fVar6);
    fStack_98 = -((fVar3 + fVar5 + fVar1) * fVar6);
    fStack_88 = -((fVar3 + fVar4 + fVar1) * fVar6);
  }
  fn_82810328(&fStack_90,&fStack_b0,auStack_60);
  fn_82810328(&fStack_a0,&fStack_b0,auStack_70);
  fn_82810240(auStack_60,auStack_70,auStack_50);
  dVar13 = (double)fn_82810280(auStack_50,pfVar12);
  if (dVar13 <= (double)lbl_821AAD20) {
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_b0);
    **(undefined4 **)(param_1 + 0x2c) = uVar10;
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_80);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = uVar10;
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_a0);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8) = uVar10;
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_90);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc) = uVar10;
  }
  else {
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_b0);
    **(undefined4 **)(param_1 + 0x2c) = uVar10;
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_80);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xc) = uVar10;
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_a0);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8) = uVar10;
    uVar10 = fn_83060570(*(undefined4 *)(param_1 + 0x28),&fStack_90);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4) = uVar10;
  }
  return;
}

