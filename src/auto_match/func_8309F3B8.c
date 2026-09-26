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
extern int fn_830A5D78();
extern unsigned int lbl_82187DE1;
extern unsigned int lbl_82187DE2;


void fn_8309F3B8(int param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = (&lbl_82187DE1)[bVar1];
  bVar3 = (&lbl_82187DE2)[bVar1];
  puVar4 = (undefined4 *)((uint)bVar1 * 0x10 + param_3 & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar4 = (undefined4 *)((uint)bVar2 + param_4 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (undefined4 *)((uint)bVar3 + param_4 & 0xfffffff0);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  puVar5 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fn_830A5D78(auStack_70,param_2,param_5);
  puVar4 = (undefined4 *)((uint)bVar3 + param_4 & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_000100a0;
  puVar4[1] = in_register_000100a4;
  puVar4[2] = in_register_000100a8;
  puVar4[3] = in_vr10;
  fn_830A5D78(auStack_70,param_2,param_5);
  return;
}

