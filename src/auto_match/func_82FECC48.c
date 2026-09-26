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
extern int fn_82A1EFC0();
extern int fn_82FA4EB8();
extern int fn_82FA5060();
extern int fn_82FEBDE8();
extern int fn_82FEEDD8();
extern int fn_82FEF128();
extern int fn_83013530();
extern int fn_8301EB08();
extern int fn_830239C0();
extern int fn_83023AB0();
extern int fn_83025478();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC774;
extern unsigned int lbl_832643B0;
extern unsigned int lbl_832643D4;
extern unsigned int lbl_832643DC;
extern unsigned int lbl_83264400;
extern unsigned int lbl_83265044;
extern unsigned int uRam831bc778;
extern unsigned int uRam831bc77c;
extern unsigned int uRam831bc780;
extern unsigned int uRam831bc784;
extern unsigned int uRam831bc788;
extern unsigned int uRam831bc78c;
extern unsigned int uRam831bc790;
extern unsigned int uRam83264404;
extern unsigned int uRam83264408;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82FECC48(void)

{
  char cVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar4;
  longlong lVar5;
  
  cVar3 = fn_82FA4EB8();
  if ((cVar3 != '\0') && (lbl_83265044 != 0)) {
    uVar1 = fn_82FEBDE8();
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    lbl_832643DC = 0;
    if ((lbl_832643B0 != 0) ||
       (lbl_832643B0 = fn_830239C0(0xffffffff832643b4), lbl_832643B0 != 0)) {
      uVar1 = fn_8301EB08();
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar1 = fn_83013530();
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar1 = fn_82FEEDD8(0xffffffff831bc794,1000,1000,lbl_831BC770);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uRam83264408 = 0;
      lbl_83264400 = 0;
      uRam831bc790 = lbl_831BC770;
      uRam831bc784 = 0xffffffff;
      uRam83264404 = 0;
      uRam831bc788 = 0;
      uRam831bc780 = 0;
      uRam831bc78c = 0;
      uRam831bc77c = 0;
      lbl_831BC774 = 0;
      uRam831bc778 = 0;
      fn_83025478();
      uVar2 = fn_82FA5060(lbl_831BC770,0x160);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82FEF128();
        lbl_832643D4 = (undefined4)uVar2;
        uVar4 = *(uint *)(lbl_832643B0 + 0x28);
        uVar1 = fn_83023AB0(uVar2,uVar4);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        uVar2 = 0;
        for (; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
          uVar2 = uVar2 + 1;
        }
        lVar5 = (uVar2 & 0xfffff) << 0xc;
        uVar2 = fn_82FA5060(lbl_831BC770,lVar5);
        if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82A1EFC0(uVar2,0,lVar5);
        }
      }
      return 0x34;
    }
  }
  return 2;
}

