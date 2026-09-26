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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_320;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230040();
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_82383300();
extern int fn_823E9A40();
extern int fn_823EB188();
extern int fn_823EB240();
extern int fn_823EB2D0();
extern int fn_823EB380();
extern int fn_823EB430();
extern int fn_823EB4E0();
extern int fn_823EB588();
extern int fn_823EB618();
extern int fn_823EB6B8();
extern int fn_823EB788();
extern int fn_823EB840();
extern int fn_823EB920();
extern int fn_823EB9E0();
extern int fn_823EBB00();
extern int fn_823EBC08();
extern int fn_823EBD08();
extern int fn_823EBE00();
extern int fn_823EBF18();
extern int fn_823EC050();
extern int fn_823EC160();
extern int fn_823EC208();
extern int fn_823EC368();
extern int fn_823F2E90();
extern int fn_823F2F20();
extern int fn_823F2FB8();
extern int fn_823F3050();
extern int fn_823F30E8();
extern int fn_823F3180();
extern int fn_823F3218();
extern int fn_823F32B0();
extern int fn_823F3348();
extern int fn_823F33D8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B745C;
extern unsigned int lbl_821B7474;
extern unsigned int lbl_821B748C;
extern unsigned int lbl_821B74A4;
extern unsigned int lbl_821B74BC;
extern unsigned int lbl_821B74D4;
extern unsigned int lbl_821B74EC;
extern unsigned int lbl_821B7504;
extern unsigned int lbl_821B751C;
extern unsigned int lbl_821B7534;
extern unsigned int lbl_821B754C;
extern unsigned int lbl_821B7564;
extern unsigned int lbl_821B757C;
extern unsigned int lbl_821B7594;
extern unsigned int lbl_821B75AC;
extern unsigned int lbl_821B75C4;
extern unsigned int lbl_821B75DC;
extern unsigned int lbl_821B75F4;
extern unsigned int lbl_821B760C;
extern unsigned int lbl_821B7624;
extern unsigned int lbl_821B763C;
extern unsigned int lbl_821B7654;
extern unsigned int lbl_821B766C;
extern unsigned int lbl_821B7684;
extern unsigned int lbl_821B769C;
extern unsigned int lbl_821B76B4;
extern unsigned int lbl_821B76CC;
extern unsigned int lbl_821B76E4;
extern unsigned int lbl_821B7744;
extern unsigned int lbl_821B7774;
extern unsigned int lbl_821B77A4;
extern unsigned int lbl_821B77EC;
extern unsigned int lbl_821B7804;
extern unsigned int lbl_823E9A60;
extern unsigned int uStack_33c;
extern unsigned int uStack_35c;
extern unsigned int uStack_37c;
extern unsigned int uStack_394;
extern unsigned int uStack_3b4;
extern unsigned int uStack_3d4;
extern unsigned int uStack_3f4;
extern unsigned int uStack_414;
extern unsigned int uStack_434;
extern unsigned int uStack_444;
extern unsigned int uStack_44c;
extern unsigned int uStack_454;
extern unsigned int uStack_45c;
extern unsigned int uStack_464;
extern unsigned int uStack_46c;
extern unsigned int uStack_474;
extern unsigned int uStack_47c;
extern unsigned int uStack_484;
extern unsigned int uStack_48c;
extern unsigned int uStack_494;
extern unsigned int uStack_49c;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4cc;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4ec;
extern unsigned int uStack_4f4;
extern unsigned int uStack_538;
extern unsigned int uStack_540;
extern unsigned int uStack_548;
extern unsigned int uStack_54c;
extern unsigned int uStack_558;
extern unsigned int uStack_560;
extern unsigned int uStack_564;
extern unsigned int uStack_568;
extern unsigned int uStack_570;
extern unsigned int uStack_574;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * fn_823E9A88(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uStack_574;
  undefined8 uStack_570;
  uint uStack_568;
  undefined4 uStack_564;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined **ppuStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined8 uStack_540;
  uint uStack_538;
  undefined **ppuStack_4f8;
  undefined4 uStack_4f4;
  undefined **ppuStack_4f0;
  undefined4 uStack_4ec;
  undefined **ppuStack_4e8;
  undefined4 uStack_4e4;
  undefined **ppuStack_4e0;
  undefined4 uStack_4dc;
  undefined **ppuStack_4d8;
  undefined4 uStack_4d4;
  undefined **ppuStack_4d0;
  undefined4 uStack_4cc;
  undefined **ppuStack_4c8;
  undefined4 uStack_4c4;
  undefined **ppuStack_4c0;
  undefined4 uStack_4bc;
  undefined **ppuStack_4b8;
  undefined4 uStack_4b4;
  undefined **ppuStack_4b0;
  undefined4 uStack_4ac;
  undefined **ppuStack_4a8;
  undefined4 uStack_4a4;
  undefined **ppuStack_4a0;
  undefined4 uStack_49c;
  undefined **ppuStack_498;
  undefined4 uStack_494;
  undefined **ppuStack_490;
  undefined4 uStack_48c;
  undefined **ppuStack_488;
  undefined4 uStack_484;
  undefined **ppuStack_480;
  undefined4 uStack_47c;
  undefined **ppuStack_478;
  undefined4 uStack_474;
  undefined **ppuStack_470;
  undefined4 uStack_46c;
  undefined **ppuStack_468;
  undefined4 uStack_464;
  undefined **ppuStack_460;
  undefined4 uStack_45c;
  undefined **ppuStack_458;
  undefined4 uStack_454;
  undefined **ppuStack_450;
  undefined4 uStack_44c;
  undefined **ppuStack_448;
  undefined4 uStack_444;
  undefined **ppuStack_440;
  code *pcStack_43c;
  uint *puStack_438;
  undefined4 uStack_434;
  undefined ***pppuStack_430;
  undefined **ppuStack_420;
  code *pcStack_41c;
  uint *puStack_418;
  undefined4 uStack_414;
  undefined ***pppuStack_410;
  undefined **ppuStack_400;
  code *pcStack_3fc;
  uint *puStack_3f8;
  undefined4 uStack_3f4;
  undefined ***pppuStack_3f0;
  undefined **ppuStack_3e0;
  code *pcStack_3dc;
  uint *puStack_3d8;
  undefined4 uStack_3d4;
  undefined ***pppuStack_3d0;
  undefined **ppuStack_3c0;
  code *pcStack_3bc;
  uint *puStack_3b8;
  undefined4 uStack_3b4;
  undefined ***pppuStack_3b0;
  undefined **ppuStack_3a0;
  code *pcStack_39c;
  uint *puStack_398;
  undefined4 uStack_394;
  undefined ***pppuStack_390;
  undefined **ppuStack_380;
  uint uStack_37c;
  undefined ***pppuStack_370;
  undefined **ppuStack_360;
  undefined8 uStack_35c;
  undefined ***pppuStack_350;
  undefined **ppuStack_340;
  uint uStack_33c;
  undefined ***pppuStack_330;
  undefined1 auStack_320 [16];
  undefined4 *puStack_310;
  undefined1 auStack_300 [16];
  undefined4 *puStack_2f0;
  undefined1 auStack_2e0 [16];
  undefined4 *puStack_2d0;
  undefined1 auStack_2c0 [16];
  undefined4 *puStack_2b0;
  undefined1 auStack_2a0 [16];
  undefined4 *puStack_290;
  undefined1 auStack_280 [16];
  undefined4 *puStack_270;
  undefined1 auStack_260 [16];
  undefined4 *puStack_250;
  undefined1 auStack_240 [16];
  undefined4 *puStack_230;
  undefined1 auStack_220 [16];
  undefined4 *puStack_210;
  undefined1 auStack_200 [16];
  undefined4 *puStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined4 *puStack_1d0;
  undefined1 auStack_1c0 [16];
  undefined4 *puStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined4 *puStack_190;
  undefined1 auStack_180 [16];
  undefined4 *puStack_170;
  undefined1 auStack_160 [16];
  undefined4 *puStack_150;
  undefined1 auStack_140 [16];
  undefined4 *puStack_130;
  undefined1 auStack_120 [16];
  undefined4 *puStack_110;
  undefined1 auStack_100 [16];
  undefined4 *puStack_f0;
  undefined1 auStack_e0 [16];
  undefined4 *puStack_d0;
  undefined1 auStack_c0 [16];
  undefined4 *puStack_b0;
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  undefined1 auStack_60 [16];
  undefined4 *puStack_50;
  undefined1 auStack_40 [16];
  undefined4 *puStack_30;
  
  uVar1 = (((U64)(uStack_570) >> 0) & 0xFFFFFFFF);
  *param_1 = param_2;
  param_1[1] = param_3;
  uStack_570 = CONCAT44(fn_823EB788,param_1);
  puStack_210 = (undefined4 *)fn_8265C9E0(0x14);
  if (puStack_210 == (undefined4 *)0x0) {
    uStack_54c = 0;
    ppuStack_550 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_550);
  }
  *puStack_210 = &lbl_821B745C;
  puStack_210[1] = uVar1;
  puStack_210[2] = (((U64)(uStack_570) >> 32) & 0xFFFFFFFF);
  puStack_210[3] = uStack_568;
  puStack_210[4] = uStack_564;
  fn_82329730((ulonglong)*param_1 + 0x618,auStack_220);
  fn_82359C18(auStack_220);
  uStack_570 = 0x823cc9f000000000;
  uStack_540 = 0x823cc9f000000000;
  uStack_538 = param_3;
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_464 = 0;
    ppuStack_468 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_468);
  }
  *puVar2 = &lbl_821B7474;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x20);
  puStack_30 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0x618,auStack_40);
  fn_82359C18(auStack_40);
  uStack_570 = CONCAT44(fn_823EB840,param_1);
  puStack_2d0 = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_2d0 == (undefined4 *)0x0) {
    uStack_474 = 0;
    ppuStack_478 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_478);
  }
  puVar2 = &uStack_574;
  *puStack_2d0 = &lbl_821B748C;
  lVar4 = 5;
  puVar3 = puStack_2d0;
  do {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82329730((ulonglong)*param_1 + 0x690,auStack_2e0);
  fn_82359C18(auStack_2e0);
  uStack_570 = 0x823cd8f800000000;
  uStack_540 = 0x823cd8f800000000;
  uStack_538 = param_3;
  puVar2 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_484 = 0;
    ppuStack_488 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_488);
  }
  *puVar2 = &lbl_821B74A4;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x28);
  puStack_d0 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0x690,auStack_e0);
  fn_82359C18(auStack_e0);
  pppuStack_370 = &ppuStack_380;
  ppuStack_380 = &lbl_821B74BC;
  uStack_37c = param_3;
  fn_82383300((ulonglong)*param_1 + 0x710,&ppuStack_380);
  fn_82359C18(&ppuStack_380);
  pppuStack_330 = &ppuStack_340;
  ppuStack_340 = &lbl_821B74D4;
  uStack_33c = param_3;
  fn_823F2E90((ulonglong)*param_1 + 0x710,&ppuStack_340);
  fn_82359C18(&ppuStack_340);
  uStack_540 = CONCAT44(fn_823EB9E0,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_494 = 0;
    ppuStack_498 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_498);
  }
  *puVar2 = &lbl_821B74EC;
  fn_82F68CC0(puVar2 + 1,&uStack_540,0x24);
  puStack_290 = puVar2;
  fn_82329730((ulonglong)*param_1 + 0x890,auStack_2a0);
  fn_82359C18(auStack_2a0);
  uStack_570 = 0x823cdeb000000000;
  uStack_540 = 0x823cdeb000000000;
  uStack_538 = param_1[1];
  puVar2 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4a4 = 0;
    ppuStack_4a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4a8);
  }
  *puVar2 = &lbl_821B7504;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x48);
  puStack_150 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0x890,auStack_160);
  fn_82359C18(auStack_160);
  uStack_570 = CONCAT44(fn_823EBB00,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4b4 = 0;
    ppuStack_4b8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4b8);
  }
  *puVar2 = &lbl_821B751C;
  fn_82F68CC0(puVar2 + 1,&uStack_570,0x1c);
  puStack_250 = puVar2;
  fn_82329730((ulonglong)*param_1 + 0x930,auStack_260);
  fn_82359C18(auStack_260);
  uStack_540 = CONCAT44(fn_823EBC08,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4c4 = 0;
    ppuStack_4c8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4c8);
  }
  *puVar2 = &lbl_821B7534;
  fn_82F68CC0(puVar2 + 1,&uStack_540,0x20);
  puStack_50 = puVar2;
  fn_82329730((ulonglong)*param_1 + 0x9c0,auStack_60);
  fn_82359C18(auStack_60);
  uStack_570 = 0x823cfce800000000;
  uStack_538 = param_1[1];
  uStack_540 = 0x823cfce800000000;
  puVar2 = (undefined4 *)fn_8265C9E0(0x48);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4d4 = 0;
    ppuStack_4d8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4d8);
  }
  *puVar2 = &lbl_821B754C;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x40);
  puStack_310 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0x9c0,auStack_320);
  fn_82359C18(auStack_320);
  uStack_540 = CONCAT44(fn_823EBD08,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4e4 = 0;
    ppuStack_4e8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4e8);
  }
  *puVar2 = &lbl_821B7564;
  fn_82F68CC0(puVar2 + 1,&uStack_540,0x24);
  puStack_110 = puVar2;
  fn_82329730((ulonglong)*param_1 + 0xa58,auStack_120);
  fn_82359C18(auStack_120);
  uStack_570 = 0x823d014000000000;
  uStack_538 = param_1[1];
  uStack_540 = 0x823d014000000000;
  puVar2 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4ec = 0;
    ppuStack_4f0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4f0);
  }
  *puVar2 = &lbl_821B757C;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x48);
  puStack_1d0 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0xa58,auStack_1e0);
  fn_82359C18(auStack_1e0);
  uStack_540 = CONCAT44(fn_823EBE00,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_49c = 0;
    ppuStack_4a0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4a0);
  }
  *puVar2 = &lbl_821B7594;
  fn_82F68CC0(puVar2 + 1,&uStack_540,0x24);
  puStack_90 = puVar2;
  fn_82329730((ulonglong)*param_1 + 0xaf8,auStack_a0);
  fn_82359C18(auStack_a0);
  uStack_570 = 0x823cd17800000000;
  uStack_538 = param_1[1];
  uStack_540 = 0x823cd17800000000;
  puVar2 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4f4 = 0;
    ppuStack_4f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4f8);
  }
  *puVar2 = &lbl_821B75AC;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x48);
  puStack_190 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0xaf8,auStack_1a0);
  fn_82359C18(auStack_1a0);
  uStack_540 = CONCAT44(fn_823EBF18,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_4ac = 0;
    ppuStack_4b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_4b0);
  }
  *puVar2 = &lbl_821B75C4;
  fn_82F68CC0(puVar2 + 1,&uStack_540,0x24);
  puStack_2f0 = puVar2;
  fn_82329730((ulonglong)*param_1 + 0xb98,auStack_300);
  fn_82359C18(auStack_300);
  uStack_570 = 0x823cd69800000000;
  uStack_538 = param_1[1];
  uStack_540 = 0x823cd69800000000;
  puVar2 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_47c = 0;
    ppuStack_480 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_480);
  }
  *puVar2 = &lbl_821B75DC;
  fn_82F68CC0(puVar2 + 2,&uStack_540,0x48);
  puStack_2b0 = puVar2;
  fn_823F2F20((ulonglong)*param_1 + 0xb98,auStack_2c0);
  fn_82359C18(auStack_2c0);
  uStack_540 = CONCAT44(fn_823EC050,param_1);
  puVar2 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &lbl_821B75F4;
    fn_82F68CC0(puVar2 + 1,&uStack_540,0x20);
    puStack_270 = puVar2;
    fn_82329730((ulonglong)*param_1 + 0xc38,auStack_280);
    fn_82359C18(auStack_280);
    uStack_570 = 0x823ccba800000000;
    uStack_538 = param_1[1];
    uStack_540 = 0x823ccba800000000;
    puVar2 = (undefined4 *)fn_8265C9E0(0x48);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_44c = 0;
      ppuStack_450 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_450);
    }
    *puVar2 = &lbl_821B760C;
    fn_82F68CC0(puVar2 + 2,&uStack_540,0x40);
    puStack_230 = puVar2;
    fn_823F2F20((ulonglong)*param_1 + 0xc38,auStack_240);
    fn_82359C18(auStack_240);
    pppuStack_3f0 = &ppuStack_400;
    uStack_3f4 = uStack_548;
    ppuStack_400 = &lbl_821B7624;
    pcStack_3fc = fn_823EC160;
    puStack_3f8 = param_1;
    fn_82329730((ulonglong)*param_1 + 0xcd0,&ppuStack_400);
    fn_82359C18(&ppuStack_400);
    uStack_570 = 0x823d0dd800000000;
    uStack_568 = param_1[1];
    puVar2 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_4cc = 0;
      ppuStack_4d0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_4d0);
    }
    *puVar2 = &lbl_821B763C;
    fn_82F68CC0(puVar2 + 2,&uStack_570,0x18);
    puStack_1f0 = puVar2;
    fn_823F2F20((ulonglong)*param_1 + 0xcd0,auStack_200);
    fn_82359C18(auStack_200);
    pppuStack_3d0 = &ppuStack_3e0;
    uStack_3d4 = uStack_548;
    ppuStack_3e0 = &lbl_821B7654;
    pcStack_3dc = fn_823EC208;
    puStack_3d8 = param_1;
    fn_82329730((ulonglong)*param_1 + 0xd40,&ppuStack_3e0);
    fn_82359C18(&ppuStack_3e0);
    uStack_570 = 0x823d113800000000;
    uStack_568 = param_1[1];
    puVar2 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_48c = 0;
      ppuStack_490 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_490);
    }
    *puVar2 = &lbl_821B766C;
    fn_82F68CC0(puVar2 + 2,&uStack_570,0x18);
    puStack_1b0 = puVar2;
    fn_823F2F20((ulonglong)*param_1 + 0xd40,auStack_1c0);
    fn_82359C18(auStack_1c0);
    uStack_570 = CONCAT44(fn_823EC368,param_1);
    puVar2 = (undefined4 *)fn_8265C9E0(0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_4dc = 0;
      ppuStack_4e0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_4e0);
    }
    *puVar2 = &lbl_821B7684;
    fn_82F68CC0(puVar2 + 1,&uStack_570,0x18);
    puStack_170 = puVar2;
    fn_82329730((ulonglong)*param_1 + 0xdb0,auStack_180);
    fn_82359C18(auStack_180);
    uStack_570 = 0x823d144000000000;
    uStack_538 = param_1[1];
    uStack_540 = 0x823d144000000000;
    puVar2 = (undefined4 *)fn_8265C9E0(0x38);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_46c = 0;
      ppuStack_470 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_470);
    }
    *puVar2 = &lbl_821B769C;
    fn_82F68CC0(puVar2 + 2,&uStack_540,0x30);
    puStack_130 = puVar2;
    fn_823F2F20((ulonglong)*param_1 + 0xdb0,auStack_140);
    fn_82359C18(auStack_140);
    uStack_570 = CONCAT44(fn_823E9A40,param_3 + 0x1520);
    puStack_f0 = (undefined4 *)fn_8265C9E0(0x14);
    if (puStack_f0 == (undefined4 *)0x0) {
      uStack_444 = 0;
      ppuStack_448 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_448);
    }
    *puStack_f0 = &lbl_821B76B4;
    puStack_f0[3] = uStack_568;
    puStack_f0[2] = (((U64)(uStack_570) >> 32) & 0xFFFFFFFF);
    puStack_f0[1] = uVar1;
    puStack_f0[4] = uStack_564;
    fn_82329730((ulonglong)*param_1 + 0x778,auStack_100);
    fn_82359C18(auStack_100);
    uStack_540 = CONCAT44(fn_823EB920,param_1);
    puVar2 = (undefined4 *)fn_8265C9E0(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      uStack_454 = 0;
      ppuStack_458 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_458);
    }
    *puVar2 = &lbl_821B76CC;
    fn_82F68CC0(puVar2 + 1,&uStack_540,0x24);
    puStack_b0 = puVar2;
    fn_82329730((ulonglong)*param_1 + 0x7f0,auStack_c0);
    fn_82359C18(auStack_c0);
    uStack_570 = CONCAT44(fn_823EB188,param_1);
    puStack_70 = (undefined4 *)fn_8265C9E0(0x18);
    if (puStack_70 != (undefined4 *)0x0) {
      puVar2 = &uStack_574;
      *puStack_70 = &lbl_821B76E4;
      lVar4 = 5;
      puVar3 = puStack_70;
      do {
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      fn_82329730((ulonglong)*param_1 + 0x28,auStack_80);
      fn_82359C18(auStack_80);
      uStack_570 = CONCAT44(&lbl_823E9A60,param_3 + 0x1630);
      fn_823F2FB8(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0x270,&uStack_570);
      fn_82359C18(&uStack_570);
      uStack_570 = CONCAT44(fn_823EB240,param_1);
      fn_823F3050(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0xa8,&uStack_570);
      fn_82359C18(&uStack_570);
      uStack_570 = CONCAT44(&lbl_823E9A60,param_3 + 0x15e0);
      fn_823F30E8(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0x2e8,&uStack_570);
      fn_82359C18(&uStack_570);
      pppuStack_3b0 = &ppuStack_3c0;
      uStack_3b4 = uStack_548;
      ppuStack_3c0 = &lbl_821B7744;
      pcStack_3bc = fn_823EB2D0;
      puStack_3b8 = param_1;
      fn_82329730((ulonglong)*param_1 + 0x120,&ppuStack_3c0);
      fn_82359C18(&ppuStack_3c0);
      uStack_570 = CONCAT44(&lbl_823E9A60,param_3 + 0x1540);
      fn_823F3180(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0x360,&uStack_570);
      fn_82359C18(&uStack_570);
      pppuStack_390 = &ppuStack_3a0;
      uStack_394 = uStack_548;
      ppuStack_3a0 = &lbl_821B7774;
      pcStack_39c = fn_823EB380;
      puStack_398 = param_1;
      fn_82329730((ulonglong)*param_1 + 400,&ppuStack_3a0);
      fn_82359C18(&ppuStack_3a0);
      uStack_570 = CONCAT44(&lbl_823E9A60,param_3 + 0x1590);
      fn_823F3218(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0x3d8,&uStack_570);
      fn_82359C18(&uStack_570);
      pppuStack_430 = &ppuStack_440;
      uStack_434 = uStack_548;
      ppuStack_440 = &lbl_821B77A4;
      pcStack_43c = fn_823EB430;
      puStack_438 = param_1;
      fn_82329730((ulonglong)*param_1 + 0x200,&ppuStack_440);
      fn_82359C18(&ppuStack_440);
      uStack_570 = CONCAT44(fn_823EB4E0,param_1);
      fn_823F32B0(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0x450,&uStack_570);
      fn_82359C18(&uStack_570);
      uStack_570 = 0x823d15a800000000;
      uStack_568 = param_1[1];
      fn_823F3348(&uStack_570,0x823d15a800000000,CONCAT44(uStack_568,uStack_564),uStack_560,
                      uStack_558);
      fn_823F2F20((ulonglong)*param_1 + 0x450,&uStack_570);
      fn_82359C18(&uStack_570);
      uStack_570 = CONCAT44(fn_823EB588,param_1);
      fn_823F3050(&uStack_570,uStack_570,CONCAT44(uStack_568,uStack_564));
      fn_82329730((ulonglong)*param_1 + 0x4c8,&uStack_570);
      fn_82359C18(&uStack_570);
      pppuStack_410 = &ppuStack_420;
      uStack_414 = uStack_548;
      ppuStack_420 = &lbl_821B77EC;
      pcStack_41c = fn_823EB618;
      puStack_418 = param_1;
      fn_82329730((ulonglong)*param_1 + 0x540,&ppuStack_420);
      fn_82359C18(&ppuStack_420);
      pppuStack_350 = &ppuStack_360;
      ppuStack_360 = &lbl_821B7804;
      uStack_570 = CONCAT44(fn_823EB6B8,param_1);
      uStack_35c = uStack_570;
      fn_82383300((ulonglong)*param_1 + 0x5b0,&ppuStack_360);
      fn_82359C18(&ppuStack_360);
      uStack_570 = 0x823d17a000000000;
      uStack_568 = param_1[1];
      fn_823F33D8(&uStack_570,0x823d17a000000000,CONCAT44(uStack_568,uStack_564));
      fn_823F2E90((ulonglong)*param_1 + 0x5b0,&uStack_570);
      fn_82359C18(&uStack_570);
      return param_1;
    }
    uStack_45c = 0;
    ppuStack_460 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_460);
  }
  uStack_4bc = 0;
  ppuStack_4c0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_4c0);
}

