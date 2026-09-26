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


void fn_827CB210(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  
  iVar4 = *(int *)(param_1 + 0x1a0);
  param_3 = param_3 * 4;
  iVar5 = *(int *)(iVar4 + 0x10);
  iVar6 = *(int *)(iVar4 + 0x14);
  iVar7 = *(int *)(iVar4 + 0x18);
  iVar4 = *(int *)(iVar4 + 0x1c);
  pbVar14 = *(byte **)(*param_2 + param_3);
  pbVar12 = *(byte **)(param_2[1] + param_3);
  iVar8 = *(int *)(param_1 + 0x120);
  pbVar13 = *(byte **)(param_2[2] + param_3);
  puVar15 = (undefined1 *)*param_4;
  for (uVar16 = (ulonglong)(*(uint *)(param_1 + 0x5c) >> 1); uVar16 != 0; uVar16 = uVar16 - 1) {
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    bVar3 = *pbVar14;
    iVar9 = *(int *)((uint)bVar1 * 4 + iVar5);
    iVar10 = *(int *)((uint)bVar2 * 4 + iVar6);
    iVar11 = *(int *)((uint)bVar2 * 4 + iVar4) + *(int *)((uint)bVar1 * 4 + iVar7) >> 0x10;
    *puVar15 = *(undefined1 *)((uint)bVar3 + iVar9 + iVar8);
    puVar15[1] = *(undefined1 *)((uint)bVar3 + iVar11 + iVar8);
    puVar15[2] = *(undefined1 *)((uint)bVar3 + iVar10 + iVar8);
    bVar1 = pbVar14[1];
    puVar15[3] = *(undefined1 *)((uint)bVar1 + iVar9 + iVar8);
    pbVar14 = pbVar14 + 2;
    puVar15[4] = *(undefined1 *)((uint)bVar1 + iVar11 + iVar8);
    puVar15[5] = *(undefined1 *)((uint)bVar1 + iVar10 + iVar8);
    puVar15 = puVar15 + 6;
  }
  if ((*(uint *)(param_1 + 0x5c) & 1) != 0) {
    bVar1 = *pbVar14;
    iVar4 = *(int *)((uint)*pbVar12 * 4 + iVar4);
    iVar7 = *(int *)((uint)*pbVar13 * 4 + iVar7);
    iVar6 = *(int *)((uint)*pbVar12 * 4 + iVar6);
    *puVar15 = *(undefined1 *)(*(int *)((uint)*pbVar13 * 4 + iVar5) + (uint)bVar1 + iVar8);
    puVar15[1] = *(undefined1 *)((uint)bVar1 + (iVar4 + iVar7 >> 0x10) + iVar8);
    puVar15[2] = *(undefined1 *)((uint)bVar1 + iVar6 + iVar8);
  }
  return;
}

