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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_822AB0C8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int uStack_b0;


undefined4 *
fn_822AA108(undefined8 param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint *in_stack_00000054;
  int *in_stack_0000005c;
  undefined4 auStack_d0 [4];
  undefined4 auStack_c0 [4];
  undefined4 uStack_b0;
  
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = (int *)*in_stack_0000005c;
  param_2[2] = 0;
  param_2[4] = 0;
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_822aa19c:
    param_2[5] = 0;
    param_2[6] = 0;
  }
  else {
    piVar2 = (int *)in_stack_0000005c[1];
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_822aa19c;
    param_2[5] = *piVar1;
    param_2[6] = *piVar2;
  }
  piVar1 = (int *)in_stack_0000005c[2];
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_822aa1f0:
    param_2[7] = 0;
    param_2[8] = 0;
  }
  else {
    piVar2 = (int *)in_stack_0000005c[3];
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_822aa1f0;
    param_2[7] = *piVar1;
    param_2[8] = *piVar2;
  }
  piVar1 = (int *)in_stack_0000005c[4];
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_822aa244:
    param_2[9] = 0;
    param_2[10] = 0;
  }
  else {
    piVar2 = (int *)in_stack_0000005c[5];
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_822aa244;
    param_2[9] = *piVar1;
    param_2[10] = *piVar2;
  }
  piVar1 = (int *)in_stack_0000005c[6];
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_822aa298:
    param_2[0xb] = 0;
    param_2[0xc] = 0;
  }
  else {
    piVar2 = (int *)in_stack_0000005c[7];
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_822aa298;
    param_2[0xb] = *piVar1;
    param_2[0xc] = *piVar2;
  }
  piVar1 = (int *)in_stack_0000005c[8];
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_822aa2ec:
    param_2[0xd] = 0;
    param_2[0xe] = 0;
  }
  else {
    piVar2 = (int *)in_stack_0000005c[9];
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_822aa2ec;
    param_2[0xd] = *piVar1;
    param_2[0xe] = *piVar2;
  }
  piVar1 = (int *)in_stack_0000005c[10];
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_822aa340:
    param_2[0xf] = 0;
    param_2[0x10] = 0;
  }
  else {
    piVar2 = (int *)in_stack_0000005c[0xb];
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_822aa340;
    param_2[0xf] = *piVar1;
    param_2[0x10] = *piVar2;
  }
  piVar1 = (int *)in_stack_0000005c[0xc];
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    piVar2 = (int *)in_stack_0000005c[0xd];
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      param_2[0x11] = *piVar1;
      param_2[0x12] = *piVar2;
      goto LAB_822aa39c;
    }
  }
  param_2[0x11] = 0;
  param_2[0x12] = 0;
LAB_822aa39c:
  piVar1 = (int *)in_stack_0000005c[0xe];
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
  }
  else {
    param_2[0x13] = *piVar1;
    param_2[0x14] = *piVar1;
    param_2[0x15] = *piVar1;
    param_2[0x16] = *piVar1;
  }
  uVar9 = 0;
  puVar3 = (undefined4 *)in_stack_0000005c[0x10];
  puVar4 = (undefined4 *)in_stack_0000005c[0x11];
  puVar5 = (undefined4 *)in_stack_0000005c[0x12];
  puVar6 = (undefined4 *)in_stack_0000005c[0x13];
  param_2[0x1b] = in_stack_0000005c[0xf];
  param_2[0x17] = *puVar3;
  puVar3 = (undefined4 *)in_stack_0000005c[0x14];
  param_2[0x18] = *puVar4;
  puVar4 = (undefined4 *)in_stack_0000005c[0x15];
  param_2[0x19] = *puVar5;
  puVar5 = (undefined4 *)in_stack_0000005c[0x16];
  param_2[0x1a] = *puVar6;
  puVar6 = (undefined4 *)in_stack_0000005c[0x17];
  param_2[0x24] = *puVar3;
  param_2[0x25] = *puVar4;
  param_2[0x26] = *puVar5;
  param_2[0x27] = *puVar6;
  param_2[0x23] = 0;
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      auStack_c0[0] = 0;
      uStack_b0 = 0;
      if (uVar9 < (uint)((int)(in_stack_00000054[1] - *in_stack_00000054) / 0x54)) {
        fn_82F68CC0(auStack_c0,lVar8 + (ulonglong)*in_stack_00000054,0x54);
      }
      uVar7 = fn_8265C9E0(0x128);
      if ((uVar7 & 0xffffffff) == 0) {
        auStack_d0[0] = 0;
      }
      else {
        auStack_d0[0] = fn_822AB0C8(param_1,uVar7,param_4,param_5,param_6,param_7);
      }
      fn_82536690(param_2,auStack_d0);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x54;
    } while (uVar9 < param_3);
  }
  return param_2;
}

