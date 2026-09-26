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
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_82F59478();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_8306D698();
extern int fn_8306E7F8();
extern int fn_8306EA28();
extern int fn_8306EE38();
extern int fn_83076028();
extern int fn_830760D0();
extern int fn_830761B8();
extern int fn_830769C0();
extern int fn_83076AD0();
extern int fn_83078890();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82021534;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82057B54;
extern unsigned int lbl_8207F4EC;
extern unsigned int lbl_8208DD74;
extern unsigned int lbl_82138D2C;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_82196080;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;


void fn_83079B68(void)

{
  float *pfVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float in_register_000103c0;
  float in_register_000103c4;
  float in_register_000103c8;
  float in_vr60;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  iVar3 = fn_82F6A544();
  iVar4 = fn_8306D698(&fStack_b0,*(undefined4 *)(iVar3 + 0xb0),8);
  pfVar1 = (float *)(in_r0 + iVar4 & 0xfffffff0);
  fVar26 = *pfVar1;
  fVar27 = pfVar1[1];
  fVar28 = pfVar1[2];
  fVar29 = pfVar1[3];
  iVar4 = fn_8306D698(&fStack_c0,*(undefined4 *)(iVar3 + 0xb0),4);
  pfVar1 = (float *)(in_r0 + iVar4 & 0xfffffff0);
  fVar22 = *pfVar1;
  fVar23 = pfVar1[1];
  fVar24 = pfVar1[2];
  fVar25 = pfVar1[3];
  dVar9 = (double)lbl_82002C5C;
  fStack_b4 = lbl_82002C5C;
  fStack_b8 = lbl_82002C5C;
  fStack_bc = lbl_82002C5C;
  fStack_c0 = lbl_82002C5C;
  iVar4 = fn_8306D698(auStack_a0,*(undefined4 *)(iVar3 + 0xb0),0xc);
  fStack_a4 = (float)dVar9;
  fStack_a8 = (float)dVar9;
  fStack_ac = (float)dVar9;
  fStack_b0 = (float)dVar9;
  pfVar1 = (float *)(in_r0 + iVar4 & 0xfffffff0);
  fVar18 = *pfVar1;
  fVar19 = pfVar1[1];
  fVar20 = pfVar1[2];
  fVar21 = pfVar1[3];
  fn_8306D698(auStack_90,*(undefined4 *)(iVar3 + 0xb0),0x10);
  altv207_13(in_vs32,in_vs35);
  altv207_13(in_vs32,in_vs43);
  altv207_13(in_vs32,in_vs42);
  pfVar1 = (float *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
  *pfVar1 = (fVar22 + fVar26) * in_register_000103d0 -
            (in_register_000103f0 + fVar18) * in_register_000103c0;
  pfVar1[1] = (fVar23 + fVar27) * in_register_000103d4 -
              (in_register_000103f4 + fVar19) * in_register_000103c4;
  pfVar1[2] = (fVar24 + fVar28) * in_register_000103d8 -
              (in_register_000103f8 + fVar20) * in_register_000103c8;
  pfVar1[3] = (fVar25 + fVar29) * in_vr61 - (in_vr63 + fVar21) * in_vr60;
  dVar9 = (double)fn_8306EE38();
  if ((double)lbl_82196080 <= dVar9) {
    dVar10 = (double)fStack_bc;
    dVar9 = (double)fn_8306EA28(-(double)fStack_c0,dVar10);
    dVar11 = (double)(float)(dVar9 * (double)lbl_82057B54);
    dVar9 = (double)fn_8306EA28((double)fStack_b8,dVar10);
    dVar8 = (double)lbl_82002C2C;
    dVar7 = (double)lbl_8207F4EC;
    dVar9 = (double)(float)(dVar9 * (double)lbl_8201FBC0 + dVar8);
    uVar5 = fn_8306E7F8(dVar11,dVar7,(double)lbl_8201FBC0);
    dVar10 = (double)lbl_82138D2C;
    uVar6 = fn_8306E7F8(dVar9,dVar10,(double)lbl_820579A8);
    iVar4 = *(int *)(iVar3 + 0xb0);
    if (*(char *)(iVar4 + 0x1a7c) == '\0') {
      dVar9 = -(double)*(float *)(iVar4 + 0x1a8c);
    }
    else {
      dVar9 = (double)*(float *)(iVar4 + 0x1a8c);
    }
    fn_82F59478(uVar6,dVar9,uVar5,&uStack_f0);
    fn_83076AD0(uStack_f0,(ulonglong)uStack_e8 << 0x20);
    fn_83078890(*(undefined4 *)(*(int *)(iVar3 + 0xb4) + 0x7090),0);
    puVar2 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0xb4) + 0x7090) + 0x120U & 0xfffffff0);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    fn_830761B8();
    puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x40 & 0xfffffff0);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    fn_830760D0();
    puVar2 = (undefined4 *)((int)&fStack_c0 + in_r0 & 0xfffffff0);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    dVar12 = (double)fStack_bc;
    dVar9 = (double)fn_8306EA28(-(double)fStack_c0,dVar12);
    dVar13 = (double)lbl_8208DD74;
    dVar11 = (double)(float)(dVar9 * dVar13);
    dVar9 = (double)fn_8306EA28((double)fStack_b8,dVar12);
    dVar8 = (double)(float)((double)(float)(dVar9 + dVar8) * dVar13);
    dVar9 = (double)fn_8306E7F8(dVar11,dVar7,(double)lbl_8201FBC0);
    dVar10 = (double)fn_8306E7F8(dVar8,dVar10,(double)lbl_8201FBC0);
    iVar4 = *(int *)(iVar3 + 0xb0);
    if (*(char *)(iVar4 + 0x1a7c) == '\0') {
      fVar18 = -*(float *)(iVar4 + 0x1a88);
    }
    else {
      fVar18 = *(float *)(iVar4 + 0x1a88);
    }
    if (*(char *)(iVar4 + 0x1a7c) == '\0') {
      dVar7 = -(double)*(float *)(iVar4 + 0x1a88);
    }
    else {
      dVar7 = (double)*(float *)(iVar4 + 0x1a88);
    }
    fn_82F59478((double)(float)(dVar10 * (double)lbl_82021534),(double)(fVar18 * lbl_82186E74),
                 (double)(float)(dVar9 * (double)lbl_820162A0),&uStack_e0);
    fn_82F59478((double)(float)(dVar10 * (double)lbl_82002C28),dVar7,
                 (double)(float)(dVar9 * (double)lbl_8201FBC0),&uStack_d0);
    fn_830769C0(uStack_e0,(ulonglong)uStack_d8 << 0x20);
    fn_83078890(*(undefined4 *)(*(int *)(iVar3 + 0xb4) + 0x7094),0);
    fn_830769C0(uStack_d0,(ulonglong)uStack_c8 << 0x20);
    fn_83078890(*(undefined4 *)(*(int *)(iVar3 + 0xb4) + 0x7098),0);
    puVar2 = (undefined4 *)(*(int *)(*(int *)(iVar3 + 0xb4) + 0x7098) + 0x120U & 0xfffffff0);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    fn_830761B8();
    fn_830761B8();
    fn_83076028();
    puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x50 & 0xfffffff0);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    fn_83076028();
    puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x50 & 0xfffffff0);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
  }
  fn_82F6A590();
  return;
}

