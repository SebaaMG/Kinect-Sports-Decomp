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
extern unsigned int lbl_821AAD20;


void fn_82DBFFD0(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  *(int *)(param_4 + 0x14) = param_2;
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_4 + 0x30) = param_2;
  iVar6 = *(int *)(param_1 + 0x1c) / 0x90 + 4;
  iVar7 = *(int *)(param_1 + 0x4c) * 0x80 + param_2 + 0x90;
  *(int *)(param_4 + 0x3c) = iVar7;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar7 = (iVar6 * 2 + 1) * 0x10 + *(int *)(param_1 + 0xc) + iVar7;
  *(int *)(param_4 + 0x40) = iVar7;
  *(uint *)(param_4 + 0x18) = (((iVar6 * 6 + iVar2) * 4 + 0x17U & 0xfffffff0) - param_2) + iVar7;
  uVar5 = lbl_821AAD20;
  if (param_2 != 0) {
    puVar3 = *(undefined1 **)(param_4 + 0x30);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 8) = uVar5;
    puVar4 = (undefined4 *)((uint)(puVar3 + in_r0 + 0x30) & 0xfffffff0);
    *puVar4 = in_register_000100c0;
    puVar4[1] = in_register_000100c4;
    puVar4[2] = in_register_000100c8;
    puVar4[3] = in_vr12;
    puVar4 = (undefined4 *)((uint)(puVar3 + in_r0 + 0x10) & 0xfffffff0);
    *puVar4 = in_register_000100a0;
    puVar4[1] = in_register_000100a4;
    puVar4[2] = in_register_000100a8;
    puVar4[3] = in_vr10;
    puVar4 = (undefined4 *)((uint)(puVar3 + in_r0 + 0x20) & 0xfffffff0);
    *puVar4 = in_register_00010080;
    puVar4[1] = in_register_00010084;
    puVar4[2] = in_register_00010088;
    puVar4[3] = in_vr8;
    puVar4 = (undefined4 *)((uint)(puVar3 + in_r0 + 0x40) & 0xfffffff0);
    *puVar4 = in_register_00010060;
    puVar4[1] = in_register_00010064;
    puVar4[2] = in_register_00010068;
    puVar4[3] = in_vr6;
    puVar4 = (undefined4 *)((uint)(puVar3 + in_r0 + 0x50) & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    puVar4 = (undefined4 *)((uint)(puVar3 + 0x60) & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    puVar4 = (undefined4 *)((uint)(puVar3 + 0x70) & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    puVar3[(iVar1 + 1) * 0x80] = 3;
  }
  return;
}

