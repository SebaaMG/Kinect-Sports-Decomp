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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82CE6768();


void fn_82CE68B8(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  iVar2 = (int)param_1;
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar3 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
  uVar15 = *puVar3;
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar3 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  puVar3 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  puVar1[2] = uVar17;
  puVar1[3] = uVar18;
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  fn_82CE6768(param_1,auStack_50,param_2);
  return;
}

