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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82E39CE8();
extern int fn_82E76510();
extern int fn_82E78690();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


longlong fn_82E78C28(int param_1,uint param_2,byte *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort uVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *apuStack_90 [4];
  ushort auStack_80 [2];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ushort auStack_70 [56];
  
  if (*(uint *)(param_1 + 0x1e0) <= (param_2 & 0xffff)) {
    return -0x7ff8ffa9;
  }
  lVar6 = fn_82E78690(param_1 + 0x178,param_2 & 0xffff,apuStack_90);
  psVar8 = *(short **)(param_1 + 8);
  psVar9 = (short *)(-(uint)(lVar6 != 0) & (uint)apuStack_90[0]);
  puVar14 = (ushort *)((int)psVar9 + 0x25);
  uVar15 = (uint)*(ushort *)((int)psVar9 + 0x1f);
  if (psVar8 == (short *)0x0) {
    return 0;
  }
  while (*psVar8 != *psVar9) {
    psVar8 = *(short **)(psVar8 + 4);
    if (psVar8 == (short *)0x0) {
      return 0;
    }
  }
  iVar5 = *(int *)(psVar8 + 2);
  if (iVar5 == 0) {
    return 0;
  }
  uVar3 = *(ushort *)(iVar5 + 4);
  uVar13 = 0;
  uVar12 = 0;
  if (uVar3 == 0) {
    return 0;
  }
  do {
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    auStack_70[0] = 0;
    apuStack_90[0] = puVar14;
    lVar6 = fn_82E76510(iVar5,uVar13,auStack_80);
    if (lVar6 < 0) {
      return lVar6;
    }
    uVar10 = (uint)auStack_70[0];
    if (uVar10 == 0xffff) {
      lVar6 = 0;
      if (((ushort *)(uVar15 + (int)puVar14) == (ushort *)0x0) ||
         (puVar14 + 1 <= (ushort *)(uVar15 + (int)puVar14))) {
        uVar4 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar10 = (uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8);
        apuStack_90[0] = puVar14;
      }
      else {
        lVar6 = -0x7fff0001;
        uVar10 = uVar12;
      }
      if ((int)lVar6 < 0) {
        return lVar6;
      }
      uVar15 = uVar15 + 0xfffe & 0xffff;
    }
    if (uVar15 < uVar10) {
      return -0x3ff2c94e;
    }
    puVar11 = auStack_80;
    pbVar7 = param_3;
    do {
      bVar1 = *(byte *)puVar11;
      bVar2 = *pbVar7;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      puVar11 = (ushort *)((int)puVar11 + 1);
      pbVar7 = pbVar7 + 1;
    } while (puVar11 != auStack_70);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      if (uVar10 != (param_5 & 0xffff)) {
        return -0x3ff2c94e;
      }
      lVar6 = fn_82E39CE8(param_4,apuStack_90,param_5 & 0xffff,uVar15 + (int)puVar14);
      return lVar6;
    }
    uVar13 = uVar13 + 1;
    puVar14 = (ushort *)(uVar10 + (int)puVar14);
    uVar15 = uVar15 - uVar10 & 0xffff;
    uVar12 = uVar10;
    if (uVar3 <= uVar13) {
      return lVar6;
    }
  } while( true );
}

