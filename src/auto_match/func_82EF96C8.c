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
extern unsigned int *auStack_8dc;
extern unsigned int uStack_8f4;
extern unsigned int uStack_8f8;
extern unsigned int uStack_8fc;


void fn_82EF96C8(int param_1,int param_2,longlong param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  ulonglong uVar22;
  short *psVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined2 *puVar27;
  int iVar28;
  int iVar30;
  int iVar31;
  ulonglong uVar29;
  short *psVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  uint uStack_8fc;
  uint uStack_8f8;
  uint uStack_8f4;
  short sStack_8de;
  undefined1 auStack_8dc [2268];
  
  uVar22 = (ulonglong)param_4;
  uVar29 = uVar22 & 0x7fffffff;
  lVar33 = uVar29 * 2;
  lVar34 = (longlong)(param_1 + -2 >> 2);
  lVar35 = 8;
  lVar37 = (longlong)(param_2 >> 2) * (longlong)(int)param_4 + lVar34 + param_3 + -1;
  iVar36 = param_5;
  do {
    iVar28 = 0;
    lVar39 = 0x11;
    do {
      iVar30 = (int)lVar37 + iVar28;
      iVar30 = (int)(((((uint)*(byte *)(iVar30 + 2) + (uint)*(byte *)(iVar30 + 1)) * 9 -
                      (uint)*(byte *)(iVar30 + 3)) - (uint)*(byte *)((int)lVar37 + iVar28)) +
                    (8 - param_6)) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      *(char *)(iVar36 + iVar28) = (char)iVar30;
      iVar28 = iVar28 + 1;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    lVar35 = lVar35 + -1;
    lVar37 = lVar37 + lVar33;
    iVar36 = iVar36 + 0x20;
  } while (lVar35 != 0);
  iVar38 = param_5 + 0x280;
  lVar37 = (longlong)(param_2 + -6 >> 2) * (longlong)(int)param_4;
  iVar30 = (int)uVar29;
  iVar24 = param_6 + 7;
  iVar28 = (int)lVar33;
  iVar36 = iVar28 + iVar30 * 4;
  lVar39 = (param_1 >> 2) + lVar37 + param_3 + uVar29 * -2;
  lVar35 = 9;
  do {
    iVar31 = 0;
    iVar20 = (int)lVar39;
    lVar40 = 4;
    do {
      iVar25 = iVar20 + iVar31;
      iVar17 = (int)((uVar22 & 0x3fffffff) << 2);
      iVar25 = (int)(((((uint)*(byte *)(iVar17 + iVar25) + (uint)*(byte *)(iVar25 + iVar28)) * 9 -
                      (uint)*(byte *)(iVar36 + iVar25)) - (uint)*(byte *)(iVar20 + iVar31)) + iVar24
                    ) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      iVar18 = iVar20 + iVar31 + 1;
      *(char *)(iVar38 + iVar31) = (char)iVar25;
      iVar25 = (int)(((((uint)*(byte *)(iVar17 + iVar18) + (uint)*(byte *)(iVar18 + iVar28)) * 9 -
                      (uint)*(byte *)(iVar36 + iVar18)) - (uint)*(byte *)(iVar20 + iVar31 + 1)) +
                    iVar24) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      pbVar19 = (byte *)(iVar20 + iVar31 + 2);
      *(char *)(iVar38 + iVar31 + 1) = (char)iVar25;
      iVar25 = (int)(((((uint)pbVar19[iVar17] + (uint)pbVar19[iVar28]) * 9 - (uint)pbVar19[iVar36])
                     - (uint)*pbVar19) + iVar24) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      iVar18 = iVar20 + 3 + iVar31;
      *(char *)(iVar38 + iVar31 + 2) = (char)iVar25;
      iVar25 = (int)(((((uint)*(byte *)(iVar17 + iVar18) + (uint)*(byte *)(iVar18 + iVar28)) * 9 -
                      (uint)*(byte *)(iVar36 + iVar18)) - (uint)*(byte *)(iVar20 + 3 + iVar31)) +
                    iVar24) >> 4;
      if (iVar25 < 0) {
        iVar25 = 0;
      }
      else if (0xff < iVar25) {
        iVar25 = 0xff;
      }
      *(char *)(iVar38 + 3 + iVar31) = (char)iVar25;
      iVar31 = iVar31 + 4;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
    lVar35 = lVar35 + -1;
    lVar39 = lVar39 + lVar33;
    iVar38 = iVar38 + 0x20;
  } while (lVar35 != 0);
  param_3 = lVar37 + lVar34 + param_3;
  param_5 = param_5 + 0x500;
  iVar36 = iVar30 * -2 + -2;
  puVar26 = auStack_8dc;
  lVar35 = param_3 + 1;
  lVar34 = param_3 + uVar29 * -2 + 1;
  uStack_8fc = (uint)lVar35;
  iVar24 = iVar30 * -2 + 1;
  uStack_8f8 = (uint)lVar34;
  iVar38 = iVar30 * -2 + 2;
  uStack_8f4 = 9;
  iVar28 = iVar28 + iVar30 * 4;
  iVar30 = iVar30 * -2 + -1;
  do {
    puVar27 = (undefined2 *)(puVar26 + -6);
    lVar37 = 4;
    do {
      pbVar21 = (byte *)lVar35;
      bVar1 = *pbVar21;
      iVar20 = (int)((uVar22 & 0x3fffffff) << 2);
      pbVar19 = (byte *)lVar34;
      bVar6 = pbVar19[iVar20];
      bVar2 = pbVar21[-1];
      bVar3 = pbVar21[1];
      bVar7 = pbVar21[iVar20 + iVar30];
      bVar8 = pbVar21[iVar20 + iVar24];
      bVar9 = pbVar21[iVar20 + iVar38];
      bVar4 = pbVar21[2];
      bVar10 = pbVar21[iVar28 + iVar30];
      bVar11 = pbVar21[iVar28 + iVar24];
      bVar12 = pbVar19[iVar28];
      bVar13 = pbVar21[iVar30];
      bVar14 = pbVar21[iVar28 + iVar38];
      bVar5 = *pbVar19;
      bVar15 = pbVar21[iVar24];
      bVar16 = pbVar21[iVar38];
      puVar27[1] = (short)((int)(((((uint)pbVar21[iVar20 + iVar36] + (uint)pbVar21[-2]) * 9 -
                                  (uint)pbVar21[iVar28 + iVar36]) - (uint)pbVar21[iVar36]) + param_6
                                ) >> 1);
      puVar27[2] = (short)((int)(((((uint)bVar7 + (uint)bVar2) * 9 - (uint)bVar10) - (uint)bVar13) +
                                param_6) >> 1);
      puVar27[3] = (short)((int)(((((uint)bVar6 + (uint)bVar1) * 9 - (uint)bVar12) - (uint)bVar5) +
                                param_6) >> 1);
      puVar27[4] = (short)((int)(((((uint)bVar8 + (uint)bVar3) * 9 - (uint)bVar11) - (uint)bVar15) +
                                param_6) >> 1);
      lVar34 = lVar34 + 5;
      puVar27 = puVar27 + 5;
      *puVar27 = (short)((int)(((((uint)bVar9 + (uint)bVar4) * 9 - (uint)bVar14) - (uint)bVar16) +
                              param_6) >> 1);
      lVar35 = lVar35 + 5;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    uVar29 = (ulonglong)uStack_8f4;
    lVar34 = (ulonglong)uStack_8f8 + lVar33;
    lVar35 = (ulonglong)uStack_8fc + lVar33;
    uStack_8f4 = (uint)(uVar29 - 1);
    puVar26 = puVar26 + 0x40;
    uStack_8f8 = (uint)lVar34;
    uStack_8fc = (uint)lVar35;
  } while (uVar29 - 1 != 0);
  lVar33 = 9;
  psVar23 = &sStack_8de;
  do {
    iVar36 = 0;
    lVar34 = 0x11;
    psVar32 = psVar23;
    do {
      iVar28 = ((((int)*psVar32 + (int)psVar32[1]) * 9 - (int)psVar32[-1]) - (int)psVar32[2]) +
               (0x40 - param_6) >> 7;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      *(char *)(iVar36 + param_5) = (char)iVar28;
      psVar32 = psVar32 + 1;
      iVar36 = iVar36 + 1;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar33 = lVar33 + -1;
    psVar23 = psVar23 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar33 != 0);
  return;
}

