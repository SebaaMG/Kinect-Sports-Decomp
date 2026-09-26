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
extern unsigned int *auStack_250;
extern unsigned int *auStack_450;
extern unsigned int *auStack_650;
extern unsigned int *auStack_660;
extern unsigned int *auStack_670;
extern unsigned int *auStack_680;
extern unsigned int *auStack_690;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822902E8();
extern int fn_82290340();
extern int fn_82290458();
extern int fn_82290528();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82528BF8();
extern int fn_8265CA20();
extern int fn_82672C20();
extern int fn_82672F30();
extern unsigned int iStack_6bc;
extern unsigned int iStack_6c0;
extern unsigned int lbl_8327672C;
extern unsigned int uStack_698;
extern unsigned int uStack_69c;
extern unsigned int uStack_6a0;
extern unsigned int uStack_6a8;
extern unsigned int uStack_6ac;
extern unsigned int uStack_6b0;
extern unsigned int uStack_6b8;


void fn_8228EDD0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iStack_6c0;
  int iStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  uint auStack_690 [4];
  undefined1 auStack_680 [8];
  undefined1 *puStack_678;
  undefined1 auStack_670 [8];
  undefined1 *puStack_668;
  undefined1 auStack_660 [8];
  undefined1 *puStack_658;
  undefined1 auStack_650 [512];
  undefined1 auStack_450 [512];
  undefined1 auStack_250 [592];
  
  uVar1 = fn_8251F720(param_4,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    iStack_6c0 = 0;
    iStack_6bc = 0;
    uVar2 = (uVar2 & 0xffffffff) >> 5;
    uStack_6b8 = 0;
    uVar6 = uVar2 * 0x20 + uVar1;
    fn_82290340(&iStack_6c0,uVar2 << 1);
    auStack_690[0] = 0;
    auStack_690[1] = 0;
    auStack_690[2] = 0;
    fn_82290528(auStack_690,uVar2);
    uVar5 = (ulonglong)auStack_690[0];
    uVar2 = uVar5;
    uVar7 = uVar1;
    if ((uVar1 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      do {
        fn_82528BF8(*(undefined4 *)(param_1 + 0x4c),uVar7,uVar2,0x100,0,0);
        uStack_6a8 = (undefined4)uVar7;
        uStack_6b0 = 0;
        uStack_6ac = 4;
        fn_82290458(&iStack_6c0,&uStack_6b0);
        uStack_698 = (undefined4)uVar2;
        uStack_6a0 = 0;
        uStack_69c = 5;
        fn_82290458(&iStack_6c0,&uStack_6a0);
        fn_82273C88(&uStack_6a0);
        fn_82273C88(&uStack_6b0);
        uVar7 = uVar7 + 0x20;
        uVar2 = uVar2 + 0x200;
      } while ((uVar7 & 0xffffffff) < (uVar6 & 0xffffffff));
    }
    cVar3 = fn_82672F30(*(undefined4 *)(param_1 + 0x14),0xffffffff821a9a2c,0,iStack_6c0,
                              iStack_6bc - iStack_6c0 >> 4,1);
    if (cVar3 != '\0') {
      fn_82672C20(*(undefined4 *)(param_1 + 0x14),0xffffffff821a9a50,0,0);
    }
    if (uVar5 != 0) {
      fn_8265CA20(uVar5);
    }
    fn_822902E8(&iStack_6c0);
  }
  puVar4 = auStack_690 + 1;
  lVar9 = 3;
  do {
    puVar4[3] = 0;
    puVar4 = puVar4 + 4;
    *puVar4 = 0;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  fn_82528BF8(lbl_8327672C,0xffffffff821a99c8,auStack_450,0x100,0,1);
  fn_82273CD8(auStack_680,5);
  puStack_678 = auStack_450;
  fn_82528BF8(*(undefined4 *)(param_1 + 0x4c),param_2,auStack_650,0x100,0,0);
  fn_82273CD8(auStack_670,5);
  puStack_668 = auStack_650;
  fn_82528BF8(*(undefined4 *)(param_1 + 0x4c),param_3,auStack_250,0x100,0,0);
  fn_82273CD8(auStack_660,5);
  puStack_658 = auStack_250;
  fn_82672C20(*(undefined4 *)(param_1 + 0x14),0xffffffff821a9a70,auStack_680,3);
  fn_82528BF8(lbl_8327672C,0xffffffff821a99ac,auStack_650,0x100,0,1);
  fn_82273CD8(auStack_680,5);
  puStack_678 = auStack_650;
  fn_82672C20(*(undefined4 *)(param_1 + 0x14),0xffffffff821a9a98,auStack_680,1);
  puVar8 = auStack_650;
  lVar9 = 2;
  do {
    puVar8 = puVar8 + -0x10;
    fn_82273C88(puVar8);
    lVar9 = lVar9 + -1;
  } while (-1 < lVar9);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return;
}

