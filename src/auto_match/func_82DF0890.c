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
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_8253D7A8();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D3C628();
extern int fn_82D820E0();
extern unsigned int iStack_100;
extern unsigned int iStack_f8;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057518;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138FAC;
extern unsigned int lbl_8323B1A0;
extern unsigned int uStack_104;
extern unsigned int uStack_12c;
extern unsigned int uStack_a8;
extern unsigned int uStack_bc;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_f4;
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


undefined8
fn_82DF0890(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar5 [16];
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined **ppuStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  int iStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 auStack_d0 [4];
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [144];

  iVar4 = fn_82CE5410();
  iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x20);
  *(undefined2 *)(iVar4 + 4) = 0x20;
  uVar3 = fn_82D3C628(param_1);
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  auStack_d0[0] = lbl_82002AE0;
  puVar1 = (undefined4 *)((int)auStack_d0 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  puVar1 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  uStack_bc = auStack_d0[0];
  puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  uStack_a8 = auStack_d0[0];
  fn_8253D7A8(auStack_90,uVar3,auStack_d0,0);
  puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  iStack_100 = 0;
  uStack_e0 = lbl_82057518;
  ppuStack_130 = &lbl_82138FAC;
  uStack_dc = lbl_82057518;
  uStack_104 = lbl_82134508;
  uStack_12c = lbl_82134508;
  puVar2 = (undefined4 *)((uint)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  fn_82D820E0(param_2,auStack_90,auStack_f0,&ppuStack_130,0);
  fn_82CE4118(uVar3);
  if (iStack_100 == 0) {
    *(undefined4 *)(param_6 + 0x24) = 0;
    puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    uVar3 = 1;{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(*(undefined1 (*) [16])((uint)(&lbl_8323B1A0 + in_r0) & 0xfffffff0),
                        *(undefined1 (*) [16])(in_r0 + param_6 + 0x10 & 0xfffffff0),1,0); memcpy(auVar5, &_vt0, 16); }
    memcpy((void *)((const void *)(in_r0 + param_6 + 0x10 & 0xfffffff0)), auVar5, 16);
    *(undefined4 *)(param_6 + 0x20) = 0xffffffff;
  }
  else {
    puVar1 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(param_6 + 0x10U & 0xfffffff0);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    if (*(char *)(iStack_f8 + 0x18) == '\x01') {
      uVar3 = 0;
      *(int *)(param_6 + 0x24) = *(char *)(iStack_f8 + 0x10) + iStack_f8;
      *(undefined4 *)(param_6 + 0x20) = uStack_f4;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(param_6 + 0x24) = 0;
      *(undefined4 *)(param_6 + 0x20) = uStack_f4;
    }
  }
  return uVar3;
}
