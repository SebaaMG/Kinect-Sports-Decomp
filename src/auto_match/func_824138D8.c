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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_78;
extern unsigned int fStack_88;
extern int fn_82359070();
extern int fn_8248F890();
extern int fn_82539560();
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_82191FE0;
extern unsigned int lbl_82192000;
extern unsigned int lbl_82192020;
extern unsigned int lbl_82192040;
extern unsigned int lbl_82192060;
extern unsigned int lbl_82192080;
extern unsigned int lbl_821920A0;
extern unsigned int lbl_821920C0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955F0;
extern unsigned int lbl_821BEC2C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4868;
extern V16 vectorAddFloatingPoint();


void fn_824138D8(int param_1,int *param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  int in_r0;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  float fStack_88;
  undefined1 auStack_80 [8];
  float fStack_78;
  undefined1 auStack_70 [112];
  
  iVar9 = *(int *)(param_1 + 0x2d8);
  iVar3 = *param_2;
  puVar6 = (undefined4 *)((uint)(param_2 + 0x74) & 0xfffffff0);
  uVar17 = puVar6[1];
  uVar18 = puVar6[2];
  uVar19 = puVar6[3];
  puVar4 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar6;
  puVar4[1] = uVar17;
  puVar4[2] = uVar18;
  puVar4[3] = uVar19;
  puVar6 = (undefined4 *)((uint)(param_2 + 0x7c) & 0xfffffff0);
  uVar17 = *puVar6;
  uVar18 = puVar6[1];
  uVar19 = puVar6[2];
  uVar20 = puVar6[3];
  puVar6 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar6 = uVar17;
  puVar6[1] = uVar18;
  puVar6[2] = uVar19;
  puVar6[3] = uVar20;
  fVar2 = *(float *)(iVar3 + 0x268);
  puVar6 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar6 = uVar17;
  puVar6[1] = uVar18;
  puVar6[2] = uVar19;
  puVar6[3] = uVar20;
  fVar5 = lbl_82191F78;
  if (iVar9 == 0) {
    puVar10 = &lbl_82192020;
    puVar7 = &lbl_82192040;
  }
  else if (iVar9 == 1) {
    puVar10 = &lbl_82192060;
    puVar7 = &lbl_82192080;
  }
  else {
    puVar10 = &lbl_821920A0;
    puVar7 = &lbl_821920C0;
  }
  dVar15 = (double)fStack_78;
  puVar6 = (undefined4 *)(in_r0 + param_1 + 0x240 & 0xfffffff0);
  uVar17 = puVar6[1];
  uVar18 = puVar6[2];
  uVar19 = puVar6[3];
  dVar12 = (double)lbl_821CA460;
  dVar14 = (double)(float)(dVar12 / (double)fVar2);
  puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar6;
  puVar4[1] = uVar17;
  puVar4[2] = uVar18;
  puVar4[3] = uVar19;
  dVar16 = (double)lbl_821CC160;
  fVar2 = -(float)((double)(float)((double)fStack_78 - dVar15) * dVar14 - dVar12);
  if (fVar2 < fVar5) {
    *(undefined1 *)(param_1 + 0x2b8) = 1;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x2c4) + 0x94);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 0x50);
  }
  if ((iVar9 != 0) && (lbl_831E4868 < fVar2)) {
    if (*(char *)(param_1 + 0x2cc) == '\0') {
      puVar6 = (undefined4 *)fn_8248F890(0x48);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar17 = *(undefined4 *)(param_1 + 0x2c4);
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        fVar2 = lbl_8218E8E8;
        puVar6[4] = 0;
        uVar18 = lbl_821917B0;
        puVar6[5] = 0;
        fVar5 = lbl_821CA460;
        puVar6[9] = fVar2;
        puVar6[7] = 0xffffffff;
        puVar6[10] = uVar18;
        puVar6[0xb] = fVar5;
        puVar6[8] = 0xffffffff;
        puVar6[0xc] = 0;
        *puVar6 = &lbl_821BEC2C;
        puVar6[0xf] = 0;
        puVar6[0x10] = uVar17;
        puVar6[0x11] = 0;
      }
      fn_82359070(*(undefined4 *)(param_1 + 0x2c4),puVar6);
      dVar12 = (double)lbl_821CA460;
    }
    *(undefined1 *)(param_1 + 0x2cc) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x2b8);
  puVar6 = (undefined4 *)(in_r0 + param_1 + 0x240 & 0xfffffff0);
  uVar17 = puVar6[1];
  uVar18 = puVar6[2];
  uVar19 = puVar6[3];
  dVar11 = (double)lbl_8218E8E8;
  puVar4 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar6;
  puVar4[1] = uVar17;
  puVar4[2] = uVar18;
  puVar4[3] = uVar19;
  dVar13 = (double)fStack_88;
  if (cVar1 == '\0') {
    dVar13 = (double)(float)((double)*(float *)(param_1 + 0x268) * dVar11 + dVar13);
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(dVar13 - dVar15) < dVar16) << 2) |
                (uint)(NAN((double)(float)(dVar13 - dVar15)) || NAN(dVar16)) << 2)) < 0.0) {
    dVar13 = dVar15;
  }
  dVar14 = -(double)(float)((double)(float)(dVar13 - dVar15) * dVar14 - dVar12);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar14 < dVar16) << 2) | (uint)(NAN(dVar14) || NAN(dVar16)) << 2)) <
      0.0) {
    dVar14 = dVar16;
  }
  dVar13 = (double)(float)(dVar14 - (double)lbl_821955F0);
  dVar15 = (double)lbl_821955F0;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar13 < dVar16) << 2) | (uint)(NAN(dVar13) || NAN(dVar16)) << 2)) <
      0.0) {
    dVar15 = dVar14;
  }
  dVar14 = dVar11;
  puVar8 = puVar10;
  if ((dVar15 <= dVar11) &&
     (dVar14 = dVar16, dVar12 = dVar11, puVar8 = &lbl_82192000, puVar7 = puVar10,
     (-(*(int *)(*(int *)(param_1 + 0x2c4) + 0xc4c) != 0) & 3U) != 5)) {
    puVar8 = &lbl_82191FE0;
  }
  dVar12 = (double)fn_82539560(dVar15,dVar14,dVar12,dVar16);
  puVar6 = (undefined4 *)(in_r0 + param_1 + 0x220 & 0xfffffff0);
  uVar17 = puVar6[1];
  uVar18 = puVar6[2];
  uVar19 = puVar6[3];
  puVar4 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar6;
  puVar4[1] = uVar17;
  puVar4[2] = uVar18;
  puVar4[3] = uVar19;
  puVar6 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  uVar17 = puVar6[1];
  uVar18 = puVar6[2];
  uVar19 = puVar6[3];
  puVar4 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  uVar20 = *puVar4;
  uVar21 = puVar4[1];
  uVar22 = puVar4[2];
  uVar23 = puVar4[3];
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs32,in_vs44);
  puVar4 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar6;
  puVar4[1] = uVar17;
  puVar4[2] = uVar18;
  puVar4[3] = uVar19;
  fVar2 = (float)((double)(float)((double)*(float *)(puVar7 + 0x1c) -
                                 (double)*(float *)(puVar8 + 0x1c)) * dVar12 +
                 (double)*(float *)(puVar8 + 0x1c));
  if (*(int *)(param_1 + 0x284) == 0) {
    fVar2 = (fVar2 - lbl_8218E1AC) * *(float *)(param_1 + 0x280) + lbl_8218E1AC;
  }
  *(float *)(param_1 + 0x230) = fVar2;
  puVar6 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  uVar17 = puVar6[1];
  uVar18 = puVar6[2];
  uVar19 = puVar6[3];
  puVar4 = (undefined4 *)(in_r0 + param_1 + 0x220 & 0xfffffff0);
  *puVar4 = *puVar6;
  puVar4[1] = uVar17;
  puVar4[2] = uVar18;
  puVar4[3] = uVar19;
  puVar6 = (undefined4 *)(param_1 + 0x210U & 0xfffffff0);
  *puVar6 = uVar20;
  puVar6[1] = uVar21;
  puVar6[2] = uVar22;
  puVar6[3] = uVar23;
  return;
}

