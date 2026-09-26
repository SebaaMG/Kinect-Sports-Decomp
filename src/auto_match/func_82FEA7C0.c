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
extern int fn_82A1F160();
extern int fn_82FA5060();
extern int fn_82FEAD98();
extern int fn_82FEAE60();
extern int fn_82FF46D8();
extern int fn_82FF55A8();
extern int fn_82FF55E8();
extern int fn_82FF61E8();
extern int fn_82FF63D8();
extern int fn_82FFA070();
extern int fn_82FFDD28();
extern int fn_83013CB8();
extern int fn_83013D48();
extern int fn_83015220();
extern int fn_83015F68();
extern int fn_830163C0();
extern int fn_830173A0();
extern int fn_83018FD8();
extern int fn_8301A678();
extern int fn_8301A6B8();
extern int fn_8301B528();
extern int fn_8301B560();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_832642F0;
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;
extern unsigned int lbl_832642FC;
extern unsigned int *lbl_83264300;
extern unsigned int lbl_83264304;
extern unsigned int lbl_83264308;
extern unsigned int lbl_8326459C;
extern unsigned int uRam83264310;
extern unsigned int uRam83264314;


undefined8 fn_82FEA7C0(int param_1)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lStack_40;
  longlong lStack_38;
  
  fn_82A1F160(&lStack_40);
  lStack_38 = lStack_40 / 1000;
  lbl_8326459C = (float)lStack_38;
  if (lbl_832642E0 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x194c);
    if (iVar3 == 0) {
      uVar1 = 0x34;
      lbl_832642E0 = 0;
      goto LAB_82feabd4;
    }
    lbl_832642E0 = fn_82FEAE60();
    if (lbl_832642E0 == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    fn_83015F68();
  }
  uVar1 = fn_830163C0(0xffffffff83264368,0x14d,0x14d,0xff);
  if ((int)uVar1 != 1) goto LAB_82feabd4;
  if (lbl_832642FC == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x73c);
    if (iVar3 == 0) {
      uVar1 = 0x34;
      lbl_832642FC = 0;
      goto LAB_82feabd4;
    }
    lbl_832642FC = fn_830173A0();
    if (lbl_832642FC == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_83018FD8();
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_83264300 == (undefined4 *)0x0) {
    lbl_83264300 = (undefined4 *)fn_82FA5060(lbl_831BC768,0xcc);
    if (lbl_83264300 == (undefined4 *)0x0) {
      uVar1 = 0x34;
      lbl_83264300 = (undefined4 *)0x0;
      goto LAB_82feabd4;
    }
    *lbl_83264300 = &lbl_8217D040;
    lbl_83264300[1] = 0xffffffff;
    lbl_83264300[0x21] = 0;
    lbl_83264300[0x22] = 0;
    lbl_83264300[0x23] = 0;
    lbl_83264300[0x24] = 0;
    lbl_83264300[0x27] = 0;
    lbl_83264300[0x28] = 0;
    lbl_83264300[0x29] = 0;
    lbl_83264300[0x2a] = 0;
    lbl_83264300[0x2b] = 0;
    lbl_83264300[0x2c] = 0;
    lbl_83264300[0x2d] = 0;
    lbl_83264300[0x2e] = 0;
    lbl_83264300[0x2f] = 0;
    lbl_83264300[0x30] = 0;
    lbl_83264300[0x31] = 0;
    lbl_83264300[0x32] = 0;
    uVar1 = fn_83015220();
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_832642F0 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x4cc);
    if (iVar3 == 0) {
      lbl_832642F0 = 0;
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    lbl_832642F0 = fn_82FFA070();
    if (lbl_832642F0 == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_82FFDD28();
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_83264304 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0xa8);
    if (iVar3 == 0) {
      lbl_83264304 = 0;
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    lbl_83264304 = fn_82FEAD98();
    if (lbl_83264304 == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_82FF46D8();
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_83264308 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x38);
    if (iVar3 == 0) {
      lbl_83264308 = 0;
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    lbl_83264308 = fn_83013D48();
    if (lbl_83264308 == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_83013CB8();
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_832642EC == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x330);
    if (iVar3 == 0) {
      lbl_832642EC = 0;
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    lbl_832642EC = fn_8301A678();
    if (lbl_832642EC == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_8301A6B8();
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_832642F4 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x20);
    if (iVar3 == 0) {
      lbl_832642F4 = 0;
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar2 = fn_82FF55A8();
    lbl_832642F4 = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_82FF55E8(uVar2,uRam83264314);
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_832642F8 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x14);
    if (iVar3 == 0) {
      lbl_832642F8 = 0;
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar2 = fn_8301B528();
    lbl_832642F8 = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      uVar1 = 0x34;
      goto LAB_82feabd4;
    }
    uVar1 = fn_8301B560(uVar2,uRam83264310);
    if ((int)uVar1 != 1) goto LAB_82feabd4;
  }
  if (lbl_832642E8 == 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,0x84);
    if (iVar3 == 0) {
      lbl_832642E8 = 0;
      uVar1 = 0x34;
    }
    else {
      lbl_832642E8 = fn_82FF63D8();
      if (lbl_832642E8 == 0) {
        uVar1 = 0x34;
      }
      else {
        uVar1 = fn_82FF61E8();
      }
    }
  }
LAB_82feabd4:
  if (param_1 != 0) {
    puVar4 = (undefined4 *)(param_1 + -4);
    puVar5 = &lbl_83264308;
    lVar6 = 8;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return uVar1;
}

