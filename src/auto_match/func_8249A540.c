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
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int *auStack_2a0;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_823F2E20();
extern int fn_8249D008();
extern int fn_8249DA90();
extern int fn_8249F8C0();
extern int fn_824A0038();
extern int fn_824A0AD8();
extern int fn_8251F720();
extern int fn_82528B78();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_82672C20();
extern int fn_83062700();
extern unsigned int iStack_26c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191AF0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821955DC;
extern unsigned int lbl_821955E0;
extern unsigned int lbl_821BF0C0;
extern unsigned int lbl_821BF0D4;
extern unsigned int lbl_821BF15C;
extern unsigned int lbl_821BF170;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_27c;
extern unsigned int uStack_280;
extern unsigned int uStack_28c;


int * fn_8249A540(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_r0;
  int iVar11;
  ulonglong uVar9;
  float *pfVar12;
  undefined4 *puVar13;
  undefined8 uVar10;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_2a0 [16];
  undefined **ppuStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 *puStack_278;
  undefined1 auStack_270 [4];
  int iStack_26c;
  undefined1 auStack_260 [608];
  
  iVar11 = fn_8251F720(param_2 + 0x18,0);
  *param_1 = iVar11;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar11 = fn_8265C9E0(0x130);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = fn_8249DA90();
  }
  param_1[7] = iVar11;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  iVar11 = lbl_821CC160;
  piVar18 = param_1 + 0xd;
  dVar20 = (double)lbl_82192734;
  param_1[10] = (int)lbl_82192734;
  param_1[0xc] = iVar11;
  param_1[0xf] = 0;
  iVar11 = fn_8265C9E0(0x18);
  if (iVar11 == 0) {
    uStack_28c = 0;
    ppuStack_290 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_290);
  }
  param_1[0xe] = iVar11;
  *(int *)iVar11 = iVar11;
  *(int *)(param_1[0xe] + 4) = param_1[0xe];
  iVar11 = lbl_821CC160;
  *(int *)(param_1[0xe] + 8) = param_1[0xe];
  piVar17 = param_1 + 0x28;
  *(undefined1 *)(param_1[0xe] + 0x14) = 1;
  *(undefined1 *)(param_1[0xe] + 0x15) = 1;
  param_1[0x24] = iVar11;
  param_1[0x25] = iVar11;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x26;
  param_1[0x18] = 0x26;
  param_1[0x19] = 0x26;
  param_1[0x1a] = 0x28;
  param_1[0x1b] = 0xfa5;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  fn_82266D28(piVar17,0);
  iVar11 = param_2[0x14];
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = iVar11;
  fn_82230110(param_1 + 0x2e,param_2 + 7);
  param_1[0x35] = param_2[0xf];
  param_1[0x36] = param_2[0x10];
  param_1[0x37] = param_2[1];
  param_1[0x38] = *param_2;
  uVar9 = fn_8265C9E0(0x24);
  if ((uVar9 & 0xffffffff) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = fn_82528B78(uVar9,param_2 + 0x13,0xffffffff821beff8);
  }
  param_1[0x3a] = 1;
  param_1[0x39] = iVar11;
  pfVar12 = (float *)fn_8265C9E0(0x54);
  if (pfVar12 == (float *)0x0) {
    pfVar12 = (float *)0x0;
  }
  else {
    *pfVar12 = (float)dVar20;
    fVar8 = lbl_821CA460;
    fVar7 = lbl_821955E0;
    fVar6 = lbl_821955DC;
    fVar5 = lbl_82193B00;
    fVar4 = lbl_82191AF0;
    fVar3 = lbl_821917D4;
    fVar2 = lbl_821917B4;
    pfVar12[1] = lbl_821955DC;
    pfVar12[2] = fVar8;
    pfVar12[3] = fVar7;
    pfVar12[7] = fVar7;
    pfVar12[4] = fVar4;
    pfVar12[5] = fVar6;
    pfVar12[6] = fVar5;
    pfVar12[0xc] = 0.0;
    pfVar12[0xd] = 0.0;
    pfVar12[0xe] = 0.0;
    pfVar12[9] = pfVar12[1] - fVar2;
    pfVar12[8] = *pfVar12 - fVar3;
    pfVar12[0x10] = 0.0;
    pfVar12[10] = pfVar12[2] + fVar3;
    pfVar12[0x11] = 0.0;
    pfVar12[0xb] = pfVar12[3] + fVar2;
    pfVar12[0x12] = 0.0;
    pfVar12[0x14] = 0.0;
  }
  param_1[0x3b] = (int)pfVar12;
  puVar13 = (undefined4 *)((uint)(param_1 + 0x3c) & 0xfffffff0);
  *puVar13 = in_register_000104d0;
  puVar13[1] = in_register_000104d4;
  puVar13[2] = in_register_000104d8;
  puVar13[3] = in_vr77;
  puVar13 = (undefined4 *)((uint)(param_1 + 0x40) & 0xfffffff0);
  *puVar13 = in_register_000104d0;
  puVar13[1] = in_register_000104d4;
  puVar13[2] = in_register_000104d8;
  puVar13[3] = in_vr77;
  puVar13 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 1;
    puVar13[0xd] = 0;
  }
  param_1[0x44] = (int)puVar13;
  param_1[0x46] = 0;
  param_1[0x45] = -1;
  puVar13 = (undefined4 *)fn_8265C9E0(4);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    *puVar13 = &lbl_821BF0C0;
  }
  iVar11 = fn_83062700(piVar18);
  if ((undefined4 *)(iVar11 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 **)(iVar11 + 0x10) = puVar13;
    *(undefined4 *)(iVar11 + 0xc) = 4;
  }
  fn_824A0AD8(auStack_2a0,piVar18,iVar11);
  puVar13 = (undefined4 *)fn_8265C9E0(4);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    *puVar13 = &lbl_821BF15C;
  }
  iVar11 = fn_83062700(piVar18);
  if ((undefined4 *)(iVar11 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 **)(iVar11 + 0x10) = puVar13;
    *(undefined4 *)(iVar11 + 0xc) = 0x10;
  }
  fn_824A0AD8(auStack_2a0,piVar18,iVar11);
  puVar13 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    iVar11 = param_1[0x39];
    puVar16 = puVar13 + 1;
    *puVar13 = &lbl_821BF170;
    puVar13[1] = iVar11;
    lVar19 = 2;
    puVar13[6] = param_2[0x16];
    puVar13[7] = param_2[0x17];
    do {
      puVar16[1] = 0;
      puVar16 = puVar16 + 2;
      *puVar16 = 0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  param_1[0x11] = (int)puVar13;
  iVar11 = fn_83062700(piVar18);
  if ((undefined4 *)(iVar11 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 **)(iVar11 + 0x10) = puVar13;
    *(undefined4 *)(iVar11 + 0xc) = 2;
  }
  fn_824A0AD8(auStack_2a0,piVar18,iVar11);
  uVar9 = fn_8265C9E0(0x98);
  if ((uVar9 & 0xffffffff) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = fn_8249F8C0(uVar9,param_2 + 0x15,param_1[0x39]);
  }
  param_1[0x12] = (int)uVar10;
  fn_824A0038(uVar10,1,*(undefined4 *)(*param_1 + 0x18));
  fn_824A0038(param_1[0x12],2,*(undefined4 *)(*param_1 + 0x1c));
  fn_824A0038(param_1[0x12],3,*(undefined4 *)(*param_1 + 0x14));
  fn_824A0038(param_1[0x12],4,*(undefined4 *)(*param_1 + 0x10));
  iVar11 = param_1[0x12];
  iVar14 = fn_83062700(piVar18);
  if ((undefined4 *)(iVar14 + 0xc) != (undefined4 *)0x0) {
    *(int *)(iVar14 + 0x10) = iVar11;
    *(undefined4 *)(iVar14 + 0xc) = 8;
  }
  fn_824A0AD8(auStack_2a0,piVar18,iVar14);
  puVar13 = (undefined4 *)fn_8265C9E0(0x20);
  iVar11 = lbl_821CC160;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    piVar15 = puVar13 + 1;
    *puVar13 = &lbl_821BF0D4;
    puVar13[1] = param_2[2];
    lVar19 = 2;
    puVar13[6] = 0;
    puVar13[7] = 0;
    do {
      piVar15[1] = 0;
      piVar15 = piVar15 + 2;
      *piVar15 = iVar11;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  param_1[0x13] = (int)puVar13;
  iVar11 = fn_83062700(piVar18);
  if ((undefined4 *)(iVar11 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 **)(iVar11 + 0x10) = puVar13;
    *(undefined4 *)(iVar11 + 0xc) = 0x20;
  }
  fn_824A0AD8(auStack_2a0,piVar18,iVar11);
  lVar19 = 0;
  piVar18 = param_1 + 4;
  do {
    fn_8249D008(auStack_2a0,param_1[0x3b],lVar19);
    puVar13 = (undefined4 *)fn_8265C9E0(0x40);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      *puVar13 = (int)lVar19;
      puVar13[8] = 0xffffffff;
      puVar13[9] = 0;
      puVar16 = (undefined4 *)((uint)(auStack_2a0 + (int)in_r0) & 0xfffffff0);
      uVar21 = puVar16[1];
      uVar22 = puVar16[2];
      uVar23 = puVar16[3];
      puVar1 = (undefined4 *)((uint)(puVar13 + 4) & 0xfffffff0);
      *puVar1 = *puVar16;
      puVar1[1] = uVar21;
      puVar1[2] = uVar22;
      puVar1[3] = uVar23;
      puVar13[10] = 0;
      puVar13[0xb] = 0;
      puVar13[0xc] = 0;
    }
    lVar19 = lVar19 + 1;
    piVar18 = piVar18 + 1;
    *piVar18 = (int)puVar13;
  } while ((int)lVar19 < 2);
  if (*piVar17 == 0) {
    uVar10 = fn_8266EC60();
    uVar10 = fn_8266ECF0(auStack_270,uVar10,param_1 + 0x2a,4,0,0xffffffffffffffff,0,0x18280143
                              );
    fn_823F2E20(piVar17,uVar10);
    if (iStack_26c != 0) {
      fn_822315A0();
    }
    fn_82528BF8(param_1[0x39],0xffffffff821bf084,auStack_260,0x100,0,0);
    uStack_280 = 0;
    uStack_27c = 0;
    fn_82273CD8(&uStack_280,5);
    puStack_278 = auStack_260;
    fn_82672C20(*piVar17,0xffffffff821a7fc4,&uStack_280,1);
    fn_82273C88(&uStack_280);
  }
  return param_1;
}

