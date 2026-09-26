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


void fn_827CB350(int param_1,int *param_2,ulonglong param_3,undefined4 *param_4)

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
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulonglong uVar19;
  
  iVar4 = *(int *)(param_1 + 0x1a0);
  puVar15 = (undefined4 *)((int)((param_3 & 0xffffffff) << 3) + *param_2);
  iVar9 = (int)((param_3 & 0xffffffff) << 2);
  iVar5 = *(int *)(param_1 + 0x120);
  pbVar13 = (byte *)*puVar15;
  pbVar12 = (byte *)puVar15[1];
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar7 = *(int *)(iVar4 + 0x14);
  iVar8 = *(int *)(iVar4 + 0x18);
  iVar4 = *(int *)(iVar4 + 0x1c);
  puVar16 = (undefined1 *)*param_4;
  pbVar17 = *(byte **)(param_2[1] + iVar9);
  pbVar18 = *(byte **)(param_2[2] + iVar9);
  puVar14 = (undefined1 *)param_4[1];
  for (uVar19 = (ulonglong)(*(uint *)(param_1 + 0x5c) >> 1); uVar19 != 0; uVar19 = uVar19 - 1) {
    bVar1 = *pbVar18;
    pbVar18 = pbVar18 + 1;
    bVar2 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    bVar3 = *pbVar13;
    iVar9 = *(int *)((uint)bVar1 * 4 + iVar6);
    iVar10 = *(int *)((uint)bVar2 * 4 + iVar7);
    iVar11 = *(int *)((uint)bVar2 * 4 + iVar4) + *(int *)((uint)bVar1 * 4 + iVar8) >> 0x10;
    *puVar16 = *(undefined1 *)((uint)bVar3 + iVar9 + iVar5);
    puVar16[1] = *(undefined1 *)((uint)bVar3 + iVar11 + iVar5);
    puVar16[2] = *(undefined1 *)((uint)bVar3 + iVar10 + iVar5);
    bVar1 = pbVar13[1];
    puVar16[3] = *(undefined1 *)((uint)bVar1 + iVar9 + iVar5);
    pbVar13 = pbVar13 + 2;
    puVar16[4] = *(undefined1 *)((uint)bVar1 + iVar11 + iVar5);
    puVar16[5] = *(undefined1 *)((uint)bVar1 + iVar10 + iVar5);
    puVar16 = puVar16 + 6;
    bVar1 = *pbVar12;
    *puVar14 = *(undefined1 *)((uint)bVar1 + iVar9 + iVar5);
    puVar14[1] = *(undefined1 *)((uint)bVar1 + iVar11 + iVar5);
    puVar14[2] = *(undefined1 *)((uint)bVar1 + iVar10 + iVar5);
    bVar1 = pbVar12[1];
    puVar14[3] = *(undefined1 *)((uint)bVar1 + iVar9 + iVar5);
    pbVar12 = pbVar12 + 2;
    puVar14[4] = *(undefined1 *)((uint)bVar1 + iVar11 + iVar5);
    puVar14[5] = *(undefined1 *)((uint)bVar1 + iVar10 + iVar5);
    puVar14 = puVar14 + 6;
  }
  if ((*(uint *)(param_1 + 0x5c) & 1) != 0) {
    bVar1 = *pbVar13;
    iVar6 = *(int *)((uint)*pbVar18 * 4 + iVar6);
    iVar7 = *(int *)((uint)*pbVar17 * 4 + iVar7);
    iVar4 = *(int *)((uint)*pbVar17 * 4 + iVar4) + *(int *)((uint)*pbVar18 * 4 + iVar8) >> 0x10;
    *puVar16 = *(undefined1 *)((uint)bVar1 + iVar6 + iVar5);
    puVar16[1] = *(undefined1 *)((uint)bVar1 + iVar4 + iVar5);
    puVar16[2] = *(undefined1 *)((uint)bVar1 + iVar7 + iVar5);
    bVar1 = *pbVar12;
    *puVar14 = *(undefined1 *)((uint)bVar1 + iVar6 + iVar5);
    puVar14[1] = *(undefined1 *)((uint)bVar1 + iVar4 + iVar5);
    puVar14[2] = *(undefined1 *)((uint)bVar1 + iVar7 + iVar5);
  }
  return;
}

