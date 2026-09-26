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
extern unsigned int *auStack_50;
extern int fn_82522D98();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2DD0();
extern int fn_827F46E8();
extern int fn_827F5708();
extern int fn_827F59C0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82502538(int param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar6;
  longlong lVar2;
  undefined2 uVar7;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [80];
  
  fn_8255F880(auStack_50);
  uVar6 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_50);
  *(undefined4 *)(param_1 + 0xc88) = uVar6;
  fn_8255F880(auStack_50,param_3);
  uVar6 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_50);
  *(undefined4 *)(param_1 + 0xc8c) = uVar6;
  if (*(int *)(param_1 + 0xc64) == 0) {
    if (*(int *)(param_1 + 0x8c0) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x8c0) + 0x1b4))();
    }
                    /* WARNING: Subroutine does not return */
    fn_82522D98((lVar2 + 1U & 0x7fffffff) << 1);
  }
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502614:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502614;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0xe);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502664:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502664;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0x10);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825026b4:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825026b4;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0x12);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502704:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502704;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0xf);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502754:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502754;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0x11);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825027a4:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825027a4;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0x13);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825027f4:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825027f4;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(char *)(param_1 + 0xb77) == '\0') goto LAB_82502aa0;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502850:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502850;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,1);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825028a0:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825028a0;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,2);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825028f0:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825028f0;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,3);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502940:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502940;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,4);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502990:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502990;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,9);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_825029e0:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_825029e0;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0xb);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502a30:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502a30;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,8);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
  if (*(int *)(param_1 + 0x8c0) == 0) {
LAB_82502a80:
    uVar7 = 0xffff;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_82502a80;
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,10);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc60) * 2 + *(int *)(param_1 + 0xc64)) = uVar7;
  *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + 1;
LAB_82502aa0:
  if (*(int *)(param_1 + 0xc90) == 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0xc8c);
  }
  else {
    uVar3 = fn_827F46E8(0xe8);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_827F59C0((double)lbl_821CC160,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar3,0
                              ,*(undefined4 *)(param_1 + 0xc8c),*(undefined4 *)(param_1 + 0xc90),0);
    }
    *(int *)(param_1 + 0xc7c) = (int)uVar3;
  }
  uVar4 = fn_827F46E8(0xe8);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827F59C0((double)lbl_821CA460,(double)lbl_821CA460,(double)lbl_821CC160,uVar4,0,
                            *(undefined4 *)(param_1 + 0xb68),uVar3,0);
  }
  *(undefined4 *)(param_1 + 0xc78) = uVar6;
  uVar3 = fn_827F46E8(0xe8);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827F59C0((double)lbl_821CC160,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar3,0,
                            *(undefined4 *)(param_1 + 0xb68),*(undefined4 *)(param_1 + 0xc88),0);
  }
  *(undefined4 *)(param_1 + 0xc80) = uVar6;
  uVar3 = fn_827F46E8(0xe8);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_827F59C0((double)lbl_821CC160,(double)lbl_821CA460,(double)lbl_8218E8E8,uVar3,0,
                            *(undefined4 *)(param_1 + 0xc80),*(undefined4 *)(param_1 + 0xc78),0);
  }
  *(undefined4 *)(param_1 + 0xc84) = uVar6;
  uVar3 = fn_827F04B0(0x18c);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_827F1148(uVar3,*(undefined4 *)(param_1 + 0xc68),0);
  }
  *(int *)(param_1 + 0xc6c) = (int)uVar5;
  fn_827F0FB8(uVar5,*(undefined4 *)(param_1 + 0xc8c),0);
  fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(undefined4 *)(param_1 + 0xc88),0);
  if (*(int *)(param_1 + 0xc90) != 0) {
    fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(int *)(param_1 + 0xc90),0);
  }
  fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(undefined4 *)(param_1 + 0xb68),0);
  fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(undefined4 *)(param_1 + 0xc80),0);
  fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(undefined4 *)(param_1 + 0xc78),0);
  if (*(int *)(param_1 + 0xc7c) != 0) {
    fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(int *)(param_1 + 0xc7c),0);
  }
  fn_827F0FB8(*(undefined4 *)(param_1 + 0xc6c),*(undefined4 *)(param_1 + 0xc84),1);
  fn_827F2DD0((double)lbl_8218E8E8,*(undefined4 *)(param_1 + 0xc68),
                    *(undefined4 *)(param_1 + 0xc6c));
  fn_827F5708((double)lbl_821CA460,*(undefined4 *)(param_1 + 0xc80));
  fn_827F5708((double)lbl_821CC160,*(undefined4 *)(param_1 + 0xc84));
  fn_827F5708((double)lbl_821CC160,*(undefined4 *)(param_1 + 0xc78));
  if (*(int *)(param_1 + 0xc7c) != 0) {
    fn_827F5708((double)lbl_821CC160);
  }
  *(undefined4 *)(param_1 + 0xd48) = 1;
  return;
}

