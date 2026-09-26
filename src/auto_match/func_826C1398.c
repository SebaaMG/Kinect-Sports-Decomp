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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8267C498();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826BF178();
extern int fn_826C0700();
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int iStack_ac;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


undefined8
fn_826C1398(int *param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar5;
  undefined8 uVar4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  undefined1 *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  auStack_90[0] = 0;
  (**(code **)(param_1[4] + 0x10))(param_1 + 4,param_2,param_3,auStack_90);
  auStack_a0[0] = 0;
  if (*(byte *)(param_2 + 0x7c) < 7) {
    puVar2 = (undefined4 *)fn_826C0700(param_1[10],param_3);
  }
  else {
    iVar1 = fn_826BF178();
    puVar2 = (undefined4 *)(-(uint)(iVar1 != 0) & iVar1 + 8U);
  }
  if ((puVar2 == (undefined4 *)0x0) || (param_1[10] == 0)) {
    uVar4 = 0;
  }
  else {
    puVar5 = (uint *)(param_2 + 8);
    uVar3 = *(int *)(param_2 + 8) + 0x10;
    *(uint *)(param_2 + 8) = uVar3;
    if (*(uint *)(param_2 + 0x10) <= uVar3) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,puVar2 + 4);
    }
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 0x10;
    if (*(uint *)(param_2 + 0x10) <= uVar3 + 0x10) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,param_4);
    }
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 0x10;
    if (*(uint *)(param_2 + 0x10) <= uVar3 + 0x10) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,auStack_90);
    }
    iStack_ac = *param_3;
    auStack_b0[0] = 5;
    *(int *)(iStack_ac + 8) = *(int *)(iStack_ac + 8) + 1;
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 0x10;
    if (*(uint *)(param_2 + 0x10) <= uVar3 + 0x10) {
      fn_826826A8(puVar5);
    }
    if (*puVar5 != 0) {
      fn_82695DA0(*puVar5,auStack_b0);
    }
    fn_82696330(auStack_b0);
    iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
    piStack_78 = param_1 + 4;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      piStack_78 = (int *)(iVar1 + 0x68);
    }
    puStack_7c = auStack_a0;
    ppuStack_80 = &lbl_8200579C;
    uStack_6c = 0;
    uStack_74 = 0;
    iStack_60 = ((int)(*puVar5 - *(int *)(param_2 + 0xc)) >> 4) + *(int *)(param_2 + 0x1c) * 0x20 +
                -0x20;
    uStack_70 = 0;
    uStack_64 = 4;
    iStack_68 = param_2;
    (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2,&ppuStack_80,puVar2[1],0);
    fn_826828D8(&ppuStack_80);
    fn_82683270(puVar5,4);
    fn_82695FA0(param_5,auStack_a0);
    if (iVar1 != 0) {
      fn_8267C498(iVar1);
    }
    uVar4 = 1;
  }
  fn_82696330(auStack_a0);
  fn_82696330(auStack_90);
  return uVar4;
}

