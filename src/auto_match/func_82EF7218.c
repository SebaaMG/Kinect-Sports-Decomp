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


ulonglong fn_82EF7218(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  
  uVar2 = 0;
  if (-1 < (int)param_5) {
    uVar1 = param_5 * 3;
    iVar11 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0);
    iVar25 = 4;
    pbVar12 = (byte *)(param_1 + 6);
    pbVar10 = (byte *)(param_2 * 4 + param_1 + 6);
    iVar23 = param_5 + iVar11 * -3;
    pbVar9 = (byte *)(param_3 + 6);
    pbVar8 = (byte *)(param_4 * 4 + param_3 + 6);
    do {
      iVar25 = iVar25 + -1;
      uVar20 = (ulonglong)((int)((ulonglong)pbVar12[-6] - (ulonglong)pbVar9[-6]) >> 0x1f);
      uVar19 = (ulonglong)((int)((ulonglong)pbVar12[-5] - (ulonglong)pbVar9[-5]) >> 0x1f);
      uVar15 = (ulonglong)((int)((ulonglong)pbVar12[-4] - (ulonglong)pbVar9[-4]) >> 0x1f);
      uVar14 = (ulonglong)((int)((ulonglong)pbVar12[-3] - (ulonglong)pbVar9[-3]) >> 0x1f);
      uVar13 = (ulonglong)((int)((ulonglong)pbVar12[-2] - (ulonglong)pbVar9[-2]) >> 0x1f);
      uVar18 = (ulonglong)((int)((ulonglong)pbVar12[-1] - (ulonglong)pbVar9[-1]) >> 0x1f);
      uVar16 = (ulonglong)((int)((ulonglong)pbVar12[1] - (ulonglong)pbVar9[1]) >> 0x1f);
      uVar21 = (ulonglong)((int)((ulonglong)pbVar10[-6] - (ulonglong)pbVar8[-6]) >> 0x1f);
      uVar3 = (ulonglong)((int)((ulonglong)pbVar10[-5] - (ulonglong)pbVar8[-5]) >> 0x1f);
      uVar22 = (ulonglong)((int)((ulonglong)pbVar10[-4] - (ulonglong)pbVar8[-4]) >> 0x1f);
      uVar4 = (ulonglong)((int)((ulonglong)pbVar10[-3] - (ulonglong)pbVar8[-3]) >> 0x1f);
      uVar5 = (ulonglong)((int)((ulonglong)pbVar10[-2] - (ulonglong)pbVar8[-2]) >> 0x1f);
      uVar24 = (ulonglong)((int)((ulonglong)pbVar10[-1] - (ulonglong)pbVar8[-1]) >> 0x1f);
      uVar17 = (ulonglong)((int)((ulonglong)pbVar10[1] - (ulonglong)pbVar8[1]) >> 0x1f);
      uVar7 = (ulonglong)((int)((ulonglong)*pbVar10 - (ulonglong)*pbVar8) >> 0x1f);
      uVar6 = (ulonglong)((int)((ulonglong)*pbVar12 - (ulonglong)*pbVar9) >> 0x1f);
      uVar2 = (((ulonglong)pbVar12[-6] - (ulonglong)pbVar9[-6] ^ uVar20) - uVar20) +
              (((ulonglong)pbVar12[-5] - (ulonglong)pbVar9[-5] ^ uVar19) - uVar19) +
              (((ulonglong)pbVar12[-4] - (ulonglong)pbVar9[-4] ^ uVar15) - uVar15) +
              (((ulonglong)pbVar12[-3] - (ulonglong)pbVar9[-3] ^ uVar14) - uVar14) +
              (((ulonglong)pbVar12[-2] - (ulonglong)pbVar9[-2] ^ uVar13) - uVar13) +
              (((ulonglong)pbVar12[-1] - (ulonglong)pbVar9[-1] ^ uVar18) - uVar18) +
              (((ulonglong)pbVar12[1] - (ulonglong)pbVar9[1] ^ uVar16) - uVar16) +
              (((ulonglong)pbVar10[-6] - (ulonglong)pbVar8[-6] ^ uVar21) - uVar21) +
              (((ulonglong)pbVar10[-5] - (ulonglong)pbVar8[-5] ^ uVar3) - uVar3) +
              (((ulonglong)pbVar10[-4] - (ulonglong)pbVar8[-4] ^ uVar22) - uVar22) +
              (((ulonglong)pbVar10[-3] - (ulonglong)pbVar8[-3] ^ uVar4) - uVar4) +
              (((ulonglong)pbVar10[-2] - (ulonglong)pbVar8[-2] ^ uVar5) - uVar5) +
              (((ulonglong)pbVar10[-1] - (ulonglong)pbVar8[-1] ^ uVar24) - uVar24) +
              (((ulonglong)pbVar10[1] - (ulonglong)pbVar8[1] ^ uVar17) - uVar17) +
              (((ulonglong)*pbVar10 - (ulonglong)*pbVar8 ^ uVar7) - uVar7) +
              (((ulonglong)*pbVar12 - (ulonglong)*pbVar9 ^ uVar6) - uVar6) + uVar2;
      if (iVar23 <= (int)uVar2) {
        return (ulonglong)param_5;
      }
      pbVar12 = pbVar12 + param_2;
      pbVar10 = pbVar10 + param_2;
      iVar23 = iVar23 + iVar11;
      pbVar9 = pbVar9 + param_4;
      pbVar8 = pbVar8 + param_4;
    } while (iVar25 != 0);
  }
  return uVar2;
}

