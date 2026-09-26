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
extern int fn_822632C0();
extern int fn_823807F0();
extern int fn_824C97F0();
extern int fn_8252D2F8();
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1B60;
extern unsigned int lbl_831DCCF0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_823755F0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float in_stack_00000020;
  int aiStack_e0 [4];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_60;
  
  fVar6 = lbl_831D1B60;
  aiStack_e0[1] = param_1 + 0x2b4;
  aiStack_e0[2] = param_1 + 0x298;
  iStack_d0 = param_1 + 0x2a0;
  fVar5 = lbl_831D1B60 * lbl_8218E8E8;
  puVar4 = (undefined4 *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  aiStack_e0[0] = param_1 + 0x294;
  aiStack_e0[3] = param_1 + 0x2b8;
  iStack_b8 = param_1 + 0x2a8;
  iStack_bc = param_1 + 0x2c4;
  iStack_cc = param_1 + 0x2c0;
  iStack_a4 = param_1 + 0x2cc;
  iStack_c8 = param_1 + 0x29c;
  iStack_c4 = param_1 + 700;
  iStack_c0 = param_1 + 0x2a4;
  iStack_b4 = param_1 + 0x2c8;
  uVar8 = (uint)((in_stack_00000020 + fVar6) / fVar5);
  lStack_60 = (longlong)(int)uVar8;
  iStack_b0 = param_1 + 0x2b0;
  uVar8 = 0xffffffffU - ((int)uVar8 >> 0x1f) & uVar8;
  iStack_ac = param_1 + 0x2d0;
  iStack_a8 = param_1 + 0x2ac;
  if (2 < (int)uVar8) {
    uVar8 = 3;
  }
  if (param_2 == 0) {
    uVar8 = uVar8 + 4;
  }
  uStack_90 = lbl_821917C0;
  uStack_80 = lbl_821917C0;
  uStack_a0 = 0x4d697850;
  uStack_9c = lbl_821CA460;
  uStack_94 = 0x20;
  uStack_98 = lbl_821CC160;
  uStack_84 = 0x40;
  uStack_8c = lbl_821CC160;
  uStack_7c = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_88 = 1;
  fn_8252D2F8(*(undefined4 *)(param_1 + 0x290),0,&uStack_a0,aiStack_e0[uVar8 * 2 + param_3]);
  if (param_3 != 0) {
    fn_823807F0(*(undefined4 *)(param_1 + 0x664),0x15);
    piVar1 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
    for (piVar9 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar9 != piVar1; piVar9 = piVar9 + 2) {
      fn_824C97F0(*(undefined4 *)(*piVar9 + 0x28),0xffffffff821b366c);
    }
  }
  uVar7 = 0xffffffff821b42c0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x600) + 4);
  iVar3 = *(int *)(iVar2 + 0x5c0);
  if (iVar3 == 1) {
    uVar7 = 0xffffffff821b42c8;
  }
  else if (iVar3 == 2) {
    uVar7 = 0xffffffff821b42d0;
  }
  else if (iVar3 == 4) {
    uVar7 = 0xffffffff821b42d8;
  }
  fn_822632C0((double)*(float *)(iVar2 + 0x5c4),*(undefined4 *)(iVar2 + 0x5e0),
                    *(undefined4 *)(iVar2 + 0x5e4),param_3,
                    (&lbl_831DCCF0)[*(int *)(iVar2 + 0x570)],uVar7,
                    *(undefined4 *)(iVar2 + 0x5d0),*(undefined4 *)(iVar2 + 0x5c8),
                    *(undefined4 *)(iVar2 + 0x5cc));
  return;
}

