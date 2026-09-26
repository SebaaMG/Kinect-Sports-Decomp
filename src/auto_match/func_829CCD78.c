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
#define TBLr 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_70;
extern int fn_829C8598();
extern int fn_829C9A70();
extern int fn_829C9BB0();
extern int fn_829CA188();
extern int fn_829CCBC0();
extern int fn_82F68CC0();
extern int iRam832154b8;
extern int iRam832154bc;
extern int iRam832154e0;
extern int iRam832154fc;
extern int iRam83215514;
extern int iRam83215530;
extern int iRam832155d0;
extern int iRam832155e0;
extern unsigned int iStack_10c;
extern unsigned int iStack_7c;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_83214FF4;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215058;
extern unsigned int lbl_8321505C;
extern unsigned int lbl_832154A8;
extern unsigned int lbl_832154B0;
extern unsigned int lbl_832154D4;
extern unsigned int lbl_832155B0;
extern unsigned int lbl_832155B4;
extern unsigned int lbl_832155E4;
extern unsigned int register0x0000000c;
extern unsigned int uRam83215488;
extern unsigned int uRam8321549c;
extern unsigned int uRam832154c0;
extern unsigned int uRam832154c8;
extern unsigned int uRam832154d8;
extern unsigned int uRam832154dc;
extern unsigned int uRam832154e4;
extern unsigned int uRam832154e8;
extern unsigned int uRam832154f8;
extern unsigned int uRam83215500;
extern unsigned int uRam83215504;
extern unsigned int uRam83215508;
extern unsigned int uRam8321550c;
extern unsigned int uRam83215510;
extern unsigned int uRam83215518;
extern unsigned int uRam8321551c;
extern unsigned int uRam8321552c;
extern unsigned int uRam83215534;
extern unsigned int uRam83215538;
extern unsigned int uRam8321553c;
extern unsigned int uRam83215540;
extern unsigned int uRam832155ac;
extern unsigned int uRam832155b8;
extern unsigned int uRam832155bc;
extern unsigned int uRam832155c0;
extern unsigned int uRam832155cc;
extern unsigned int uRam832155dc;
extern unsigned int uRam832155e8;
extern unsigned int uStack_110;
extern unsigned int uStack_54;
extern unsigned int uStack_80;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829CCD78(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uStack_110;
  int iStack_10c;
  undefined4 auStack_100 [8];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 auStack_70 [7];
  uint uStack_54;
  
  uVar6 = 0;
  uStack_80 = 0;
  iStack_7c = 0;
  uVar5 = 0;
  uVar7 = 0x829ccdac;
  puStack_d0 = (undefined1 *)register0x0000000c;
  iVar2 = (*(code *)lbl_8315C3E8)(&uStack_80);
  if (((iVar2 < 0) || (iStack_7c == 0)) || (iStack_7c == 1)) goto LAB_829ccff0;
  if (iStack_7c == 2) {
LAB_829ccfec:
    uVar5 = 1;
    uVar6 = 1;
  }
  else {
    if (iStack_7c != 3) {
      if (iStack_7c == 4) {
        uVar5 = 1;
        if (param_1 == 0) goto LAB_829ccff0;
        auStack_70[0] = 0x1b;
        uStack_54 = lbl_83215000 >> 5 & 2 | 1;
        iVar2 = fn_829C9BB0(auStack_70);
        fn_829C8598();
        if ((iVar2 < 0) || (iVar2 = fn_829CCBC0(), iVar2 < 0)) goto LAB_829ccff0;
        lbl_832155B0 = 0;
        uVar6 = KfAcquireSpinLock(0xffffffff832155b0);
        iVar2 = fn_829C9A70(0xffffffff83215488);
        if ((-1 < iVar2) && (lbl_832154A8 != 0)) {
          uRam8321550c = 0;
          iRam832154e0 = 0x153c32 - lbl_832154B0;
          uRam832154dc = 0x196e6a;
          uRam832154e4 = uRam83215488;
          iRam832154fc = iRam832154b8 + iRam832154bc + 0x7f2812;
          uRam832154e8 = uRam83215488;
          uRam832154d8 = lbl_83214FF4;
          uRam83215518 = uRam8321549c;
          uRam83215504 = 3;
          uRam83215508 = 0xfba105aa;
          uRam8321551c = uRam8321549c;
          lbl_832154D4 = 1;
          uRam832155ac = 0;
          uRam832154c8 = 0;
          uRam832154c0 = 0x196e6a;
          uRam8321553c = 0xfba105aa;
          uRam83215538 = 3;
          lbl_832155E4 = 0;
          uRam83215510 = 0x196e6a;
          uRam832155cc = 0x196e6a;
          uRam83215540 = 0;
          uRam832155bc = 0;
          lbl_832155B4 = 0;
          uRam832155b8 = 0;
          uRam832155c0 = 0;
          uRam832155e8 = 0;
          uRam832155dc = 0x196e6a;
          iRam83215514 = iRam832154e0;
          iRam83215530 = iRam832154fc;
          iRam832155d0 = iRam832154e0;
          iRam832155e0 = iRam832154e0;
          fn_82F68CC0(0xffffffff83215544,0xffffffff832154dc,0x34,0,0,0,0);
          puVar3 = (undefined4 *)0x83215574;
          puVar4 = (undefined4 *)0x8321550c;
          lVar8 = 0xd;
          do {
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = *puVar4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          iVar2 = fn_829CA188(2,uRam83215488,0,uRam8321549c,0,0xffffffff83215488);
          sync(0);
          if (-1 < iVar2) {
            uVar1 = TBLr;
            uRam832154f8 = (undefined4)uVar1;
            uRam83215500 = 2;
            uRam83215534 = 2;
            uRam8321552c = uRam832154f8;
          }
        }
        KfReleaseSpinLock(0xffffffff832155b0,uVar6);
        goto LAB_829ccfec;
      }
      if (iStack_7c != 5) {
        if ((iStack_7c == 6) || (iStack_7c == 7)) {
          uStack_e0 = 0xffffffff83215000;
          uStack_110 = 0;
          iStack_10c = 0;
          uStack_d8 = uVar7;
          uVar6 = (*(code *)lbl_8315C3E8)(&uStack_110);
          if (((-1 < (int)uVar6) && ((iStack_10c != 0 && (iStack_10c != 1)))) &&
             (((iStack_10c == 2 || (iStack_10c == 3)) ||
              (((iStack_10c != 4 && (iStack_10c != 5)) && ((iStack_10c == 6 || (iStack_10c == 7)))))
              ))) {
            auStack_100[0] = 2;
            lbl_8321505C = 0;
            uVar6 = fn_829C9BB0(auStack_100);
          }
          return uVar6;
        }
        goto LAB_829ccff0;
      }
    }
    uVar5 = 1;
  }
LAB_829ccff0:
  lbl_83215058 = uVar5;
  lbl_8321505C = (int)uVar6;
  sync(0);
  return uVar6;
}

