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
extern int fn_824106F8();
extern int fn_82536288();
extern int fn_825735B8();
extern int fn_82573868();
extern int fn_82575DF0();
extern int fn_82A1EFC0();
extern unsigned int lbl_82195530;
extern unsigned int lbl_821962C0;
extern unsigned int lbl_821CC160;


void fn_8240E9B8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_r0;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  lVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x28) + 0x8c0) + 0x128;
  if ((lVar5 != 0) && (iVar6 = fn_825735B8(lVar5,0xffffffff821b81f4), iVar6 != 0)) {
    *(undefined4 *)(*(int *)(iVar6 + 4) + 400) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))();
  }
  fn_82536288(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar4 = lbl_821CC160;
  piVar1 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  uVar7 = lbl_82195530;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 100) = uVar7;
  iVar6 = *piVar1;
  if (*(int *)(iVar6 + 0xcb8) == 0) {
    uVar7 = *(undefined4 *)(iVar6 + 0x2b0);
  }
  else {
    uVar7 = *(undefined4 *)(iVar6 + 0x2ac);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  iVar6 = *piVar1;
  if (*(int *)(iVar6 + 0xcb8) == 0) {
    uVar7 = *(undefined4 *)(iVar6 + 0x2b0);
  }
  else {
    uVar7 = *(undefined4 *)(iVar6 + 0x2ac);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar6 = *(int *)(param_1 + 600);
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0xf0) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x110) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x100U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x130) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x120U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x150) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x140U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x178) = 1;
  puVar2 = (undefined4 *)(param_1 + 0x160U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(undefined4 *)(param_1 + 0x174) = 0x18;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)(param_1 + 0x180U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 400) = uVar4;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1a0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = uVar4;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1c0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar2 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x25c) = uVar4;
  puVar2 = (undefined4 *)(param_1 + 0x1e0U & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  if (iVar6 != 0) {
    fn_82573868(*(undefined4 *)(param_1 + 0x28),param_1 + 0x1f0);
  }
  fn_82A1EFC0(param_1 + 0x1f0,0,0x68);
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    fn_82575DF0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4c) + 0x93c));
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x4c) != 0) {
    fn_824106F8(param_1,0);
  }
  return;
}

