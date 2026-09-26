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
extern int fn_82250A18();
extern int fn_8225FE40();
extern int fn_822ABA88();
extern int fn_82397F30();
extern unsigned int lbl_832975B0;
extern unsigned int uRam831c996c;


void fn_82399730(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar9;
  ulonglong uVar8;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  bool bVar13;
  
  piVar6 = (int *)**(undefined4 **)(param_1 + 8);
  piVar9 = (int *)*piVar6;
  iVar4 = *piVar9;
  iVar2 = *(int *)(piVar9[4] * 4 + iVar4);
  uVar7 = (ulonglong)*(uint *)(iVar2 + 8);
  iVar2 = fn_822ABA88(iVar2,0);
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((uVar7 & 0xffffffff) < 2) {
    bVar13 = false;
  }
  else {
    iVar3 = fn_822ABA88(*(undefined4 *)(piVar9[4] * 4 + iVar4),1);
    bVar13 = *(int *)(iVar3 + 0x24) != 0;
  }
  uVar8 = (ulonglong)*(uint *)(piVar9[4] * 4 + iVar4);
  iVar4 = fn_822ABA88(uVar8,0);
  uVar1 = *(undefined4 *)(iVar4 + 0x214);
  if ((uVar7 & 0xffffffff) < 2) {
    uVar11 = 0;
  }
  else {
    iVar4 = fn_822ABA88(uVar8,1);
    uVar11 = *(undefined4 *)(iVar4 + 0x214);
  }
  piVar6 = (int *)piVar6[1];
  iVar4 = *piVar6;
  iVar3 = *(int *)(piVar6[4] * 4 + iVar4);
  uVar7 = (ulonglong)*(uint *)(iVar3 + 8);
  fn_822ABA88(iVar3,0);
  if (1 < (uVar7 & 0xffffffff)) {
    fn_822ABA88(*(undefined4 *)(piVar6[4] * 4 + iVar4),1);
  }
  uVar8 = (ulonglong)*(uint *)(piVar6[4] * 4 + iVar4);
  fn_822ABA88(uVar8,0);
  if (1 < (uVar7 & 0xffffffff)) {
    fn_822ABA88(uVar8,1);
  }
  uVar10 = 0xffffffffU - ((int)*(uint *)(param_1 + 0x844) >> 0x1f) & *(uint *)(param_1 + 0x844);
  if (2 < (int)uVar10) {
    uVar10 = 3;
  }
  if ((*(int *)(param_1 + 0xa0) == 0) ||
     (uVar12 = 1, *(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
    uVar12 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar4 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar4 = fn_82250A18();
    }
    uVar7 = (ulonglong)*(byte *)(iVar4 + 4);
    iVar4 = fn_82397F30(param_1);
    if (iVar4 == 0) {
      if ((uVar7 & 0xff) == 0) {
        uVar5 = 0xffffffff821b4b9c;
      }
      else {
        uVar5 = 0xffffffff821b4b8c;
      }
    }
    else if ((uVar7 & 0xff) == 0) {
      uVar5 = 0xffffffff821b4b7c;
    }
    else {
      uVar5 = 0xffffffff821b4b6c;
    }
  }
  else if (*(int *)(param_1 + 0x178) == 1) {
    uVar5 = 0xffffffff821b4bac;
  }
  else {
    uVar5 = 0xffffffff821b4bb4;
  }
  fn_8225FE40(uRam831c996c,uVar5,uVar12,uVar10,iVar2 != 0,uVar1,bVar13,uVar11);
  *(undefined4 *)(param_1 + 0x2a4) = 1;
  return;
}

