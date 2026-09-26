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
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2a0;
extern unsigned int fStack_23c;
extern unsigned int fStack_258;
extern unsigned int fStack_270;
extern unsigned int fStack_2a8;
extern unsigned int fStack_2ac;
extern unsigned int fStack_2b0;
extern unsigned int fStack_2b4;
extern unsigned int fStack_2b8;
extern unsigned int fStack_2bc;
extern unsigned int fStack_2c0;
extern int fn_82539560();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern int fn_8306D698();
extern int fn_8306D6D0();
extern int fn_8306E7D8();
extern int fn_8306E818();
extern int fn_8306E888();
extern int fn_8306E890();
extern int fn_8306EA00();
extern int fn_8306EA28();
extern int fn_8306EA78();
extern int fn_8306EC70();
extern int fn_8306ED78();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_8306EE38();
extern int fn_83078598();
extern int fn_83078FA8();
extern int fn_830797B8();
extern int fn_8307AC98();
extern int fn_8307AE90();
extern int fn_8307BA78();
extern int fn_8307D540();
extern int fn_8307D748();
extern int fn_8307D828();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200DC14;
extern unsigned int lbl_82015D08;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_8207F4E0;
extern unsigned int lbl_8208ED60;
extern unsigned int lbl_820A6C54;
extern unsigned int lbl_821418B4;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_82186EB4;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f8;
extern unsigned int uStack_200;
extern unsigned int uStack_208;
extern unsigned int uStack_210;
extern unsigned int uStack_218;
extern unsigned int uStack_220;
extern unsigned int uStack_224;
extern unsigned int uStack_228;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_26c;
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8307BE10(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  ulonglong uVar4;
  int in_r0;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  double extraout_f1;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 in_vs32 [16];
  undefined1 in_vs34 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float afStack_2d0 [4];
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_258;
  undefined4 uStack_254;
  undefined4 uStack_240;
  float fStack_23c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [352];
  
  fn_82F6A538();
  uVar5 = fn_82F6DA1C();
  iVar1 = (int)param_4;
  uVar4 = param_5 & 0xff;
  if (uVar4 == 0) {
    uVar21 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70d0);
    pfVar9 = &fStack_2b0;
  }
  else {
    uVar21 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70b0);
    pfVar9 = afStack_2d0;
  }
  dVar14 = extraout_f1;
  iVar6 = fn_83078FA8(pfVar9,uVar21);
  pfVar9 = (float *)(in_r0 + iVar6 & 0xfffffff0);
  fVar23 = *pfVar9;
  fVar26 = pfVar9[1];
  fVar29 = pfVar9[2];
  fVar32 = pfVar9[3];
  if (uVar4 == 0) {
    uVar21 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70cc);
    pfVar9 = &fStack_2b0;
  }
  else {
    uVar21 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70ac);
    pfVar9 = afStack_2d0;
  }
  iVar6 = fn_83078FA8(pfVar9,uVar21);
  pfVar9 = (float *)(in_r0 + iVar6 & 0xfffffff0);
  fVar37 = *pfVar9;
  fVar38 = pfVar9[1];
  fVar39 = pfVar9[2];
  fVar40 = pfVar9[3];
  if (uVar4 == 0) {
    uVar21 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70c8);
    pfVar9 = &fStack_2b0;
  }
  else {
    uVar21 = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70a8);
    pfVar9 = afStack_2d0;
  }
  iVar6 = fn_83078FA8(pfVar9,uVar21);
  pfVar9 = (float *)(in_r0 + iVar6 & 0xfffffff0);
  fVar33 = *pfVar9;
  fVar34 = pfVar9[1];
  fVar35 = pfVar9[2];
  fVar36 = pfVar9[3];
  if (uVar4 == 0) {
    puVar7 = (undefined8 *)
             fn_83078598(auStack_1e0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70cc));
    iVar6 = fn_8307D540(auStack_280,*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4],puVar7[5],
                         puVar7[6]);
  }
  else {
    puVar7 = (undefined8 *)
             fn_83078598(auStack_160,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70ac));
    iVar6 = fn_8307D540(auStack_1a0,*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4],puVar7[5],
                         puVar7[6]);
  }
  puVar8 = (undefined8 *)&uStack_228;
  puVar7 = (undefined8 *)(iVar6 + -8);
  lVar11 = 8;
  do {
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  pfVar9 = (float *)(iVar1 + 200);
  if (uVar4 == 0) {
    pfVar9 = (float *)(iVar1 + 0xd8);
  }
  fn_8306EC70((double)lbl_82015D08);
  fn_8307D748(uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,uStack_1f0,
               uStack_1e8);
  fn_8307BA78(afStack_2d0,param_4);
  fn_8307D748(uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,uStack_1f0,
               uStack_1e8);
  fn_8307AC98(param_5,auStack_280);
  dVar18 = (double)lbl_82002C28;
  fStack_270 = lbl_82002C28;
  uStack_26c = lbl_8207F4E0;
  fn_83078FA8(&fStack_2b0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70b4));
  fn_83078FA8(afStack_2d0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70d4));
  puVar2 = (undefined4 *)((int)&fStack_2b0 + in_r0 & 0xfffffff0);
  uVar21 = *puVar2;
  uVar24 = puVar2[1];
  uVar27 = puVar2[2];
  uVar30 = puVar2[3];
  fn_8306EC70((double)lbl_82002C5C);
  fn_83078FA8(&fStack_2c0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x709c));
  fn_8307AE90(param_5,uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,
                    uStack_1f0);
  dVar17 = (double)lbl_82186E74;
  fStack_258 = lbl_82186E74;
  uStack_254 = lbl_820162A0;
  fn_83078FA8(auStack_290,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70b4));
  fn_83078FA8(afStack_2d0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70b8));{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs34); memcpy(auVar20, &_vt0, 16); }
  dVar19 = (double)lbl_82002C2C;
  fStack_2b4 = lbl_82002C2C;
  fStack_2b8 = lbl_82002C2C;
  fStack_2bc = lbl_82002C2C;
  fStack_2c0 = lbl_82002C2C;
  vectorMultiplyAddFloatingPoint(auVar20,in_vs44,in_vs32);
  puVar2 = (undefined4 *)((uint)(auStack_290 + in_r0) & 0xfffffff0);
  *puVar2 = uVar21;
  puVar2[1] = uVar24;
  puVar2[2] = uVar27;
  puVar2[3] = uVar30;
  fn_8307AE90(param_5,uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,
                    uStack_1f0);
  fStack_23c = (float)dVar18;
  uStack_240 = lbl_820288E4;
  fn_83078FA8(auStack_2a0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70d4));
  fn_83078FA8(afStack_2d0,*(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0x70d8));
  fStack_2b4 = (float)dVar19;
  fStack_2b8 = (float)dVar19;
  fStack_2bc = (float)dVar19;
  fStack_2c0 = (float)dVar19;{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs32,in_vs34); memcpy(auVar20, &_vt1, 16); }
  vectorMultiplyAddFloatingPoint(auVar20,in_vs44,in_vs32);
  puVar2 = (undefined4 *)((uint)(auStack_2a0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar21;
  puVar2[1] = uVar24;
  puVar2[2] = uVar27;
  puVar2[3] = uVar30;
  fn_8307AE90(param_5,uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,
                    uStack_1f0);
  uStack_228 = lbl_82186EB4;
  lVar11 = (-(ulonglong)(uVar4 != 0) & 0xfffffffc) + 0xb;
  uStack_224 = lbl_820A6C54;
  lVar10 = (-(ulonglong)(uVar4 != 0) & 0xfffffffc) + 10;
  uVar12 = fn_8306D6D0(*(undefined4 *)(iVar1 + 0xb0),lVar11);
  uVar13 = fn_8306D6D0(*(undefined4 *)(iVar1 + 0xb0),lVar10);
  dVar18 = (double)fn_8306E7D8(uVar13,uVar12);
  dVar15 = (double)lbl_82002AE0;
  dVar16 = (double)lbl_8200DC14;
  dVar19 = (double)lbl_821AAD20;
  if ((dVar18 <= (double)lbl_820579A8) || ((param_8 & 0xff) == 0)) {
    if (dVar19 < (double)pfVar9[3]) {
      pfVar9[3] = (float)((double)pfVar9[3] - param_2);
    }
    else {
      dVar14 = (double)fn_8306E890(dVar16,param_2);
      pfVar9[1] = (float)(dVar15 - dVar14) * pfVar9[1];
      pfVar9[2] = (float)(dVar15 - dVar14) * pfVar9[2];
    }
  }
  else {
    fn_8306D698(&fStack_2c0,*(undefined4 *)(iVar1 + 0xb0),lVar10);
    fn_8306D698(afStack_2d0,*(undefined4 *)(iVar1 + 0xb0),lVar11);
    puVar2 = (undefined4 *)((int)&fStack_2c0 + in_r0 & 0xfffffff0);
    uVar21 = *puVar2;
    uVar24 = puVar2[1];
    uVar27 = puVar2[2];
    uVar30 = puVar2[3];
    fn_8307D748(uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,uStack_1f0,
                 uStack_1e8);
    puVar2 = (undefined4 *)((int)&fStack_2c0 + in_r0 & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar24;
    puVar2[2] = uVar27;
    puVar2[3] = uVar30;
    pfVar3 = (float *)((int)afStack_2d0 + in_r0 & 0xfffffff0);
    fVar22 = *pfVar3;
    fVar25 = pfVar3[1];
    fVar28 = pfVar3[2];
    fVar31 = pfVar3[3];
    fn_8307D748(uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,uStack_1f0,
                 uStack_1e8);
    pfVar3 = (float *)((int)afStack_2d0 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar22;
    pfVar3[1] = fVar25;
    pfVar3[2] = fVar28;
    pfVar3[3] = fVar31;
    altv207_13(in_vs32,in_vs43);
    pfVar3 = (float *)((int)&fStack_2b0 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar22 - in_register_000103f0;
    pfVar3[1] = fVar25 - in_register_000103f4;
    pfVar3[2] = fVar28 - in_register_000103f8;
    pfVar3[3] = fVar31 - in_vr63;
    dVar18 = (double)fn_8306EE38();
    if (lbl_8208ED60 < (float)(dVar18 * dVar14)) {
      dVar18 = (double)fStack_2b0;
      dVar14 = (double)fn_8306E888(dVar18);
      if ((double)lbl_82196080 < dVar14) {
        dVar18 = (double)(float)(dVar15 / dVar18);
        dVar14 = (double)fn_8306EA00((double)(float)(dVar18 * (double)fStack_2a8));
        pfVar9[1] = (float)-dVar14;
        dVar14 = (double)fn_8306EA00((double)(float)(dVar18 * (double)fStack_2ac));
        pfVar9[2] = (float)dVar14;
      }
    }
    pfVar9[3] = (float)dVar17;
  }
  fVar33 = fVar37 - fVar33;
  fVar34 = fVar38 - fVar34;
  fVar35 = fVar39 - fVar35;
  fVar36 = fVar40 - fVar36;
  fVar23 = fVar23 - fVar37;
  fVar26 = fVar26 - fVar38;
  fVar29 = fVar29 - fVar39;
  fVar32 = fVar32 - fVar40;
  dVar14 = (double)fn_8306EE38();
  if (((double)lbl_82196080 < dVar14) &&
     (dVar14 = (double)fn_8306EE38(), (double)lbl_82196080 < dVar14)) {
    fn_8306EDB0();
    fn_8306EDB0();
    if (uVar4 != 0) {
      fVar36 = fVar32;
      fVar35 = fVar29;
      fVar34 = fVar26;
      fVar33 = fVar23;
    }
    fn_8306ED78();
    pfVar3 = (float *)((int)afStack_2d0 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar33;
    pfVar3[1] = fVar34;
    pfVar3[2] = fVar35;
    pfVar3[3] = fVar36;
    puVar2 = (undefined4 *)((int)afStack_2d0 + in_r0 & 0xfffffff0);
    uVar21 = *puVar2;
    uVar24 = puVar2[1];
    uVar27 = puVar2[2];
    uVar30 = puVar2[3];
    fn_8307D828(uStack_220,uStack_218,uStack_210,uStack_208,uStack_200,uStack_1f8,uStack_1f0,
                 uStack_1e8);
    puVar2 = (undefined4 *)((int)&fStack_2b0 + in_r0 & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar24;
    puVar2[2] = uVar27;
    puVar2[3] = uVar30;
    fn_8306EDB0();
    puVar2 = (undefined4 *)((int)&fStack_2b0 + in_r0 & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar24;
    puVar2[2] = uVar27;
    puVar2[3] = uVar30;
    dVar14 = (double)fn_8306EA28((double)fStack_2a8,(double)fStack_2ac);
    dVar18 = (double)fn_8306ED98();
    uVar12 = fn_8306E890(dVar16,param_2);
    if (dVar18 <= (double)lbl_821418B4) {
      dVar18 = (double)fn_82539560(dVar18,(double)lbl_8201DFF4,(double)lbl_821418B4,dVar15);
      dVar14 = (double)fn_8306EA78((double)(float)(dVar14 - (double)*pfVar9));
      *pfVar9 = (float)(dVar14 * dVar18 + (double)*pfVar9);
      dVar14 = (double)fn_8306EA78();
    }
    else {
      dVar14 = (double)fn_8306E818((double)*pfVar9,dVar19,uVar12);
    }
    *pfVar9 = (float)dVar14;
  }
  fn_830797B8(uVar5,auStack_280,4,*(undefined8 *)pfVar9,(ulonglong)(uint)pfVar9[2] << 0x20);
  fn_82F6DCB4(uVar5);
  fn_82F6A584();
  return;
}

