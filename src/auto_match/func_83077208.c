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
extern unsigned int fStack_bc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern int fn_8306D760();
extern int fn_8306D890();
extern int fn_8306E7F8();
extern int fn_8306E818();
extern int fn_830770A0();
extern int fn_83078F00();
extern int fn_83078F08();
extern int fn_83078F10();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_82016290;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82145214;
extern unsigned int lbl_821AAD20;


void fn_83077208(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
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
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 in_vs32 [16];
  undefined1 in_vs63 [16];
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_c0 [4];
  float fStack_bc;
  
  iVar6 = fn_82F6A510();
  cVar7 = fn_8306D760(*(undefined4 *)(iVar6 + 0x10));
  dVar23 = (double)lbl_820162A0;
  dVar25 = (double)lbl_82002C5C;
  dVar26 = (double)lbl_82002AE0;
  fStack_d0 = lbl_820162A0;
  if (cVar7 == '\0') {
    *(float *)(iVar6 + 0x88) = lbl_82002AE0;
    param_2 = 1;
  }
  else {
    dVar20 = (double)(float)((double)(*(float *)(iVar6 + 0x74) + *(float *)(iVar6 + 0x70) +
                                      *(float *)(iVar6 + 0x78) + *(float *)(iVar6 + 0x7c)) * dVar25
                            + (double)*(float *)(iVar6 + 0x80));
    dVar8 = (double)fn_8306E7F8((double)(*(float *)(iVar6 + 0x28) + *(float *)(iVar6 + 0x24) +
                                         *(float *)(iVar6 + 0x20)),dVar25,(double)lbl_8200BF40);
    dVar23 = (double)fn_8306E7F8(dVar20,dVar23,(double)lbl_82016290);
    *(float *)(iVar6 + 0x88) = (float)(dVar8 / dVar23);
    fn_8306D890((double)(float)((double)(*(float *)(iVar6 + 0x74) + *(float *)(iVar6 + 0x70)) *
                                dVar25),
                 (double)(float)((double)(*(float *)(iVar6 + 0x78) + *(float *)(iVar6 + 0x7c)) *
                                dVar25),(double)*(float *)(iVar6 + 0x68),
                 (double)*(float *)(iVar6 + 0x6c),*(undefined4 *)(iVar6 + 0x10));
  }
  dVar23 = dVar26;
  if ((param_2 & 0xff) == 0) {
    fVar1 = (float)(dVar26 / (double)*(float *)(iVar6 + 0x20));
    fVar2 = (float)(dVar26 / (double)*(float *)(iVar6 + 0x24));
    fVar3 = *(float *)(iVar6 + 0x88);
    dVar8 = (double)((*(float *)(iVar6 + 0x68) / *(float *)(iVar6 + 0x18)) * fVar3);
    fStack_e0 = *(float *)(iVar6 + 0x70) * fVar1 * fVar3;
    fStack_d8 = *(float *)(iVar6 + 0x78) * fVar2 * fVar3;
    fStack_dc = *(float *)(iVar6 + 0x74) * fVar1 * fVar3;
    fStack_d4 = *(float *)(iVar6 + 0x7c) * fVar2 * fVar3;
    dVar26 = (double)((*(float *)(iVar6 + 0x6c) / *(float *)(iVar6 + 0x1c)) * fVar3);
    fn_830770A0(iVar6,1,&fStack_e0,&fStack_d8);
    fn_830770A0(iVar6,0,&fStack_dc,&fStack_d4);
    dVar21 = (double)lbl_8200132C;
    dVar22 = (double)lbl_820579A8;
    dVar24 = (double)fn_8306E7F8(dVar8,dVar22,dVar21);
    dVar9 = (double)fn_8306E7F8(dVar26,dVar22,dVar21);
    dVar20 = (double)fn_8306E7F8((double)fStack_e0,dVar22,dVar21);
    dVar8 = (double)fn_8306E7F8((double)fStack_dc,dVar22,dVar21);
    dVar26 = (double)fn_8306E7F8((double)fStack_d8,dVar22,dVar21);
    dVar22 = (double)fn_8306E7F8((double)fStack_d4,dVar22,dVar21);
    dVar21 = (double)fn_8306E7F8((double)(*(float *)(iVar6 + 0x80) * *(float *)(iVar6 + 0x88) -
                                          *(float *)(iVar6 + 0x28)),(double)lbl_82145214,
                                  (double)lbl_82005718);
  }
  else {
    dVar21 = (double)lbl_821AAD20;
    dVar8 = dVar26;
    dVar20 = dVar26;
    dVar9 = dVar26;
    dVar24 = dVar26;
    dVar22 = dVar26;
  }
  dVar19 = (double)(float)((double)(float)(dVar24 - dVar23) * dVar25 + dVar23);
  fVar1 = (float)((double)(float)(dVar20 - dVar23) * dVar25 + dVar23);
  *(float *)(iVar6 + 0x8c) = fVar1;
  fVar2 = (float)((double)(float)(dVar8 - dVar23) * dVar25 + dVar23);
  *(float *)(iVar6 + 0x90) = fVar2;
  dVar18 = (double)(float)((double)(float)(dVar26 - dVar23) * dVar25 + dVar23);
  dVar17 = (double)(float)((double)(float)(dVar9 - dVar23) * dVar25 + dVar23);
  dVar16 = (double)(float)((double)(float)(dVar22 - dVar23) * dVar25 + dVar23);
  dVar15 = (double)(float)(dVar23 / dVar19);
  dVar14 = (double)(float)(dVar18 / (double)fVar1);
  dVar13 = (double)(float)(dVar16 / (double)fVar2);
  dVar12 = (double)(float)(dVar15 * dVar17);
  dVar11 = (double)(float)((double)(float)((double)(float)((double)(float)((double)*(float *)(iVar6 
                                                  + 0x2c) + dVar21) /
                                                  (double)*(float *)(iVar6 + 0x2c)) - dVar23) *
                           dVar25 + dVar23);
  fn_83078F10(*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70b4));
  fn_83078F10((double)*(float *)(iVar6 + 0x90),
                    *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70d4));
  fn_83078F10(dVar14,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70b8));
  fn_83078F10(dVar13,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70d8));
  fn_83078F08((double)(float)(dVar20 / (double)*(float *)(iVar6 + 0x8c)),
               *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70b8));
  fn_83078F08((double)(float)(dVar8 / (double)*(float *)(iVar6 + 0x90)),
               *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70d8));
  dVar8 = (double)(float)(dVar23 / dVar18);
  fn_83078F08((double)(float)(dVar8 * dVar26),*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70bc));
  dVar26 = (double)(float)(dVar23 / dVar16);
  fn_83078F08((double)(float)(dVar26 * dVar22),*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70dc));
  fn_83078F10(dVar19,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70a8));
  fn_83078F10(dVar19,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70c8));
  fn_83078F10(dVar12,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70ac));
  fn_83078F10(dVar12,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70cc));
  dVar20 = (double)(float)(dVar15 * dVar24);
  fn_83078F08(dVar20,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70ac));
  fn_83078F08(dVar20,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70cc));
  dVar24 = (double)(float)(dVar23 / dVar17);
  dVar20 = (double)(float)(dVar24 * dVar9);
  fn_83078F08(dVar20,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70b0));
  fn_83078F08(dVar20,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70d0));
  fn_83078F08(dVar11,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x7098));
  iVar4 = *(int *)(iVar6 + 0x14);
  altv207_13(in_vs32,in_vs63);
  puVar5 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_000103f0;
  puVar5[1] = in_register_000103f4;
  puVar5[2] = in_register_000103f8;
  puVar5[3] = in_vr63;
  fStack_bc = (float)(dVar21 * dVar25 + (double)fStack_bc);
  fn_83078F00(*(undefined4 *)(iVar4 + 0x7094));
  fn_83078F10(dVar8,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70bc));
  fn_83078F10(dVar26,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70dc));
  fn_83078F10(dVar24,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70b0));
  fn_83078F10(dVar24,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x70d0));
  uVar10 = fn_8306E818(dVar24,dVar23,(double)fStack_d0);
  if (*(int *)(*(int *)(iVar6 + 0x14) + 0x70e8) != 0) {
    fn_83078F10();
  }
  if (*(int *)(*(int *)(iVar6 + 0x14) + 0x70f0) != 0) {
    fn_83078F10(uVar10);
  }
  fn_82F6A55C();
  return;
}

