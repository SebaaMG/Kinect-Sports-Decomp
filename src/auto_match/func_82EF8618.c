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


longlong fn_82EF8618(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  lVar1 = 0;
  lVar16 = 0;
  iVar2 = 0;
  if (1 < param_5) {
    do {
      pbVar3 = param_3 + param_4;
      pbVar4 = param_1 + param_2;
      uVar11 = (ulonglong)((int)((ulonglong)param_1[7] - (ulonglong)param_3[7]) >> 0x1f);
      uVar8 = (ulonglong)((int)((ulonglong)param_1[6] - (ulonglong)param_3[6]) >> 0x1f);
      uVar6 = (ulonglong)((int)((ulonglong)param_1[5] - (ulonglong)param_3[5]) >> 0x1f);
      uVar15 = (ulonglong)((int)((ulonglong)param_1[4] - (ulonglong)param_3[4]) >> 0x1f);
      uVar5 = (ulonglong)((int)((ulonglong)param_1[3] - (ulonglong)param_3[3]) >> 0x1f);
      uVar13 = (ulonglong)((int)((ulonglong)param_1[2] - (ulonglong)param_3[2]) >> 0x1f);
      uVar10 = (ulonglong)((int)((ulonglong)param_1[1] - (ulonglong)param_3[1]) >> 0x1f);
      uVar7 = (ulonglong)((int)((ulonglong)*param_1 - (ulonglong)*param_3) >> 0x1f);
      uVar14 = (ulonglong)((int)((ulonglong)pbVar4[7] - (ulonglong)pbVar3[7]) >> 0x1f);
      uVar12 = (ulonglong)((int)((ulonglong)pbVar4[6] - (ulonglong)pbVar3[6]) >> 0x1f);
      uVar9 = (ulonglong)((int)((ulonglong)pbVar4[5] - (ulonglong)pbVar3[5]) >> 0x1f);
      lVar1 = (((ulonglong)param_1[7] - (ulonglong)param_3[7] ^ uVar11) - uVar11) +
              (((ulonglong)param_1[6] - (ulonglong)param_3[6] ^ uVar8) - uVar8) +
              (((ulonglong)param_1[5] - (ulonglong)param_3[5] ^ uVar6) - uVar6) +
              (((ulonglong)param_1[4] - (ulonglong)param_3[4] ^ uVar15) - uVar15) +
              (((ulonglong)param_1[3] - (ulonglong)param_3[3] ^ uVar5) - uVar5) +
              (((ulonglong)param_1[2] - (ulonglong)param_3[2] ^ uVar13) - uVar13) +
              (((ulonglong)param_1[1] - (ulonglong)param_3[1] ^ uVar10) - uVar10) +
              (((ulonglong)*param_1 - (ulonglong)*param_3 ^ uVar7) - uVar7) + lVar1;
      uVar7 = (ulonglong)((int)((ulonglong)pbVar4[4] - (ulonglong)pbVar3[4]) >> 0x1f);
      iVar2 = iVar2 + 2;
      uVar8 = (ulonglong)((int)((ulonglong)pbVar4[3] - (ulonglong)pbVar3[3]) >> 0x1f);
      uVar6 = (ulonglong)((int)((ulonglong)pbVar4[2] - (ulonglong)pbVar3[2]) >> 0x1f);
      uVar10 = (ulonglong)((int)((ulonglong)pbVar4[1] - (ulonglong)pbVar3[1]) >> 0x1f);
      uVar5 = (ulonglong)((int)((ulonglong)*pbVar4 - (ulonglong)*pbVar3) >> 0x1f);
      param_1 = pbVar4 + param_2;
      param_3 = pbVar3 + param_4;
      lVar16 = (((ulonglong)pbVar4[7] - (ulonglong)pbVar3[7] ^ uVar14) - uVar14) +
               (((ulonglong)pbVar4[6] - (ulonglong)pbVar3[6] ^ uVar12) - uVar12) +
               (((ulonglong)pbVar4[5] - (ulonglong)pbVar3[5] ^ uVar9) - uVar9) +
               (((ulonglong)pbVar4[4] - (ulonglong)pbVar3[4] ^ uVar7) - uVar7) +
               (((ulonglong)pbVar4[3] - (ulonglong)pbVar3[3] ^ uVar8) - uVar8) +
               (((ulonglong)pbVar4[2] - (ulonglong)pbVar3[2] ^ uVar6) - uVar6) +
               (((ulonglong)pbVar4[1] - (ulonglong)pbVar3[1] ^ uVar10) - uVar10) +
               (((ulonglong)*pbVar4 - (ulonglong)*pbVar3 ^ uVar5) - uVar5) + lVar16;
    } while (iVar2 < param_5 + -1);
  }
  lVar16 = lVar16 + lVar1;
  if (iVar2 < param_5) {
    uVar9 = (ulonglong)((int)((ulonglong)param_1[7] - (ulonglong)param_3[7]) >> 0x1f);
    uVar12 = (ulonglong)((int)((ulonglong)param_1[6] - (ulonglong)param_3[6]) >> 0x1f);
    uVar11 = (ulonglong)((int)((ulonglong)param_1[5] - (ulonglong)param_3[5]) >> 0x1f);
    uVar10 = (ulonglong)((int)((ulonglong)param_1[4] - (ulonglong)param_3[4]) >> 0x1f);
    uVar7 = (ulonglong)((int)((ulonglong)param_1[3] - (ulonglong)param_3[3]) >> 0x1f);
    uVar5 = (ulonglong)((int)((ulonglong)param_1[2] - (ulonglong)param_3[2]) >> 0x1f);
    uVar6 = (ulonglong)((int)((ulonglong)param_1[1] - (ulonglong)param_3[1]) >> 0x1f);
    uVar8 = (ulonglong)((int)((ulonglong)*param_1 - (ulonglong)*param_3) >> 0x1f);
    lVar16 = lVar16 + (((ulonglong)param_1[7] - (ulonglong)param_3[7] ^ uVar9) - uVar9) +
                      (((ulonglong)param_1[6] - (ulonglong)param_3[6] ^ uVar12) - uVar12) +
                      (((ulonglong)param_1[5] - (ulonglong)param_3[5] ^ uVar11) - uVar11) +
                      (((ulonglong)param_1[4] - (ulonglong)param_3[4] ^ uVar10) - uVar10) +
                      (((ulonglong)param_1[3] - (ulonglong)param_3[3] ^ uVar7) - uVar7) +
                      (((ulonglong)param_1[2] - (ulonglong)param_3[2] ^ uVar5) - uVar5) +
                      (((ulonglong)param_1[1] - (ulonglong)param_3[1] ^ uVar6) - uVar6) +
                      (((ulonglong)*param_1 - (ulonglong)*param_3 ^ uVar8) - uVar8);
  }
  return lVar16;
}

