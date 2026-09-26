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


void fn_82EF9B68(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  ulonglong uVar26;
  byte *pbVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined2 *puVar32;
  byte *pbVar33;
  short *psVar34;
  longlong lVar35;
  int iVar36;
  int iVar37;
  short *psVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  longlong lVar42;
  byte *pbStack_908;
  undefined1 *puStack_904;
  uint uStack_900;
  byte *pbStack_8fc;
  undefined2 auStack_8e2 [3];
  undefined1 auStack_8dc [4];
  short asStack_8d8 [1132];
  
  iVar25 = param_1 + -2 >> 2;
  iVar40 = 8 - param_6;
  lVar35 = 8;
  iVar29 = (param_2 >> 2) * param_4 + iVar25 + param_3;
  iVar39 = param_5;
  do {
    iVar37 = 0;
    lVar42 = 3;
    do {
      iVar28 = iVar29 + iVar37;
      iVar28 = (int)(((((uint)*(byte *)(iVar28 + 1) + (uint)*(byte *)(iVar29 + iVar37)) * 9 -
                      (uint)*(byte *)(iVar28 + 2)) - (uint)*(byte *)(iVar28 + -1)) + iVar40) >> 4;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      *(char *)(iVar39 + iVar37) = (char)iVar28;
      iVar28 = iVar29 + iVar37;
      iVar28 = (int)(((((uint)*(byte *)(iVar28 + 2) + (uint)*(byte *)(iVar28 + 1)) * 9 -
                      (uint)*(byte *)(iVar28 + 3)) - (uint)*(byte *)(iVar29 + iVar37)) + iVar40) >>
               4;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      iVar41 = iVar29 + 1 + iVar37;
      *(char *)(iVar39 + iVar37 + 1) = (char)iVar28;
      iVar28 = (int)(((((uint)*(byte *)(iVar41 + 2) + (uint)*(byte *)(iVar41 + 1)) * 9 -
                      (uint)*(byte *)(iVar41 + 3)) - (uint)*(byte *)(iVar29 + 1 + iVar37)) + iVar40)
               >> 4;
      if (iVar28 < 0) {
        iVar28 = 0;
      }
      else if (0xff < iVar28) {
        iVar28 = 0xff;
      }
      *(char *)(iVar39 + 2 + iVar37) = (char)iVar28;
      iVar37 = iVar37 + 3;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar35 = lVar35 + -1;
    iVar29 = iVar29 + param_4;
    iVar39 = iVar39 + 0x20;
  } while (lVar35 != 0);
  iVar28 = param_5 + 0x280;
  iVar40 = (param_2 + -2 >> 2) * param_4;
  iVar41 = param_6 + 7;
  iVar29 = param_4 * 2;
  iVar39 = param_4 * 3;
  iVar37 = ((param_1 >> 2) + iVar40 + param_3) - param_4;
  lVar35 = 9;
  do {
    iVar36 = 0;
    lVar42 = 2;
    do {
      iVar30 = iVar37 + iVar36;
      iVar30 = (int)(((((uint)*(byte *)(iVar29 + iVar30) + (uint)*(byte *)(iVar30 + param_4)) * 9 -
                      (uint)*(byte *)(iVar39 + iVar30)) - (uint)*(byte *)(iVar37 + iVar36)) + iVar41
                    ) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      *(char *)(iVar28 + iVar36) = (char)iVar30;
      pbVar33 = (byte *)(iVar37 + iVar36 + 1);
      iVar30 = (int)(((((uint)pbVar33[iVar29] + (uint)pbVar33[param_4]) * 9 - (uint)pbVar33[iVar39])
                     - (uint)*pbVar33) + iVar41) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      pbVar33 = (byte *)(iVar37 + iVar36 + 2);
      *(char *)(iVar28 + iVar36 + 1) = (char)iVar30;
      iVar30 = (int)(((((uint)pbVar33[iVar29] + (uint)pbVar33[param_4]) * 9 - (uint)pbVar33[iVar39])
                     - (uint)*pbVar33) + iVar41) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      iVar31 = iVar37 + 3 + iVar36;
      *(char *)(iVar28 + iVar36 + 2) = (char)iVar30;
      iVar30 = (int)(((((uint)*(byte *)(iVar29 + iVar31) + (uint)*(byte *)(iVar31 + param_4)) * 9 -
                      (uint)*(byte *)(iVar39 + iVar31)) - (uint)*(byte *)(iVar37 + 3 + iVar36)) +
                    iVar41) >> 4;
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
      }
      *(char *)(iVar28 + 3 + iVar36) = (char)iVar30;
      iVar36 = iVar36 + 4;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar35 = lVar35 + -1;
    iVar37 = iVar37 + param_4;
    iVar28 = iVar28 + 0x20;
  } while (lVar35 != 0);
  param_5 = param_5 + 0x500;
  param_3 = iVar40 + iVar25 + param_3;
  iVar25 = 0x40 - param_6;
  pbStack_8fc = (byte *)((param_3 - param_4) + 1);
  iVar41 = -2 - param_4;
  uStack_900 = 9;
  iVar28 = 1 - param_4;
  iVar37 = 2 - param_4;
  iVar36 = 3 - param_4;
  iVar40 = -1 - param_4;
  pbStack_908 = (byte *)(param_3 + 1);
  puVar32 = auStack_8e2;
  lVar35 = 2;
  puStack_904 = auStack_8dc;
  pbVar33 = pbStack_908;
  pbVar27 = pbStack_8fc;
  while( true ) {
    do {
      bVar1 = *pbVar33;
      bVar7 = pbVar27[iVar29];
      bVar2 = pbVar33[-1];
      bVar3 = pbVar33[1];
      bVar8 = pbVar33[iVar39 + iVar40];
      bVar9 = pbVar33[iVar29 + iVar40];
      bVar10 = pbVar33[iVar29 + iVar28];
      bVar11 = pbVar33[iVar29 + iVar37];
      bVar4 = pbVar33[2];
      bVar12 = pbVar33[iVar39 + iVar28];
      bVar13 = pbVar27[iVar39];
      bVar14 = pbVar33[iVar40];
      bVar15 = pbVar33[iVar29 + iVar36];
      bVar16 = pbVar33[iVar39 + iVar36];
      bVar17 = pbVar33[iVar39 + iVar37];
      bVar5 = pbVar33[3];
      bVar6 = *pbVar27;
      bVar18 = pbVar33[iVar28];
      bVar19 = pbVar33[iVar37];
      bVar20 = pbVar33[iVar36];
      puVar32[1] = (short)((int)(((((uint)pbVar33[iVar29 + iVar41] + (uint)pbVar33[-2]) * 9 -
                                  (uint)pbVar33[iVar39 + iVar41]) - (uint)pbVar33[iVar41]) + param_6
                                ) >> 1);
      puVar32[2] = (short)((int)(((((uint)bVar9 + (uint)bVar2) * 9 - (uint)bVar8) - (uint)bVar14) +
                                param_6) >> 1);
      puVar32[3] = (short)((int)(((((uint)bVar7 + (uint)bVar1) * 9 - (uint)bVar13) - (uint)bVar6) +
                                param_6) >> 1);
      puVar32[4] = (short)((int)(((((uint)bVar10 + (uint)bVar3) * 9 - (uint)bVar12) - (uint)bVar18)
                                + param_6) >> 1);
      puVar32[5] = (short)((int)(((((uint)bVar11 + (uint)bVar4) * 9 - (uint)bVar17) - (uint)bVar19)
                                + param_6) >> 1);
      pbVar27 = pbVar27 + 6;
      puVar32 = puVar32 + 6;
      *puVar32 = (short)((int)(((((uint)bVar15 + (uint)bVar5) * 9 - (uint)bVar16) - (uint)bVar20) +
                              param_6) >> 1);
      pbVar33 = pbVar33 + 6;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    uVar26 = (ulonglong)uStack_900;
    pbStack_8fc = pbStack_8fc + param_4;
    pbStack_908 = pbStack_908 + param_4;
    uStack_900 = (uint)(uVar26 - 1);
    if (uVar26 - 1 == 0) break;
    puVar32 = (undefined2 *)(puStack_904 + 0x3a);
    lVar35 = 2;
    puStack_904 = puStack_904 + 0x40;
    pbVar33 = pbStack_908;
    pbVar27 = pbStack_8fc;
  }
  lVar35 = 9;
  psVar38 = asStack_8d8;
  do {
    iVar39 = 0;
    lVar42 = 3;
    psVar34 = psVar38;
    do {
      sVar21 = psVar34[-2];
      sVar22 = psVar34[-3];
      sVar23 = psVar34[-1];
      iVar29 = ((((int)sVar22 + (int)sVar21) * 9 - (int)psVar34[-4]) - (int)sVar23) + iVar25 >> 7;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      else if (0xff < iVar29) {
        iVar29 = 0xff;
      }
      sVar24 = *psVar34;
      *(char *)(iVar39 + param_5) = (char)iVar29;
      iVar29 = ((((int)sVar21 + (int)sVar23) * 9 - (int)sVar22) - (int)sVar24) + iVar25 >> 7;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      else if (0xff < iVar29) {
        iVar29 = 0xff;
      }
      sVar22 = psVar34[1];
      *(char *)(param_5 + 1 + iVar39) = (char)iVar29;
      iVar29 = ((((int)sVar24 + (int)sVar23) * 9 - (int)sVar22) - (int)sVar21) + iVar25 >> 7;
      if (iVar29 < 0) {
        iVar29 = 0;
      }
      else if (0xff < iVar29) {
        iVar29 = 0xff;
      }
      *(char *)(param_5 + 2 + iVar39) = (char)iVar29;
      psVar34 = psVar34 + 3;
      iVar39 = iVar39 + 3;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
    lVar35 = lVar35 + -1;
    psVar38 = psVar38 + 0x20;
    param_5 = param_5 + 0x20;
  } while (lVar35 != 0);
  return;
}

