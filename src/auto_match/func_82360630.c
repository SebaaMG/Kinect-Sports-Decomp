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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_dc;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229D190();
extern int fn_82672C20();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195528;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_78;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_c8;


void fn_82360630(undefined8 param_1,double param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  double extraout_f1;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 auStack_dc [3];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [112];
  
  iVar3 = fn_82F6A540();
  uVar7 = lbl_82195518;
  if ((param_4 & 0xffffffff) != (ulonglong)*(uint *)(iVar3 + 0x2b20)) goto LAB_82360840;
  dVar10 = (double)lbl_821CC160;
  dVar9 = (double)lbl_821CA460;
  dVar8 = extraout_f1;
  if (extraout_f1 == dVar10) {
    fn_8229D190(*(undefined4 *)(*(int *)(iVar3 + 0xd4) + 0x1854),0,2);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar3 + 0xd4) + 0x1854);
    dVar11 = dVar9;
    if (extraout_f1 <= dVar9) {
      dVar11 = extraout_f1;
      if (extraout_f1 < dVar10) {
        dVar11 = dVar10;
      }
      if (dVar11 <= dVar10) goto LAB_82360760;
    }
    if (dVar11 != (double)*(float *)(iVar1 + 4)) {
      puVar4 = auStack_dc;
      lVar6 = 3;
      do {
        puVar4[3] = 0;
        puVar4 = puVar4 + 4;
        *puVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      fn_82273CD8(auStack_d0,3);
      uStack_c8 = uVar7;
      fn_82273CD8(auStack_c0,3);
      dStack_b8 = dVar11;
      fn_82273CD8(auStack_b0,3);
      uStack_a8 = lbl_82195830;
      *(float *)(iVar1 + 4) = (float)dVar11;
      fn_82672C20(*(undefined4 *)(iVar1 + 8),0xffffffff821ab15c,auStack_d0,3);
      puVar5 = auStack_a0;
      lVar6 = 2;
      do {
        puVar5 = puVar5 + -0x10;
        fn_82273C88(puVar5);
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
  }
LAB_82360760:
  if (param_2 == dVar10) {
    fn_8229D190(*(undefined4 *)(*(int *)(iVar3 + 0xd4) + 0x1854),0,1);
  }
  else {
    pfVar2 = *(float **)(*(int *)(iVar3 + 0xd4) + 0x1854);
    if (param_2 <= dVar9) {
      dVar9 = param_2;
      if (param_2 < dVar10) {
        dVar9 = dVar10;
      }
      if (dVar9 <= dVar10) goto LAB_82360838;
    }
    if (dVar9 != (double)*pfVar2) {
      puVar4 = &uStack_ac;
      lVar6 = 3;
      do {
        puVar4[3] = 0;
        puVar4 = puVar4 + 4;
        *puVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      fn_82273CD8(auStack_a0,3);
      uStack_98 = uVar7;
      fn_82273CD8(auStack_90,3);
      dStack_88 = dVar9;
      fn_82273CD8(auStack_80,3);
      uStack_78 = lbl_82195528;
      *pfVar2 = (float)dVar9;
      fn_82672C20(pfVar2[2],0xffffffff821ab15c,auStack_a0,3);
      puVar5 = auStack_70;
      lVar6 = 2;
      do {
        puVar5 = puVar5 + -0x10;
        fn_82273C88(puVar5);
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
  }
LAB_82360838:
  *(float *)(iVar3 + 0x2ca4) = (float)dVar8;
  *(float *)(iVar3 + 0x2ca8) = (float)param_2;
LAB_82360840:
  fn_82F6A58C();
  return;
}

