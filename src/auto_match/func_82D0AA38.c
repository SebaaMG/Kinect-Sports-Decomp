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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_160;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern int fn_82421E98();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D08138();
extern int fn_82D08318();
extern int fn_82D08C48();
extern int fn_82D09248();
extern int fn_82D09998();
extern int fn_82D09F30();
extern unsigned int iStack_164;
extern unsigned int iStack_170;
extern unsigned int lbl_82021544;
extern unsigned int lbl_820D2840;
extern unsigned int lbl_821CEA90;
extern unsigned int lbl_821CEAA0;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;


void fn_82D0AA38(undefined8 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined1 *puVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iStack_170;
  uint uStack_16c;
  uint uStack_168;
  int iStack_164;
  undefined1 auStack_160 [16];
  int aiStack_150 [8];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];
  
  aiStack_150[0] = 0;
  aiStack_150[1] = 0;
  aiStack_150[2] = 0x80000000;
  aiStack_150[3] = 0;
  aiStack_150[4] = 0;
  aiStack_150[5] = 0x80000000;
  fn_82D08138(param_1,aiStack_150);
  iVar4 = aiStack_150[4];
  iStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0x80000000;
  uVar13 = aiStack_150[4] * 3;
  piVar3 = (int *)fn_82CE5410();
  uStack_168 = uVar13 | 0x80000000;
  iStack_170 = *piVar3;
  *piVar3 = (iVar4 * 0x30 + 0x7fU & 0xffffff80) + iStack_170;
  lVar12 = (ulonglong)(uint)aiStack_150[4] + ((ulonglong)(uint)aiStack_150[4] & 0x7fffffff) * 2;
  iStack_164 = iStack_170;
  iVar4 = fn_82CE5410();
  uVar13 = (uint)lVar12;
  if ((int)(uStack_168 & 0x3fffffff) < (int)uVar13) {
    lVar9 = ((ulonglong)uStack_168 & 0x3fffffff) << 1;
    if ((int)lVar9 <= (int)uVar13) {
      lVar9 = lVar12;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),&iStack_170,lVar9);
  }
  iVar4 = 0;
  if (0 < aiStack_150[4]) {
    iVar7 = 0;
    iVar10 = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar1 = (undefined4 *)
               (*(int *)(iVar10 + aiStack_150[3]) * 0x10 + aiStack_150[0] & 0xfffffff0);
      uVar16 = puVar1[1];
      uVar17 = puVar1[2];
      uVar18 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + iStack_170 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      puVar1 = (undefined4 *)
               (*(int *)(iVar10 + aiStack_150[3] + 4) * 0x10 + aiStack_150[0] & 0xfffffff0);
      uVar16 = puVar1[1];
      uVar17 = puVar1[2];
      uVar18 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + iStack_170 + 0x10U & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      puVar1 = (undefined4 *)
               (*(int *)(iVar10 + aiStack_150[3] + 8) * 0x10 + aiStack_150[0] & 0xfffffff0);
      uVar16 = puVar1[1];
      uVar17 = puVar1[2];
      uVar18 = puVar1[3];
      iVar10 = iVar10 + 0x10;
      puVar2 = (undefined4 *)(iVar7 + iStack_170 + 0x20U & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      iVar7 = iVar7 + 0x30;
    } while (iVar4 < aiStack_150[4]);
  }
  uStack_16c = uVar13;
  cVar5 = fn_82D09F30((double)lbl_82021544,aiStack_150,param_2,param_3);
  uVar13 = uStack_16c;
  iVar4 = iStack_170;
  if (cVar5 == '\0') {
    puVar1 = (undefined4 *)((uint)(&lbl_821CEAA0 + in_r0) & 0xfffffff0);
    uVar16 = puVar1[1];
    uVar17 = puVar1[2];
    uVar18 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(&lbl_820D2840 + in_r0) & 0xfffffff0);
    uVar23 = *puVar2;
    uVar24 = puVar2[1];
    uVar25 = puVar2[2];
    uVar26 = puVar2[3];
    puVar2 = (undefined4 *)((uint)(&lbl_821CEA90 + in_r0) & 0xfffffff0);
    uVar19 = *puVar2;
    uVar20 = puVar2[1];
    uVar21 = puVar2[2];
    uVar22 = puVar2[3];
    puVar2 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar23;
    puVar1[1] = uVar24;
    puVar1[2] = uVar25;
    puVar1[3] = uVar26;
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar19;
    puVar1[1] = uVar20;
    puVar1[2] = uVar21;
    puVar1[3] = uVar22;
    fn_82D08318(iStack_170,uStack_16c,0x10,&fStack_130,auStack_c0,auStack_100);
    dVar15 = (double)(fStack_128 * fStack_12c * fStack_130);
    fn_82D09998(iVar4,uVar13,0x10,auStack_90,auStack_110,0);
    fn_82D09248(auStack_160,auStack_90,auStack_f0,auStack_e0,auStack_d0);
    fn_82D08318(iVar4,uVar13,0x10,&fStack_120,auStack_f0,auStack_110);
    dVar14 = (double)(fStack_118 * fStack_11c * fStack_120);
    if (param_4 == 2) {
      dVar15 = (double)fn_82D08C48(iVar4,uVar13,0x10,auStack_c0,auStack_c0,0x14);
      fn_82D08318(iVar4,uVar13,0x10,&fStack_130,auStack_c0,auStack_100);
      fn_82D08C48(iVar4,uVar13,0x10,auStack_f0,auStack_f0,0x14);
      dVar14 = (double)fn_82D08318(iVar4,uVar13,0x10,&fStack_120,auStack_f0,auStack_110);
    }
    if (dVar14 <= dVar15) {
      pfVar8 = &fStack_120;
      puVar6 = auStack_110;
      puVar11 = auStack_f0;
    }
    else {
      pfVar8 = &fStack_130;
      puVar6 = auStack_100;
      puVar11 = auStack_c0;
    }
    puVar1 = (undefined4 *)(in_r0 + (int)pfVar8 & 0xfffffff0);
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(puVar6 + in_r0) & 0xfffffff0);
    uVar16 = *puVar2;
    uVar17 = puVar2[1];
    uVar18 = puVar2[2];
    uVar19 = puVar2[3];
    puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar20;
    puVar2[2] = uVar21;
    puVar2[3] = uVar22;
    puVar1 = (undefined4 *)((uint)(puVar11 + in_r0) & 0xfffffff0);
    uVar28 = puVar1[1];
    uVar29 = puVar1[2];
    uVar30 = puVar1[3];
    uVar24 = *(undefined4 *)(puVar11 + 0x10);
    uVar25 = *(undefined4 *)(puVar11 + 0x14);
    uVar26 = *(undefined4 *)(puVar11 + 0x18);
    uVar27 = *(undefined4 *)(puVar11 + 0x1c);
    uVar20 = *(undefined4 *)(puVar11 + 0x20);
    uVar21 = *(undefined4 *)(puVar11 + 0x24);
    uVar22 = *(undefined4 *)(puVar11 + 0x28);
    uVar23 = *(undefined4 *)(puVar11 + 0x2c);
    puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar28;
    puVar2[2] = uVar29;
    puVar2[3] = uVar30;
    puVar1 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    *puVar1 = uVar24;
    puVar1[1] = uVar25;
    puVar1[2] = uVar26;
    puVar1[3] = uVar27;
    uStack_16c = -(uint)(iStack_170 != iStack_164) & uStack_16c;
    puVar1 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
    *puVar1 = uVar20;
    puVar1[1] = uVar21;
    puVar1[2] = uVar22;
    puVar1[3] = uVar23;
    puVar1 = (undefined4 *)(param_3 + 0x30U & 0xfffffff0);
    *puVar1 = uVar16;
    puVar1[1] = uVar17;
    puVar1[2] = uVar18;
    puVar1[3] = uVar19;
  }
  else {
    uStack_16c = -(uint)(iStack_170 != iStack_164) & uStack_16c;
  }
  iVar4 = iStack_164;
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar4;
  iVar4 = fn_82CE5410();
  uStack_16c = 0;
  if ((uStack_168 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_170,uStack_168 & 0x3fffffff,0x10);
  }
  iStack_170 = 0;
  uStack_168 = 0x80000000;
  fn_82421E98(aiStack_150);
  return;
}

