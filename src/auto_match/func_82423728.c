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
extern int fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();


void fn_82423728(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char *pcVar8;
  int iVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar9 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar9 + 8);
  uVar1 = (*(int *)(iVar9 + 0xc) - iVar2) / 0x1ac;
  if (uVar1 < 4) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar11 = *(undefined4 *)(iVar2 + 0x6ac);
    uVar12 = *(undefined4 *)(iVar2 + 0x534);
  }
  if (uVar1 < 3) {
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(iVar2 + 0x500);
    uVar14 = *(undefined4 *)(iVar2 + 0x388);
  }
  if (uVar1 < 2) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(iVar2 + 0x354);
    uVar16 = *(undefined4 *)(iVar2 + 0x1dc);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (uVar7 = 1, *(int *)(iVar3 + 0x40) != 1)) {
    uVar7 = 0;
  }
  uVar4 = *(undefined4 *)(iVar9 + 0x408);
  uVar5 = *(undefined4 *)(iVar2 + 0x1a8);
  uVar6 = *(undefined4 *)(iVar2 + 0x30);
  pcVar8 = (char *)fn_8225F670();
  if (((*pcVar8 != '\0') && (iVar9 = fn_8225FDE0(0x4b,1), iVar9 == 0)) &&
     (cVar10 = fn_82E1CAD0(0x4b), cVar10 != '\0')) {
    fn_82E1CD30();
    fn_82E1CB88(0xffffffff821a6fd0,uVar4);
    fn_82E1CB40(0xffffffff821a685c,uVar7);
    fn_82E1CB88(0xffffffff821a6a40,uVar6);
    fn_82E1CB88(0xffffffff821a7294,uVar5);
    fn_82E1CB88(0xffffffff821a6fb0,uVar16);
    fn_82E1CB88(0xffffffff821a72ac,uVar15);
    fn_82E1CB88(0xffffffff821a6fc0,uVar14);
    fn_82E1CB88(0xffffffff821a72c8,uVar13);
    fn_82E1CB88(0xffffffff821a71ec,uVar12);
    fn_82E1CB88(0xffffffff821a72e4,uVar11);
    fn_82E1CCA8();
    fn_82E1CA30();
  }
  fn_8225F6D0();
  return;
}

