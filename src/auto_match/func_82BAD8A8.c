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
extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BBFD60();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC5538();
extern unsigned int lbl_820DF0C0;
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;
extern unsigned int uStack_50;


void fn_82BAD8A8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar5;
  ulonglong uVar4;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uStack_50;
  
  if (**(char **)(param_1 + 0x10) != '\0') goto LAB_82badbdc;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 4))();
  if (iVar5 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df9e0,0xffffffff820df268,0x1ab);
  }
  lVar9 = 0;
  bVar3 = true;
  uVar1 = *(uint *)(*(int *)(param_2 + 100) + 4);
  if (uVar1 - 1 < uVar1) {
    piVar6 = (int *)((uVar1 - 1) * 4 + *(int *)(*(int *)(param_2 + 100) + 8));
  }
  else {
    piVar6 = (int *)0x0;
  }
  iVar5 = *piVar6;
  if (iVar5 == 3) {
LAB_82bad974:
    if (iVar5 == 0) goto LAB_82bad97c;
  }
  else {
    if (iVar5 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df9a4,0xffffffff820df268,0x1b0);
      goto LAB_82bad974;
    }
LAB_82bad97c:
    bVar3 = false;
    if (*(int *)(*(int *)(param_2 + 100) + 4) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df980,0xffffffff820df268,0x1b3);
    }
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x88) + 0xa8);
  if (uVar1 == 0) {
    uVar4 = ((-(ulonglong)bVar3 & 0xfffffff9) << 0x20 | -(ulonglong)bVar3 & 0xffffffd9) + 0x53;
  }
  else if (uVar1 == 1) {
    uVar4 = ((-(ulonglong)bVar3 & 0xfffffff9) << 0x20 | -(ulonglong)bVar3 & 0xffffffd9) + 0x54;
  }
  else if (uVar1 < 3) {
    uVar4 = ((-(ulonglong)bVar3 & 0xfffffff9) << 0x20 | -(ulonglong)bVar3 & 0xffffffd9) + 0x55;
  }
  else if (uVar1 == 3) {
    uVar4 = ((-(ulonglong)bVar3 & 0xfffffff9) << 0x20 | -(ulonglong)bVar3 & 0xffffffd9) + 0x56;
  }
  else {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0x1c9);
    uVar4 = (ulonglong)uStack_50;
  }
  piVar6 = (int *)fn_82BC24F0(uVar4,*(undefined4 *)(param_1 + 0xc));
  if (bVar3) {
    iVar5 = fn_82BA92B0(param_2);
    if (iVar5 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df970,0xffffffff820df268,0x1cf);
    }
    iVar2 = *(int *)(iVar5 + 0x38);
    piVar6[0x14] = 0;
    piVar6[0xe] = iVar2;
    piVar6[0x20] = lbl_820DF0C4;
    fn_82BA05E8(piVar6,1,iVar5);
    uVar8 = 2;
    piVar6[0x21] = lbl_820DF0D0;
  }
  else {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      iVar5 = fn_82BA92B0(param_2);
      if (iVar5 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df970,0xffffffff820df268,0x1dd);
      }
      iVar5 = *(int *)(iVar5 + 0x38);
      piVar6[0x14] = 0;
      piVar6[0xe] = iVar5;
      iVar5 = lbl_820DF0C4;
    }
    else {
      piVar6[0xe] = 0;
      piVar6[0x14] = 0;
      iVar5 = lbl_820DF0C0;
    }
    piVar6[0x20] = iVar5;
    uVar8 = 1;
  }
  fn_82BA05E8(piVar6,uVar8,*(undefined4 *)(*(int *)(param_1 + 0x88) + 0xec));
  do {
    iVar5 = *piVar6;
    uVar8 = (**(code **)(**(int **)(param_1 + 0x88) + 0x50))(*(int **)(param_1 + 0x88),1,3);
    (**(code **)(iVar5 + 0x58))(piVar6,(!bVar3 ^ 1) + 1,lVar9,uVar8);
    lVar9 = lVar9 + 1;
  } while ((int)lVar9 < 4);
  if (*(char *)(*(int *)(param_1 + 0x88) + 0x99) != '\0') {
    *(undefined1 *)((int)piVar6 + (!bVar3 ^ 1) + 0x99) = 1;
  }
  fn_82BC5538(param_1,piVar6);
  fn_82BBFD60(*(undefined4 *)(param_1 + 0x88));
LAB_82badbdc:
  fn_82BABEF0(param_2,param_1 + 0x14,*(undefined1 *)(param_1 + 0x7c));
  puVar7 = (undefined4 *)
           fn_82BC0088(*(int *)(param_2 + 100),*(undefined4 *)(*(int *)(param_2 + 100) + 4));
  *puVar7 = 3;
  return;
}

