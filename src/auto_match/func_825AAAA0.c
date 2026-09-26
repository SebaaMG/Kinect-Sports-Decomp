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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230040();
extern int fn_822CB0A0();
extern int fn_82359C18();
extern int fn_82594968();
extern int fn_825AC298();
extern int fn_825ADB28();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern int fn_8289C940();
extern int fn_828AAF70();
extern int fn_828AB870();
extern int fn_82CED628();
extern int fn_82F565A0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C819C;
extern unsigned int uStack_70;
extern unsigned int uStack_bc;
extern unsigned int uStack_cc;


void fn_825AAAA0(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  int in_r0;
  char cVar9;
  undefined4 *puVar8;
  longlong lVar7;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  code *pcStack_d0;
  undefined4 uStack_cc;
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [16];
  undefined4 *puStack_80;
  undefined8 uStack_70;
  int *piStack_68;
  
  fn_82594968();
  iVar1 = param_1[0x20];
  cVar9 = fn_8288B760(param_1);
  if (cVar9 == '\0') {
    cVar9 = (**(code **)(*param_1 + 0x6c))(param_1);
    bVar5 = true;
    if (cVar9 != '\0') goto LAB_825aaaf0;
  }
  bVar5 = false;
LAB_825aaaf0:
  iVar2 = *(int *)(iVar1 + 0x4e0);
  *(bool *)(iVar1 + 0x4f0) = bVar5;
  if (!bVar5) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x104) = 0;
      *(undefined4 *)(iVar2 + 0x120) = 0;
      fn_82CED628(iVar2 + 0x14,0xffffffff821ca830);
    }
    puVar8 = (undefined4 *)(iVar1 + 0x540U & 0xfffffff0);
    *puVar8 = in_register_000104d0;
    puVar8[1] = in_register_000104d4;
    puVar8[2] = in_register_000104d8;
    puVar8[3] = in_vr77;
  }
  uStack_cc = 0;
  pcStack_d0 = fn_825AC298;
  uStack_70 = 0x825ac29800000000;
  piStack_68 = param_1;
  puVar8 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = &lbl_821C819C;
    fn_82F68CC0(puVar8 + 2,&uStack_70,0x38);
    puStack_80 = puVar8;
    fn_82F565A0(auStack_b0,auStack_90);
    lVar7 = (**(code **)(*param_1 + 8))(param_1);
    fn_8289C940(lVar7 + 0x1ec,auStack_b0);
    cVar9 = fn_8288B760(param_1);
    if (cVar9 != '\0') {
      puVar8 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
      uVar10 = puVar8[1];
      uVar11 = puVar8[2];
      uVar12 = puVar8[3];
      pcVar3 = *(code **)(*param_1 + 8);
      puVar4 = (undefined4 *)(iVar1 + 0xc0U & 0xfffffff0);
      uVar13 = *puVar4;
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      puVar4 = (undefined4 *)((int)&pcStack_d0 + in_r0 & 0xfffffff0);
      *puVar4 = *puVar8;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar8 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
      *puVar8 = uVar13;
      puVar8[1] = uVar14;
      puVar8[2] = uVar15;
      puVar8[3] = uVar16;
      lVar7 = (*pcVar3)(param_1);
      fn_825ADB28(lVar7 + 0x248,&pcStack_d0);
      lVar7 = (**(code **)(*param_1 + 8))(param_1);
      fn_822CB0A0(lVar7 + 0x29c,auStack_b0);
      uVar10 = *(undefined4 *)(iVar1 + 0xb20);
      lVar7 = (**(code **)(*param_1 + 8))(param_1);
      fn_828AB870(lVar7 + 0x144,uVar10);
      if ((*(int *)(iVar1 + 0xb1c) != 0) || (uVar6 = 1, *(int *)(iVar1 + 0xb20) == 0)) {
        uVar6 = 0;
      }
      lVar7 = (**(code **)(*param_1 + 8))(param_1);
      fn_828AAF70(lVar7 + 0x198,uVar6);
    }
    fn_82359C18(auStack_90);
    return;
  }
  uStack_bc = 0;
  ppuStack_c0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_c0);
}

