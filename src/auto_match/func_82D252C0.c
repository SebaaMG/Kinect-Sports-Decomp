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
extern unsigned int *auStack_80;
extern int fn_82D2D320();
extern int fn_82D2D400();
extern unsigned int lbl_8323B1A0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D252C0(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_80 [64];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uStack_40 = 0xffffffff;
  uStack_3c = 0xffffffff;
  iVar5 = fn_82D2D320(param_1 + 8,auStack_80);
  puVar1 = (undefined4 *)((uint)(&lbl_8323B1A0 + in_r0) & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)(iVar5 + 0x30U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)(iVar5 + 0x10U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  iVar6 = fn_82D2D400(param_1 + 0x20,param_2);
  iVar7 = fn_82D2D400(param_1 + 0x20,param_2);
  *(int *)(param_2 + 8) = iVar5;
  *(int *)(iVar6 + 0xc) = iVar5;
  *(int *)(iVar7 + 0x10) = iVar5;
  uVar3 = *(uint *)(param_2 + 0x1c) & 0xfffffffc;
  uVar4 = *(uint *)(param_2 + 0x1c) & 3;
  *(uint *)(iVar6 + 0x1c) = uVar4 + uVar3;
  if (uVar3 != 0) {
    *(int *)((uVar4 + 5) * 4 + uVar3) = iVar6 + 2;
  }
  uVar3 = *(uint *)(param_2 + 0x14) & 0xfffffffc;
  uVar4 = *(uint *)(param_2 + 0x14) & 3;
  *(uint *)(iVar7 + 0x14) = uVar4 + uVar3;
  if (uVar3 != 0) {
    *(int *)((uVar4 + 5) * 4 + uVar3) = iVar7;
  }
  *(int *)(param_2 + 0x14) = iVar7 + 1;
  *(int *)(iVar7 + 0x18) = param_2;
  *(int *)(iVar6 + 0x14) = iVar7 + 2;
  *(int *)(iVar7 + 0x1c) = iVar6;
  *(int *)(iVar6 + 0x18) = param_2 + 2;
  *(int *)(param_2 + 0x1c) = iVar6 + 1;
  return;
}

