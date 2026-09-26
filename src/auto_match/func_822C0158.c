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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822B6A58();
extern int fn_822B7068();
extern int fn_822B91F8();
extern int fn_822B9390();
extern int fn_82320900();
extern int fn_82326128();
extern int fn_824CCD80();
extern int fn_825275B0();
extern int fn_8265C9E0();
extern int fn_827F57E8();
extern int fn_8288B760();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821ACD84;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_822C0158(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined8 in_r0;
  uint uVar6;
  undefined8 uVar5;
  undefined4 *puVar7;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x118);
  uVar2 = *(undefined4 *)(iVar4 + 0x114);
  if (param_2 == 0) {
    fn_827F57E8((double)lbl_821CC160,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x108) =
         *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10c);
    fn_82230110(auStack_60,0xffffffff821accc4);
    fn_82326128(uVar2,auStack_60);
    fn_82230300(auStack_60,1,0);
    piVar3 = *(int **)(iVar4 + 0x7dc);
    if (piVar3[9] != 0) {
      fn_822B7068(*piVar3,piVar3[1]);
      fn_822B9390(*(undefined4 *)(*piVar3 + 0x11c),piVar3[1],*(undefined2 *)(piVar3 + 4));
      piVar3[9] = 0;
    }
    piVar3 = *(int **)(iVar4 + 0x7e4);
    if (piVar3[9] != 0) {
      fn_822B7068(*piVar3,piVar3[1]);
      fn_822B9390(*(undefined4 *)(*piVar3 + 0x11c),piVar3[1],*(undefined2 *)(piVar3 + 4));
      piVar3[9] = 0;
    }
  }
  else {
    fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x108) =
         *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10c);
    fn_82230110(auStack_80,0xffffffff821accb4);
    fn_82326128(uVar2,auStack_80);
    fn_82230300(auStack_80,1,0);
    piVar3 = *(int **)(iVar4 + 0x7dc);
    if (piVar3[9] != 1) {
      fn_825275B0(piVar3[1]);
      fn_822B91F8(*(undefined4 *)(*piVar3 + 0x11c),*(undefined4 *)(*piVar3 + 0x14),piVar3[1],
                        *(undefined2 *)(piVar3 + 4));
      piVar3[9] = 1;
    }
    piVar3 = *(int **)(iVar4 + 0x7e4);
    if (piVar3[9] != 1) {
      fn_825275B0(piVar3[1]);
      fn_822B91F8(*(undefined4 *)(*piVar3 + 0x11c),*(undefined4 *)(*piVar3 + 0x14),piVar3[1],
                        *(undefined2 *)(piVar3 + 4));
      piVar3[9] = 1;
    }
  }
  if (*(int *)(iVar4 + 0x24) != 0) {
    if (*(int *)(iVar4 + 0x168) == 0) {
      uVar6 = *(uint *)(iVar4 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if (uVar6 != 0) {
      uVar5 = fn_824CCD80(*(undefined4 *)(iVar4 + 0x24));
      goto LAB_822c0340;
    }
  }
  uVar5 = 2;
LAB_822c0340:
  loadVectorLeftIndexed128(in_r0,param_1 + 0x21c);
  loadVectorRightIndexed128(0xc,param_1 + 0x21c);
  fn_822B6A58(auStack_90,param_1,3);
  puVar7 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821ACD84;
    if (puVar7 + 4 != (undefined4 *)0x0) {
      fn_82320900(puVar7 + 4,param_1 + 0x218,param_1 + 0x228,*(undefined4 *)(iVar4 + 0x7ec),
                        uVar5);
    }
  }
  iVar1 = *(int *)(iVar4 + 0x7d8);
  *(undefined4 **)(iVar4 + 0x7d8) = puVar7;
  *(undefined4 **)(iVar4 + 0x7d4) = puVar7 + 4;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

