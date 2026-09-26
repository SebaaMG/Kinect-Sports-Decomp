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
extern int fn_8255CFD0();
extern int fn_825DBA60();
extern int fn_8261DCB8();
extern int fn_8261E158();
extern int fn_8261E600();
extern int fn_8261FD18();
extern int fn_82620218();
extern unsigned int lbl_8218E0C8;
extern unsigned int lbl_821915FC;
extern unsigned int lbl_82192488;
extern unsigned int lbl_821CC160;


void fn_825DB710(undefined8 param_1,int param_2,int param_3,ulonglong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_70 [112];
  
  fn_8261E600(param_3,0xffffffff831bf528);
  fn_8255CFD0(param_7,param_3 + 0x240);
  dVar6 = (double)lbl_821CC160;
  if ((((param_4 & 0xffffffff) != 0) && (dVar5 = (double)fn_8261FD18(param_4), dVar5 != dVar6)
      ) && (*(int *)(param_2 + 0x60) != 0)) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 1;
  }
  iVar4 = param_3 + 0x3f0;
  fn_825DBA60(param_1,param_2,param_3,param_4);
  if ((*(int *)(param_3 + 0x1c0) == 0) &&
     ((((*(uint *)(param_3 + 0x310) & 0x100) == 0 && (*(int *)(param_3 + 0x220) != 2)) ||
      (*(int *)(param_3 + 0x228) == 0)))) {
    puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    fn_82620218(param_1,param_3 + 0x460,iVar4,auStack_70,param_6,param_7);
  }
  else {
    puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (undefined4 *)(param_3 + 0x400U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    puVar2 = (undefined4 *)(param_3 + 0x430U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    fn_8261DCB8();
    puVar2 = (undefined4 *)(param_3 + 0x410U & 0xfffffff0);
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  uVar1 = *(uint *)(param_3 + 0x310);
  if ((((uVar1 & 0x100) != 0) || (*(int *)(param_3 + 0x220) == 2)) &&
     ((*(int *)(param_3 + 0x330) != 0 && ((uVar1 & 0x40) == 0)))) {
    puVar2 = (undefined4 *)(param_3 + 0x290U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    if ((uVar1 & 0x20) != 0) {
      dVar6 = (double)lbl_821915FC;
    }
    fn_8261E158(param_1,dVar6,(double)lbl_82192488,(double)lbl_8218E0C8,param_3,
                      param_3 + 0x44c,param_3 + 0x448,uVar1 & 0x20,param_4);
    puVar2 = (undefined4 *)(param_3 + 0x2a0U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(param_3 + 0x410U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
  }
  return;
}

