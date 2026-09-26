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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE68B8();
extern int fn_82D8BC78();
extern int fn_82D94138();
extern int fn_82D95BE0();


void fn_82D94248(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar7 = (int)param_2;
    iVar6 = 0;
    do {
      iVar3 = (int)in_r0;
      puVar2 = (undefined4 *)(iVar3 + iVar7 & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar4 = (undefined4 *)(iVar3 + iVar7 + 0x10 & 0xfffffff0);
      uVar19 = *puVar4;
      uVar20 = puVar4[1];
      uVar21 = puVar4[2];
      uVar22 = puVar4[3];
      puVar4 = (undefined4 *)(iVar3 + iVar7 + 0x20 & 0xfffffff0);
      uVar15 = *puVar4;
      uVar16 = puVar4[1];
      uVar17 = puVar4[2];
      uVar18 = puVar4[3];
      puVar4 = (undefined4 *)(iVar3 + iVar7 + 0x30 & 0xfffffff0);
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      iVar1 = *(int *)(param_1 + 8);
      puVar4 = (undefined4 *)((uint)(auStack_80 + iVar3) & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      puVar2 = (undefined4 *)((uint)(auStack_70 + iVar3) & 0xfffffff0);
      *puVar2 = uVar19;
      puVar2[1] = uVar20;
      puVar2[2] = uVar21;
      puVar2[3] = uVar22;
      puVar2 = (undefined4 *)((uint)(auStack_60 + iVar3) & 0xfffffff0);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      puVar2 = (undefined4 *)((uint)(auStack_50 + iVar3) & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      fn_82CE68B8(auStack_80,(ulonglong)*(uint *)(iVar6 + iVar1) + 0xf0);
      fn_82D8BC78(*(undefined4 *)(iVar6 + *(int *)(param_1 + 8)),auStack_80);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar7 = 0;
    do {
      fn_82D95BE0(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar7),param_2);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar7 = 0;
    do {
      fn_82D94138(*(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7),param_2);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x30));
  }
  return;
}

