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
extern unsigned int uStack_7a;


void fn_829FC3D0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  float *pfVar9;
  ushort *puVar10;
  ushort *puVar11;
  longlong lVar12;
  ushort uStack_7a;
  
  puVar11 = (ushort *)(param_1 + 0x2eff0);
  if (*(uint *)(param_1 + 0x31974) < 0xf) {
    lVar12 = 0x1e0;
    piVar2 = (int *)(param_1 + 0x4b6d0);
    puVar3 = (ushort *)(param_1 + 0x2eff4);
    pfVar9 = (float *)(param_1 + 0x1c408);
    do {
      uVar1 = puVar3[-2];
      puVar10 = (ushort *)((int)pfVar9 + *piVar2 + (-0x1c408 - param_1));
      uStack_7a = (ushort)(longlong)pfVar9[-4];
      if ((ulonglong)*puVar10 < ((longlong)pfVar9[-4] & 0xffffU)) {
        uStack_7a = *puVar10;
      }
      *puVar10 = uStack_7a;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      iVar8 = *piVar2 + (-0x1c408 - param_1);
      uStack_7a = (ushort)(longlong)*pfVar9;
      puVar10 = (ushort *)((int)pfVar9 + iVar8 + 0x10);
      uVar1 = puVar3[-1];
      uVar6 = *puVar10;
      if ((ulonglong)uVar6 < ((longlong)*pfVar9 & 0xffffU)) {
        uStack_7a = uVar6;
      }
      *puVar10 = uStack_7a;
      uVar6 = *(ushort *)((int)pfVar9 + iVar8 + 0x14);
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      *(ushort *)((int)pfVar9 + iVar8 + 0x14) = uVar6;
      uVar1 = *puVar3;
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c3e8 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[4];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[1];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c3d8 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[8];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[2];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c3c8 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[0xc];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[3];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c3b8 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[0x10];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[4];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c3a8 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[0x14];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[5];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c398 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[0x18];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[6];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c388 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[0x1c];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[7];
      puVar10 = (ushort *)((int)pfVar9 + (-0x1c378 - param_1) + *piVar2);
      uStack_7a = (ushort)(longlong)pfVar9[0x20];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      pfVar9 = pfVar9 + 0x28;
      puVar3 = puVar3 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  lVar12 = 0x12c0;
  puVar3 = (ushort *)(param_1 + 0x1c3fe);
  do {
    uVar1 = *puVar11;
    uVar4 = (uint)uVar1;
    puVar10 = (ushort *)((int)puVar3 + *(int *)(param_1 + 0x4b6d0) + (-0x1c3fe - param_1));
    if ((*puVar3 & 8) == 0) {
      iVar8 = uVar4 - ((int)(uVar4 - puVar10[1]) >> 0x1f & uVar4 - puVar10[1]);
      puVar10[1] = (ushort)iVar8;
      if (iVar8 == 0x7fff) {
        *(char *)((int)puVar10 + 0xd) = *(char *)((int)puVar10 + 0xd) + '\x01';
      }
      if (((ulonglong)puVar10[2] < ((longlong)iVar8 * 0xe667 & 0xffffffffU) >> 0x10) &&
         (6 < puVar3[-1])) {
        puVar10[2] = (ushort)iVar8;
      }
      *(undefined1 *)(puVar10 + 6) = 0;
      uVar5 = ((uint)*puVar10 * 0x10 - (uint)*puVar10) + (uint)uVar1;
      *puVar10 = (short)((int)uVar5 >> 4) + (ushort)((int)uVar5 < 0 && (uVar5 & 0xf) != 0);
    }
    else if ((*puVar3 & 0x100) == 0) {
      *(undefined1 *)((int)puVar10 + 0xd) = 0;
      if (*(byte *)(puVar10 + 6) < 0xfb) {
        *(byte *)(puVar10 + 6) = *(byte *)(puVar10 + 6) + 1;
      }
      if (0x1d < *(byte *)(puVar10 + 6)) {
        puVar10[1] = 0x7fff;
        uVar5 = *puVar10 + 0x32;
        puVar10[2] = 0x7fff;
        if (0x7ffe < uVar5) {
          uVar5 = 0x7fff;
        }
        *puVar10 = (ushort)uVar5;
      }
    }
    else {
      puVar10[2] = 0x7fff;
      *(undefined1 *)(puVar10 + 6) = 0;
    }
    if (puVar3[-1] < 7) {
      if (((puVar3[-1] != 0) && ((*puVar3 & 4) != 0)) && ((*puVar3 & 2) == 0)) {
        puVar10[2] = 0x7fff;
LAB_829fca1c:
        puVar10[5] = 0x7fff;
      }
    }
    else if ((int)(*puVar10 - 500) < (int)(uint)uVar1) {
      if ((puVar10[1] == 0x7fff) && (0x14 < *(byte *)((int)puVar10 + 0xd))) {
        puVar10[1] = uVar1;
        puVar10[2] = uVar1;
        *(undefined1 *)((int)puVar10 + 0xd) = 0;
      }
      if (uVar4 != 0) {
        bVar7 = *(char *)(puVar10 + 7) + 1;
        *(byte *)(puVar10 + 7) = bVar7;
        uVar6 = puVar10[4];
        if (puVar10[4] <= uVar4) {
          uVar6 = uVar1;
        }
        puVar10[4] = uVar6;
        uVar5 = (uint)puVar10[5];
        if (uVar4 <= puVar10[5]) {
          uVar5 = uVar4;
        }
        puVar10[5] = (ushort)uVar5;
        if ((ulonglong)bVar7 == (ulonglong)(uint)((int)(uint)bVar7 >> 5) << 5) {
          if ((uint)((int)((uint)uVar6 * 0xe667) >> 0x10) <= uVar5) {
            puVar10[1] = uVar6;
            puVar10[2] = (ushort)uVar5;
          }
          puVar10[4] = 0;
          goto LAB_829fca1c;
        }
      }
    }
    puVar3 = puVar3 + 8;
    puVar11 = puVar11 + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      return;
    }
  } while( true );
}

