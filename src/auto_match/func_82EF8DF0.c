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
extern int fn_82EF8B10();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int uStack0000003c;


ulonglong fn_82EF8DF0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int iVar39;
  int iVar40;
  ulonglong uVar41;
  int iStack0000001c;
  int iStack0000002c;
  uint uStack0000003c;
  
  if (param_5 == 8) {
    uVar14 = param_6 * 0xe;
    iVar15 = ((int)uVar14 >> 6) + (uint)((int)uVar14 < 0 && (uVar14 & 0x3f) != 0);
    iVar39 = param_6 + iVar15 * -3;
    uVar41 = 0;
    iVar40 = 4;
    pbVar16 = (byte *)(param_1 + 0xe);
    pbVar12 = (byte *)(param_3 + 0xe);
    pbVar13 = (byte *)(param_2 * 4 + param_1 + 0xe);
    pbVar9 = (byte *)(param_4 * 4 + param_3 + 0xe);
    do {
      iVar40 = iVar40 + -1;
      uVar2 = (ulonglong)((int)((ulonglong)pbVar16[-0xe] - (ulonglong)pbVar12[-0xe]) >> 0x1f);
      uVar28 = (ulonglong)((int)((ulonglong)pbVar16[-0xd] - (ulonglong)pbVar12[-0xd]) >> 0x1f);
      uVar24 = (ulonglong)((int)((ulonglong)pbVar16[-0xc] - (ulonglong)pbVar12[-0xc]) >> 0x1f);
      uVar21 = (ulonglong)((int)((ulonglong)pbVar16[-0xb] - (ulonglong)pbVar12[-0xb]) >> 0x1f);
      uVar18 = (ulonglong)((int)((ulonglong)pbVar16[-10] - (ulonglong)pbVar12[-10]) >> 0x1f);
      uVar25 = (ulonglong)((int)((ulonglong)pbVar16[-9] - (ulonglong)pbVar12[-9]) >> 0x1f);
      uVar34 = (ulonglong)((int)((ulonglong)pbVar16[-8] - (ulonglong)pbVar12[-8]) >> 0x1f);
      uVar29 = (ulonglong)((int)((ulonglong)pbVar16[-7] - (ulonglong)pbVar12[-7]) >> 0x1f);
      uVar4 = (ulonglong)((int)((ulonglong)pbVar16[-6] - (ulonglong)pbVar12[-6]) >> 0x1f);
      uVar35 = (ulonglong)((int)((ulonglong)pbVar16[-5] - (ulonglong)pbVar12[-5]) >> 0x1f);
      uVar5 = (ulonglong)((int)((ulonglong)pbVar16[-4] - (ulonglong)pbVar12[-4]) >> 0x1f);
      uVar6 = (ulonglong)((int)((ulonglong)pbVar16[-3] - (ulonglong)pbVar12[-3]) >> 0x1f);
      uVar1 = (ulonglong)((int)((ulonglong)pbVar16[-2] - (ulonglong)pbVar12[-2]) >> 0x1f);
      uVar26 = (ulonglong)((int)((ulonglong)pbVar16[-1] - (ulonglong)pbVar12[-1]) >> 0x1f);
      uVar22 = (ulonglong)((int)((ulonglong)pbVar16[1] - (ulonglong)pbVar12[1]) >> 0x1f);
      uVar19 = (ulonglong)((int)((ulonglong)pbVar13[-0xe] - (ulonglong)pbVar9[-0xe]) >> 0x1f);
      uVar17 = (ulonglong)((int)((ulonglong)pbVar13[-0xd] - (ulonglong)pbVar9[-0xd]) >> 0x1f);
      uVar30 = (ulonglong)((int)((ulonglong)pbVar13[-0xc] - (ulonglong)pbVar9[-0xc]) >> 0x1f);
      uVar36 = (ulonglong)((int)((ulonglong)pbVar13[-0xb] - (ulonglong)pbVar9[-0xb]) >> 0x1f);
      uVar31 = (ulonglong)((int)((ulonglong)pbVar13[-10] - (ulonglong)pbVar9[-10]) >> 0x1f);
      uVar7 = (ulonglong)((int)((ulonglong)pbVar13[-9] - (ulonglong)pbVar9[-9]) >> 0x1f);
      uVar32 = (ulonglong)((int)((ulonglong)pbVar13[-8] - (ulonglong)pbVar9[-8]) >> 0x1f);
      uVar3 = (ulonglong)((int)((ulonglong)pbVar13[-7] - (ulonglong)pbVar9[-7]) >> 0x1f);
      uVar37 = (ulonglong)((int)((ulonglong)pbVar13[-6] - (ulonglong)pbVar9[-6]) >> 0x1f);
      uVar27 = (ulonglong)((int)((ulonglong)pbVar13[-5] - (ulonglong)pbVar9[-5]) >> 0x1f);
      uVar23 = (ulonglong)((int)((ulonglong)pbVar13[-4] - (ulonglong)pbVar9[-4]) >> 0x1f);
      uVar20 = (ulonglong)((int)((ulonglong)pbVar13[-3] - (ulonglong)pbVar9[-3]) >> 0x1f);
      uVar8 = (ulonglong)((int)((ulonglong)pbVar13[-2] - (ulonglong)pbVar9[-2]) >> 0x1f);
      uVar33 = (ulonglong)((int)((ulonglong)pbVar13[-1] - (ulonglong)pbVar9[-1]) >> 0x1f);
      uVar10 = (ulonglong)((int)((ulonglong)pbVar13[1] - (ulonglong)pbVar9[1]) >> 0x1f);
      uVar38 = (ulonglong)((int)((ulonglong)*pbVar16 - (ulonglong)*pbVar12) >> 0x1f);
      uVar11 = (ulonglong)((int)((ulonglong)*pbVar13 - (ulonglong)*pbVar9) >> 0x1f);
      uVar41 = (((ulonglong)pbVar16[-0xe] - (ulonglong)pbVar12[-0xe] ^ uVar2) - uVar2) +
               (((ulonglong)pbVar16[-0xd] - (ulonglong)pbVar12[-0xd] ^ uVar28) - uVar28) +
               (((ulonglong)pbVar16[-0xc] - (ulonglong)pbVar12[-0xc] ^ uVar24) - uVar24) +
               (((ulonglong)pbVar16[-0xb] - (ulonglong)pbVar12[-0xb] ^ uVar21) - uVar21) +
               (((ulonglong)pbVar16[-10] - (ulonglong)pbVar12[-10] ^ uVar18) - uVar18) +
               (((ulonglong)pbVar16[-9] - (ulonglong)pbVar12[-9] ^ uVar25) - uVar25) +
               (((ulonglong)pbVar16[-8] - (ulonglong)pbVar12[-8] ^ uVar34) - uVar34) +
               (((ulonglong)pbVar16[-7] - (ulonglong)pbVar12[-7] ^ uVar29) - uVar29) +
               (((ulonglong)pbVar16[-6] - (ulonglong)pbVar12[-6] ^ uVar4) - uVar4) +
               (((ulonglong)pbVar16[-5] - (ulonglong)pbVar12[-5] ^ uVar35) - uVar35) +
               (((ulonglong)pbVar16[-4] - (ulonglong)pbVar12[-4] ^ uVar5) - uVar5) +
               (((ulonglong)pbVar16[-3] - (ulonglong)pbVar12[-3] ^ uVar6) - uVar6) +
               (((ulonglong)pbVar16[-2] - (ulonglong)pbVar12[-2] ^ uVar1) - uVar1) +
               (((ulonglong)pbVar16[-1] - (ulonglong)pbVar12[-1] ^ uVar26) - uVar26) +
               (((ulonglong)pbVar16[1] - (ulonglong)pbVar12[1] ^ uVar22) - uVar22) +
               (((ulonglong)pbVar13[-0xe] - (ulonglong)pbVar9[-0xe] ^ uVar19) - uVar19) +
               (((ulonglong)pbVar13[-0xd] - (ulonglong)pbVar9[-0xd] ^ uVar17) - uVar17) +
               (((ulonglong)pbVar13[-0xc] - (ulonglong)pbVar9[-0xc] ^ uVar30) - uVar30) +
               (((ulonglong)pbVar13[-0xb] - (ulonglong)pbVar9[-0xb] ^ uVar36) - uVar36) +
               (((ulonglong)pbVar13[-10] - (ulonglong)pbVar9[-10] ^ uVar31) - uVar31) +
               (((ulonglong)pbVar13[-9] - (ulonglong)pbVar9[-9] ^ uVar7) - uVar7) +
               (((ulonglong)pbVar13[-8] - (ulonglong)pbVar9[-8] ^ uVar32) - uVar32) +
               (((ulonglong)pbVar13[-7] - (ulonglong)pbVar9[-7] ^ uVar3) - uVar3) +
               (((ulonglong)pbVar13[-6] - (ulonglong)pbVar9[-6] ^ uVar37) - uVar37) +
               (((ulonglong)pbVar13[-5] - (ulonglong)pbVar9[-5] ^ uVar27) - uVar27) +
               (((ulonglong)pbVar13[-4] - (ulonglong)pbVar9[-4] ^ uVar23) - uVar23) +
               (((ulonglong)pbVar13[-3] - (ulonglong)pbVar9[-3] ^ uVar20) - uVar20) +
               (((ulonglong)pbVar13[-2] - (ulonglong)pbVar9[-2] ^ uVar8) - uVar8) +
               (((ulonglong)pbVar13[-1] - (ulonglong)pbVar9[-1] ^ uVar33) - uVar33) +
               (((ulonglong)pbVar13[1] - (ulonglong)pbVar9[1] ^ uVar10) - uVar10) +
               (((ulonglong)*pbVar16 - (ulonglong)*pbVar12 ^ uVar38) - uVar38) +
               (((ulonglong)*pbVar13 - (ulonglong)*pbVar9 ^ uVar11) - uVar11) + uVar41;
      if (iVar39 <= (int)uVar41) {
        return (ulonglong)param_6;
      }
      pbVar16 = pbVar16 + param_2;
      pbVar13 = pbVar13 + param_2;
      iVar39 = iVar39 + iVar15;
      pbVar12 = pbVar12 + param_4;
      pbVar9 = pbVar9 + param_4;
    } while (iVar40 != 0);
  }
  else {
    iStack0000001c = param_2;
    iStack0000002c = param_4;
    uStack0000003c = param_6;
    uVar41 = fn_82EF8B10();
  }
  return uVar41;
}

