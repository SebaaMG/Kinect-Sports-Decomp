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
extern unsigned int *auStack_4c0;
extern unsigned int *auStack_620;
extern unsigned int *auStack_640;
extern unsigned int *auStack_6e0;
extern unsigned int *auStack_728;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82249C60();
extern int fn_82249E98();
extern int fn_8224A150();
extern int fn_8224ABC8();
extern int fn_8224B4B8();
extern int fn_824C1BF8();
extern int fn_8265C9E0();
extern int fn_82897DF8();
extern int fn_828ABF58();
extern int fn_828AC0A0();
extern int fn_828EA268();
extern int fn_82F691F0();
extern unsigned int iStack_72c;
extern unsigned int iStack_734;
extern unsigned int lbl_82197994;
extern unsigned int lbl_821979AC;
extern unsigned int lbl_821979C4;
extern unsigned int lbl_821979DC;
extern unsigned int lbl_821979F4;
extern unsigned int lbl_82197A0C;
extern unsigned int lbl_82197A24;
extern unsigned int lbl_82197A3C;
extern unsigned int lbl_821AD588;


void fn_82247C08(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar2;
  char cVar10;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar3;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puStack_780;
  undefined4 *puStack_77c;
  undefined4 *puStack_778;
  undefined4 *puStack_774;
  undefined4 *puStack_770;
  undefined4 *puStack_76c;
  undefined4 *puStack_768;
  undefined4 *puStack_764;
  undefined4 *puStack_760;
  undefined4 *puStack_75c;
  undefined4 *puStack_758;
  undefined4 *puStack_754;
  undefined4 *puStack_750;
  undefined4 *puStack_74c;
  undefined4 *puStack_748;
  undefined4 *puStack_744;
  undefined4 *puStack_740;
  undefined4 *puStack_738;
  int iStack_734;
  undefined4 *puStack_730;
  int iStack_72c;
  undefined1 auStack_728 [72];
  undefined1 auStack_6e0 [160];
  undefined1 auStack_640 [32];
  undefined1 auStack_620 [352];
  undefined1 auStack_4c0 [1216];
  
  puStack_750 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puStack_750 == (undefined4 *)0x0) {
    puStack_750 = (undefined4 *)0x0;
  }
  else {
    puStack_750[1] = 1;
    puStack_750[2] = 1;
    *puStack_750 = &lbl_821AD588;
    if (puStack_750 + 3 != (undefined4 *)0x0) {
      puStack_750[4] = 0;
      puStack_750[3] = &lbl_821979DC;
      fn_828ABF58(puStack_750 + 5,0,0,4);
    }
  }
  puVar1 = puStack_750;
  puVar12 = puStack_750 + 3;
  puVar4 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821AD588;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[4] = 0;
      puVar4[3] = &lbl_821979F4;
      fn_828ABF58(puVar4 + 5,0,0,8);
    }
  }
  puStack_74c = puVar4;
  puVar5 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      puVar5[4] = 0;
      puVar5[3] = &lbl_82197A0C;
      fn_828ABF58(puVar5 + 5,0,0,10);
    }
  }
  puStack_744 = puVar5;
  puStack_740 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puStack_740 == (undefined4 *)0x0) {
    puStack_740 = (undefined4 *)0x0;
  }
  else {
    puStack_740[1] = 1;
    puStack_740[2] = 1;
    *puStack_740 = &lbl_821AD588;
    if (puStack_740 + 3 != (undefined4 *)0x0) {
      puStack_740[4] = 0;
      puStack_740[3] = &lbl_82197A24;
      fn_828ABF58(puStack_740 + 5,0,0,4);
    }
  }
  puStack_748 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puStack_748 == (undefined4 *)0x0) {
    puStack_748 = (undefined4 *)0x0;
  }
  else {
    puStack_748[1] = 1;
    puStack_748[2] = 1;
    *puStack_748 = &lbl_821AD588;
    if (puStack_748 + 3 != (undefined4 *)0x0) {
      puStack_748[4] = 0;
      puStack_748[3] = &lbl_82197A3C;
      fn_828AC0A0(puStack_748 + 5,0,0xffffffffffffffff,4);
    }
  }
  puVar6 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      fn_828ABF58(puVar6 + 3,1,0,0xffffffffffffffff);
    }
  }
  fn_82249C60(auStack_728);
  puVar6 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 1;
    puVar6[2] = 1;
    *puVar6 = &lbl_821AD588;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      puVar6[4] = 0;
      puVar6[3] = &lbl_821979C4;
    }
  }
  puVar15 = puVar6 + 3;
  puStack_778 = puVar15;
  puStack_774 = puVar6;
  puVar7 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar7 + 3 != (undefined4 *)0x0) {
      puVar7[4] = 0;
      puVar7[3] = &lbl_82197994;
    }
  }
  puVar7 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar7 + 3 != (undefined4 *)0x0) {
      puVar7[4] = 0;
      puVar7[3] = &lbl_821979AC;
    }
  }
  puVar17 = puVar7 + 3;
  uVar2 = fn_8265C9E0(0x1c);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8224ABC8(uVar2,&puStack_778);
  }
  puStack_770 = (undefined4 *)0x0;
  puStack_76c = (undefined4 *)0x0;
  if (((uVar2 & 0xffffffff) != 0) && (cVar10 = fn_8223AAC0(uVar2), cVar10 != '\0')) {
    puStack_770 = (undefined4 *)((int)uVar2 + 0xc);
    puStack_76c = (undefined4 *)(int)uVar2;
  }
  puStack_768 = (undefined4 *)0x0;
  puStack_764 = (undefined4 *)0x0;
  if ((puVar7 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar7), cVar10 != '\0')) {
    puStack_768 = puVar17;
    puStack_764 = puVar7;
  }
  puStack_760 = (undefined4 *)0x0;
  puStack_75c = (undefined4 *)0x0;
  if ((puVar7 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar7), cVar10 != '\0')) {
    puStack_760 = puVar17;
    puStack_75c = puVar7;
  }
  puStack_758 = (undefined4 *)0x0;
  puStack_754 = (undefined4 *)0x0;
  if ((puVar7 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar7), cVar10 != '\0')) {
    puStack_758 = puVar17;
    puStack_754 = puVar7;
  }
  puStack_780 = (undefined4 *)0x0;
  puStack_77c = (undefined4 *)0x0;
  if ((puVar7 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar7), cVar10 != '\0')) {
    puStack_780 = puVar17;
    puStack_77c = puVar7;
  }
  fn_82249E98(&puStack_738,&puStack_780,&puStack_758,&puStack_760,&puStack_768,&puStack_770);
  puStack_780 = (undefined4 *)0x0;
  puStack_77c = (undefined4 *)0x0;
  if ((puVar6 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar6), cVar10 != '\0')) {
    puStack_780 = puVar15;
    puStack_77c = puVar6;
  }
  puStack_758 = (undefined4 *)0x0;
  puStack_754 = (undefined4 *)0x0;
  if ((puVar6 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar6), cVar10 != '\0')) {
    puStack_758 = puVar15;
    puStack_754 = puVar6;
  }
  puStack_760 = (undefined4 *)0x0;
  puStack_75c = (undefined4 *)0x0;
  if ((puVar5 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar5), cVar10 != '\0')) {
    puStack_760 = puVar5 + 3;
    puStack_75c = puVar5;
  }
  puStack_768 = (undefined4 *)0x0;
  puStack_764 = (undefined4 *)0x0;
  if ((puVar4 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar4), cVar10 != '\0')) {
    puStack_768 = puVar4 + 3;
    puStack_764 = puVar4;
  }
  puStack_770 = (undefined4 *)0x0;
  puStack_76c = (undefined4 *)0x0;
  if ((puVar1 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar1), cVar10 != '\0')) {
    puStack_770 = puVar12;
    puStack_76c = puVar1;
  }
  puStack_778 = (undefined4 *)0x0;
  puStack_774 = (undefined4 *)0x0;
  if ((puVar6 != (undefined4 *)0x0) && (cVar10 = fn_8223AAC0(puVar6), cVar10 != '\0')) {
    puStack_778 = puVar15;
    puStack_774 = puVar6;
  }
  fn_8224A150(&puStack_730,&puStack_778,&puStack_770,&puStack_768,&puStack_760,&puStack_758,
                    &puStack_780);
  puStack_778 = (undefined4 *)0x0;
  puStack_774 = (undefined4 *)0x0;
  iVar13 = 0;
  if ((iStack_72c != 0) && (cVar10 = fn_8223AAC0(iStack_72c), cVar10 != '\0')) {
    puStack_774 = (undefined4 *)iStack_72c;
    puStack_778 = puStack_730;
    iVar13 = iStack_72c;
  }
  puStack_780 = (undefined4 *)0x0;
  puStack_77c = (undefined4 *)0x0;
  iVar14 = 0;
  if ((iStack_734 != 0) && (cVar10 = fn_8223AAC0(iStack_734), cVar10 != '\0')) {
    puStack_77c = (undefined4 *)iStack_734;
    puStack_780 = puStack_738;
    iVar14 = iStack_734;
  }
  uVar2 = fn_8265C9E0(0x2c);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = fn_8224B4B8(uVar2,&puStack_780,&puStack_778);
  }
  *(undefined4 *)(iVar8 + 0x14) = 0;
  iVar16 = 0;
  *(undefined4 *)(iVar8 + 0x18) = 0x40c;
  iVar11 = 0;
  if (iVar8 != 0) {
    cVar10 = fn_8223AAC0(iVar8);
    iVar16 = 0;
    if (cVar10 != '\0') {
      iVar16 = iVar8 + 0xc;
      iVar11 = iVar8;
    }
    fn_822315A0(iVar8);
  }
  if (iVar14 != 0) {
    fn_822315A0(iVar14);
  }
  if (iVar13 != 0) {
    fn_822315A0(iVar13);
  }
  fn_82230110(auStack_640,0xffffffff8219786c);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 6;
  uVar9 = fn_828EA268(6);
  *(undefined4 *)(param_1 + 0x100) = uVar9;
  fn_82897DF8(param_1 + 0x9c,param_1,auStack_640);
  fn_82230300(auStack_640,1,0);
  fn_82230110(auStack_6e0,0xffffffff82197880);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 6;
  uVar9 = fn_828EA268(6);
  *(undefined4 *)(param_1 + 0x98) = uVar9;
  fn_82897DF8(param_1 + 0x34,param_1,auStack_6e0);
  fn_82230300(auStack_6e0,1,0);
  fn_82230110(auStack_620,0xffffffff82197894);
  iVar13 = 0;
  iVar14 = 0;
  if ((iVar11 != 0) && (cVar10 = fn_8223AAC0(iVar11), cVar10 != '\0')) {
    iVar13 = iVar16;
    iVar14 = iVar11;
  }
  fn_824C1BF8(auStack_4c0);
  iVar8 = 0;
  iVar16 = 0;
  if ((iVar14 != 0) && (cVar10 = fn_8223AAC0(iVar14), cVar10 != '\0')) {
    iVar8 = iVar13;
    iVar16 = iVar14;
  }
  iVar13 = *(int *)(param_1 + 0x160);
  *(int *)(param_1 + 0x160) = iVar16;
  *(int *)(param_1 + 0x15c) = iVar8;
  if (iVar13 != 0) {
    fn_822315A0();
  }
  *(undefined4 *)(param_1 + 0x114) = 0x428;
  *(undefined4 *)(param_1 + 0x10c) = 7;
  uVar3 = fn_8265C9E0(0x428);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar3,0,0x428);
}

