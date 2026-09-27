extern char *pcRam8327f70c;
extern char *pcRam8327f718;
extern char *pcRam8327fbc4;
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
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82292828();
extern int fn_822933E8();
extern int fn_824E2730();
extern int fn_825121F0();
extern int fn_825123E8();
extern int fn_82520578();
extern int fn_825211A8();
extern int fn_82522838();
extern int fn_825228E0();
extern int fn_825269D0();
extern int fn_82528E38();
extern int fn_82530620();
extern int fn_82534950();
extern int fn_82545BD0();
extern int fn_82559228();
extern int fn_82561778();
extern int fn_82580410();
extern int fn_8258AD78();
extern int fn_8258AE00();
extern int fn_8258F340();
extern int fn_82593F40();
extern int fn_82598898();
extern int fn_82599020();
extern int fn_82599418();
extern int fn_82599F20();
extern int fn_825B71D0();
extern int fn_825B7290();
extern int fn_825B7780();
extern int fn_825B7CD8();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_827D9490();
extern int fn_827D94B0();
extern int fn_82811038();
extern int fn_82811058();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern int fn_82A1EF78();
extern int fn_82A1F250();
extern int fn_82BFE230();
extern int fn_82CE6FF0();
extern int iRam8326b4b8;
extern int iRam8327f798;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218ECBC;
extern unsigned int lbl_82190890;
extern unsigned int lbl_821C2D38;
extern unsigned int lbl_821C2D54;
extern unsigned int lbl_821C2D78;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832659C4;
extern unsigned int lbl_832659C8;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_83265A60;
extern unsigned int lbl_83265A64;
extern unsigned int lbl_832660D4;
extern unsigned int lbl_832660F8;
extern unsigned int lbl_832660FC;
extern unsigned int lbl_8326C2A8;
extern unsigned int lbl_8326C2AC;
extern unsigned int lbl_8326C2B0;
extern unsigned int lbl_8326FA08;
extern unsigned int lbl_8326FA0C;
extern unsigned int lbl_8326FA10;
extern unsigned int lbl_8326FA14;
extern unsigned int lbl_8326FA18;
extern unsigned int lbl_8326FA1C;
extern unsigned int lbl_832767B8;
extern unsigned int *lbl_832767CC;
extern unsigned int lbl_8327F7F0;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327FBD8;
extern unsigned int lbl_83281124;
extern unsigned int lbl_83296890;
extern unsigned int uRam832659d0;
extern unsigned int uRam832659d8;
extern unsigned int uRam832659dc;
extern unsigned int uRam832659e0;
extern unsigned int uRam832659e4;
extern unsigned int uRam832659e8;
extern unsigned int uRam832660f0;
extern unsigned int uRam832660f4;
extern unsigned int uRam8326af38;
extern unsigned int uRam8326c2b4;
extern unsigned int uRam8326c2bc;
extern unsigned int uRam8326c3a4;
extern unsigned int uRam8327f7f4;
extern unsigned int uRam8327f810;
extern unsigned int uRam8327fbd0;
extern unsigned int uRam8328113c;
extern unsigned int uStack_78;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82558278(void)

{
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar1;
  undefined8 *puVar6;
  double dVar7;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  struct { int first; int second; } stack_pair_80;

  undefined4 uStack_78;
  undefined1 auStack_70 [64];

  fn_824E2730();
  if (lbl_83281124 == (int *)0x0) {
    piVar2 = (int *)fn_8265C9E0(0xc);
    if (piVar2 == (int *)0x0) {
      lbl_83281124 = (int *)0x0;
    }
    else {
      piVar2[1] = 0;
      iVar3 = fn_8265C9E0(0x10);
      if (iVar3 == 0) {
        uStack_84 = 0;
        ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_88);
      }
      *piVar2 = iVar3;
      *(int *)iVar3 = iVar3;
      lbl_83281124 = piVar2;
      *(int *)(*piVar2 + 4) = *piVar2;
    }
  }
  fn_82545BD0();
  dVar7 = (double)lbl_821CA460;
  lbl_8326FA08 = lbl_821CA460;
  lbl_8326FA0C = lbl_821CA460;
  lbl_8326FA10 = lbl_821CA460;
  lbl_8326FA14 = lbl_821CA460;
  fn_825B71D0();
  if (((double)lbl_8326FA18 != dVar7) || ((double)lbl_8326FA1C != dVar7)) {
    lbl_8326FA18 = (float)dVar7;
    lbl_8326FA1C = (float)dVar7;
    fn_825B71D0();
  }
  uRam8327fbd0 = 0;
  lbl_8327FBD8 = 0;
  if (lbl_832767CC == (int *)0x0) {
    fn_82522838();
  }
  piVar2 = lbl_832767CC;
  if (*lbl_832767CC == 0) {
    fn_825228E0(lbl_832767CC);
  }
  puVar4 = (undefined4 *)fn_8265C9E0(4);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821C2D54;
  }
  fn_82811038(0xffffffff8320a3e0,puVar4);
  fn_827D9490(piVar2 + 0x41);
  puVar4 = (undefined4 *)fn_8265C9E0(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82811058(puVar4);
    *puVar4 = &lbl_821C2D78;
  }
  fn_82811038(0xffffffff832116f8,puVar4);
  puVar4 = (undefined4 *)fn_8265C9E0(4);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821C2D38;
  }
  fn_827D94B0(puVar4);
  puVar4 = &lbl_8327F7F0;
  puVar6 = (undefined8 *)&lbl_82190890;
  do {
    uVar5 = fn_82A1EF78(*puVar6);
    puVar4[4] = uVar5;
    puVar6 = puVar6 + 1;
    puVar4[2] = 0;
    puVar4 = puVar4 + 3;
    *puVar4 = 0;
  } while ((int)puVar6 < -0x7de6f760);
  uRam8327f810 = 0;
  uRam8327f7f4 = 1;
  fn_82528E38(0xffffffff8327f810,0x6001a,0xffffffff82528ed0,0);
  fn_82528E38(0xffffffff83265a68,9,0xffffffff82521410,0);
  lbl_83265A60 = 0;
  lbl_83265A64 = 0;
  lbl_83265A58 = 0;
  lbl_832660D4 = fn_825211A8;
  lbl_83265A5C = 0;
  uRam832660f0 = 0;
  lbl_832660F8 = 0;
  lbl_832660FC = 0;
  uRam832660f4 = lbl_821CC160;
  pcRam8327f718 = fn_82599020;
  pcRam8327f70c = fn_82599020;
  fn_82580410();
  iVar3 = 1;
  puVar4 = (undefined4 *)0x8326f5c4;
  do {
    if ((&lbl_8218ECBC)[iVar3] != '\0') {
      uVar1 = fn_82A1E0C0(0,0,0xffffffff8259a340,iVar3,4,puVar4 + 1);
      puVar4[2] = iVar3;
      *puVar4 = (int)uVar1;
      fn_82A1E508(uVar1,iVar3);
      fn_82A1E2C0(*puVar4);
    }
    puVar4 = puVar4 + 3;
    iVar3 = iVar3 + 1;
  } while ((int)puVar4 < -0x7cd90a00);
  uRam8326c3a4 = fn_82CE6FF0(0xffffffff8326c3b0);
  fn_82598898();
  fn_82BFE230(0,0xffffffff832961cc);
  fn_82599418();
  fn_82599F20();
  fn_825B7290();
  fn_825B7780();
  fn_825269D0(1,0);
  uStack_8c = fn_8265BF48(0xffffffff821c12a4,0);
  uStack_90 = fn_8265BF48(0xffffffff821c12dc,0);
  fn_8258AE00(&stack_pair_80.first,&uStack_90);
  if (stack_pair_80.second != 0) {
    fn_822315A0();
  }
  fn_8258AD78(&stack_pair_80.first,&uStack_8c);
  if (stack_pair_80.second != 0) {
    fn_822315A0();
  }
  puVar4 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    lbl_832767B8 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    fn_82520578(puVar4);
    lbl_832767B8 = puVar4;
  }
  uRam8326af38 = 0;
  puVar6 = &lbl_83296890;
  fn_82561778(0xffffffff83296960,0xffffffff821c3a0c,0);
  if (iRam8326b4b8 == 0) {
    *(undefined4 *)((int)puVar6 + 0x13c) = 0;
    *(undefined4 *)(puVar6 + 0x34) = 1;
  }
  *(undefined4 *)(puVar6 + 100) = 1;
  fn_82530620();
  pcRam8327fbc4 = "incubation";
  fn_82559228();
  fn_825B7CD8();
  lbl_8326C2B0 = 0;
  uRam8326c2b4 = 1;
  uRam8326c2bc = 0;
  lbl_8326C2AC = 0;
  fn_82593F40(3);
  fn_825123E8();
  uRam832659d8 = 0;
  uRam832659dc = 0;
  uRam832659e0 = 0;
  uRam832659e4 = 0;
  uRam832659e8 = 0;
  uRam832659d0 = fn_82A1EF78(1);
  lbl_832659D4 = 0;
  lbl_832659C4 = 0xfe;
  lbl_832659C8 = 0xfe;
  lbl_8326C2A8 = 0xffffffff;
  fn_825269D0(0x40,0);
  fn_825121F0(1);
  if (iRam8327f798 != 0) {
    fn_825269D0(0x46,0);
  }
  fn_82A1F250(0);
  uStack_8c = fn_8265BF48(0xffffffff821c511c,0);
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_78 = 0;
  fn_8258F340(&stack_pair_80.first,uRam8328113c);
  fn_82534950(&uStack_8c,&stack_pair_80.first);
  uVar1 = fn_82864988(auStack_70,0xffffffff821962a0);
  fn_82292828(lbl_8327F874,uVar1);
  fn_82864898(auStack_70);
  iVar3 = stack_pair_80.first;
  if (stack_pair_80.first != 0) {
    fn_822933E8(stack_pair_80.first,stack_pair_80.second);
    fn_8265CA20(iVar3);
  }
  return;
}
