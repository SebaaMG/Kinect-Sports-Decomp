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
extern int fn_82AB15D0();
extern int fn_82B7BCC0();
extern int fn_82B7BD28();
extern int fn_82BA02B0();
extern int fn_82BA0AC8();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC5538();
extern int fn_82BC5758();
extern int fn_82BC5AC0();
extern int fn_82BC5ED8();
extern int fn_82BC6408();
extern int fn_82BC6580();
extern unsigned int lbl_820DEB1C;
extern unsigned int uStack_80;


void fn_82BA5480(int param_1)

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
  longlong lVar13;
  undefined4 uStack_80;
  
  uVar3 = fn_82BA0AC8();
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar4 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar5 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  iVar6 = fn_82BC5AC0(*(undefined4 *)(param_1 + 0xa8));
  if (iVar6 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0x6e5);
  }
  iVar6 = *(int *)(param_1 + 0xa8);
  iVar10 = 0;
  iVar9 = *(int *)(iVar6 + 0x3c);
  for (uVar12 = 1; uVar12 <= *(uint *)(iVar9 + 4); uVar12 = uVar12 + 1) {
    uStack_80 = *(undefined4 *)(*(int *)(iVar9 + 8) + iVar10);
    iVar10 = iVar10 + 4;
  }
  piVar7 = (int *)fn_82BC24F0(0x40,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar5);
  *(undefined1 *)(piVar7 + 0x29) = 1;
  piVar7[0x20] = lbl_820DEB1C;
  fn_82BC2958(piVar7,1,uVar3);
  lVar13 = 0;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar13,2);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uStack_80,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x6f7);
  }
  piVar7 = (int *)fn_82BC24F0(0x87,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,1,uVar5);
  piVar7[0x2a] = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
  puVar8 = (undefined4 *)fn_82B7BD28(uVar1,0xa4);
  *puVar8 = uVar1;
  if (puVar8 + 1 == (undefined4 *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = fn_82BC6580(puVar8 + 1,piVar7,0,*(undefined4 *)(param_1 + 0xc),param_1);
  }
  lVar13 = 0;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar13,0);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  fn_82BA0C40(param_1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deeb8,0xffffffff820deb50,0x702);
  }
  uVar1 = *(undefined4 *)(iVar9 + 0x90);
  piVar7 = (int *)fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar5);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,0);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,1);
  *(undefined1 *)((int)piVar7 + 0x9f) = 1;
  fn_82BC2958(piVar7,1,uVar3);
  (**(code **)(*piVar7 + 0x58))(piVar7,1,0,3);
  (**(code **)(*piVar7 + 0x58))(piVar7,1,1,2);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x712);
  }
  piVar7 = (int *)fn_82BC24F0(0x69,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar4);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,4);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,4);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,4);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,4);
  fn_82BC2958(piVar7,1,uVar5);
  iVar10 = fn_82B7BCC0(*(undefined4 *)(param_1 + 0xc));
  piVar7[0x2b] = iVar10;
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x721);
  }
  iVar10 = fn_82BC24F0(0x4e,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(iVar10 + 0x38) = 2;
  *(undefined4 *)(iVar10 + 0x50) = 0x1f;
  fn_82BC2958(iVar10,1,uVar4);
  fn_82BA0C40(param_1,iVar10);
  fn_82BC5538(uVar1,iVar10);
  cVar11 = fn_82BC2580(iVar10);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x729);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20);
  piVar7 = (int *)fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar7,0,uVar2);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,0,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,1,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,2,1);
  (**(code **)(*piVar7 + 0x54))(piVar7,0,3,0);
  fn_82BC2958(piVar7,1,uVar2);
  fn_82BC2958(piVar7,2,uVar4);
  lVar13 = 0;
  do {
    (**(code **)(*piVar7 + 0x58))(piVar7,1,lVar13,3);
    (**(code **)(*piVar7 + 0x58))(piVar7,2,lVar13,3);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  fn_82BA0C40(param_1,piVar7);
  fn_82BC5538(uVar1,piVar7);
  cVar11 = fn_82BC2580(piVar7);
  if (cVar11 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x740);
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
  fn_82BC6408(uStack_80,iVar6,iVar9,uVar2);
  fn_82BA02B0(param_1,uStack_80,iVar9);
  fn_82BA02B0(param_1,iVar9,uVar1);
  fn_82BA02B0(param_1,uVar1,uVar3);
  fn_82BA02B0(param_1,uVar3,uVar2);
  return;
}

