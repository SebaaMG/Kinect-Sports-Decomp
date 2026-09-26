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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82C75948();
extern int fn_830DC3F8();


void fn_830EE740(int param_1,undefined4 *param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short *psVar6;
  ulonglong *puVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  
  bVar1 = *(byte *)(param_1 + param_3 + 0x29c);
  dataCacheBlockClearToZero(param_5);
  iVar17 = param_1 + 0xe8;
  uVar4 = *param_2;
  iVar12 = 0;
  iVar14 = *(int *)(param_1 + 0x278);
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  bVar2 = **(byte **)(param_4 + 0x18);
  uVar11 = (ulonglong)bVar2;
  uVar13 = 0;
  uVar10 = 0;
  puVar16 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar12 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(byte *)(uVar10 + iVar14);
        iVar12 = uVar10 + 1;
        uVar10 = *(byte *)(iVar17 + (uint)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar16;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar14,iVar17,param_2,param_4);
  }
  iVar14 = (int)param_5;
  if (uVar10 == 0) {
    puVar7 = (ulonglong *)(((bVar1 & 2) * 4 + (bVar1 & 1)) * 8 + iVar14);
    iVar12 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (ulonglong)(uint)((iVar12 >> 7) + (iVar12 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),
                    (((ulonglong)bVar1 & 2) * 4 + ((ulonglong)bVar1 & 1)) * 8 + param_5);
  }
  bVar8 = bVar1 >> 2;
  iVar12 = *(int *)(param_1 + 0x278);
  iVar15 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  uVar13 = 0;
  uVar10 = 0;
  bVar2 = **(byte **)(param_4 + 0x18);
  uVar11 = (ulonglong)bVar2;
  puVar16 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar15 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(byte *)(uVar10 + iVar12);
        iVar15 = uVar10 + 1;
        uVar10 = *(byte *)(iVar17 + (uint)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar16;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar12,iVar17,param_2,param_4);
  }
  if (uVar10 == 0) {
    puVar7 = (ulonglong *)(((bVar8 & 2) * 4 + (bVar8 & 1)) * 8 + iVar14);
    iVar12 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (ulonglong)(uint)((iVar12 >> 7) + (iVar12 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),
                    (((ulonglong)bVar8 & 2) * 4 + ((ulonglong)bVar8 & 1)) * 8 + param_5);
  }
  bVar1 = bVar1 >> 4;
  iVar12 = *(int *)(param_1 + 0x278);
  iVar15 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  uVar13 = 0;
  uVar10 = 0;
  bVar2 = **(byte **)(param_4 + 0x18);
  uVar11 = (ulonglong)bVar2;
  puVar16 = *(ushort **)(param_4 + 0x14);
  *(byte **)(param_4 + 0x18) = *(byte **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar16;
        puVar16 = puVar16 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar15 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(byte *)(uVar10 + iVar12);
        iVar15 = uVar10 + 1;
        uVar10 = *(byte *)(iVar17 + (uint)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(ushort **)(param_4 + 0x14) = puVar16;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar12,iVar17,param_2,param_4);
  }
  uVar11 = (ulonglong)bVar1 & 1;
  if (uVar10 == 0) {
    puVar7 = (ulonglong *)(((bVar1 & 2) * 4 + (int)uVar11) * 8 + iVar14);
    iVar14 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (ulonglong)(uint)((iVar14 >> 7) + (iVar14 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),(((ulonglong)bVar1 & 2) * 4 + uVar11) * 8 + param_5);
  }
  return;
}

