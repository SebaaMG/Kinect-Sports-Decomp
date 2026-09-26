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
extern int fn_830A5D78();
extern unsigned int lbl_83184698;
extern unsigned int lbl_8318469C;


void fn_82D9E110(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  iVar1 = *(int *)(iVar1 + 4);
  iVar3 = iVar1 * 4;
  iVar2 = *(int *)(&lbl_8318469C + iVar3);
  puVar4 = (undefined4 *)((iVar1 + 8) * 0x10 + param_5 & 0xfffffff0);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  puVar4 = (undefined4 *)((*(int *)(&lbl_83184698 + iVar3) + 5) * 0x10 + param_5 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (undefined4 *)((iVar2 + 5) * 0x10 + param_5 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fn_830A5D78(auStack_50,param_6,param_7);
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_000100a0;
  puVar4[1] = in_register_000100a4;
  puVar4[2] = in_register_000100a8;
  puVar4[3] = in_vr10;
  fn_830A5D78(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 2;
  return;
}

