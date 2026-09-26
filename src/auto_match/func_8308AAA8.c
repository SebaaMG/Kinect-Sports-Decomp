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
extern unsigned int lbl_821878B0;


void fn_8308AAA8(int param_1,int param_2,int param_3,int param_4,ushort param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int in_r0;
  ulonglong uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_20 [16];
  
  uVar1 = *(ushort *)(param_4 + 8);
  uVar2 = *(ushort *)(param_4 + 10);
  puVar4 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  uVar13 = *puVar4;
  uVar14 = puVar4[1];
  uVar15 = puVar4[2];
  uVar16 = puVar4[3];
  if (-1 < (longlong)(param_2 >> 7)) {
    lVar9 = (longlong)(param_2 >> 7) + 1;
    iVar7 = param_6;
    do {
      puVar4 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      lVar9 = lVar9 + -1;
      iVar7 = iVar7 + 0x10;
    } while (lVar9 != 0);
  }
  iVar7 = *(int *)(param_1 + 0xac);
  uVar10 = iVar7 + 4;
  if ((*(int *)(param_1 + 0xd0) != 0) &&
     (param_3 = param_3 >> (0x10U - *(int *)(param_1 + 0xd4) & 0x3f), 0 < param_3)) {
    iVar11 = *(int *)(param_1 + 0xd8) + param_3 * 0x10;
    iVar7 = ((int)(uint)*(ushort *)(iVar11 + -0x10) >> 5) * 4;
    *(uint *)(iVar7 + param_6) =
         *(uint *)(&lbl_821878B0 + (*(ushort *)(iVar11 + -0x10) & 0x1f) * 4) ^
         *(uint *)(iVar7 + param_6);
    uVar5 = (ulonglong)*(uint *)(iVar11 + -8);
    puVar6 = *(ushort **)(iVar11 + -0xc);
    if (-1 < (longlong)(uVar5 - 1)) {
      do {
        uVar3 = *puVar6;
        if (uVar3 != param_5) {
          iVar7 = ((int)(uint)uVar3 >> 5) * 4;
          *(uint *)(iVar7 + param_6) =
               *(uint *)(&lbl_821878B0 + (uVar3 & 0x1f) * 4) ^ *(uint *)(iVar7 + param_6);
        }
        puVar6 = puVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar11 = (uint)*(ushort *)(iVar11 + -0x10) * 0x10 + *(int *)(param_1 + 0xa0);
    puVar6 = (ushort *)((uint)*(ushort *)(iVar11 + 10) * 4 + *(int *)(param_1 + 0xac));
    puVar12 = (ushort *)((*(ushort *)(iVar11 + 8) + 1) * 4 + *(int *)(param_1 + 0xac));
    if (puVar12 < puVar6) {
      lVar9 = (ulonglong)((uint)((int)puVar6 + (-1 - (int)puVar12)) >> 2) + 1;
      do {
        if ((*puVar12 & 1) == 0) {
          iVar7 = ((int)(uint)puVar12[1] >> 5) * 4;
          *(uint *)(iVar7 + param_6) =
               *(uint *)(iVar7 + param_6) & ~*(uint *)(&lbl_821878B0 + (puVar12[1] & 0x1f) * 4);
        }
        puVar12 = puVar12 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    iVar7 = *(int *)(param_1 + 0xac);
    uVar10 = (*(ushort *)(iVar11 + 8) + 1) * 4 + iVar7;
  }
  uVar8 = (uint)uVar1 * 4 + iVar7;
  if (uVar10 < uVar8) {
    lVar9 = (ulonglong)((uVar8 - uVar10) - 1 >> 2) + 1;
    do {
      puVar6 = (ushort *)(uVar10 + 2);
      uVar10 = uVar10 + 4;
      iVar7 = ((int)(uint)*puVar6 >> 5) * 4;
      *(uint *)(iVar7 + param_6) =
           *(uint *)(&lbl_821878B0 + (*puVar6 & 0x1f) * 4) ^ *(uint *)(iVar7 + param_6);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar12 = (ushort *)(uVar10 + 4);
  puVar6 = (ushort *)((uint)uVar2 * 4 + *(int *)(param_1 + 0xac));
  if (puVar12 < puVar6) {
    lVar9 = (ulonglong)((uint)((int)puVar6 + (-1 - (int)puVar12)) >> 2) + 1;
    do {
      if ((*puVar12 & 1) == 0) {
        iVar7 = ((int)(uint)puVar12[1] >> 5) * 4;
        *(uint *)(iVar7 + param_6) =
             *(uint *)(&lbl_821878B0 + (puVar12[1] & 0x1f) * 4) ^ *(uint *)(iVar7 + param_6);
      }
      puVar12 = puVar12 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

