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
extern unsigned int *auStack_240;
extern unsigned int lbl_82138740;
extern unsigned int lbl_82138750;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D499C8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_240 [576];
  
  piVar6 = (int *)(param_2 + 0x10);
  iVar4 = (int)in_r0;
  puVar1 = (undefined4 *)((uint)(&lbl_82138750 + iVar4) & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(&lbl_82138740 + iVar4) & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar2 = (undefined4 *)(iVar4 + param_5 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  puVar1 = (undefined4 *)(iVar4 + param_5 + 0x10 & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  uVar3 = (**(code **)(*(int *)(param_2 + 0x10) + 8))(piVar6);
  iVar4 = (int)uVar3;
  while (iVar4 != -1) {
    piVar5 = (int *)(**(code **)(*piVar6 + 0x14))(piVar6,uVar3,auStack_240);
    (**(code **)(*piVar5 + 0x1c))(param_1,piVar5,param_3);
    vectorMinimumFloatingPoint(in_vs32,in_vs44);
    vectorMaximumFloatingPoint(in_vs45,in_vs43);
    puVar1 = (undefined4 *)((int)in_r0 + param_5 & 0xfffffff0);
    *puVar1 = in_register_000100a0;
    puVar1[1] = in_register_000100a4;
    puVar1[2] = in_register_000100a8;
    puVar1[3] = in_vr10;
    puVar1 = (undefined4 *)((int)in_r0 + param_5 + 0x10 & 0xfffffff0);
    *puVar1 = in_register_00010090;
    puVar1[1] = in_register_00010094;
    puVar1[2] = in_register_00010098;
    puVar1[3] = in_vr9;
    uVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,uVar3);
    iVar4 = (int)uVar3;
  }
  return;
}

