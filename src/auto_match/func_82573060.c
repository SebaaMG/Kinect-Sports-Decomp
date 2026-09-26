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
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int *auStack_280;
extern unsigned int *auStack_290;
extern int fn_82A1DD38();
extern int fn_82CE5040();
extern int fn_82D80A40();
extern int fn_82D93168();
extern unsigned int lbl_83296D90;
extern unsigned int lbl_83296D94;
extern unsigned int lbl_83296DA0;
extern unsigned int lbl_83296DB0;
extern unsigned int lbl_83296DC0;
extern unsigned int lbl_83296DD0;
extern unsigned int uRam83296da4;
extern unsigned int uRam83296da8;
extern unsigned int uRam83296dac;
extern unsigned int uRam83296db4;
extern unsigned int uRam83296db8;
extern unsigned int uRam83296dbc;
extern unsigned int uRam83296dc4;
extern unsigned int uRam83296dc8;
extern unsigned int uRam83296dcc;
extern unsigned int uRam83296dd4;
extern unsigned int uRam83296dd8;
extern unsigned int uRam83296ddc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82573060(int param_1,ulonglong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  if (lbl_83296D90 != param_1) {
    fn_82D80A40(*(undefined4 *)(param_1 + 8));
    fn_82D93168(param_1 + 0xe0);
    iVar5 = (int)in_r0;
    puVar1 = (undefined4 *)((uint)(auStack_270 + iVar5) & 0xfffffff0);
    lbl_83296DA0 = *puVar1;
    uRam83296da4 = puVar1[1];
    uRam83296da8 = puVar1[2];
    uRam83296dac = puVar1[3];
    puVar1 = (undefined4 *)((uint)(auStack_260 + iVar5) & 0xfffffff0);
    lbl_83296DB0 = *puVar1;
    uRam83296db4 = puVar1[1];
    uRam83296db8 = puVar1[2];
    uRam83296dbc = puVar1[3];
    puVar1 = (undefined4 *)((uint)(auStack_250 + iVar5) & 0xfffffff0);
    lbl_83296DC0 = *puVar1;
    uRam83296dc4 = puVar1[1];
    uRam83296dc8 = puVar1[2];
    uRam83296dcc = puVar1[3];
    puVar1 = (undefined4 *)((uint)(auStack_240 + iVar5) & 0xfffffff0);
    lbl_83296DD0 = *puVar1;
    uRam83296dd4 = puVar1[1];
    uRam83296dd8 = puVar1[2];
    uRam83296ddc = puVar1[3];
    lbl_83296D90 = param_1;
  }
  if ((lbl_83296D94 == 0xffffffff) || ((ulonglong)lbl_83296D94 != (param_2 & 0xffffffff))) {
    if ((uint)param_2 != 0xffffffff) {
      if ((*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 10) &&
         (iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x34),
         iVar5 = (**(code **)(*(int *)(iVar5 + 0x10) + 0x14))(iVar5 + 0x10,param_2,auStack_230),
         *(int *)(iVar5 + 0xc) == 3)) {
        puVar1 = (undefined4 *)(iVar5 + 0x20U & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        lVar6 = 3;
        iVar3 = (int)param_3;
        puVar2 = (undefined4 *)((int)in_r0 + iVar3 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar1 = (undefined4 *)(iVar5 + 0x30U & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar1 = (undefined4 *)(iVar5 + 0x40U & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        lVar7 = param_3;
        do {
          puVar1 = (undefined4 *)((int)in_r0 + (int)lVar7 & 0xfffffff0);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (undefined4 *)((uint)(auStack_280 + (int)in_r0) & 0xfffffff0);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          fn_82CE5040(auStack_290,0xffffffff83296da0,auStack_280);
          lVar6 = lVar6 + -1;
          puVar1 = (undefined4 *)((uint)(auStack_290 + (int)in_r0) & 0xfffffff0);
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (undefined4 *)((int)in_r0 + (int)lVar7 & 0xfffffff0);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          lVar7 = lVar7 + 0x10;
        } while (lVar6 != 0);
        lVar7 = -0x7cd69220;
        lbl_83296D94 = (uint)param_2;
        goto LAB_82573100;
      }
    }
    uVar4 = 0;
  }
  else {
    lVar7 = param_3;
    param_3 = -0x7cd69220;
LAB_82573100:
    fn_82A1DD38(lVar7,param_3,0x30);
    uVar4 = 1;
  }
  return uVar4;
}

