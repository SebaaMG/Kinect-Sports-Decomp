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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82809D40();
extern int fn_82F512E8();
extern int fn_82F52348();
extern int fn_82F65018();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2F84;
extern unsigned int lbl_831D2FA0;


void fn_823CB4A0(undefined8 param_1,int param_2,int param_3,undefined4 *param_4,float *param_5,
                  undefined4 *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int in_r0;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float in_register_000107e0;
  float fVar33;
  float in_register_000107e4;
  float fVar34;
  float in_register_000107e8;
  float fVar35;
  float in_vr126;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  iVar8 = fn_82F6A540();
  puVar10 = &lbl_831D2FA0;
  if (param_7 == 0) {
    puVar10 = &lbl_831D2F84;
  }
  iVar9 = puVar10[5];
  uVar1 = puVar10[1];
  uVar2 = puVar10[2];
  dVar17 = (double)(float)puVar10[3];
  puVar5 = (undefined4 *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
  uVar23 = *puVar5;
  uVar25 = puVar5[1];
  uVar28 = puVar5[2];
  uVar30 = puVar5[3];
  puVar5 = (undefined4 *)(param_2 + 0x90U & 0xfffffff0);
  uVar37 = *puVar5;
  uVar38 = puVar5[1];
  uVar39 = puVar5[2];
  uVar40 = puVar5[3];
  *param_4 = *puVar10;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  if (iVar9 == 0) {
    *param_6 = puVar10[4];
    puVar10 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar10 = uVar23;
    puVar10[1] = uVar25;
    puVar10[2] = uVar28;
    puVar10[3] = uVar30;
    puVar10 = (undefined4 *)((int)&fStack_a0 + in_r0 & 0xfffffff0);
    *puVar10 = uVar37;
    puVar10[1] = uVar38;
    puVar10[2] = uVar39;
    puVar10[3] = uVar40;
    dVar15 = (double)fStack_9c;
    dVar14 = (double)fStack_94;
    dVar11 = (double)lbl_821916FC;
    dVar16 = (double)fStack_a0;
    dVar12 = (double)(float)(dVar15 * dVar11);
    dVar13 = (double)(float)((double)fStack_98 * dVar11);
    fVar27 = (float)(dVar16 * (double)(float)(dVar16 * dVar11));
    dVar18 = (double)lbl_821CC160;
    dVar11 = (double)(float)(dVar14 * (double)(float)(dVar16 * dVar11));
    dVar19 = (double)(float)(dVar13 * dVar15 - dVar11);
    fVar24 = (float)((double)fStack_98 * dVar13);
    dVar22 = (double)(float)(dVar14 * dVar12 + (double)(float)(dVar13 * dVar16));
    dVar21 = (double)(lbl_821CA460 - ((float)(dVar15 * dVar12) + fVar27));
    dVar20 = (double)SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar22 * dVar22)));
    if (dVar20 <= (double)lbl_82195628) {
      dVar11 = (double)fn_82809D40(-(double)((float)(dVar12 * dVar16) - (float)(dVar14 * dVar13)),
                                    (double)(lbl_821CA460 - (fVar24 + (float)(dVar15 * dVar12))),
                                    dVar11);
      fStack_98 = (float)dVar11;
      dVar11 = (double)fn_82809D40(-dVar19,dVar20);
      fStack_a0 = (float)dVar11;
      dVar11 = dVar18;
    }
    else {
      dVar11 = (double)fn_82809D40((double)((float)(dVar12 * dVar16) + (float)(dVar14 * dVar13)),
                                    (double)(lbl_821CA460 - (fVar24 + fVar27)));
      fStack_98 = (float)dVar11;
      dVar11 = (double)fn_82809D40(-dVar19,dVar20);
      fStack_a0 = (float)dVar11;
      dVar11 = (double)fn_82809D40(dVar22,dVar21);
    }
    fStack_9c = (float)dVar11;
    iVar9 = *(int *)(param_2 + 0x2c);
    iVar8 = *(int *)(iVar8 + 0x240);
    *param_5 = fStack_a0;
    param_5[1] = fStack_9c;
    param_5[2] = fStack_98;
    puVar4 = *(ushort **)(((iVar9 == 0) + 0xa1) * 4 + iVar8);
    uVar3 = *puVar4;
    if (((uVar3 == 0) || (uVar3 == 1)) || (uVar3 < 3)) {
      pfVar6 = (float *)((uint)(puVar4 + 0x10) & 0xfffffff0);
      in_register_000107e0 = *pfVar6;
      in_register_000107e4 = pfVar6[1];
      in_register_000107e8 = pfVar6[2];
      in_vr126 = pfVar6[3];
    }
    pfVar6 = (float *)(in_r0 + param_3 & 0xfffffff0);
    fVar27 = pfVar6[1];
    fVar24 = pfVar6[2];
    fVar32 = pfVar6[3];
    pfVar7 = (float *)((int)&fStack_a0 + in_r0 & 0xfffffff0);
    *pfVar7 = in_register_000107e0 - *pfVar6;
    pfVar7[1] = in_register_000107e4 - fVar27;
    pfVar7[2] = in_register_000107e8 - fVar24;
    pfVar7[3] = in_vr126 - fVar32;
    dVar11 = (double)fn_82F65018(-(double)fStack_a0,-(double)fStack_98);
    param_5[2] = (float)dVar18;
    fVar27 = (float)dVar11;
    *param_5 = (float)dVar17;
  }
  else {
    puVar5 = (undefined4 *)(in_r0 + (int)param_4 & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    iVar8 = *(int *)(param_2 + 0x24);
    iVar9 = fn_82F512E8(&fStack_a0,*(undefined4 *)(iVar8 + 0x20),6,0);
    pfVar6 = (float *)(in_r0 + iVar9 & 0xfffffff0);
    fVar33 = *pfVar6;
    fVar34 = pfVar6[1];
    fVar35 = pfVar6[2];
    fVar36 = pfVar6[3];
    fn_82F52348(*(undefined4 *)(iVar8 + 0x20),6);
    pfVar6 = (float *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
    fVar24 = *pfVar6;
    fVar26 = pfVar6[1];
    fVar29 = pfVar6[2];
    fVar31 = pfVar6[3];
    puVar5 = (undefined4 *)((int)&fStack_a0 + in_r0 & 0xfffffff0);
    *puVar5 = uVar37;
    puVar5[1] = uVar38;
    puVar5[2] = uVar39;
    puVar5[3] = uVar40;
    fVar32 = lbl_821CA460;
    dVar15 = (double)fStack_9c;
    dVar14 = (double)fStack_94;
    dVar17 = (double)lbl_821916FC;
    dVar16 = (double)fStack_a0;
    dVar11 = (double)(float)(dVar15 * dVar17);
    dVar12 = (double)(float)((double)fStack_98 * dVar17);
    dVar13 = (double)lbl_82195628;
    fVar27 = (float)(dVar16 * (double)(float)(dVar16 * dVar17));
    pfVar6 = (float *)(in_r0 + param_3 & 0xfffffff0);
    *pfVar6 = fVar33 + fVar24;
    pfVar6[1] = fVar34 + fVar26;
    pfVar6[2] = fVar35 + fVar29;
    pfVar6[3] = fVar36 + fVar31;
    dVar17 = (double)(float)(dVar14 * (double)(float)(dVar16 * dVar17));
    dVar18 = (double)(float)(dVar12 * dVar15 - dVar17);
    fVar24 = (float)((double)fStack_98 * dVar12);
    dVar21 = (double)(float)(dVar14 * dVar11 + (double)(float)(dVar12 * dVar16));
    dVar20 = (double)(fVar32 - ((float)(dVar15 * dVar11) + fVar27));
    dVar19 = (double)SQRT((float)(dVar20 * dVar20 + (double)(float)(dVar21 * dVar21)));
    if (dVar19 <= dVar13) {
      dVar17 = (double)fn_82809D40(-(double)((float)(dVar11 * dVar16) - (float)(dVar14 * dVar12)),
                                    (double)(fVar32 - (fVar24 + (float)(dVar15 * dVar11))),dVar17);
      fStack_98 = (float)dVar17;
      dVar17 = (double)fn_82809D40(-dVar18,dVar19);
      fStack_a0 = (float)dVar17;
      fStack_9c = lbl_821CC160;
    }
    else {
      dVar17 = (double)fn_82809D40((double)((float)(dVar11 * dVar16) + (float)(dVar14 * dVar12)),
                                    (double)(fVar32 - (fVar24 + fVar27)));
      fStack_98 = (float)dVar17;
      dVar17 = (double)fn_82809D40(-dVar18,dVar19);
      fStack_a0 = (float)dVar17;
      dVar17 = (double)fn_82809D40(dVar21,dVar20);
      fStack_9c = (float)dVar17;
    }
    *param_6 = puVar10[6];
    fVar27 = lbl_82193E50;
    param_5[1] = fStack_9c;
    fVar27 = param_5[1] + fVar27;
    *param_5 = fStack_a0;
    param_5[2] = fStack_98;
  }
  param_5[1] = fVar27;
  fn_82F6A58C();
  return;
}

