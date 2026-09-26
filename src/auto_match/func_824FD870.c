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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int fStack_40;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82230040();
extern int fn_8234E6D8();
extern int fn_824A1C90();
extern int fn_8250DA48();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_8265C9E0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2038();
extern int fn_827F2D60();
extern int fn_827F2DD0();
extern int fn_827F3070();
extern int fn_827F46E8();
extern int fn_827F4818();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821C21B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_44;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;


void fn_824FD870(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar6;
  ulonglong uVar3;
  undefined4 uVar7;
  undefined8 uVar4;
  longlong lVar5;
  undefined **ppuStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined4 *puStack_80;
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_44;
  float fStack_40;
  
  bVar2 = false;
  ppuStack_b0 = (undefined **)0x0;
  if (*(int *)(param_1 + 0xb6c) == 0) {
    if (*(int *)(param_1 + 0x18c) == 0) {
      uVar6 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x4c))();
      *(undefined4 *)(param_1 + 0x18c) = uVar6;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x18c);
    uVar1 = *(undefined4 *)(param_1 + 0x8c0);
    uVar3 = fn_827F04B0(0x18c);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_827F1148(uVar3,uVar6,0);
    }
    *(undefined4 *)(param_1 + 0xb70) = uVar7;
    fn_827F2DD0((double)lbl_8218E8E8,uVar6);
    uVar3 = fn_827F2038(0x110);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_827F3070(uVar3,uVar6);
    }
    *(undefined4 *)(param_1 + 0xb74) = uVar6;
    uVar3 = fn_8265C9E0(0xe0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_824A1C90(uVar3,uVar1,*(undefined4 *)(param_1 + 0xb60));
    }
    *(undefined4 *)(param_1 + 0xb78) = uVar6;
    fn_827F4818(auStack_70,0,*(undefined4 *)(param_1 + 0xb74));
    fStack_40 = lbl_8218E8E8;
    uStack_44 = 1;
    fStack_60 = lbl_821CA460;
    fStack_5c = lbl_821CA460;
    uVar3 = fn_827F46E8(0x118);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_8250DA48(uVar3,auStack_70);
    }
    *(undefined4 *)(param_1 + 0xb7c) = uVar6;
    fn_827F0FB8(*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),0);
    fn_827F0FB8(*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb78),0);
    fn_827F0FB8(*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb7c),1);
    if (*(int *)(param_1 + 0xb90) != 0) {
      fn_8255F880(&uStack_a0,param_1 + 0xb90);
      uVar4 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,&uStack_a0);
      fn_827F2D60((double)lbl_8218E8E8,*(undefined4 *)(param_1 + 0xb74),uVar4);
    }
    lVar5 = fn_8265C9E0(0x70);
    if (lVar5 == 0) {
      uVar3 = ZEXT48(ppuStack_b0);
      uVar6 = 0;
    }
    else {
      bVar2 = true;
      uVar3 = fn_8251F720(param_1 + 0xb8c,0);
      uStack_9c = *(undefined4 *)(param_1 + 0xb7c);
      puStack_80 = (undefined4 *)fn_8265C9E0(0x14);
      if (puStack_80 == (undefined4 *)0x0) {
        uStack_ac = 0;
        ppuStack_b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_b0);
      }
      *puStack_80 = &lbl_821C21B4;
      puStack_80[1] = uStack_a0;
      puStack_80[2] = uStack_9c;
      puStack_80[3] = uStack_98;
      puStack_80[4] = uStack_94;
      uVar6 = fn_8234E6D8(lVar5,auStack_90,uVar1,uVar3);
    }
    *(undefined4 *)(param_1 + 0xb84) = uVar6;
    if ((bVar2) && ((uVar3 & 0xffffffff) != 0)) {
      fn_8251FA58(uVar3);
    }
    *(undefined4 *)(param_1 + 0xb6c) = 1;
  }
  return;
}

