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
extern int fn_82CE5410();
extern int fn_82D9AFC0();
extern int fn_82D9CDC0();
extern int fn_82DED480();
extern int fn_82DF6A68();
extern int fn_82DF6B40();


undefined8 fn_82DF5EB0(int param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar3 = fn_82DED480(param_1,auStack_70,auStack_60);
  if (iVar3 == 0) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      fn_82D9CDC0(param_2,*(undefined4 *)(param_1 + 0x14));
    }
    iVar3 = (*(int **)(param_2 + 0x38))[*(int *)(param_2 + 0x3c) + -1];
    if (iVar3 == *(int *)(param_1 + 0x14)) {
      fn_82D9AFC0(param_3,auStack_70,auStack_60);
      fn_82D9CDC0(param_2,*(undefined4 *)(param_1 + 0x18));
      return 0;
    }
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      fn_82D9AFC0(param_3,auStack_60,auStack_70);
      fn_82D9CDC0(param_2,*(undefined4 *)(param_1 + 0x14));
      return 0;
    }
    iVar3 = **(int **)(param_2 + 0x38);
    if (iVar3 == *(int *)(param_1 + 0x14)) {
      puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      iVar3 = fn_82CE5410();
      fn_82DF6A68(param_3 + 0x18,*(undefined4 *)(iVar3 + 0x10),0,0,auStack_50,1);
      fn_82DF6B40(param_2,*(undefined4 *)(param_1 + 0x18));
      return 0;
    }
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      iVar3 = fn_82CE5410();
      fn_82DF6A68(param_3 + 0x18,*(undefined4 *)(iVar3 + 0x10),0,0,auStack_50,1);
      fn_82DF6B40(param_2,*(undefined4 *)(param_1 + 0x14));
      return 0;
    }
  }
  return 1;
}

