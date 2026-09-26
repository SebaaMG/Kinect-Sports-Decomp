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
extern unsigned int *auStack_70;
extern int fn_82639358();
extern int fn_82648AC8();
extern int fn_82648AD0();
extern int fn_82648B08();
extern int fn_829CAD30();
extern int fn_829CDF10();
extern int iRam832154d8;
extern int iRam832155b8;
extern int iRam832155bc;
extern int iRam832155c0;
extern unsigned int iStack_68;
extern unsigned int lbl_83214FF4;
extern unsigned int lbl_8321501C;
extern unsigned int lbl_83215020;
extern unsigned int lbl_832154A8;
extern unsigned int lbl_832154D4;
extern unsigned int lbl_832155B4;
extern unsigned int lbl_832155E4;
extern unsigned int lbl_832178DC;
extern unsigned int uRam832154c0;
extern unsigned int uRam832154c4;
extern unsigned int uRam832154c8;
extern unsigned int uRam832154cc;
extern unsigned int uRam832154d0;
extern unsigned int uRam83215510;
extern unsigned int uRam832155e8;
extern unsigned int uStack_64;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829CE5D8(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar7;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 auStack_70 [2];
  int iStack_68;
  undefined4 uStack_64;
  
  uVar11 = (ulonglong)uRam832154c8;
  if ((iRam832154d8 == 0) || (bVar1 = true, lbl_83214FF4 != 0)) {
    bVar1 = false;
  }
  if (lbl_83215020 == 0) {
    auStack_70[0] = 0;
    iStack_68 = 0;
    uStack_64 = 0;
    fn_82648B08(lbl_8321501C,0,auStack_70);
    lbl_83215020 = iStack_68;
  }
  uVar4 = fn_82648AC8(lbl_8321501C);
  iVar7 = fn_82639358(lbl_8321501C);
  uVar5 = uVar4;
  if (iVar7 != -0x80000000) {
    uVar5 = fn_82648AD0(lbl_8321501C);
  }
  if (lbl_832154A8 == 0) goto LAB_829ce91c;
  uVar6 = KfAcquireSpinLock(0xffffffff832155b0);
  uVar9 = (ulonglong)uRam83215510;
  uVar12 = (uint)uVar5;
  if (bVar1) {
    lbl_832154D4 = 1;
LAB_829ce6c8:
    if ((uVar11 != 0) && ((uVar4 & 0xffffffff) != 0)) {
      uVar8 = uVar5 - uVar11;
      if ((uVar11 - uVar5 & 0xffffffff) < (uVar5 - uVar11 & 0xffffffff)) {
        uVar8 = uVar11 - uVar5;
      }
      trapWord(6,uVar9,0);
      uVar10 = uVar8 - (longlong)(int)((uVar8 & 0xffffffff) / uVar9) * (longlong)(int)uRam83215510;
      if (((uVar10 & 0xffffffff) < 50000) || ((uVar9 - 50000 & 0xffffffff) < (uVar10 & 0xffffffff)))
      {
        lbl_832154D4 = 0;
        uVar4 = uVar5;
        uRam832154cc = uVar12;
        uRam832154d0 = uVar12 - (uRam83215510 >> 1);
      }
      else {
        uRam832154d0 = uRam83215510 >> 1;
        trapWord(6,uVar9,0);
        uVar8 = uRam832154d0 + uVar8;
        uVar8 = uVar8 - (longlong)(int)((uVar8 & 0xffffffff) / (ulonglong)uRam83215510) *
                        (longlong)(int)uRam83215510;
        if (((uVar8 & 0xffffffff) < 50000) || ((uVar9 - 50000 & 0xffffffff) < (uVar8 & 0xffffffff)))
        {
          uVar4 = uVar5 - uRam832154d0;
          lbl_832154D4 = 0;
          uRam832154cc = (uint)uVar4;
          uRam832154d0 = uVar12;
        }
        else {
          uRam832154d0 = (int)uVar4 - uRam832154d0;
          uVar4 = (ulonglong)uRam832154cc;
          lbl_832154D4 = 0;
        }
      }
      goto LAB_829ce790;
    }
  }
  else {
    if (lbl_832154D4 != 0) goto LAB_829ce6c8;
    uVar4 = (ulonglong)uRam832154cc;
LAB_829ce790:
    if (bVar1) {
      uVar4 = ((ulonglong)lbl_832155E4 & 0x1fffffff) << 3;
      if (lbl_832155B4 == 0) {
        uVar4 = uVar4 ^ 8;
      }
      uVar9 = ((ulonglong)uRam832155e8 & 0x1fffffff) << 3;
      if (iRam832155b8 == 0) {
        uVar9 = uVar9 ^ 8;
      }
      fn_829CAD30(0xffffffff83215488,uVar4 - 0x7cdeaa3c,uVar9 - 0x7cdeaa2c);
      uVar9 = (ulonglong)uRam83215510;
      uVar4 = (ulonglong)uRam832154cc;
    }
    iRam832154d8 = lbl_83214FF4;
    if (iVar7 == -0x80000000) {
      uVar11 = uVar4;
    }
    uVar8 = uVar5 - uVar11;
    if ((uVar11 - uVar5 & 0xffffffff) < (uVar5 - uVar11 & 0xffffffff)) {
      uVar8 = uVar11 - uVar5;
    }
    uVar11 = uVar8 - (longlong)(int)((uVar8 & 0xffffffff) / uVar9) * (longlong)(int)uVar9;
    trapWord(6,uVar9,0);
    uVar2 = uVar12;
    uVar3 = uVar12;
    if ((199999 < (uVar11 & 0xffffffff)) && ((uVar11 & 0xffffffff) <= (uVar9 - 200000 & 0xffffffff))
       ) {
      uVar8 = (uVar9 >> 1) + uVar8;
      trapWord(6,uVar9,0);
      uVar8 = uVar8 - (longlong)(int)((uVar8 & 0xffffffff) / uVar9) * (longlong)(int)uVar9;
      uVar3 = uRam832154cc;
      if ((((uVar8 & 0xffffffff) < 200000) ||
          (uVar2 = uRam832154c0, (uVar9 - 200000 & 0xffffffff) < (uVar8 & 0xffffffff))) &&
         (uVar2 = (uint)uVar4, uRam832154d0 = uVar12,
         (uVar9 + (uVar9 & 0x3fffffff) * 4 & 0xffffffff) >> 2 < (uVar5 - uVar4 & 0xffffffff))) {
        uVar2 = uVar12;
        uVar3 = uVar12;
        uRam832154d0 = (uint)uVar4;
      }
    }
    uRam832154cc = uVar3;
    uRam832154c0 = uVar2;
    if ((lbl_832155B4 != 0) && (iRam832155bc == 0)) {
      iRam832155bc = lbl_832155B4;
      lbl_832155E4 = lbl_832155E4 ^ 1;
      lbl_832155B4 = 0;
    }
    uRam832154c4 = uVar12;
    if ((iRam832155b8 != 0) && (iRam832155c0 == 0)) {
      iRam832155c0 = iRam832155b8;
      uRam832155e8 = uRam832155e8 ^ 1;
      iRam832155b8 = 0;
    }
  }
  KfReleaseSpinLock(0xffffffff832155b0,uVar6);
LAB_829ce91c:
  if (lbl_832178DC == 0) {
    KeSetEvent(0xffffffff83215044,1,0);
  }
  else {
    fn_829CDF10();
  }
  return;
}

