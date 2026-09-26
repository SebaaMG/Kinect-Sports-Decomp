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
extern unsigned int *auStack_8e2;
extern unsigned int uStack_900;
extern unsigned int uStack_908;
extern unsigned int uStack_90c;


void fn_82EFA1A8(int param_1,int param_2,longlong param_3,uint param_4,int param_5,int param_6)

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
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  byte *pbVar35;
  undefined2 *puVar36;
  int iVar37;
  short *psVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  short *psVar45;
  int iVar46;
  longlong lVar47;
  int iVar48;
  longlong lVar49;
  longlong lVar50;
  uint uStack_90c;
  uint uStack_908;
  undefined1 *puStack_904;
  uint uStack_900;
  undefined2 auStack_8e2 [3];
  undefined1 auStack_8dc [4];
  short asStack_8d8 [1132];
  
  uVar28 = (ulonglong)param_4;
  uVar29 = uVar28 & 0x7fffffff;
  lVar47 = uVar29 * 2;
  lVar40 = (longlong)(param_1 + -2 >> 2);
  iVar48 = (int)lVar47;
  iVar46 = 8 - param_6;
  lVar42 = (longlong)(param_2 >> 2) * (longlong)(int)param_4 + lVar40 + param_3;
  lVar41 = 8;
  iVar33 = param_5;
  do {
    iVar32 = 0;
    iVar30 = (int)lVar42;
    lVar49 = 3;
    do {
      iVar31 = iVar30 + iVar32;
      iVar31 = (int)(((((uint)*(byte *)(iVar31 + 1) + (uint)*(byte *)(iVar30 + iVar32)) * 9 -
                      (uint)*(byte *)(iVar31 + 2)) - (uint)*(byte *)(iVar31 + -1)) + iVar46) >> 4;
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (0xff < iVar31) {
        iVar31 = 0xff;
      }
      *(char *)(iVar33 + iVar32) = (char)iVar31;
      iVar31 = iVar30 + iVar32;
      iVar31 = (int)(((((uint)*(byte *)(iVar31 + 2) + (uint)*(byte *)(iVar31 + 1)) * 9 -
                      (uint)*(byte *)(iVar31 + 3)) - (uint)*(byte *)(iVar30 + iVar32)) + iVar46) >>
               4;
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (0xff < iVar31) {
        iVar31 = 0xff;
      }
      iVar37 = iVar30 + 1 + iVar32;
      *(char *)(iVar33 + iVar32 + 1) = (char)iVar31;
      iVar31 = (int)(((((uint)*(byte *)(iVar37 + 2) + (uint)*(byte *)(iVar37 + 1)) * 9 -
                      (uint)*(byte *)(iVar37 + 3)) - (uint)*(byte *)(iVar30 + 1 + iVar32)) + iVar46)
               >> 4;
      if (iVar31 < 0) {
        iVar31 = 0;
      }
      else if (0xff < iVar31) {
        iVar31 = 0xff;
      }
      *(char *)(iVar33 + 2 + iVar32) = (char)iVar31;
      iVar32 = iVar32 + 3;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
    lVar41 = lVar41 + -1;
    lVar42 = lVar42 + lVar47;
    iVar33 = iVar33 + 0x20;
  } while (lVar41 != 0);
  iVar32 = param_5 + 0x280;
  lVar42 = (longlong)(param_2 + -6 >> 2) * (longlong)(int)param_4;
  iVar46 = (int)uVar29;
  iVar30 = param_6 + 7;
  iVar33 = iVar48 + iVar46 * 4;
  lVar49 = (param_1 >> 2) + lVar42 + param_3 + uVar29 * -2;
  lVar41 = 9;
  do {
    iVar37 = 0;
    iVar31 = (int)lVar49;
    lVar50 = 2;
    do {
      iVar34 = iVar31 + iVar37;
      iVar25 = (int)((uVar28 & 0x3fffffff) << 2);
      iVar34 = (int)(((((uint)*(byte *)(iVar25 + iVar34) + (uint)*(byte *)(iVar34 + iVar48)) * 9 -
                      (uint)*(byte *)(iVar33 + iVar34)) - (uint)*(byte *)(iVar31 + iVar37)) + iVar30
                    ) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      *(char *)(iVar32 + iVar37) = (char)iVar34;
      pbVar35 = (byte *)(iVar31 + iVar37 + 1);
      iVar34 = (int)(((((uint)pbVar35[iVar25] + (uint)pbVar35[iVar48]) * 9 - (uint)pbVar35[iVar33])
                     - (uint)*pbVar35) + iVar30) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      pbVar35 = (byte *)(iVar31 + iVar37 + 2);
      *(char *)(iVar32 + iVar37 + 1) = (char)iVar34;
      iVar34 = (int)(((((uint)pbVar35[iVar25] + (uint)pbVar35[iVar48]) * 9 - (uint)pbVar35[iVar33])
                     - (uint)*pbVar35) + iVar30) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      iVar26 = iVar31 + 3 + iVar37;
      *(char *)(iVar32 + iVar37 + 2) = (char)iVar34;
      iVar34 = (int)(((((uint)*(byte *)(iVar25 + iVar26) + (uint)*(byte *)(iVar26 + iVar48)) * 9 -
                      (uint)*(byte *)(iVar33 + iVar26)) - (uint)*(byte *)(iVar31 + 3 + iVar37)) +
                    iVar30) >> 4;
      if (iVar34 < 0) {
        iVar34 = 0;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
      }
      *(char *)(iVar32 + 3 + iVar37) = (char)iVar34;
      iVar37 = iVar37 + 4;
      lVar50 = lVar50 + -1;
    } while (lVar50 != 0);
    lVar41 = lVar41 + -1;
    lVar49 = lVar49 + lVar47;
    iVar32 = iVar32 + 0x20;
  } while (lVar41 != 0);
  param_5 = param_5 + 0x500;
  param_3 = lVar42 + lVar40 + param_3;
  iVar32 = 0x40 - param_6;
  iVar33 = iVar46 * -2 + -2;
  iVar48 = iVar48 + iVar46 * 4;
  iVar30 = iVar46 * -2 + 1;
  iVar46 = iVar46 * -2 + 2;
  uVar43 = uVar29 * -2 + 3;
  uVar39 = uVar29 * -2 - 1;
  lVar41 = param_3 + 1;
  lVar40 = param_3 + uVar29 * -2 + 1;
  uStack_90c = (uint)lVar41;
  uStack_908 = (uint)lVar40;
  uStack_900 = 9;
  puVar36 = auStack_8e2;
  lVar42 = 2;
  uVar29 = uVar39;
  uVar44 = uVar43;
  puStack_904 = auStack_8dc;
  while( true ) {
    while( true ) {
      pbVar27 = (byte *)lVar41;
      iVar37 = (int)uVar29;
      bVar1 = *pbVar27;
      pbVar35 = (byte *)lVar40;
      iVar31 = (int)((uVar28 & 0x3fffffff) << 2);
      bVar7 = pbVar35[iVar31];
      bVar2 = pbVar27[-1];
      bVar3 = pbVar27[1];
      bVar8 = pbVar27[iVar48 + iVar37];
      bVar9 = pbVar27[iVar31 + iVar37];
      bVar10 = pbVar27[iVar31 + iVar30];
      bVar11 = pbVar27[iVar31 + iVar46];
      bVar4 = pbVar27[2];
      bVar12 = pbVar27[iVar48 + iVar30];
      bVar13 = pbVar35[iVar48];
      bVar14 = pbVar27[iVar37];
      bVar15 = pbVar27[iVar31 + (int)uVar44];
      bVar16 = pbVar27[iVar48 + (int)uVar44];
      bVar5 = pbVar27[3];
      bVar17 = pbVar27[iVar48 + iVar46];
      bVar6 = *pbVar35;
      bVar18 = pbVar27[iVar30];
      bVar19 = pbVar27[iVar46];
      uVar44 = uVar43 & 0xffffffff;
      bVar20 = pbVar27[(int)uVar43];
      puVar36[1] = (short)((int)(((((uint)pbVar27[iVar31 + iVar33] + (uint)pbVar27[-2]) * 9 -
                                  (uint)pbVar27[iVar48 + iVar33]) - (uint)pbVar27[iVar33]) + param_6
                                ) >> 1);
      puVar36[2] = (short)((int)(((((uint)bVar9 + (uint)bVar2) * 9 - (uint)bVar8) - (uint)bVar14) +
                                param_6) >> 1);
      puVar36[3] = (short)((int)(((((uint)bVar7 + (uint)bVar1) * 9 - (uint)bVar13) - (uint)bVar6) +
                                param_6) >> 1);
      puVar36[4] = (short)((int)(((((uint)bVar10 + (uint)bVar3) * 9 - (uint)bVar12) - (uint)bVar18)
                                + param_6) >> 1);
      puVar36[5] = (short)((int)(((((uint)bVar11 + (uint)bVar4) * 9 - (uint)bVar17) - (uint)bVar19)
                                + param_6) >> 1);
      lVar40 = lVar40 + 6;
      puVar36 = puVar36 + 6;
      *puVar36 = (short)((int)(((((uint)bVar15 + (uint)bVar5) * 9 - (uint)bVar16) - (uint)bVar20) +
                              param_6) >> 1);
      lVar41 = lVar41 + 6;
      lVar42 = lVar42 + -1;
      if (lVar42 == 0) break;
      uVar29 = uVar39 & 0xffffffff;
    }
    uVar29 = (ulonglong)uStack_900;
    lVar40 = (ulonglong)uStack_908 + lVar47;
    lVar41 = (ulonglong)uStack_90c + lVar47;
    uStack_908 = (uint)lVar40;
    uStack_900 = (uint)(uVar29 - 1);
    uStack_90c = (uint)lVar41;
    if (uVar29 - 1 == 0) break;
    uVar29 = uVar39 & 0xffffffff;
    puVar36 = (undefined2 *)(puStack_904 + 0x3a);
    lVar42 = 2;
    puStack_904 = puStack_904 + 0x40;
  }
  lVar40 = 9;
  psVar45 = asStack_8d8;
  do {
    iVar48 = 0;
    lVar41 = 3;
    psVar38 = psVar45;
    do {
      sVar21 = psVar38[-2];
      sVar22 = psVar38[-3];
      sVar23 = psVar38[-1];
      iVar33 = ((((int)sVar22 + (int)sVar21) * 9 - (int)psVar38[-4]) - (int)sVar23) + iVar32 >> 7;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      else if (0xff < iVar33) {
        iVar33 = 0xff;
      }
      sVar24 = *psVar38;
      *(char *)(iVar48 + param_5) = (char)iVar33;
      iVar33 = ((((int)sVar23 + (int)sVar21) * 9 - (int)sVar22) - (int)sVar24) + iVar32 >> 7;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      else if (0xff < iVar33) {
        iVar33 = 0xff;
      }
      sVar22 = psVar38[1];
      *(char *)(param_5 + 1 + iVar48) = (char)iVar33;
      iVar33 = ((((int)sVar23 + (int)sVar24) * 9 - (int)sVar22) - (int)sVar21) + iVar32 >> 7;
      if (iVar33 < 0) {
        iVar33 = 0;
      }
      else if (0xff < iVar33) {
        iVar33 = 0xff;
      }
      *(char *)(param_5 + 2 + iVar48) = (char)iVar33;
      psVar38 = psVar38 + 3;
      iVar48 = iVar48 + 3;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    lVar40 = lVar40 + -1;
    psVar45 = psVar45 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar40 != 0);
  return;
}

