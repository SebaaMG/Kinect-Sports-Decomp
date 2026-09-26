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


void fn_8309F460(int param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 in_r0;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar7 = (uint)bVar1;
  if ((uint)bVar1 < (uint)*(byte *)(param_1 + 3) + (uint)bVar1) {
    pbVar8 = &lbl_82187DE1 + uVar7;
    do {
      pbVar3 = pbVar8 + -1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar8;
      puVar4 = (undefined4 *)((uint)*pbVar3 + param_3 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      iVar6 = (int)in_r0;
      puVar5 = (undefined4 *)((uint)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      puVar4 = (undefined4 *)((uint)bVar1 + param_3 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_70 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      puVar4 = (undefined4 *)((uint)bVar2 + param_4 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(auStack_50 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      fn_830A5D78(auStack_70,param_2,param_5);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)((uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2)));
  }
  return;
}

