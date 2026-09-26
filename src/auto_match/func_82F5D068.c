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
extern int fn_82F5CAA0();
extern int fn_82F5CCB0();
extern int fn_82F5CD68();
extern int fn_82F5CEA0();
extern int fn_82F5CF30();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83263180;


undefined8
fn_82F5D068(undefined8 param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             uint *param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  int *piVar5;
  undefined8 uVar6;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar6 = 0;
  if ((param_3 == (int *)0x0) || (*param_3 != 2)) {
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 0x14) = 1;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    uVar7 = lbl_821AAD20;
    *(undefined4 *)(param_2 + 0x10) = lbl_821AAD20;
    *(undefined4 *)(param_2 + 0x20) = uVar7;
    *(undefined4 *)(param_2 + 0x24) = uVar7;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
  }
  else {
    if ((int)param_4 == 0) {
      piVar5 = param_3 + 0x24;
    }
    else {
      piVar5 = param_3 + 0x34;
    }
    puVar1 = (undefined4 *)(in_r0 + (int)piVar5 & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(undefined4 *)(param_2 + 0x1c) = 1;
    }
    else {
      fn_82F5CF30(param_1,param_2);
      iVar4 = fn_82F5CCB0(param_1,param_2);
      if ((iVar4 != 0) && (iVar4 = fn_82F5CD68(param_2), iVar4 != 0)) {
        *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
        uVar3 = fn_82F5CEA0(param_2);
        iVar4 = fn_82F5CAA0(uVar3,param_3,param_4);
        uVar2 = lbl_821AAD20;
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0x10) = lbl_821AAD20;
          *(undefined4 *)(param_2 + 0x30) = 0;
          *(undefined4 *)(param_2 + 0x20) = uVar2;
          *(undefined4 *)(param_2 + 0x14) = 1;
          *(undefined4 *)(param_2 + 0x24) = uVar2;
          *(undefined4 *)(param_2 + 0x2c) = uVar2;
        }
        if (lbl_83263180 <= *(int *)(param_2 + 0x30)) {
          *(undefined4 *)(param_2 + 0x3c) = uVar2;
          uVar6 = 1;
          *(undefined4 *)(param_2 + 0x38) = 0;
          if (*(int *)(param_2 + 0x40) != 0) {
            *(undefined4 *)(param_2 + 0x10) = uVar2;
            *(undefined4 *)(param_2 + 0x30) = 0;
            *(undefined4 *)(param_2 + 0x20) = uVar2;
            *(undefined4 *)(param_2 + 0x14) = 1;
            *(undefined4 *)(param_2 + 0x24) = uVar2;
            *(undefined4 *)(param_2 + 0x2c) = uVar2;
          }
        }
      }
    }
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = (uint)(*(int *)(param_2 + 0x30) != 0);
  }
  return uVar6;
}

