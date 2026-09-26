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


ulonglong fn_827D4370(ulonglong param_1,byte *param_2,ulonglong param_3)

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
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
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
  ulonglong uVar28;
  longlong lVar29;
  
  uVar12 = (param_1 & 0xffffffff) >> 0x10;
  param_1 = param_1 & 0xffff;
  if ((param_3 & 0xffffffff) == 1) {
    param_1 = *param_2 + param_1;
    if (0xfff0 < param_1) {
      param_1 = param_1 - 0xfff1;
    }
    uVar12 = uVar12 + param_1;
    if (0xfff0 < (uVar12 & 0xffffffff)) {
      uVar12 = uVar12 - 0xfff1;
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      return 1;
    }
    if ((param_3 & 0xffffffff) < 0x10) {
      if ((param_3 & 0xffffffff) != 0) {
        param_2 = param_2 + -1;
        do {
          param_2 = param_2 + 1;
          param_1 = *param_2 + param_1;
          uVar12 = uVar12 + param_1;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      if (0xfff0 < (param_1 & 0xffffffff)) {
        param_1 = param_1 - 0xfff1;
      }
      uVar12 = uVar12 + (longlong)(int)((uVar12 & 0xffffffff) / 0xfff1) * -0xfff1;
    }
    else {
      if (0x15af < (param_3 & 0xffffffff)) {
        uVar28 = (param_3 & 0xffffffff) / 0x15b0;
        do {
          param_3 = param_3 - 0x15b0;
          lVar29 = 0x15b;
          do {
            lVar13 = *param_2 + param_1;
            lVar14 = (ulonglong)param_2[1] + lVar13;
            pbVar1 = param_2 + 5;
            pbVar2 = param_2 + 6;
            pbVar3 = param_2 + 7;
            lVar15 = (ulonglong)param_2[2] + lVar14;
            pbVar4 = param_2 + 8;
            pbVar5 = param_2 + 9;
            pbVar6 = param_2 + 10;
            lVar16 = (ulonglong)param_2[3] + lVar15;
            pbVar7 = param_2 + 0xb;
            pbVar8 = param_2 + 0xc;
            pbVar9 = param_2 + 0xd;
            lVar17 = (ulonglong)param_2[4] + lVar16;
            pbVar10 = param_2 + 0xe;
            pbVar11 = param_2 + 0xf;
            param_2 = param_2 + 0x10;
            lVar18 = (ulonglong)*pbVar1 + lVar17;
            lVar19 = (ulonglong)*pbVar2 + lVar18;
            lVar20 = (ulonglong)*pbVar3 + lVar19;
            lVar21 = (ulonglong)*pbVar4 + lVar20;
            lVar22 = (ulonglong)*pbVar5 + lVar21;
            lVar23 = (ulonglong)*pbVar6 + lVar22;
            lVar24 = (ulonglong)*pbVar7 + lVar23;
            lVar25 = (ulonglong)*pbVar8 + lVar24;
            lVar26 = (ulonglong)*pbVar9 + lVar25;
            lVar27 = (ulonglong)*pbVar10 + lVar26;
            param_1 = (ulonglong)*pbVar11 + lVar27;
            uVar12 = uVar12 + lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar20
                     + lVar21 + lVar22 + lVar23 + lVar24 + lVar25 + lVar26 + lVar27 + param_1;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          uVar28 = uVar28 - 1;
          param_1 = param_1 + (longlong)(int)((param_1 & 0xffffffff) / 0xfff1) * -0xfff1;
          uVar12 = uVar12 + (longlong)(int)((uVar12 & 0xffffffff) / 0xfff1) * -0xfff1;
        } while (uVar28 != 0);
      }
      if ((param_3 & 0xffffffff) != 0) {
        if (0xf < (param_3 & 0xffffffff)) {
          uVar28 = (param_3 & 0xffffffff) >> 4;
          do {
            param_3 = param_3 - 0x10;
            lVar29 = *param_2 + param_1;
            lVar13 = (ulonglong)param_2[1] + lVar29;
            pbVar1 = param_2 + 5;
            pbVar2 = param_2 + 6;
            pbVar3 = param_2 + 7;
            lVar14 = (ulonglong)param_2[2] + lVar13;
            pbVar4 = param_2 + 8;
            pbVar5 = param_2 + 9;
            pbVar6 = param_2 + 10;
            lVar15 = (ulonglong)param_2[3] + lVar14;
            pbVar7 = param_2 + 0xb;
            pbVar8 = param_2 + 0xc;
            pbVar9 = param_2 + 0xd;
            lVar16 = (ulonglong)param_2[4] + lVar15;
            pbVar10 = param_2 + 0xe;
            pbVar11 = param_2 + 0xf;
            param_2 = param_2 + 0x10;
            lVar17 = (ulonglong)*pbVar1 + lVar16;
            lVar18 = (ulonglong)*pbVar2 + lVar17;
            lVar19 = (ulonglong)*pbVar3 + lVar18;
            lVar20 = (ulonglong)*pbVar4 + lVar19;
            lVar21 = (ulonglong)*pbVar5 + lVar20;
            lVar22 = (ulonglong)*pbVar6 + lVar21;
            lVar23 = (ulonglong)*pbVar7 + lVar22;
            lVar24 = (ulonglong)*pbVar8 + lVar23;
            lVar25 = (ulonglong)*pbVar9 + lVar24;
            lVar26 = (ulonglong)*pbVar10 + lVar25;
            param_1 = (ulonglong)*pbVar11 + lVar26;
            uVar12 = uVar12 + lVar29 + lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19
                     + lVar20 + lVar21 + lVar22 + lVar23 + lVar24 + lVar25 + lVar26 + param_1;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        if ((param_3 & 0xffffffff) != 0) {
          param_2 = param_2 + -1;
          do {
            param_2 = param_2 + 1;
            param_1 = *param_2 + param_1;
            uVar12 = uVar12 + param_1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        param_1 = param_1 + (longlong)(int)((param_1 & 0xffffffff) / 0xfff1) * -0xfff1;
        uVar12 = uVar12 + (longlong)(int)((uVar12 & 0xffffffff) / 0xfff1) * -0xfff1;
      }
    }
  }
  return (uVar12 & 0xffff) << 0x10 | param_1;
}

