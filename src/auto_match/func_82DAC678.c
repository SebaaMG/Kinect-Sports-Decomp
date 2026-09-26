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


void fn_82DAC678(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  bVar1 = *(byte *)(param_1 + 10);
  iVar4 = *(ushort *)(param_1 + 4) - 1;
  *(short *)(param_1 + 4) = (short)iVar4;
  if (param_2 < iVar4) {
    iVar2 = (int)(uint)bVar1 >> 2;
    iVar4 = iVar4 - param_2;
    puVar6 = (undefined4 *)
             ((uint)bVar1 * (int)(short)param_2 + (uint)*(ushort *)(param_1 + 6) * 0x20 + param_1 +
             0x30);
    iVar8 = param_2 * 0x20 + param_1 + 0x30;
    do {
      puVar7 = (undefined4 *)((int)puVar6 + (uint)bVar1);
      puVar5 = (undefined4 *)(in_r0 + iVar8 + 0x20 & 0xfffffff0);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar3 = (undefined4 *)(in_r0 + iVar8 & 0xfffffff0);
      *puVar3 = *puVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar5 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      puVar3 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
      *puVar3 = *puVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      if (iVar2 != 0) {
        lVar9 = (longlong)iVar2;
        puVar5 = puVar7;
        do {
          *(undefined4 *)(((int)puVar6 - (int)puVar7) + (int)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar4 = iVar4 + -1;
      puVar6 = puVar7;
      iVar8 = iVar8 + 0x20;
    } while (iVar4 != 0);
  }
  return;
}

