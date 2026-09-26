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
extern int fn_8263C620();
extern int fn_8263C7D8();
extern int fn_8263C7F0();
extern int fn_82A98408();
extern int fn_82F691F0();
extern unsigned int lbl_832112F4;
extern unsigned int lbl_832112F8;
extern unsigned int lbl_832112FC;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_828518B8(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [96];
  
  if (lbl_832112F4 == 0) {
    uVar1 = fn_8263C7F0(4,4,1,1,0,0x18280186,1,3);
    lbl_832112F4 = (int)uVar1;
    fn_8263C7D8(uVar1,0,&uStack_80,0,0);
    puVar2 = &uStack_64;
    lVar4 = 0x10;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0xffff00ff;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uStack_64 = 4;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 4;
    fn_82A98408(uStack_7c,
                      (longlong)((int)uStack_80 >> 2) +
                      (ulonglong)((int)uStack_80 < 0 && (uStack_80 & 3) != 0),4,0,auStack_60,0x10,
                      &uStack_70,4);
    fn_8263C620(lbl_832112F4,0);
    uVar1 = fn_8263C7F0(4,4,1,1,0,0x18280186,1,3);
    lbl_832112F8 = (undefined4)uVar1;
    fn_8263C7D8(uVar1,0,&uStack_80,0,0);
    puVar3 = (undefined8 *)&uStack_68;
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fn_82A98408(uStack_7c,
                      (longlong)((int)uStack_80 >> 2) +
                      (ulonglong)((int)uStack_80 < 0 && (uStack_80 & 3) != 0),4,0,auStack_60,0x10,
                      &uStack_70,4);
    fn_8263C620(lbl_832112F8,0);
    uVar1 = fn_8263C7F0(4,4,1,1,0,0x18280186,1,3);
    lbl_832112FC = (undefined4)uVar1;
    fn_8263C7D8(uVar1,0,&uStack_80,0,0);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uStack_7c,0xff,uStack_80 << 2);
  }
  return;
}

