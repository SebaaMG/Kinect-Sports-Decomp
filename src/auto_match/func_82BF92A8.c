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
extern int fn_82F63CA0();
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FCFC;
extern unsigned int lbl_8322FD20;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;
extern unsigned int lbl_8322FD26;
extern unsigned int lbl_8322FD2C;
extern unsigned int lbl_8322FD2F;


void fn_82BF92A8(ulonglong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar4 = lbl_8322FD20;
  uVar10 = (ulonglong)lbl_8322FD20;
  sVar3 = (-(ushort)(param_2 != 0) & 0xfffe) + 1;
  if (uVar10 != 0) {
    iVar11 = 0;
    uVar12 = uVar10;
    do {
      uVar1 = *(ushort *)((int)&lbl_8322B4F8 + iVar11);
      uVar2 = *(ushort *)((int)&lbl_8322F4F8 + iVar11);
      if (((param_1 & 0xffffffff) <= (ulonglong)uVar2) && ((ulonglong)uVar2 < 0xfff0)) {
        *(ushort *)((int)&lbl_8322F4F8 + iVar11) = uVar2 + sVar3;
      }
      if (((param_1 & 0xffffffff) <= (ulonglong)uVar1) && ((ulonglong)uVar1 < 0xfff0)) {
        *(ushort *)((int)&lbl_8322B4F8 + iVar11) = uVar1 + sVar3;
      }
      iVar11 = iVar11 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((ulonglong)lbl_8322FD24 != 0xffff) {
    if ((param_1 & 0xffffffff) <= (ulonglong)lbl_8322FD24) {
      lbl_8322FD24 = lbl_8322FD24 + sVar3;
    }
    if ((param_1 & 0xffffffff) <= (ulonglong)lbl_8322FD22) {
      lbl_8322FD22 = lbl_8322FD22 + sVar3;
    }
  }
  if (((ulonglong)lbl_8322FD2C != 0xffff) && ((param_1 & 0xffffffff) <= (ulonglong)lbl_8322FD2C)) {
    lbl_8322FD2C = lbl_8322FD2C + sVar3;
  }
  if ((param_1 & 0xffffffff) < (ulonglong)lbl_8322FD26) {
    lbl_8322FD26 = lbl_8322FD26 + sVar3;
  }
  if (((param_1 & 0xffffffff) <= (ulonglong)lbl_8322FCFC) && (lbl_8322FCFC < uVar10)) {
    lbl_8322FCFC = lbl_8322FCFC + sVar3;
  }
  lVar9 = (param_1 & 0x3fffffff) * 4;
  lVar7 = (uVar10 - param_1 & 0x3fffffff) * 4;
  lVar5 = lVar9 + -0x7cdd2308;
  iVar11 = (int)param_2;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd2304;
  }
  else {
    lVar7 = lVar7 + -4;
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd2304;
  }
  fn_82F63CA0(lVar6,lVar5,lVar7);
  lVar9 = (param_1 & 0x7fffffff) * 2;
  lVar7 = (uVar10 - param_1 & 0x7fffffff) * 2;
  lVar5 = lVar9 + -0x7cdd1308;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd1306;
    lVar8 = lVar7;
  }
  else {
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd1306;
    lVar8 = lVar7 + -2;
  }
  fn_82F63CA0(lVar6,lVar5,lVar8);
  lVar5 = lVar9 + -0x7cdd0b08;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd0b06;
    lVar8 = lVar7;
  }
  else {
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd0b06;
    lVar8 = lVar7 + -2;
  }
  fn_82F63CA0(lVar6,lVar5,lVar8);
  lVar5 = lVar9 + -0x7cdd4b08;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd4b06;
  }
  else {
    lVar7 = lVar7 + -2;
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd4b06;
  }
  fn_82F63CA0(lVar6,lVar5,lVar7);
  lbl_8322FD20 = uVar4 + sVar3;
  lbl_8322FD2F = 1;
  return;
}

