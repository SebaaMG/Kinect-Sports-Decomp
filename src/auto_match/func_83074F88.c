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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern int fn_82539560();
extern int fn_82F691F0();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern int fn_8306E7E8();
extern int fn_8306E888();
extern int fn_8306EAD0();
extern int fn_8306ECD8();
extern int fn_8306F1D0();
extern int fn_8306FB80();
extern int fn_8306FEC0();
extern int fn_830700D8();
extern int fn_83070AC8();
extern int fn_83070BD8();
extern int fn_83070F70();
extern int fn_83071138();
extern int fn_83071970();
extern int fn_83071FF8();
extern int fn_83072158();
extern int fn_83072610();
extern int fn_83072810();
extern int fn_83072ED8();
extern int fn_83073200();
extern int fn_83073720();
extern int fn_83073ED0();
extern int fn_83074060();
extern int fn_83074958();
extern int fn_83075D30();
extern int fn_830763C8();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_8207F4E8;
extern unsigned int lbl_821AAD20;


void fn_83074F88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  undefined8 extraout_f1;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs43 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [208];
  
  iVar5 = fn_82F6A534();
  uVar14 = extraout_f1;
  uVar2 = fn_83070AC8();
  uVar3 = fn_83070AC8(uVar14,iVar5,param_2,8);
  uVar4 = fn_83070AC8(uVar14,iVar5,param_2,2);
  dVar11 = (double)lbl_821AAD20;
  fStack_f0 = lbl_821AAD20;
  fn_83075D30(auStack_e0,param_3,8);
  fn_83075D30(auStack_d0,param_3,4);
  iVar6 = fn_8306EAD0(&fStack_f0);
  if (iVar6 != 0) {
    fn_8306E888((double)fStack_f0);
  }
  if (*(int *)(param_7 + 4) != 0) {
    fn_83072158(uVar14,(double)fStack_f0,iVar5,param_2,param_3);
  }
  if (*(int *)(param_7 + 8) != 0) {
    fn_83070BD8(uVar14,iVar5,param_3,iVar5 + 0x6f0,iVar5 + 0x710,4,uVar2,uVar3);
    fn_83070BD8(uVar14,iVar5,param_3,iVar5 + 0x710,iVar5 + 0x6f0,8,uVar3,uVar2);
    fn_83070BD8(uVar14,iVar5,param_3,iVar5 + 0x730,iVar5 + 0x730,2,uVar4,uVar4);
  }
  if (*(int *)(param_7 + 0xc) != 0) {
    fn_8306F1D0(iVar5,param_2,param_3,0xe);
    fn_8306F1D0(iVar5,param_2,param_3,0x12);
  }
  if (*(int *)(param_7 + 0x10) != 0) {
    fn_830700D8(uVar14,iVar5,param_3);
  }
  if (*(int *)(param_7 + 0x14) != 0) {
    fn_83070F70(uVar14,iVar5,param_2,param_3,6,7,iVar5 + 0xc40);
    fn_83070F70(uVar14,iVar5,param_2,param_3,10,0xb,iVar5 + 0xc90);
  }
  fn_83072610(iVar5,param_3,&fStack_ec,&fStack_e8);
  dVar10 = (double)fStack_ec;
  if (*(int *)(param_7 + 0x18) != 0) {
    fn_83072810(dVar10,uVar14,iVar5,param_3);
  }
  if (*(int *)(param_7 + 0x1c) != 0) {
    fn_8306FB80(iVar5,param_3);
  }
  if (dVar11 < (double)*(float *)(param_6 + 0x14)) {
    dVar16 = (double)lbl_8201FBC0;
    dVar13 = (double)lbl_8207F4E8;
    dVar12 = (double)lbl_820162A0;
    dVar7 = (double)fn_82539560((double)*(float *)(param_6 + 0x14),dVar12,dVar13,
                                 (double)lbl_8201DFF4,dVar16);
    dVar8 = (double)fn_8306E888((double)fStack_f0);
    dVar15 = (double)lbl_82002AE0;
    dVar17 = (double)lbl_82002C2C;
    dVar9 = dVar11;
    if (dVar16 < dVar8) {
      dVar9 = (double)(float)(dVar7 + dVar17);
      uVar2 = fn_8306E888((double)fStack_e8);
      dVar9 = (double)fn_82539560(uVar2,dVar7,dVar9,dVar11,dVar15);
    }
    dVar7 = (double)fn_82539560((double)*(float *)(param_6 + 0x14),dVar12,dVar13,
                                 (double)lbl_820145BC,(double)lbl_8200132C);
    dVar8 = (double)(float)(dVar7 + dVar17);
    uVar2 = fn_8306E888(dVar10);
    uVar2 = fn_82539560(uVar2,dVar7,dVar8,dVar11,dVar15);
    uVar2 = fn_8306E7E8(dVar9,uVar2);
    fn_83074958((double)*(float *)(param_6 + 0x14),uVar2,uVar14,iVar5,param_3);
    fn_83074958((double)*(float *)(param_6 + 0x14),uVar2,uVar14,iVar5,param_3);
  }
  if (*(int *)(param_7 + 0x20) != 0) {
    fn_83072ED8(uVar14,iVar5,param_2,param_3);
  }
  if (*(int *)(param_7 + 0x24) != 0) {
    fn_83073200(uVar14,iVar5,param_3);
  }
  if (*(int *)(param_6 + 0x10) == 0) {
    fn_83071FF8(uVar14,iVar5,param_2,param_3);
    if (*(int *)(param_7 + 0x30) != 0) {
      fn_83071138(uVar14,iVar5,param_2,param_3);
    }
  }
  else {
    fn_83071970();
    fn_82F691F0(iVar5 + 2000,0,0x40);
  }
  if (*(int *)(param_7 + 0x34) != 0) {
    fn_83073ED0(uVar14,iVar5,param_2,param_3);
  }
  fn_83075D30(auStack_d0,param_3,0x10);
  fn_83075D30(auStack_e0,param_3,0xc);
  fn_8306EAD0(&fStack_e4);
  fn_8306ECD8();
  fn_830763C8((double)fStack_e4);
  if (dVar11 < (double)*(float *)(param_6 + 0x18)) {
    fn_83074060((double)*(float *)(param_6 + 0x18),uVar14,iVar5,param_3);
  }
  if (*(int *)(param_7 + 0x38) != 0) {
    fn_8306FEC0(iVar5,param_3,0xc,0xd,0xe);
    fn_8306FEC0(iVar5,param_3,0x10,0x11,0x12);
  }
  if (*(int *)(param_7 + 0x28) != 0) {
    fn_83073720(iVar5,param_3);
  }
  fn_83075D30(auStack_d0,param_3,0xe);
  altv207_13(in_vs32,in_vs43);
  puVar1 = (undefined4 *)(iVar5 + 0xa40U & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  fn_83075D30(auStack_e0,param_3,0x12);
  altv207_13(in_vs32,in_vs35);
  puVar1 = (undefined4 *)(iVar5 + 0xb50U & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  fn_82F6A580();
  return;
}

