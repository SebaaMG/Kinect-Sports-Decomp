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
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8226FF40();
extern int fn_822794D0();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_82465390();
extern int fn_824655B8();
extern int fn_824657F0();
extern int fn_82468FC0();
extern int fn_824691D8();
extern int fn_824695C0();
extern int fn_82469958();
extern int fn_82469F80();
extern int fn_8246B8C8();
extern int fn_8246C028();
extern int fn_8246F9F0();
extern int fn_824BC7E8();
extern int fn_824BD700();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F6A8();
extern int fn_82672C20();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_82191418;
extern unsigned int lbl_821A89BC;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821BC730;
extern unsigned int lbl_821BC734;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8246F0E8;
extern unsigned int lbl_832765C0;
extern unsigned int lbl_832766D4;
extern unsigned int uRam831c6b7c;


undefined4 *
fn_8246C798(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  float fVar2;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar3;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar4;
  char cVar10;
  int *piVar9;
  undefined4 uVar11;
  float *pfVar12;
  int *piVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  int iStack_80;
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  
  uVar11 = (undefined4)param_2;
  param_1[1] = uVar11;
  param_1[2] = param_3;
  param_1[5] = 5;
  *param_1 = &lbl_821BC730;
  fn_82356F98(param_1 + 0xc0);
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  fn_82356F98(param_1 + 0xc4);
  param_1[0xdc] = 0;
  piVar9 = param_1 + 0x106;
  param_1[0x100] = &lbl_821A8C90;
  param_1[0x105] = (int)param_4;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  fn_82356F98(param_1 + 0x10a);
  param_1[0x110] = param_6;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x113] = 1;
  fVar2 = lbl_821CC160;
  dVar16 = (double)lbl_821CC160;
  param_1[0x114] = 0;
  param_1[0x112] = fVar2;
  param_1[0x115] = 0;
  param_1[0x11c] = fVar2;
  param_1[0x116] = 0;
  param_1[0x11d] = fVar2;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  lbl_832766D4 = param_1;
  fn_82F68CC0(param_1 + 0xc6,param_5 + 4,0x58);
  fn_82F68CC0(param_1 + 0xde,param_5 + 0xd2,0x80);
  fn_82F68CC0(0xffffffff831c6ba4,param_5 + 0xb3,0x60);
  uVar5 = fn_824BC7E8();
  param_1[0x10e] = uVar5;
  fn_824BD700();
  param_1[0x116] = uRam831c6b7c;
  fn_82F68CC0(param_1 + 0x27,param_5 + 0x1a,0x264);
  puVar6 = (undefined4 *)fn_8265C9E0(0x80);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[2] = param_6;
    *puVar6 = &lbl_821BC734;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0xffffffff;
    fn_82F68CC0(puVar6 + 0x19,param_5 + 0xcb,0x1c);
    puVar6[4] = uVar11;
    puVar6[5] = *param_5;
    puVar6[6] = param_5[1];
    puVar6[0x16] = param_5[0x1d];
    puVar6[0x17] = param_5[0x1e];
    puVar6[0x18] = param_5[0x1f];
    puVar6[1] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
  }
  param_1[0x23] = puVar6;
  puVar6[0x15] = 0xffffffff;
  puVar6[0x13] = 1;
  fn_8246C028(puVar6,1);
  iVar7 = param_1[0x23];
  if (*(int *)(iVar7 + 4) != 0) {
    if (*(int *)(iVar7 + 4) == 1) {
      fn_82465390(*(undefined4 *)(iVar7 + 8),iVar7 + 0x5c);
    }
    *(undefined4 *)(iVar7 + 4) = 0;
  }
  uVar3 = fn_8251F720(param_5 + 2,0);
  iVar7 = fn_8265C9E0(0xfc);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    fn_82F68CC0(iVar7,uVar3,200);
    *(float *)(iVar7 + 0xdc) = (float)dVar16;
    *(float *)(iVar7 + 0xe4) = (float)dVar16;
    *(undefined4 *)(iVar7 + 200) = uVar11;
    *(undefined4 *)(iVar7 + 0xcc) = param_6;
    *(undefined4 *)(iVar7 + 0xd0) = 0;
    *(undefined4 *)(iVar7 + 0xd4) = 0;
    *(undefined4 *)(iVar7 + 0xd8) = 0;
    *(undefined4 *)(iVar7 + 0xec) = 0;
    fn_824657F0(0xffffffff831d386c,iVar7 + 0x14);
  }
  param_1[0x25] = iVar7;
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8251FA58(uVar3);
  }
  puVar6 = (undefined4 *)fn_8251F720(param_5 + 3,0);
  puVar8 = (undefined4 *)fn_8265C9E0(4);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = 3;
    lbl_832765C0 = *puVar6;
    fn_82F68CC0(0xffffffff832765c4,puVar6 + 1,0x68);
    fn_82F68CC0(0xffffffff8327662c,puVar6 + 0x1b,0x1c);
    fn_82F68CC0(0xffffffff83276648,puVar6 + 0x22,0x68);
    fn_82F68CC0(0xffffffff832766b0,puVar6 + 0x3c,0x1c);
    fn_824655B8(puVar8,1);
  }
  param_1[0x26] = puVar8;
  if (puVar6 != (undefined4 *)0x0) {
    fn_8251FA58(puVar6);
  }
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_824691D8(uVar3,param_1 + 0xca,param_4);
  }
  param_1[0xff] = (int)uVar4;
  fn_82469958(uVar4,0);
  param_1[0x101] = param_1;
  param_1[0x102] = &lbl_8246F0E8;
  param_1[0x103] = fn_82BA02A8;
  pfVar12 = (float *)(param_1 + 6);
  param_1[0x104] = fn_82BA02A8;
  lVar14 = 2;
  do {
    pfVar12[1] = (float)dVar16;
    pfVar12[9] = 0.0;
    pfVar12[2] = (float)dVar16;
    pfVar12[3] = (float)dVar16;
    pfVar12[4] = (float)dVar16;
    pfVar12[5] = (float)dVar16;
    pfVar12[6] = (float)dVar16;
    pfVar12[7] = (float)dVar16;
    pfVar12[8] = (float)dVar16;
    pfVar12 = pfVar12 + 10;
    *pfVar12 = (float)dVar16;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar3 = fn_8265C9E0(0x38);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_8246B8C8(uVar3,param_5);
  }
  param_1[0x24] = uVar5;
  puVar6 = (undefined4 *)fn_8265C9E0(0x148);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar8 = puVar6 + 4;
    puVar6[2] = 1;
    *puVar6 = &lbl_821A8D8C;
    if (puVar8 != (undefined4 *)0x0) {
      fn_822794D0(puVar8,param_1 + 200,1,1,0);
      puVar6[0x50] = 5;
      *puVar8 = &lbl_821A89BC;
    }
  }
  iVar7 = param_1[0x107];
  param_1[0x107] = puVar6;
  *piVar9 = (int)(puVar6 + 4);
  if (iVar7 != 0) {
    fn_822315A0();
  }
  fn_82468FC0(*piVar9);
  iStack_80 = 0;
  iStack_7c = 0;
  iVar7 = param_1[0x107];
  iVar1 = *piVar9;
  if (iVar7 != 0) {
    cVar10 = fn_8223AAC0(iVar7);
    if (cVar10 != '\0') {
      iStack_80 = iVar1;
      iStack_7c = iVar7;
    }
  }
  fn_8226FF40(&iStack_80);
  piVar9 = (int *)fn_8265C9E0(0x14);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar13 = piVar9 + 1;
    *piVar9 = 6;
    piVar9[1] = 0;
    piVar9[2] = 0;
    piVar9[4] = 1;
    uVar4 = fn_8266EC60();
    uVar4 = fn_8266EF20(auStack_78,uVar4,param_1 + 0xc9,param_2,0,0x18280143);
    fn_823F2E20(piVar13,uVar4);
    if (iStack_74 != 0) {
      fn_822315A0();
    }
    fn_8266F6A8(*piVar13,0x40);
    dVar15 = (double)lbl_82191418;
    if (piVar9[3] != 1) {
      piVar9[3] = 1;
      piVar9[4] = 1;
      fn_82469F80(dVar15,piVar9);
    }
    if (*piVar9 != 0) {
      *piVar9 = 0;
      fn_82672C20(*piVar13,0xffffffff821bc37c,0,0);
    }
    fn_82469F80(dVar15,piVar9);
  }
  param_1[0x111] = piVar9;
  if (piVar9[3] != 0) {
    piVar9[3] = 0;
    fn_82469F80(dVar16);
  }
  *(undefined4 *)(param_1[0x111] + 0x10) = 0;
  fn_8246F9F0(param_1,param_1 + 0x5d);
  param_1[0xe] = (float)dVar16;
  param_1[0x18] = (float)dVar16;
  param_1[3] = 0xe;
  fn_824695C0(param_1[0xff],0,0);
  return param_1;
}

