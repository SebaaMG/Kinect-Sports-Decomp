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
extern unsigned int *auStack_60;
extern int fn_82A26920();
extern int fn_82A26C08();
extern int fn_82A27010();
extern int fn_82F691F0();


undefined8
fn_82A27260(int param_1,ulonglong param_2,longlong param_3,ulonglong param_4,ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar13;
  undefined4 *puVar12;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint auStack_60 [24];
  
  if ((ulonglong)*(uint *)(param_1 + 0x1c) < (param_5 & 0xffffffff)) {
    return 0;
  }
  puVar9 = (ushort *)param_3;
  uVar13 = *puVar9;
  bVar1 = *(byte *)((int)puVar9 + 5);
  lVar15 = (ulonglong)uVar13 * 0x10 + param_3;
  if ((bVar1 & 0x10) == 0) {
    puVar6 = (ushort *)lVar15;
    bVar2 = *(byte *)((int)puVar6 + 5);
    if ((bVar2 & 1) != 0) {
      return 0;
    }
    auStack_60[0] = (uint)*puVar6 + (uint)uVar13;
    if ((ulonglong)auStack_60[0] < (param_5 & 0xffffffff)) {
      return 0;
    }
    puVar3 = *(uint **)(puVar6 + 6);
    puVar4 = *(uint **)(puVar6 + 4);
    if (((ulonglong)*puVar3 == (ulonglong)puVar4[1]) &&
       ((ulonglong)*puVar3 == (lVar15 + 8U & 0xffffffff))) {
      *puVar3 = (uint)puVar4;
      puVar4[1] = (uint)puVar3;
      if ((puVar4 == puVar3) && (uVar13 = *puVar6, uVar13 < 0x80)) {
        iVar8 = ((uVar13 >> 5) + 0x58) * 4;
        *(uint *)(iVar8 + param_1) = 1 << (uVar13 & 0x1f) ^ *(uint *)(iVar8 + param_1);
      }
    }
    if ((*(byte *)((int)puVar6 + 5) & 4) != 0) {
      uVar11 = (ulonglong)*puVar6 * 0x10 - 0x18;
      if (((*(byte *)((int)puVar6 + 5) & 2) != 0) && (4 < (uVar11 & 0xffffffff))) {
        uVar11 = (ulonglong)*puVar6 * 0x10 - 0x1c;
      }
      RtlCompareMemoryUlong(lVar15 + 0x18,uVar11,0xfffffffffeeefeee);
    }
    uVar11 = (ulonglong)auStack_60[0];
    *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*puVar6;
  }
  else {
    auStack_60[0] = (int)((param_5 - uVar13 & 0xffffffff) << 4) + 0xffffU & 0xffff0000;
    lVar15 = fn_82A26920(param_1,*(undefined4 *)((*(byte *)(puVar9 + 2) + 0x18) * 4 + param_1),
                           auStack_60,lVar15);
    if (lVar15 == 0) {
      return 0;
    }
    auStack_60[0] = auStack_60[0] >> 4;
    iVar8 = fn_82A26C08(param_1,lVar15,auStack_60,0);
    bVar2 = *(byte *)(iVar8 + 5);
    uVar11 = (ulonglong)*puVar9 + (ulonglong)auStack_60[0];
    if ((uVar11 & 0xffffffff) < (param_5 & 0xffffffff)) {
      fn_82A27010(param_1,iVar8);
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + auStack_60[0];
      return 0;
    }
  }
  uVar11 = uVar11 - param_5;
  auStack_60[0] = (uint)uVar11;
  uVar14 = (ulonglong)*puVar9 * 0x10 - (ulonglong)*(byte *)(puVar9 + 3);
  if ((uVar11 & 0xffffffff) < 3) {
    param_5 = uVar11 + param_5;
    uVar11 = 0;
    auStack_60[0] = 0;
  }
  if ((bVar1 & 2) != 0) {
    uVar13 = *puVar9;
    iVar8 = (int)((param_5 & 0xffffffff) << 4);
    *(undefined8 *)((int)puVar9 + iVar8 + -0x10) = *(undefined8 *)(puVar9 + (uint)uVar13 * 8 + -8);
    *(undefined8 *)((int)puVar9 + iVar8 + -8) = *(undefined8 *)(puVar9 + (uint)uVar13 * 8 + -4);
    uVar11 = (ulonglong)auStack_60[0];
  }
  uVar13 = (ushort)param_5;
  if ((uVar11 & 0xffffffff) == 0) {
    *(byte *)((int)puVar9 + 5) = *(byte *)((int)puVar9 + 5) | bVar2 & 0x10;
    *(char *)(puVar9 + 3) = (char)((param_5 & 0xffffffff) << 4) - (char)param_4;
    *puVar9 = uVar13;
    if ((bVar2 & 0x10) == 0) {
      *(ushort *)((int)puVar9 + (int)((param_5 & 0xffff) << 4) + 2) = uVar13;
    }
    else {
      *(ushort **)(*(int *)((*(byte *)(puVar9 + 2) + 0x18) * 4 + param_1) + 0x40) = puVar9;
    }
    goto LAB_82a277a4;
  }
  lVar15 = (param_5 & 0xfffffff) * 0x10;
  lVar16 = lVar15 + param_3;
  *puVar9 = uVar13;
  *(char *)(puVar9 + 3) = (char)lVar15 - (char)param_4;
  puVar6 = (ushort *)lVar16;
  puVar6[1] = uVar13;
  bVar1 = *(byte *)(puVar9 + 2);
  *(byte *)(puVar6 + 2) = bVar1;
  uVar13 = (ushort)auStack_60[0];
  if ((bVar2 & 0x10) == 0) {
    lVar15 = ((ulonglong)auStack_60[0] & 0xfffffff) * 0x10 + lVar16;
    puVar7 = (ushort *)lVar15;
    bVar1 = *(byte *)((int)puVar7 + 5);
    if ((bVar1 & 1) == 0) {
      puVar3 = *(uint **)(puVar7 + 6);
      puVar4 = *(uint **)(puVar7 + 4);
      if (((ulonglong)*puVar3 == (ulonglong)puVar4[1]) &&
         ((ulonglong)*puVar3 == (lVar15 + 8U & 0xffffffff))) {
        *puVar3 = (uint)puVar4;
        puVar4[1] = (uint)puVar3;
        if ((puVar4 == puVar3) && (uVar13 = *puVar7, uVar13 < 0x80)) {
          iVar8 = ((uVar13 >> 5) + 0x58) * 4;
          *(uint *)(iVar8 + param_1) = 1 << (uVar13 & 0x1f) ^ *(uint *)(iVar8 + param_1);
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        uVar11 = (ulonglong)*puVar7 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar11 & 0xffffffff))) {
          uVar11 = (ulonglong)*puVar7 * 0x10 - 0x1c;
        }
        RtlCompareMemoryUlong(lVar15 + 0x18,uVar11,0xfffffffffeeefeee);
      }
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*puVar7;
      auStack_60[0] = *puVar7 + auStack_60[0];
      *(byte *)((int)puVar6 + 5) = bVar1;
      if (0xf000 < auStack_60[0]) {
        fn_82A27010(param_1,lVar16);
        goto LAB_82a277a4;
      }
      *puVar6 = (ushort)auStack_60[0];
      if ((bVar1 & 0x10) == 0) {
        puVar6[auStack_60[0] * 8 + 1] = (ushort)auStack_60[0];
      }
      else {
        *(ushort **)(*(int *)((*(byte *)(puVar6 + 2) + 0x18) * 4 + param_1) + 0x40) = puVar6;
      }
      *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
      uVar10 = auStack_60[0] & 0xffff;
      if (0x7f < uVar10) {
        for (puVar12 = *(undefined4 **)(param_1 + 0x180);
            ((undefined4 *)(param_1 + 0x180) != puVar12 && (*(ushort *)(puVar12 + -2) < uVar10));
            puVar12 = (undefined4 *)*puVar12) {
        }
        goto LAB_82a2776c;
      }
      goto LAB_82a2770c;
    }
    *(byte *)((int)puVar6 + 5) = bVar2 & 0xef;
    *puVar6 = uVar13;
    puVar6[auStack_60[0] * 8 + 1] = uVar13;
    *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xf8;
    if ((auStack_60[0] & 0xffff) < 0x80) goto LAB_82a275bc;
    for (puVar12 = *(undefined4 **)(param_1 + 0x180);
        ((undefined4 *)(param_1 + 0x180) != puVar12 &&
        ((uint)*(ushort *)(puVar12 + -2) < (auStack_60[0] & 0xffff)));
        puVar12 = (undefined4 *)*puVar12) {
    }
  }
  else {
    *(ushort **)(*(int *)((bVar1 + 0x18) * 4 + param_1) + 0x40) = puVar6;
    *(byte *)((int)puVar6 + 5) = bVar2;
    *(byte *)((int)puVar6 + 5) = bVar2 & 0xf8;
    *puVar6 = uVar13;
    if ((auStack_60[0] & 0xffff) < 0x80) {
LAB_82a275bc:
      uVar10 = auStack_60[0] & 0xffff;
LAB_82a2770c:
      puVar12 = (undefined4 *)((uVar10 + 0x30) * 8 + param_1);
      if ((undefined4 *)*puVar12 == puVar12) {
        iVar8 = ((*puVar6 >> 5) + 0x58) * 4;
        *(uint *)(iVar8 + param_1) = 1 << (*puVar6 & 0x1f) | *(uint *)(iVar8 + param_1);
      }
    }
    else {
      for (puVar12 = *(undefined4 **)(param_1 + 0x180);
          ((undefined4 *)(param_1 + 0x180) != puVar12 &&
          ((uint)*(ushort *)(puVar12 + -2) < (auStack_60[0] & 0xffff)));
          puVar12 = (undefined4 *)*puVar12) {
      }
    }
  }
LAB_82a2776c:
  puVar5 = (undefined4 *)puVar12[1];
  *(undefined4 **)(puVar6 + 4) = puVar12;
  *(undefined4 **)(puVar6 + 6) = puVar5;
  *puVar5 = puVar6 + 4;
  puVar12[1] = puVar6 + 4;
  *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + auStack_60[0];
LAB_82a277a4:
  if (((param_2 & 8) != 0) && ((uVar14 & 0xffffffff) < (param_4 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar14 + param_3 + 0x10,0,param_4 - uVar14);
  }
  *(byte *)((int)puVar9 + 5) =
       (byte)((param_2 & 0xffffffff) >> 4) & 0xe0 | *(byte *)((int)puVar9 + 5) & 0x1f;
  return 1;
}

