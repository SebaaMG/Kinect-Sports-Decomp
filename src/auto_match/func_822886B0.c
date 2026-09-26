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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822869F0();
extern int fn_82288558();
extern int fn_822888F0();
extern int fn_82486958();
extern int fn_82517978();
extern int fn_82672C20();
extern unsigned int iStack_78;
extern unsigned int iStack_88;
extern unsigned int iStack_b4;
extern unsigned int lbl_831CEE88;
extern unsigned int uStack_98;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_822886B0(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  int iStack_88;
  undefined1 auStack_80 [8];
  int iStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [64];
  
  iVar7 = 1;
  fn_822888F0(&uStack_b8,param_1);
  if (*(int *)(param_1 + 0x604) == 1) goto LAB_82288700;
  uVar5 = *(uint *)(*(int *)(param_1 + 0x11f0) + 0x18b8);
  if (uVar5 == 0) {
LAB_822886f8:
    uVar5 = *(uint *)(param_1 + 0x6a0);
  }
  else {
    if (uVar5 != 1) {
      if (2 < uVar5) goto LAB_82288700;
      goto LAB_822886f8;
    }
    uVar5 = (uint)LZCOUNT(*(int *)(param_1 + 0x6a0) + -2) >> 5;
  }
  iVar7 = uVar5 + 1;
LAB_82288700:
  fn_822869F0(param_1);
  piVar4 = (int *)(param_1 + 0x6a8);
  iVar8 = 0;
  lVar10 = 4;
  do {
    if (*piVar4 != 4) {
      iVar8 = iVar8 + 1;
    }
    piVar4 = piVar4 + 0x10;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar3 = fn_82486958(*(undefined4 *)(param_1 + 0x11f0));
  iVar1 = *(int *)(param_1 + 0x608);
  if (((iVar1 == 9) || (iVar1 == 2)) || (bVar2 = 0, iVar1 == 3)) {
    bVar2 = 1;
  }
  puVar6 = (undefined4 *)((int)&uStack_c0 + 4);
  lVar10 = 7;
  do {
    puVar6[3] = 0;
    puVar6 = puVar6 + 4;
    *puVar6 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  fn_82273CD8(auStack_b0,3);
  uStack_c0 = (longlong)iVar7;
  iVar7 = *(int *)(param_1 + 0x604);
  dStack_a8 = (double)uStack_c0;
  fn_82273CD8(auStack_a0,2);
  uStack_98 = iVar7 == 1;
  fn_82273CD8(auStack_90,5);
  iStack_88 = param_1 + 2000;
  fn_82273CD8(auStack_80,5);
  iStack_78 = param_1 + 0x9d0;
  fn_82273CD8(auStack_70,3);
  uStack_c0 = (longlong)iVar8;
  dStack_68 = (double)uStack_c0;
  fn_82273CD8(auStack_60,3);
  uStack_c0 = (longlong)(iVar3 + 1);
  dStack_58 = (double)uStack_c0;
  fn_82273CD8(auStack_50,3);
  uStack_c0 = (longlong)(int)(uint)bVar2;
  dStack_48 = (double)uStack_c0;
  fn_82672C20(uStack_b8,
                    (&lbl_831CEE88)
                    [*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8)],auStack_b0,7);
  uStack_c0 = 0;
  fn_82517978(&uStack_c0,uStack_b8,iStack_b4,0);
  fn_82288558(param_1,&uStack_c0);
  puVar9 = auStack_40;
  lVar10 = 6;
  do {
    puVar9 = puVar9 + -0x10;
    fn_82273C88(puVar9);
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  if (iStack_b4 != 0) {
    fn_822315A0(iStack_b4);
  }
  return;
}

