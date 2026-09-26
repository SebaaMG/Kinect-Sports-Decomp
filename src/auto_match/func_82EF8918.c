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


longlong fn_82EF8918(int param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  byte *pbVar36;
  byte *pbVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  
  lVar33 = 0;
  if (0 < (int)param_5) {
    pbVar36 = (byte *)(param_3 + 0xe);
    pbVar37 = (byte *)(param_1 + 0xe);
    do {
      pbVar3 = pbVar36 + -0xe;
      pbVar4 = pbVar37 + -0xe;
      pbVar5 = pbVar36 + -0xd;
      pbVar6 = pbVar37 + -0xd;
      pbVar7 = pbVar37 + -0xc;
      pbVar8 = pbVar36 + -0xc;
      uVar49 = (ulonglong)((int)((ulonglong)*pbVar4 - (ulonglong)*pbVar3) >> 0x1f);
      pbVar9 = pbVar36 + -0xb;
      uVar43 = (ulonglong)((int)((ulonglong)*pbVar6 - (ulonglong)*pbVar5) >> 0x1f);
      pbVar10 = pbVar37 + -0xb;
      pbVar11 = pbVar36 + -10;
      pbVar12 = pbVar37 + -10;
      pbVar13 = pbVar36 + -9;
      uVar40 = (ulonglong)((int)((ulonglong)*pbVar7 - (ulonglong)*pbVar8) >> 0x1f);
      pbVar14 = pbVar37 + -9;
      pbVar15 = pbVar37 + -8;
      pbVar16 = pbVar36 + -8;
      pbVar17 = pbVar37 + -7;
      pbVar18 = pbVar36 + -7;
      uVar39 = (ulonglong)((int)((ulonglong)*pbVar10 - (ulonglong)*pbVar9) >> 0x1f);
      pbVar19 = pbVar37 + -6;
      pbVar20 = pbVar36 + -6;
      pbVar21 = pbVar37 + -5;
      pbVar22 = pbVar36 + -5;
      pbVar23 = pbVar37 + -4;
      uVar38 = (ulonglong)((int)((ulonglong)*pbVar12 - (ulonglong)*pbVar11) >> 0x1f);
      pbVar24 = pbVar36 + -4;
      pbVar25 = pbVar37 + -3;
      pbVar26 = pbVar36 + -3;
      uVar41 = (ulonglong)((int)((ulonglong)*pbVar14 - (ulonglong)*pbVar13) >> 0x1f);
      uVar45 = (ulonglong)((int)((ulonglong)*pbVar15 - (ulonglong)*pbVar16) >> 0x1f);
      uVar44 = (ulonglong)((int)((ulonglong)*pbVar17 - (ulonglong)*pbVar18) >> 0x1f);
      uVar50 = (ulonglong)((int)((ulonglong)*pbVar19 - (ulonglong)*pbVar20) >> 0x1f);
      uVar46 = (ulonglong)((int)((ulonglong)*pbVar21 - (ulonglong)*pbVar22) >> 0x1f);
      uVar34 = (ulonglong)((int)((ulonglong)*pbVar23 - (ulonglong)*pbVar24) >> 0x1f);
      uVar35 = (ulonglong)((int)((ulonglong)*pbVar25 - (ulonglong)*pbVar26) >> 0x1f);
      pbVar27 = pbVar37 + -2;
      pbVar28 = pbVar36 + -2;
      pbVar29 = pbVar37 + -1;
      pbVar30 = pbVar36 + -1;
      pbVar31 = pbVar37 + 1;
      uVar47 = (ulonglong)((int)((ulonglong)*pbVar27 - (ulonglong)*pbVar28) >> 0x1f);
      pbVar32 = pbVar36 + 1;
      bVar1 = *pbVar36;
      bVar2 = *pbVar37;
      uVar42 = (ulonglong)((int)((ulonglong)*pbVar29 - (ulonglong)*pbVar30) >> 0x1f);
      uVar48 = (ulonglong)((int)((ulonglong)*pbVar31 - (ulonglong)*pbVar32) >> 0x1f);
      uVar51 = (ulonglong)((int)((ulonglong)bVar2 - (ulonglong)bVar1) >> 0x1f);
      pbVar37 = pbVar37 + param_2;
      pbVar36 = pbVar36 + param_4;
      lVar33 = (((ulonglong)*pbVar4 - (ulonglong)*pbVar3 ^ uVar49) - uVar49) +
               (((ulonglong)*pbVar6 - (ulonglong)*pbVar5 ^ uVar43) - uVar43) +
               (((ulonglong)*pbVar7 - (ulonglong)*pbVar8 ^ uVar40) - uVar40) +
               (((ulonglong)*pbVar10 - (ulonglong)*pbVar9 ^ uVar39) - uVar39) +
               (((ulonglong)*pbVar12 - (ulonglong)*pbVar11 ^ uVar38) - uVar38) +
               (((ulonglong)*pbVar14 - (ulonglong)*pbVar13 ^ uVar41) - uVar41) +
               (((ulonglong)*pbVar15 - (ulonglong)*pbVar16 ^ uVar45) - uVar45) +
               (((ulonglong)*pbVar17 - (ulonglong)*pbVar18 ^ uVar44) - uVar44) +
               (((ulonglong)*pbVar19 - (ulonglong)*pbVar20 ^ uVar50) - uVar50) +
               (((ulonglong)*pbVar21 - (ulonglong)*pbVar22 ^ uVar46) - uVar46) +
               (((ulonglong)*pbVar23 - (ulonglong)*pbVar24 ^ uVar34) - uVar34) +
               (((ulonglong)*pbVar25 - (ulonglong)*pbVar26 ^ uVar35) - uVar35) +
               (((ulonglong)*pbVar27 - (ulonglong)*pbVar28 ^ uVar47) - uVar47) +
               (((ulonglong)*pbVar29 - (ulonglong)*pbVar30 ^ uVar42) - uVar42) +
               (((ulonglong)*pbVar31 - (ulonglong)*pbVar32 ^ uVar48) - uVar48) +
               (((ulonglong)bVar2 - (ulonglong)bVar1 ^ uVar51) - uVar51) + lVar33;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return lVar33;
}

