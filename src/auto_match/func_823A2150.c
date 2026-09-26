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
extern unsigned int *auStack_1070;
extern unsigned int *auStack_1870;
extern unsigned int *auStack_2070;
extern unsigned int *auStack_2080;
extern unsigned int *auStack_2090;
extern unsigned int *auStack_20a0;
extern unsigned int *auStack_20b0;
extern unsigned int *auStack_20c0;
extern unsigned int *auStack_20d0;
extern unsigned int *auStack_870;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82292B40();
extern int fn_822A0678();
extern int fn_822AA770();
extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_822B17A8();
extern int fn_82358FD8();
extern int fn_82374078();
extern int fn_82399CB8();
extern int fn_8239B628();
extern int fn_8239BBC0();
extern int fn_8239D2B0();
extern int fn_8239FF60();
extern int fn_82517978();
extern int fn_82672C20();
extern int fn_8288B760();
extern unsigned int iStack_2098;
extern unsigned int iStack_20c8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831ca688;
extern unsigned int uStack_20ac;
extern unsigned int uStack_20e0;


void fn_823A2150(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar8;
  longlong lVar7;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar14;
  ulonglong uVar13;
  undefined1 *puVar15;
  ulonglong uVar16;
  double dVar17;
  undefined8 uStack_20e0;
  undefined1 auStack_20d0 [8];
  int iStack_20c8;
  undefined1 auStack_20c0 [8];
  undefined1 *puStack_20b8;
  undefined1 auStack_20b0 [4];
  undefined4 uStack_20ac;
  undefined1 *puStack_20a8;
  undefined1 auStack_20a0 [8];
  int iStack_2098;
  undefined1 auStack_2090 [8];
  undefined1 *puStack_2088;
  undefined1 auStack_2080 [8];
  undefined1 *puStack_2078;
  undefined1 auStack_2070 [2048];
  undefined1 auStack_1870 [2048];
  undefined1 auStack_1070 [2048];
  undefined1 auStack_870 [2160];
  
  *(undefined4 *)(param_1 + 0xc) = uRam831ca688;
  fn_8239BBC0(*(undefined4 *)(param_1 + 8));
  iVar8 = fn_82399CB8(*(undefined4 *)(param_1 + 8));
  piVar3 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + iVar8 * 4);
  lVar7 = fn_822AA770(piVar3);
  iVar12 = (int)lVar7;
  iVar11 = iVar12 + -1 + (uint)(lVar7 == 0);
  iVar9 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
  if (*(int *)(iVar9 + 0x168) == 0) {
    uVar10 = *(uint *)(iVar9 + 0x16c);
  }
  else {
    uVar10 = fn_8288B760();
    uVar10 = uVar10 & 0xff;
  }
  iVar9 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar9 + 0xcc);
  dVar17 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x20) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar2 == iVar8) || ((iVar12 != iVar11 && (uVar10 != 0)))) {
    iVar2 = *(int *)(iVar9 + 0xd4);
    iVar4 = *(int *)(piVar3[4] * 4 + *piVar3);
    fn_82358FD8(*(undefined4 *)(iVar2 + 0x1c),auStack_1870,0x400,0xffffffff821abcf8);
    fn_82358FD8(*(undefined4 *)(iVar2 + 0x1c),auStack_870,0x400,0xffffffff821abd0c);
    iVar2 = *(int *)(iVar2 + 0x14);
    if (*(int *)(iVar2 + 0x14) == 0) {
      puVar14 = &uStack_20ac;
      lVar7 = 3;
      do {
        puVar14[3] = 0;
        puVar14 = puVar14 + 4;
        *puVar14 = 0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      fn_82273CD8(auStack_20a0,5);
      iStack_2098 = iVar4 + 0xa8;
      fn_82273CD8(auStack_2090,5);
      puStack_2088 = auStack_1870;
      fn_82273CD8(auStack_2080,5);
      puStack_2078 = auStack_870;
      uStack_20e0 = 0;
      fn_82517978(&uStack_20e0,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),0);
      fn_82672C20((((U64)(uStack_20e0) >> 0) & 0xFFFFFFFF),0xffffffff821ab1e8,auStack_20a0,3);
      if ((((U64)(uStack_20e0) >> 32) & 0xFFFFFFFF) != 0) {
        fn_822315A0();
      }
      fn_822A0678(iVar2);
      puVar15 = auStack_2070;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      lVar7 = 2;
      *(undefined4 *)(iVar2 + 0x10) = lbl_821917B0;
      do {
        puVar15 = puVar15 + -0x10;
        fn_82273C88(puVar15);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    fn_82292B40();
    fn_8239FF60(*(undefined4 *)(iVar9 + 0x2dc),0x15);
    iVar9 = *(int *)(piVar3[4] * 4 + *piVar3);
    if (*(int *)(iVar9 + 8) != 0) {
      iVar11 = fn_822ABA88(iVar9,0);
                    /* WARNING: Subroutine does not return */
      fn_822AF138(*(undefined4 *)(iVar11 + 0x110),3);
    }
    if (iVar12 == iVar11) goto LAB_823a2528;
  }
  else {
    iVar9 = *(int *)(iVar9 + 0xd4);
    iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
    fn_82358FD8(*(undefined4 *)(iVar9 + 0x1c),auStack_2070,0x400,0xffffffff821abcf8);
    fn_82358FD8(*(undefined4 *)(iVar9 + 0x1c),auStack_1070,0x400,0xffffffff821abd0c);
    iVar9 = *(int *)(iVar9 + 0x14);
    if (*(int *)(iVar9 + 0x14) == 0) {
      puVar14 = (undefined4 *)((int)&uStack_20e0 + 4);
      lVar7 = 3;
      do {
        puVar14[3] = 0;
        puVar14 = puVar14 + 4;
        *puVar14 = 0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      fn_82273CD8(auStack_20d0,5);
      iStack_20c8 = iVar2 + 0xa8;
      fn_82273CD8(auStack_20c0,5);
      puStack_20b8 = auStack_2070;
      fn_82273CD8(auStack_20b0,5);
      puStack_20a8 = auStack_1070;
      uStack_20e0 = 0;
      fn_82517978(&uStack_20e0,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),0);
      fn_82672C20((((U64)(uStack_20e0) >> 0) & 0xFFFFFFFF),0xffffffff821ab210,auStack_20d0,3);
      if ((((U64)(uStack_20e0) >> 32) & 0xFFFFFFFF) != 0) {
        fn_822315A0();
      }
      fn_822A0678(iVar9);
      puVar15 = auStack_20a0;
      *(undefined4 *)(iVar9 + 0xc) = 1;
      lVar7 = 2;
      *(undefined4 *)(iVar9 + 0x10) = lbl_821917B0;
      do {
        puVar15 = puVar15 + -0x10;
        fn_82273C88(puVar15);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    if (iVar12 == iVar11) {
      *(float *)(param_1 + 0xc) = (float)dVar17;
      fn_8239D2B0(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x14) = 1;
      goto LAB_823a2528;
    }
  }
  fn_8239B628((ulonglong)*(uint *)(param_1 + 8),piVar3,
                    (ulonglong)*(uint *)(param_1 + 8) + 0x488);
LAB_823a2528:
  uVar16 = 0;
  iVar11 = *(int *)(piVar3[4] * 4 + *piVar3);
  if (*(int *)(iVar11 + 8) != 0) {
    do {
      iVar11 = fn_822ABA88(iVar11,uVar16);
      if (*(int *)(iVar11 + 0x24) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(iVar11 + 0x24) + 0x34);
      }
      if (iVar12 != 0) {
        uVar13 = 0x2a;
        if (*(int *)(iVar11 + 0x214) == 0) {
          uVar13 = 0x2b;
        }
        iVar11 = *(int *)(*(int *)(iVar12 + 0xf0) + 8);
        iVar9 = (int)(uVar13 >> 3);
        *(byte *)(iVar9 + iVar11) = (byte)(1 << ((uint)uVar13 & 7)) | *(byte *)(iVar9 + iVar11);
        bVar1 = *(byte *)(*(int *)(*(int *)(iVar12 + 0xf0) + 8) + 5);
        if (((bVar1 & 4) != 0) && ((bVar1 & 8) != 0)) {
          fn_822B17A8(iVar12,0x23,0);
        }
      }
      uVar16 = uVar16 + 1;
      iVar11 = *(int *)(piVar3[4] * 4 + *piVar3);
    } while ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(iVar11 + 8));
  }
  iVar11 = fn_8225F160();
  if (1 < *(int *)(iVar11 + 0x14)) {
    iVar12 = *(int *)(param_1 + 8);
    uVar10 = (uint)((ulonglong)LZCOUNT(iVar8) >> 3) & 4;
    piVar3 = *(int **)(*(int *)(iVar12 + 0x20) + uVar10);
    piVar5 = *(int **)(iVar8 * 4 + **(int **)(iVar12 + 8));
    piVar6 = *(int **)(**(int **)(iVar12 + 8) + uVar10);
    iVar11 = (int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
    uStack_20e0 = (longlong)iVar11;
    if (iVar11 == 0xb) {
      iVar11 = (int)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20);
      uStack_20e0 = (longlong)iVar11;
      if ((iVar11 == 0) && ((piVar3[1] - *piVar3 & 0xfffffffcU) == 0)) {
        fn_82374078(iVar12,iVar8,0x27);
      }
    }
  }
  *(float *)(param_1 + 0x10) = (float)dVar17;
  fn_8239FF60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2dc),9);
  return;
}

