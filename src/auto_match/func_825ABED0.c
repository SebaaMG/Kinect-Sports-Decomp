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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_82236140();
extern int fn_822CB020();
extern int fn_825AD9E8();
extern int fn_825AE918();
extern int fn_825AEC98();
extern int fn_82604A20();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828E9D28();
extern int fn_82CED628();
extern unsigned int iStack_88;
extern unsigned int iStack_b8;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_825ABED0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int in_r0;
  uint uVar7;
  char cVar8;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    uVar7 = fn_8288B760();
    *(uint *)(iVar1 + 0x24) = uVar7 & 0xff;
  }
  if (*(char *)(param_2 + 0x26) != '\0') {
    *(undefined1 *)(param_1 + 0x47) = 0;
  }
  if (iVar1 == 0) {
    return;
  }
  cVar8 = fn_8288B760(param_1);
  if (cVar8 == '\0') {
    cVar8 = (**(code **)(*param_1 + 0x6c))(param_1);
    bVar4 = true;
    if (cVar8 != '\0') goto LAB_825abf4c;
  }
  bVar4 = false;
LAB_825abf4c:
  iVar2 = *(int *)(iVar1 + 0x4e0);
  *(bool *)(iVar1 + 0x4f0) = bVar4;
  if (!bVar4) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x104) = 0;
      *(undefined4 *)(iVar2 + 0x120) = 0;
      fn_82CED628(iVar2 + 0x14,0xffffffff821ca830);
    }
    puVar3 = (undefined4 *)(iVar1 + 0x540U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  if (bVar4) {
    lVar5 = (**(code **)(*param_1 + 8))(param_1);
    fn_825AD9E8(auStack_50,lVar5 + 0x248);
    lVar5 = (**(code **)(*param_1 + 8))(param_1);
    fn_822CB020(auStack_70,lVar5 + 0x29c);
    lVar5 = (**(code **)(*param_1 + 8))(param_1);
    uVar6 = fn_82236140(lVar5 + 0x2f0);
    uStack_90 = (undefined4)uVar6;
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_8c = 3;
    fn_828E9D28(auStack_a0,uVar6,3);
    fn_825AE918(auStack_a0);
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    if (iStack_88 != 0) {
      fn_8265CA20();
    }
    iStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    lVar5 = (**(code **)(*param_1 + 8))(param_1);
    uVar6 = fn_82236140(lVar5 + 0x344);
    uStack_c0 = (undefined4)uVar6;
    iStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_bc = 3;
    fn_828E9D28(auStack_d0,uVar6,3);
    fn_825AEC98(auStack_d0);
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    if (iStack_b8 != 0) {
      fn_8265CA20();
    }
    iStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    fn_82604A20(iVar1,auStack_50,auStack_70,auStack_60,auStack_40);
    puVar3 = (undefined4 *)(iVar1 + 0x550U & 0xfffffff0);
    *puVar3 = in_register_000104b0;
    puVar3[1] = in_register_000104b4;
    puVar3[2] = in_register_000104b8;
    puVar3[3] = in_vr75;
  }
  return;
}

