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
extern unsigned int iStack_100;


void fn_82F27150(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  short *psVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  int aiStack_120 [8];
  int iStack_100;
  
  param_6 = param_6 * 4;
  psVar8 = (short *)(param_6 + -0x7ce46628);
  pbVar14 = (byte *)(param_2 * 6 + param_1);
  pbVar3 = (byte *)(param_2 * 8 + param_1);
  pbVar15 = (byte *)(param_2 * 7 + param_1);
  pbVar13 = (byte *)(param_2 * 5 + param_1);
  pbVar11 = (byte *)(param_2 * 4 + param_1);
  pbVar9 = (byte *)(param_2 * 3 + param_1);
  puVar4 = (undefined1 *)(param_4 * 2 + param_3);
  iVar7 = 0;
  pbVar6 = (byte *)(param_1 + param_2);
  do {
    pbVar14 = pbVar14 + 1;
    pbVar15 = pbVar15 + 1;
    pbVar13 = pbVar13 + 1;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
    pbVar3 = pbVar3 + 1;
    sVar1 = *(short *)(param_5 * 4 + -0x7ce46628);
    iVar12 = (int)*(short *)(param_5 * 4 + -0x7ce46626);
    iVar10 = (int)sVar1;
    lVar19 = 2;
    iStack_100 = (uint)pbVar6[param_2 * 7] * iVar10 + (uint)*pbVar3 * iVar12;
    aiStack_120[6] = (uint)pbVar6[param_2 * 5] * (int)sVar1 + (uint)*pbVar14 * iVar12;
    aiStack_120[5] = (uint)pbVar6[param_2 * 4] * (int)sVar1 + (uint)*pbVar13 * iVar12;
    iVar2 = param_4 * 4;
    aiStack_120[1] = (uint)pbVar6[1] * iVar12 + (uint)*pbVar6 * iVar10;
    aiStack_120[2] = (uint)pbVar6[param_2] * iVar10 + (uint)pbVar6[param_2 + 1] * iVar12;
    aiStack_120[3] = (uint)pbVar6[param_2 * 2] * iVar10 + (uint)*pbVar9 * iVar12;
    piVar5 = aiStack_120 + 1;
    puVar18 = (undefined1 *)(iVar7 + param_3);
    puVar16 = puVar4 + param_4 * -3;
    aiStack_120[4] = (uint)pbVar6[param_2 * 3] * iVar10 + (uint)*pbVar11 * iVar12;
    aiStack_120[7] = (uint)pbVar6[param_2 * 6] * iVar10 + (uint)*pbVar15 * iVar12;
    puVar17 = puVar4;
    do {
      iVar10 = *piVar5;
      iVar12 = ((*(short *)(param_6 + -0x7ce46626) * iVar10 + (int)*psVar8 * piVar5[-1]) - param_7)
               + 8 >> 4;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      *puVar18 = (char)iVar12;
      iVar12 = piVar5[1];
      iVar10 = ((*psVar8 * iVar10 + *(short *)(param_6 + -0x7ce46626) * iVar12) - param_7) + 8 >> 4;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      puVar18[param_4] = (char)iVar10;
      iVar10 = piVar5[2];
      iVar12 = ((*psVar8 * iVar12 + *(short *)(param_6 + -0x7ce46626) * iVar10) - param_7) + 8 >> 4;
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      *puVar17 = (char)iVar12;
      iVar10 = (((int)*(short *)(param_6 + -0x7ce46626) * piVar5[3] + *psVar8 * iVar10) - param_7) +
               8 >> 4;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      puVar18 = puVar18 + iVar2;
      puVar16 = puVar16 + iVar2;
      *puVar16 = (char)iVar10;
      puVar17 = puVar17 + iVar2;
      piVar5 = piVar5 + 4;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    iVar7 = iVar7 + 1;
    pbVar6 = pbVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar7 < 8);
  return;
}

