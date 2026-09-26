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


ulonglong fn_829C0738(ulonglong param_1,int param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  byte *pbVar29;
  ulonglong uVar30;
  
  uVar11 = param_1 & 0xffff;
  uVar13 = (param_1 & 0xffffffff) >> 0x10;
  if (param_2 == 0) {
    uVar11 = 1;
  }
  else {
    if ((param_3 & 0xffffffff) != 0) {
      pbVar29 = (byte *)(param_2 + -1);
      do {
        uVar12 = param_3;
        if (0x15af < (param_3 & 0xffffffff)) {
          uVar12 = 0x15b0;
        }
        param_3 = param_3 - uVar12;
        if (0xf < (int)uVar12) {
          uVar30 = (uVar12 & 0xffffffff) >> 4;
          uVar12 = uVar12 - (uVar12 & 0xfffffff0);
          do {
            lVar14 = pbVar29[1] + uVar11;
            lVar15 = (ulonglong)pbVar29[2] + lVar14;
            pbVar1 = pbVar29 + 7;
            pbVar2 = pbVar29 + 8;
            lVar16 = (ulonglong)pbVar29[3] + lVar15;
            pbVar3 = pbVar29 + 10;
            pbVar4 = pbVar29 + 9;
            pbVar5 = pbVar29 + 0xb;
            lVar17 = (ulonglong)pbVar29[4] + lVar16;
            pbVar6 = pbVar29 + 0xd;
            pbVar7 = pbVar29 + 0xc;
            pbVar8 = pbVar29 + 0xe;
            lVar18 = (ulonglong)pbVar29[5] + lVar17;
            pbVar9 = pbVar29 + 0x10;
            pbVar10 = pbVar29 + 0xf;
            lVar19 = (ulonglong)pbVar29[6] + lVar18;
            pbVar29 = pbVar29 + 0x10;
            lVar20 = (ulonglong)*pbVar1 + lVar19;
            lVar21 = (ulonglong)*pbVar2 + lVar20;
            lVar22 = (ulonglong)*pbVar4 + lVar21;
            lVar23 = (ulonglong)*pbVar3 + lVar22;
            lVar24 = (ulonglong)*pbVar5 + lVar23;
            lVar25 = (ulonglong)*pbVar7 + lVar24;
            lVar26 = (ulonglong)*pbVar6 + lVar25;
            lVar27 = (ulonglong)*pbVar8 + lVar26;
            lVar28 = (ulonglong)*pbVar10 + lVar27;
            uVar11 = (ulonglong)*pbVar9 + lVar28;
            uVar13 = uVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar20 + lVar21
                     + lVar22 + lVar23 + lVar24 + lVar25 + lVar26 + lVar27 + lVar28 + uVar11;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        if ((int)uVar12 != 0) {
          do {
            pbVar29 = pbVar29 + 1;
            uVar12 = uVar12 - 1;
            uVar11 = *pbVar29 + uVar11;
            uVar13 = uVar13 + uVar11;
          } while (uVar12 != 0);
        }
        uVar11 = uVar11 + (longlong)(int)((uVar11 & 0xffffffff) / 0xfff1) * -0xfff1;
        uVar13 = uVar13 + (longlong)(int)((uVar13 & 0xffffffff) / 0xfff1) * -0xfff1;
      } while ((param_3 & 0xffffffff) != 0);
    }
    uVar11 = (uVar13 & 0xffff) << 0x10 | uVar11;
  }
  return uVar11;
}

