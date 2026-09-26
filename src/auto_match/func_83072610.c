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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int fStack_6c;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_82539560();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_8306E888();
extern int fn_8306EA28();
extern int fn_8306EAD0();
extern int fn_83075D30();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82021534;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


void fn_83072610(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  float in_register_000103b0;
  float in_register_000103b4;
  float in_register_000103b8;
  float in_vr59;
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
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [4];
  float fStack_6c;
  
  iVar3 = fn_82F6A540();
  fn_83075D30(auStack_a0);
  fn_83075D30(auStack_b0,param_2,8);
  fn_83075D30(auStack_90,param_2,0xc);
  fn_83075D30(auStack_80,param_2,0x10);
  fVar2 = lbl_82002C5C;
  dVar12 = (double)lbl_82002C5C;
  altv207_13(in_vs32,in_vs41);
  altv207_13(in_vs32,in_vs40);
  altv207_13(in_vs32,in_vs39);
  altv207_13(in_vs32,in_vs42);
  fStack_b8 = lbl_82002C5C;
  altv207_13(in_vs32,in_vs43);
  in_register_000103f0 = (in_register_000103d0 + in_register_000103c0) * in_register_000103f0;
  in_register_000103f4 = (in_register_000103d4 + in_register_000103c4) * in_register_000103f4;
  in_register_000103f8 = (in_register_000103d8 + in_register_000103c8) * in_register_000103f8;
  in_vr63 = (in_vr61 + in_vr60) * in_vr63;
  fStack_bc = lbl_82002C5C;
  fStack_b4 = lbl_82002C5C;
  fStack_c0 = lbl_82002C5C;
  altv207_13(in_vs32,in_vs38);
  pfVar1 = (float *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_000103f0;
  pfVar1[1] = in_register_000103f4;
  pfVar1[2] = in_register_000103f8;
  pfVar1[3] = in_vr63;
  pfVar1 = (float *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
  *pfVar1 = (in_register_000103b0 + in_register_000103c0) * in_register_000103e0 -
            in_register_000103f0;
  pfVar1[1] = (in_register_000103b4 + in_register_000103c4) * in_register_000103e4 -
              in_register_000103f4;
  pfVar1[2] = (in_register_000103b8 + in_register_000103c8) * in_register_000103e8 -
              in_register_000103f8;
  pfVar1[3] = (in_vr59 + in_vr60) * in_vr62 - in_vr63;
  dVar9 = (double)fVar2;
  dVar11 = (double)fVar2;
  dVar5 = (double)fn_8306EA28(dVar11,dVar9);
  *param_3 = (float)dVar5;
  dVar7 = (double)fStack_c0;
  dVar5 = (double)fn_8306EA28(dVar7,dVar9);
  *param_4 = (float)dVar5;
  dVar5 = (double)fn_8306E888(dVar11);
  dVar8 = (double)lbl_821AAD20;
  dVar10 = (double)lbl_82002AE0;
  dVar9 = (double)lbl_82057B54;
  if ((double)lbl_82196080 < dVar5) {
    uVar6 = fn_8306E888((double)(float)(dVar7 / dVar11));
    dVar5 = (double)fn_82539560(uVar6,dVar9,(double)lbl_8200132C,dVar10,dVar8);
    *param_3 = (float)(dVar5 * (double)*param_3);
  }
  iVar4 = fn_8306EAD0(afStack_d0);
  if (iVar4 != 0) {
    uVar6 = fn_8306E888((double)afStack_d0[0]);
    dVar5 = (double)fn_82539560(uVar6,dVar12,(double)lbl_82021534,dVar10,dVar8);
    *param_3 = (float)(dVar5 * (double)*param_3);
  }
  if (*(int *)(iVar3 + 0xd24) != 0) {
    dVar5 = (double)fn_82539560((double)fStack_6c,
                                 (double)(float)((double)*(float *)(iVar3 + 0xd14) * dVar9),
                                 (double)(float)((double)*(float *)(iVar3 + 0xd14) *
                                                (double)lbl_820579A8),dVar8,dVar10);
    *param_3 = (float)(dVar5 * (double)*param_3);
  }
  fn_82F6A58C();
  return;
}

