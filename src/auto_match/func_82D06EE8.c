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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82D064E8();
extern int fn_82D06938();
extern unsigned int lbl_82057518;


void fn_82D06EE8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
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
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
  uVar14 = *puVar2;
  uVar15 = puVar2[1];
  uVar16 = puVar2[2];
  uVar17 = puVar2[3];
  puVar2 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar2 = (undefined4 *)(param_3 + 0x30U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  fn_82D064E8((double)lbl_82057518,auStack_60);
  fn_82D06938(param_1,param_2,auStack_60);
  return;
}

