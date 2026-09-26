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
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_820FC3B8;
extern unsigned int lbl_820FC3C0;
extern unsigned int lbl_820FC3C8;
extern unsigned int lbl_820FC3D0;
extern unsigned int lbl_820FC3F0;
extern unsigned int lbl_82111070;
extern unsigned int lbl_82111078;
extern unsigned int lbl_82111080;
extern unsigned int lbl_82111088;
extern unsigned int lbl_82111090;
extern unsigned int lbl_82111098;
extern unsigned int lbl_821110A0;
extern unsigned int lbl_821110A8;
extern unsigned int lbl_821110B0;
extern unsigned int lbl_821110B8;
extern unsigned int lbl_821110C0;
extern unsigned int lbl_821110C8;


void fn_82EDE100(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  
  iVar17 = fn_82F6A544();
  dVar16 = lbl_821110C8;
  dVar15 = lbl_821110C0;
  dVar14 = lbl_821110B8;
  dVar13 = lbl_821110B0;
  dVar12 = lbl_821110A8;
  dVar11 = lbl_821110A0;
  dVar10 = lbl_82111098;
  dVar9 = lbl_82111090;
  dVar8 = lbl_82111088;
  dVar7 = lbl_82111080;
  dVar6 = lbl_82111078;
  dVar5 = lbl_82111070;
  dVar4 = lbl_820FC3F0;
  dVar3 = lbl_820FC3D0;
  dVar2 = lbl_820FC3C8;
  dVar1 = lbl_820FC3C0;
  dVar23 = lbl_820FC3B8;
  dVar22 = lbl_8202EE40;
  iVar19 = 0;
  piVar20 = (int *)(iVar17 + 0x2078);
  lVar21 = 0x100;
  if (*(int *)(iVar17 + 0x3880) == 0) {
    do {
      lVar18 = (longlong)iVar19;
      iVar19 = iVar19 + 0x10000;
      dVar22 = (double)lVar18;
      piVar20[-0x3ff] = (int)(dVar22 * dVar14);
      piVar20[-0x6ff] = (int)(dVar22 * dVar13);
      piVar20[-0x1ff] = (int)(dVar22 * dVar4 + dVar12);
      piVar20[-0xff] = (int)(dVar22 * dVar1 + dVar15);
      piVar20[-0x5ff] = (int)(dVar22 * dVar1);
      piVar20[-0x2ff] = (int)(dVar22 * dVar16);
      piVar20[-0x7ff] = (int)(dVar22 * dVar23);
      piVar20[-0x4ff] = (int)(dVar22 * dVar3);
      piVar20 = piVar20 + 1;
      *piVar20 = (int)-(dVar22 * dVar2 - dVar15);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    fn_82F6A590();
  }
  else {
    do {
      lVar18 = (longlong)iVar19;
      iVar19 = iVar19 + 0x10000;
      dVar23 = (double)lVar18;
      piVar20[-0x3ff] = (int)(dVar23 * dVar10);
      piVar20[-0x7ff] = (int)(dVar23 * dVar5);
      piVar20[-0x1ff] = (int)(dVar23 * dVar7 + dVar12);
      piVar20[-0x5ff] = (int)(dVar23 * dVar22);
      piVar20[-0xff] = (int)(dVar23 * dVar22 + dVar15);
      piVar20[-0x6ff] = (int)(dVar23 * dVar8);
      piVar20[-0x4ff] = (int)(dVar23 * dVar6);
      piVar20[-0x2ff] = (int)(dVar23 * dVar11);
      piVar20 = piVar20 + 1;
      *piVar20 = (int)-(dVar23 * dVar9 - dVar15);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    fn_82F6A590();
  }
  return;
}

