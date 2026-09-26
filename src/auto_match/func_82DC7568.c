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


void fn_82DC7568(int param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar4 = param_2 + 0x30;
  iVar7 = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  iVar6 = (uint)*(ushort *)(param_1 + 6) * 0x20 + param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  bVar1 = *(byte *)(param_2 + 10);
  puVar5 = (undefined4 *)((uint)*(ushort *)(param_2 + 6) * 0x20 + param_2 + 0x30);
  if (*(short *)(param_2 + 4) != 0) {
    param_1 = (iVar4 - param_2) + param_1;
    do {
      puVar3 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
      *puVar2 = *puVar3;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar3 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      iVar4 = iVar4 + 0x20;
      puVar2 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
      *puVar2 = *puVar3;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      param_1 = param_1 + 0x20;
      if ((int)(uint)bVar1 >> 2 != 0) {
        lVar8 = (longlong)((int)(uint)bVar1 >> 2);
        puVar3 = puVar5;
        do {
          *(undefined4 *)((iVar6 - (int)puVar5) + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar6 = (uint)bVar1 + iVar6;
      puVar5 = (undefined4 *)((uint)bVar1 + (int)puVar5);
    } while (iVar7 < (int)(uint)*(ushort *)(param_2 + 4));
  }
  return;
}

