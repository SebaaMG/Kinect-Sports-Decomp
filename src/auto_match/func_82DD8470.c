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


void fn_82DD8470(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  longlong lVar12;
  uint *puVar13;
  byte *pbVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char acStack_70 [16];
  uint auStack_60 [24];
  
  bVar1 = param_1[2];
  puVar5 = (undefined4 *)((uint)(acStack_70 + in_r0) & 0xfffffff0);
  uVar15 = puVar5[1];
  uVar16 = puVar5[2];
  uVar17 = puVar5[3];
  puVar6 = (undefined4 *)((uint)(acStack_70 + in_r0) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar15;
  puVar6[2] = uVar16;
  puVar6[3] = uVar17;
  uVar9 = (uint)bVar1;
  pbVar14 = param_1;
  for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
    bVar1 = pbVar14[9];
    bVar2 = pbVar14[5];
    bVar3 = pbVar14[4];
    acStack_70[pbVar14[8] >> 4] = '\x01';
    acStack_70[bVar1 >> 4] = '\x01';
    if (2 < (uint)bVar2 + (uint)bVar3) {
      acStack_70[pbVar14[10] >> 4] = '\x01';
    }
    if ((uint)bVar2 + (uint)bVar3 == 4) {
      acStack_70[pbVar14[0xb] >> 4] = '\x01';
    }
    pbVar14 = pbVar14 + 8;
  }
  iVar10 = 0;
  cVar7 = '\0';
  pbVar14 = param_1 + uVar9 * 8 + 4;
  lVar12 = (ulonglong)param_1[1] + (ulonglong)*param_1;
  uVar8 = 0;
  if (lVar12 != 0) {
    pbVar11 = param_1 + uVar9 * 8 + 2;
    puVar13 = auStack_60;
    cVar7 = '\0';
    do {
      cVar4 = acStack_70[iVar10];
      *puVar13 = uVar8;
      if (cVar4 != '\0') {
        cVar7 = cVar7 + '\x01';
        uVar8 = uVar8 + 0x10;
        pbVar11 = pbVar11 + 2;
        *(undefined2 *)pbVar11 = *(undefined2 *)pbVar14;
      }
      iVar10 = iVar10 + 1;
      puVar13 = puVar13 + 1;
      pbVar14 = pbVar14 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar8 = 0;
  bVar1 = (byte)(auStack_60[*param_1] >> 4);
  *param_1 = bVar1;
  param_1[1] = cVar7 - bVar1;
  if (param_1[2] != 0) {
    pbVar14 = param_1 + 3;
    do {
      uVar8 = uVar8 + 1;
      uVar15 = *(undefined4 *)((int)auStack_60 + (pbVar14[6] >> 2 & 0x3ffffffc));
      uVar16 = *(undefined4 *)((int)auStack_60 + (pbVar14[7] >> 2 & 0x3ffffffc));
      uVar17 = *(undefined4 *)((int)auStack_60 + (pbVar14[8] >> 2 & 0x3ffffffc));
      pbVar14[5] = (byte)*(undefined4 *)((int)auStack_60 + (pbVar14[5] >> 2 & 0x3ffffffc));
      pbVar14[6] = (byte)uVar15;
      pbVar14[7] = (byte)uVar16;
      pbVar14 = pbVar14 + 8;
      *pbVar14 = (byte)uVar17;
    } while (uVar8 < param_1[2]);
  }
  return;
}

