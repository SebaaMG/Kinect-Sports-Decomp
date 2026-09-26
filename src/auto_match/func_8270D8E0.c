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
extern int fn_8268CC00();
extern int fn_8268CD40();
extern int fn_8268CF60();
extern int fn_8268D1D0();
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_8270D8E0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined1 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d0 [208];
  
  iVar9 = fn_82F6A510();
  if ((((*(float *)(iVar9 + 0x30) != lbl_82002AE0) || (*(float *)(iVar9 + 0x34) != lbl_821AAD20)) ||
      (*(float *)(iVar9 + 0x3c) != lbl_821AAD20)) ||
     (uVar10 = 1, *(float *)(iVar9 + 0x40) != lbl_82002AE0)) {
    uVar10 = 0;
  }
  *(undefined1 *)(iVar9 + 0x5c) = uVar10;
  fn_8268CC00(&uStack_f0);
  fn_8268CD40(&uStack_f0,iVar9 + 0x18);
  *(undefined4 *)(iVar9 + 0x70) = uStack_f0;
  *(undefined4 *)(iVar9 + 0x74) = uStack_ec;
  *(undefined4 *)(iVar9 + 0x78) = uStack_e8;
  *(undefined4 *)(iVar9 + 0x7c) = uStack_e4;
  *(undefined4 *)(iVar9 + 0x80) = uStack_e0;
  *(undefined4 *)(iVar9 + 0x84) = uStack_dc;
  fn_8268CC00(auStack_d0);
  fn_8268CD40(auStack_d0,iVar9 + 0x30);
  fn_8268CF60(iVar9 + 0x70,auStack_d0);
  fVar1 = *(float *)(iVar9 + 8);
  fVar2 = *(float *)(iVar9 + 0xc);
  fVar7 = *(float *)(iVar9 + 0x10) + fVar1;
  fVar3 = *(float *)(iVar9 + 0x4c);
  fVar8 = *(float *)(iVar9 + 0x14) + fVar2;
  fVar4 = *(float *)(iVar9 + 0x50);
  fVar5 = *(float *)(iVar9 + 0x54);
  fVar6 = *(float *)(iVar9 + 0x58);
  if (fVar1 <= fVar3) {
    fVar3 = fVar1 - lbl_82186E6C;
  }
  if (fVar2 <= fVar4) {
    fVar4 = fVar2 - lbl_82186E6C;
  }
  if (fVar5 <= fVar7) {
    fVar5 = fVar1 + lbl_82186E6C;
  }
  if (fVar6 <= fVar8) {
    fVar6 = fVar2 + lbl_82186E6C;
  }
  fn_8268D1D0(iVar9 + 0x88);
  fn_8268D1D0((double)fVar1,(double)fVar4,(double)fVar7,(double)fVar2,iVar9 + 0xa0);
  fn_8268D1D0((double)fVar7,(double)fVar4,(double)fVar5,(double)fVar2,iVar9 + 0xb8);
  dVar16 = (double)fVar8;
  dVar15 = (double)fVar1;
  fn_8268D1D0((double)fVar3,(double)fVar2,dVar15,dVar16,iVar9 + 0xd0);
  dVar14 = (double)fVar7;
  dVar13 = (double)fVar2;
  fn_8268D1D0(dVar15,dVar13,dVar14,dVar16,iVar9 + 0xe8);
  dVar11 = (double)fVar5;
  fn_8268D1D0(dVar14,dVar13,dVar11,dVar16,iVar9 + 0x100);
  dVar12 = (double)fVar6;
  fn_8268D1D0((double)fVar3,dVar16,dVar15,dVar12,iVar9 + 0x118);
  fn_8268D1D0(dVar15,dVar16,dVar14,dVar12,iVar9 + 0x130);
  fn_8268D1D0(dVar14,dVar16,dVar11,dVar12,iVar9 + 0x148);
  *(float *)(iVar9 + 0x60) = (float)dVar15;
  *(float *)(iVar9 + 100) = (float)dVar13;
  *(float *)(iVar9 + 0x68) = (float)dVar14;
  *(float *)(iVar9 + 0x6c) = (float)dVar16;
  fn_82F6A55C();
  return;
}

