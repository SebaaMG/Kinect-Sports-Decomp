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
extern int fn_82B7BBF0();
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
extern unsigned int uStack_70;


void fn_82BA4278(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar10;
  int iVar9;
  uint uVar11;
  longlong lVar12;
  undefined4 uStack_70;
  
  uVar3 = fn_82BA0AC8();
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar4 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),0);
  iVar5 = fn_82BC5AC0(*(undefined4 *)(param_1 + 0xa8));
  if (iVar5 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0x43b);
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  iVar9 = 0;
  iVar8 = *(int *)(iVar5 + 0x3c);
  for (uVar11 = 1; uVar11 <= *(uint *)(iVar8 + 4); uVar11 = uVar11 + 1) {
    uStack_70 = *(undefined4 *)(*(int *)(iVar8 + 8) + iVar9);
    iVar9 = iVar9 + 4;
  }
  piVar6 = (int *)fn_82BC24F0(0x87,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar6,1,uVar3);
  lVar12 = 0;
  piVar6[0x2a] = 4;
  do {
    (**(code **)(*piVar6 + 0x58))(piVar6,1,lVar12,1);
    lVar12 = lVar12 + 1;
  } while ((int)lVar12 < 4);
  fn_82BA0C40(param_1,piVar6);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
  puVar7 = (undefined4 *)fn_82B7BD28(uVar1,0xa4);
  *puVar7 = uVar1;
  if (puVar7 + 1 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = fn_82BC6580(puVar7 + 1,piVar6,0,*(undefined4 *)(param_1 + 0xc),param_1);
  }
  cVar10 = fn_82BC2580(piVar6);
  if (cVar10 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee84,0xffffffff820deb50,0x44c);
  }
  uVar1 = *(undefined4 *)(iVar8 + 0x90);
  piVar6 = (int *)fn_82BC24F0(0x69,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar6,0,uVar4);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,0,4);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,1,4);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,2,4);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,3,4);
  fn_82BC2958(piVar6,1,uVar3);
  (**(code **)(*piVar6 + 0x58))(piVar6,1,0,2);
  (**(code **)(*piVar6 + 0x58))(piVar6,1,1,3);
  iVar9 = fn_82B7BBF0(*(undefined4 *)(param_1 + 0xc));
  piVar6[0x2b] = iVar9;
  fn_82BA0C40(param_1,piVar6);
  fn_82BC5538(uVar1,piVar6);
  cVar10 = fn_82BC2580(piVar6);
  if (cVar10 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x461);
  }
  iVar9 = fn_82BC24F0(0x4e,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(iVar9 + 0x38) = 2;
  *(undefined4 *)(iVar9 + 0x50) = 0x1f;
  fn_82BC2958(iVar9,1,uVar4);
  fn_82BA0C40(param_1,iVar9);
  fn_82BC5538(uVar1,iVar9);
  cVar10 = fn_82BC2580(iVar9);
  if (cVar10 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x469);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x20);
  piVar6 = (int *)fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
  fn_82BC2958(piVar6,0,uVar2);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,0,1);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,1,1);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,2,1);
  (**(code **)(*piVar6 + 0x54))(piVar6,0,3,0);
  fn_82BC2958(piVar6,1,uVar2);
  fn_82BC2958(piVar6,2,uVar4);
  lVar12 = 0;
  do {
    (**(code **)(*piVar6 + 0x58))(piVar6,1,lVar12,3);
    (**(code **)(*piVar6 + 0x58))(piVar6,2,lVar12,3);
    lVar12 = lVar12 + 1;
  } while ((int)lVar12 < 4);
  fn_82BA0C40(param_1,piVar6);
  fn_82BC5538(uVar1,piVar6);
  cVar10 = fn_82BC2580(piVar6);
  if (cVar10 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee70,0xffffffff820deb50,0x47f);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5ac);
  puVar7 = (undefined4 *)fn_82B7BD28(uVar2,0x8c);
  *puVar7 = uVar2;
  if (puVar7 + 1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82BC5758(puVar7 + 1,*(undefined4 *)(param_1 + 0xc));
  }
  *(int *)(iVar8 + 0x94) = (int)uVar3;
  fn_82BC5ED8(iVar8,uVar3);
  uVar2 = *(undefined4 *)(iVar8 + 0x98);
  fn_82BC5ED8(uVar1,uVar2);
  fn_82BC5ED8(uVar3,uVar2);
  fn_82BC6408(uStack_70,iVar5,iVar8,uVar2);
  fn_82BA02B0(param_1,uStack_70,iVar8);
  fn_82BA02B0(param_1,iVar8,uVar1);
  fn_82BA02B0(param_1,uVar1,uVar3);
  fn_82BA02B0(param_1,uVar3,uVar2);
  return;
}

