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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int fStack_a8;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_82539560();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8306E7E8();
extern int fn_8306E888();
extern int fn_8306E890();
extern int fn_8306EA28();
extern int fn_8306EAD0();
extern int fn_8306EC70();
extern int fn_8306ECD8();
extern int fn_8306EE38();
extern int fn_83075D30();
extern int fn_83075D80();
extern int fn_830760D0();
extern int fn_830761B8();
extern int fn_830763C8();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82021540;
extern unsigned int lbl_8202236C;
extern unsigned int lbl_82023038;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_82079FD0;
extern unsigned int lbl_820BC534;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_83070BD8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  ulonglong param_6,ulonglong param_7)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int in_r0;
  int iVar4;
  undefined1 uVar5;
  double extraout_f1;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs60 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float in_register_000103c0;
  float in_register_000103c4;
  float in_register_000103c8;
  float in_vr60;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float afStack_f0 [4];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  iVar4 = fn_82F6A548();
  dVar6 = extraout_f1;
  fn_83075D30(auStack_d0);
  fn_83075D30(auStack_c0,param_2,0x10);
  puVar2 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  uVar12 = *puVar2;
  uVar13 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  fn_8306EAD0(afStack_f0);
  fn_8306ECD8();
  fn_830763C8((double)afStack_f0[0]);
  fn_83075D30(auStack_a0,param_2,0);
  fn_83075D30(auStack_b0,param_2,param_5);
  altv207_13(in_vs32,in_vs35);
  fn_830760D0();
  fVar1 = lbl_82002AE0;
  dVar8 = (double)lbl_821AAD20;
  dVar9 = (double)lbl_82002AE0;
  puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  if ((param_6 & 0xff) == 0) {
    if (*(int *)(iVar4 + 0xd24) != 0) {
      dVar6 = (double)fn_8306E7E8(dVar8,-(double)(float)(dVar6 * (double)lbl_82021540 -
                                                         (double)*(float *)(param_3 + 0x10)));
      *(float *)(param_3 + 0x10) = (float)dVar6;
      if (dVar6 <= dVar8) {
        fVar1 = (float)(dVar9 / (double)*(float *)(iVar4 + 0xd20));
        dVar11 = (double)(fVar1 * lbl_8202236C);
        dVar10 = (double)(fVar1 * lbl_8201FBC0);
        dVar6 = (double)fn_8306EE38();
        if ((dVar6 <= dVar11) || (dVar10 <= dVar6)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
          *puVar2 = uVar12;
          puVar2[1] = uVar13;
          puVar2[2] = uVar14;
          puVar2[3] = uVar15;
        }
        *(undefined1 *)(param_3 + 0x14) = uVar5;
      }
    }
  }
  else {
    *(float *)(param_3 + 0x10) = fVar1;
    if (*(char *)(param_3 + 0x14) != '\0') {
      if ((((param_7 & 0xff) == 0) && ((int)param_5 != 2)) && (*(char *)(param_4 + 0x14) != '\0')) {
        altv207_13(in_vs32,in_vs60);
        pfVar3 = (float *)((int)&fStack_e0 + in_r0 & 0xfffffff0);
        *pfVar3 = in_register_000103f0;
        pfVar3[1] = in_register_000103f4;
        pfVar3[2] = in_register_000103f8;
        pfVar3[3] = in_vr63;
        fStack_e0 = -fStack_e0;
        fn_8306E890(dVar6,(double)lbl_82023038);
        puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        fn_8306EC70();
        puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar2[2] = uVar14;
        puVar2[3] = uVar15;
      }
      dVar11 = (double)(fStack_a8 - *(float *)(param_3 + 8));
      dVar6 = (double)fn_8306E890(dVar6,(double)lbl_820BC534);
      *(float *)(param_3 + 8) = (float)(dVar6 * dVar11 + (double)*(float *)(param_3 + 8));
    }
  }
  if ((*(char *)(param_3 + 0x14) != '\0') && (dVar8 < (double)*(float *)(param_3 + 0x10))) {
    iVar4 = fn_83075D30(&fStack_e0,param_2,8);
    pfVar3 = (float *)(in_r0 + iVar4 & 0xfffffff0);
    fVar16 = *pfVar3;
    fVar17 = pfVar3[1];
    fVar18 = pfVar3[2];
    fVar19 = pfVar3[3];
    fn_83075D30(auStack_90,param_2,4);
    fVar1 = lbl_82002C5C;
    altv207_13(in_vs32,in_vs35);
    altv207_13(in_vs32,in_vs41);
    altv207_13(in_vs32,in_vs40);
    altv207_13(in_vs32,in_vs42);
    fStack_d8 = lbl_82002C5C;
    fStack_dc = lbl_82002C5C;
    fStack_d4 = lbl_82002C5C;
    fStack_e0 = lbl_82002C5C;
    altv207_13(in_vs32,in_vs39);
    pfVar3 = (float *)((int)&fStack_e0 + in_r0 & 0xfffffff0);
    *pfVar3 = (in_register_000103f0 + fVar16) * in_register_000103e0 -
              (in_register_000103d0 + in_register_000103c0) * in_register_000103c0;
    pfVar3[1] = (in_register_000103f4 + fVar17) * in_register_000103e4 -
                (in_register_000103d4 + in_register_000103c4) * in_register_000103c4;
    pfVar3[2] = (in_register_000103f8 + fVar18) * in_register_000103e8 -
                (in_register_000103d8 + in_register_000103c8) * in_register_000103c8;
    pfVar3[3] = (in_vr63 + fVar19) * in_vr62 - (in_vr61 + in_vr60) * in_vr60;
    dVar10 = (double)fVar1;
    dVar6 = (double)fn_8306EA28(dVar10,(double)fVar1);
    dVar11 = (double)fn_8306E888(dVar10);
    if ((double)lbl_82196080 < dVar11) {
      uVar7 = fn_8306E888((double)(float)((double)fStack_e0 / dVar10));
      dVar11 = (double)fn_82539560(uVar7,(double)lbl_82057B54,(double)lbl_8200132C,dVar9,dVar8);
      dVar6 = (double)(float)(dVar11 * dVar6);
    }
    fn_830761B8();
    fn_830760D0();
    fn_83075D30(auStack_b0,param_2,0);
    fn_83075D30(auStack_a0,param_2,param_5);
    dVar6 = (double)fn_82539560(dVar6,(double)lbl_82079F28,(double)lbl_82079FD0,dVar9,dVar8);
    altv207_13(in_vs32,in_vs43);
    fn_8306EC70((double)(float)(dVar6 * (double)*(float *)(param_3 + 0x10)));
    fn_83075D80(param_2,param_5);
  }
  fn_82F6A594();
  return;
}

