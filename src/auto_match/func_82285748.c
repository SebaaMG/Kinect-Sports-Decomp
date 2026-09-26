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
extern unsigned int *auStack_10a8;
extern unsigned int *auStack_1958;
extern unsigned int *auStack_2158;
extern unsigned int *auStack_2a08;
extern unsigned int *auStack_3208;
extern unsigned int *auStack_3280;
extern unsigned int *auStack_8a8;
extern int fn_822315A0();
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_82273D38();
extern int fn_822769E8();
extern int fn_82279CA0();
extern int fn_8228C370();
extern int fn_82290F40();
extern int fn_82520158();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F63108();
extern unsigned int iStack_324c;
extern unsigned int iStack_326c;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821A8DB4;
extern unsigned int lbl_821A8DCC;
extern unsigned int lbl_821A8DE4;
extern unsigned int lbl_821A8DFC;
extern unsigned int lbl_83265988;
extern unsigned int lbl_8327672C;


void fn_82285748(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar2;
  char *pcVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_3280 [16];
  undefined **ppuStack_3270;
  int iStack_326c;
  undefined ***pppuStack_3260;
  undefined **ppuStack_3250;
  int iStack_324c;
  undefined ***pppuStack_3240;
  undefined4 *puStack_3230;
  undefined4 *puStack_322c;
  undefined1 auStack_3208 [2048];
  undefined1 auStack_2a08 [2184];
  undefined4 *puStack_2180;
  undefined4 *puStack_217c;
  undefined1 auStack_2158 [2048];
  undefined1 auStack_1958 [2184];
  undefined4 *puStack_10d0;
  undefined4 *puStack_10cc;
  undefined1 auStack_10a8 [2048];
  undefined1 auStack_8a8 [2216];
  
  uVar9 = 0xffffffff82196582;
  if (param_2 == 0) {
    fn_82279CA0(param_1,1);
    fn_82520158(0xffffffff821a8cac,auStack_3280,0);
    fn_8226D2A8(&puStack_10d0);
    puVar3 = (undefined4 *)fn_8265C9E0(0x180);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 1;
      *puVar3 = &lbl_821A8D8C;
      puVar3[2] = 1;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        pppuStack_3260 = &ppuStack_3270;
        ppuStack_3270 = &lbl_821A8DCC;
        iStack_326c = param_1;
        fn_8228C370(puVar3 + 4,auStack_3280,&ppuStack_3270);
      }
    }
    puStack_10d0 = puVar3 + 4;
    bVar1 = puStack_10cc != (undefined4 *)0x0;
    puStack_10cc = puVar3;
    if (bVar1) {
      fn_822315A0();
    }
    uVar9 = 0xffffffff821a8cbc;
    fn_82528BF8(lbl_8327672C,0xffffffff821a8cc8,auStack_10a8,0x400,0,1);
    fn_82528BF8(lbl_8327672C,0xffffffff821a8cdc,auStack_8a8,0x400,0,1);
    uVar4 = fn_8226D388(&puStack_10d0);
    *(undefined4 *)(param_1 + 0x148) = uVar4;
    puVar3 = puStack_10cc;
  }
  else {
    if (param_2 == 1) {
      iVar6 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
      if ((*(byte *)(iVar6 + 8) & 0x10) == 0) {
        bVar8 = *(byte *)(iVar6 + 8) | 0x10;
      }
      else {
        bVar8 = *(byte *)(iVar6 + 8) & 0xef;
      }
      *(byte *)(iVar6 + 8) = bVar8;
      uVar9 = 0xffffffff821a8c9c;
      if (*(int *)(param_1 + 0x160) != 0) {
        if (*(int *)(param_1 + 0x160) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(code **)(**(int **)(param_1 + 0x160) + 4))();
      }
      goto LAB_82285b90;
    }
    if (param_2 < 3) {
      fn_82279CA0(param_1,1);
      fn_82520158(0xffffffff821a8d38,auStack_3280,0);
      fn_8226D2A8(&puStack_3230);
      puVar3 = (undefined4 *)fn_8265C9E0(0x188);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 1;
        *puVar3 = &lbl_821A8D8C;
        puVar3[2] = 1;
        if (puVar3 + 4 != (undefined4 *)0x0) {
          pppuStack_3260 = &ppuStack_3270;
          ppuStack_3270 = &lbl_821A8DFC;
          iStack_326c = param_1;
          fn_82290F40(puVar3 + 4,auStack_3280,&ppuStack_3270);
        }
      }
      puStack_3230 = puVar3 + 4;
      bVar1 = puStack_322c != (undefined4 *)0x0;
      puStack_322c = puVar3;
      if (bVar1) {
        fn_822315A0();
      }
      fn_82528BF8(lbl_8327672C,0xffffffff821a8d44,auStack_3208,0x400,0,1);
      fn_82528BF8(lbl_8327672C,0xffffffff821a8d50,auStack_2a08,0x400,0,1);
      uVar4 = fn_8226D388(&puStack_3230);
      *(undefined4 *)(param_1 + 0x144) = uVar4;
      uVar9 = 0xffffffff821a8d5c;
      puVar3 = puStack_322c;
    }
    else {
      if (param_2 == 3) {
        fn_82279CA0(param_1,1);
        fn_82520158(0xffffffff821a8d6c,auStack_3280,0);
        uVar2 = fn_8265C9E0(0x48);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar4 = 0;
        }
        else {
          pppuStack_3240 = &ppuStack_3250;
          ppuStack_3250 = &lbl_821A8DB4;
          iStack_324c = param_1;
          uVar4 = fn_822769E8(uVar2,auStack_3280,&ppuStack_3250);
        }
        *(undefined4 *)(param_1 + 0x168) = uVar4;
        uVar9 = 0xffffffff821a8d7c;
        goto LAB_82285b90;
      }
      if (4 < param_2) goto LAB_82285b90;
      fn_82279CA0(param_1,1);
      fn_82520158(0xffffffff821a8cf0,auStack_3280,0);
      fn_8226D2A8(&puStack_2180);
      puVar3 = (undefined4 *)fn_8265C9E0(0x178);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 1;
        *puVar3 = &lbl_821A8D8C;
        puVar3[2] = 1;
        if (puVar3 + 4 != (undefined4 *)0x0) {
          pppuStack_3260 = &ppuStack_3270;
          ppuStack_3270 = &lbl_821A8DE4;
          iStack_326c = param_1;
          fn_82273D38(puVar3 + 4,auStack_3280,&ppuStack_3270);
        }
      }
      puStack_2180 = puVar3 + 4;
      bVar1 = puStack_217c != (undefined4 *)0x0;
      puStack_217c = puVar3;
      if (bVar1) {
        fn_822315A0();
      }
      uVar9 = 0xffffffff821a8d00;
      fn_82528BF8(lbl_8327672C,0xffffffff821a8d0c,auStack_2158,0x400,0,1);
      fn_82528BF8(lbl_8327672C,0xffffffff821a8d24,auStack_1958,0x400,0,1);
      uVar4 = fn_8226D388(&puStack_2180);
      *(undefined4 *)(param_1 + 0x14c) = uVar4;
      puVar3 = puStack_217c;
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    fn_822315A0(puVar3);
  }
LAB_82285b90:
  dVar10 = (double)*(float *)(param_1 + 0x174);
  uVar4 = *(undefined4 *)(param_1 + 0x178);
  pcVar5 = (char *)fn_8225F670();
  if (((*pcVar5 != '\0') && (iVar6 = fn_8225FDE0(0x67,1), iVar6 == 0)) &&
     (cVar7 = fn_82E1CAD0(0x67), cVar7 != '\0')) {
    fn_82E1CC60(dVar10,0xffffffff821a7a04);
    fn_82E1CB08(0xffffffff821a7a18,uVar9,0);
    fn_82E1CB88(0xffffffff821a7a28,uVar4);
    fn_82E1CCA8();
  }
  *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
  return;
}

