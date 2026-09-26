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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82528BF8();
extern int fn_82672C20();
extern unsigned int lbl_831E5F58;
extern unsigned int uStack_a0;


void fn_824A0808(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uStack_a0;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined1 auStack_70 [112];
  
  puVar1 = (undefined4 *)((int)&uStack_a0 + 4);
  lVar5 = 2;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar2 = 1;
  ppuVar3 = &lbl_831E5F58;
  do {
    fn_82528BF8(*(undefined4 *)(param_1 + 0x58),*ppuVar3,auStack_70,0x20,0,0);
    fn_82273CD8(auStack_90,3);
    uStack_a0 = (longlong)iVar2;
    dStack_88 = (double)uStack_a0;
    fn_82273CD8(auStack_80,5);
    puStack_78 = auStack_70;
    fn_82672C20(*(undefined4 *)(param_1 + 0x50),0xffffffff821a89ac,auStack_90,2);
    ppuVar3 = ppuVar3 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)ppuVar3 < -0x7ce1a098);
  puVar4 = auStack_70;
  lVar5 = 1;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  return;
}

