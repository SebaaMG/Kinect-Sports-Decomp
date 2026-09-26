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
extern int fn_830A6890();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D9E510(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  puVar2 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)(param_5 + 0x10U & 0xfffffff0);
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  puVar3 = (undefined4 *)((*(int *)(iVar1 + 4) + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  *param_3 = puVar2 + 4;
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar3 = uVar12;
  puVar3[1] = uVar13;
  puVar3[2] = uVar14;
  puVar3[3] = uVar15;
  uStack_40 = *puVar2;
  uStack_3c = puVar2[1];
  fn_830A6890(auStack_70,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

