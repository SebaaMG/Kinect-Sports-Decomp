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
extern unsigned int fStack_80;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B7BDF0();
extern int fn_82B9D918();
extern int fn_82B9D930();
extern int fn_82BA02B0();
extern int fn_82BA0AC8();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern int fn_82BC5758();
extern int fn_82BC5AC0();
extern int fn_82BC5ED8();
extern int fn_82BC6408();
extern int fn_82BC6580();
extern unsigned int lbl_820D78C4;


void fn_82BA5B98(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  char cVar11;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar12;
  float fVar13;
  longlong lVar14;
  double dVar15;
  float fStack_80;
  float afStack_7c [31];
  
  uVar3 = fn_82BA0AC8();
  *(undefined1 *)(param_1 + 0x819) = 1;
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar4 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar5 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  iVar6 = fn_82BC5AC0(*(undefined4 *)(param_1 + 0xa8));
  if (iVar6 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0x89d);
  }
  iVar6 = *(int *)(param_1 + 0xa8);
  iVar10 = 0;
  iVar9 = *(int *)(iVar6 + 0x3c);
  fVar13 = afStack_7c[0];
  for (uVar12 = 1; uVar12 <= *(uint *)(iVar9 + 4); uVar12 = uVar12 + 1) {
    fVar13 = *(float *)(*(int *)(iVar9 + 8) + iVar10);
    iVar10 = iVar10 + 4;
  }
  piVar7 = (int *)fn_82BC24F0(0x40,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar5);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,1);
  fn_82BC2958(piVar7,1,uVar3);
  lVar14 = 0;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar14,2);
    lVar14 = lVar14 + 1;
  } while ((int)lVar14 < 4);
  *(undefined1 *)(piVar7 + 0x29) = 1;
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(fVar13,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820def0c,0xffffffff820deb50,0x8b2);
  }
  piVar7 = (int *)fn_82BC24F0(0x24,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar5);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,1);
  fn_82BC2958(piVar7,1,uVar5);
  fn_82BC2958(piVar7,2,uVar3);
  fn_82BC2958(piVar7,3,uVar5);
  lVar14 = 0;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar14,0);
    (**(code **)(*piVar7 + 0x58))(piVar7,2,lVar14,1);
    (**(code **)(*piVar7 + 0x58))(piVar7,3,lVar14,0);
    lVar14 = lVar14 + 1;
  } while ((int)lVar14 < 4);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(fVar13,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deef8,0xffffffff820deb50,0x8c5);
  }
  piVar7 = (int *)fn_82BC24F0(0x87,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,1,uVar5);
  piVar7[0x2a] = 2;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
  puVar8 = (undefined4 *)fn_82B7BD28(uVar1,0xa4);
  *puVar8 = uVar1;
  if (puVar8 + 1 == (undefined4 *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = fn_82BC6580(puVar8 + 1,piVar7,0,*(undefined4 *)(param_1 + 0xc),param_1);
  }
  lVar14 = 0;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar14,0);
    lVar14 = lVar14 + 1;
  } while ((int)lVar14 < 4);
  fn_82BA0C40(param_1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee84,0xffffffff820deb50,0x8d0);
  }
  uVar1 = *(undefined4 *)(iVar9 + 0x90);
  iVar10 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(iVar10,0,uVar5);
  fn_82BC2958(iVar10,1,uVar3);
  *(undefined1 *)(iVar10 + 0x9f) = 1;
  fn_82BA0C40(param_1,iVar10);
  fn_82BC5538(uVar1,iVar10);
  cVar11 = fn_82BC2580(iVar10);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,0x8da);
  }
  piVar7 = (int *)fn_82BC24F0(0x12,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar5);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,1);
  fn_82BC2958(piVar7,1,uVar5);
  *(undefined1 *)((int)piVar7 + 0x99) = 1;
  fn_82B9D918(*(undefined4 *)(param_1 + 0x10),0,afStack_7c,0xffffffff82b7c800,
                *(undefined4 *)(param_1 + 0xc));
  fn_82B9D930(*(undefined4 *)(param_1 + 0x10),0,&fStack_80,0xffffffff82b7c800,
                *(undefined4 *)(param_1 + 0xc));
  fn_82BC34D8((double)afStack_7c[0],(double)fStack_80,piVar7,param_1,2);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded1c,0xffffffff820deb50,0x8f3);
  }
  piVar7 = (int *)fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar5);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,1);
  fn_82BC2958(piVar7,1,uVar5);
  *(undefined1 *)((int)piVar7 + 0x9f) = 1;
  dVar15 = (double)lbl_820D78C4;
  fn_82BC34D8(dVar15,dVar15,dVar15,piVar7,param_1,2);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820deb50,0x901);
  }
  piVar7 = (int *)fn_82BC24F0(0x69,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar4);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,4);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,0);
  fn_82BC2958(piVar7,1,uVar5);
  iVar10 = fn_82B7BDF0(*(undefined4 *)(param_1 + 0xc));
  piVar7[0x2b] = iVar10;
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deee4,0xffffffff820deb50,0x90e);
  }
  piVar7 = (int *)fn_82BC24F0(0x4e,*(undefined4 *)(param_1 + 0xc));
  piVar7[0xe] = 2;
  lVar14 = 0;
  piVar7[0x14] = 0x1f;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar14,0);
    lVar14 = lVar14 + 1;
  } while ((int)lVar14 < 4);
  fn_82BC2958(piVar7,1,uVar4);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deed0,0xffffffff820deb50,0x919);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
  puVar8 = (undefined4 *)fn_82B7BD28(uVar2,0x8c);
  *puVar8 = uVar2;
  if (puVar8 + 1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82BC5758(puVar8 + 1,*(undefined4 *)(param_1 + 0xc));
  }
  *(int *)(iVar9 + 0x94) = (int)uVar3;
  fn_82BC5ED8(iVar9,uVar3);
  uVar2 = *(undefined4 *)(iVar9 + 0x98);
  fn_82BC5ED8(uVar1,uVar2);
  fn_82BC5ED8(uVar3,uVar2);
  fn_82BC6408(fVar13,iVar6,iVar9,uVar2);
  fn_82BA02B0(param_1,fVar13,iVar9);
  fn_82BA02B0(param_1,iVar9,uVar1);
  fn_82BA02B0(param_1,uVar1,uVar3);
  fn_82BA02B0(param_1,uVar3,uVar2);
  return;
}

