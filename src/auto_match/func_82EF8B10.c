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
extern unsigned int *auStack_d0;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_82160650;
extern unsigned int lbl_82160690;


ulonglong fn_82EF8B10(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar12;
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
  int iStack_f0;
  int iStack_ec;
  undefined4 auStack_d0 [52];
  
  iStack_ec = param_5 + 8;
  uVar5 = 0;
  iVar1 = param_4 * 4;
  iStack_f0 = 0;
  iVar2 = param_2 * 4;
  iVar6 = 0;
  do {
    pbVar13 = (byte *)(*(int *)((int)&lbl_82160650 + iVar6) * param_4 +
                       *(int *)((int)&lbl_82160690 + iVar6) + param_3);
    pbVar7 = (byte *)(*(int *)((int)&lbl_82160650 + iVar6) * param_2 +
                      *(int *)((int)&lbl_82160690 + iVar6) + param_1);
    pbVar8 = pbVar7 + iVar2;
    pbVar14 = pbVar13 + iVar1;
    uVar4 = (ulonglong)((int)((ulonglong)pbVar7[0xc] - (ulonglong)pbVar13[0xc]) >> 0x1f);
    uVar28 = (ulonglong)((int)((ulonglong)pbVar7[8] - (ulonglong)pbVar13[8]) >> 0x1f);
    uVar27 = (ulonglong)((int)((ulonglong)pbVar7[4] - (ulonglong)pbVar13[4]) >> 0x1f);
    uVar24 = (ulonglong)((int)((ulonglong)*pbVar7 - (ulonglong)*pbVar13) >> 0x1f);
    uVar22 = (ulonglong)((int)((ulonglong)pbVar8[0xc] - (ulonglong)pbVar14[0xc]) >> 0x1f);
    uVar18 = (ulonglong)((int)((ulonglong)pbVar8[8] - (ulonglong)pbVar14[8]) >> 0x1f);
    uVar17 = (ulonglong)((int)((ulonglong)pbVar8[4] - (ulonglong)pbVar14[4]) >> 0x1f);
    pbVar9 = pbVar8 + iVar2;
    pbVar15 = pbVar14 + iVar1;
    uVar19 = (ulonglong)((int)((ulonglong)*pbVar8 - (ulonglong)*pbVar14) >> 0x1f);
    uVar30 = (ulonglong)((int)((ulonglong)pbVar9[0xc] - (ulonglong)pbVar15[0xc]) >> 0x1f);
    uVar3 = (ulonglong)((int)((ulonglong)pbVar9[8] - (ulonglong)pbVar15[8]) >> 0x1f);
    pbVar10 = pbVar9 + iVar2;
    pbVar16 = pbVar15 + iVar1;
    uVar26 = (ulonglong)((int)((ulonglong)pbVar9[4] - (ulonglong)pbVar15[4]) >> 0x1f);
    uVar23 = (ulonglong)((int)((ulonglong)*pbVar9 - (ulonglong)*pbVar15) >> 0x1f);
    uVar21 = (ulonglong)((int)((ulonglong)pbVar10[0xc] - (ulonglong)pbVar16[0xc]) >> 0x1f);
    uVar20 = (ulonglong)((int)((ulonglong)pbVar10[8] - (ulonglong)pbVar16[8]) >> 0x1f);
    uVar25 = (ulonglong)((int)((ulonglong)pbVar10[4] - (ulonglong)pbVar16[4]) >> 0x1f);
    uVar29 = (ulonglong)((int)((ulonglong)*pbVar10 - (ulonglong)*pbVar16) >> 0x1f);
    lVar12 = (((ulonglong)pbVar10[0xc] - (ulonglong)pbVar16[0xc] ^ uVar21) - uVar21) +
             (((ulonglong)pbVar10[8] - (ulonglong)pbVar16[8] ^ uVar20) - uVar20) +
             (((ulonglong)pbVar10[4] - (ulonglong)pbVar16[4] ^ uVar25) - uVar25) +
             (((ulonglong)*pbVar10 - (ulonglong)*pbVar16 ^ uVar29) - uVar29) +
             (((ulonglong)pbVar9[0xc] - (ulonglong)pbVar15[0xc] ^ uVar30) - uVar30) +
             (((ulonglong)pbVar9[8] - (ulonglong)pbVar15[8] ^ uVar3) - uVar3) +
             (((ulonglong)pbVar9[4] - (ulonglong)pbVar15[4] ^ uVar26) - uVar26) +
             (((ulonglong)*pbVar9 - (ulonglong)*pbVar15 ^ uVar23) - uVar23) +
             (((ulonglong)pbVar8[0xc] - (ulonglong)pbVar14[0xc] ^ uVar22) - uVar22) +
             (((ulonglong)pbVar8[8] - (ulonglong)pbVar14[8] ^ uVar18) - uVar18) +
             (((ulonglong)pbVar8[4] - (ulonglong)pbVar14[4] ^ uVar17) - uVar17) +
             (((ulonglong)*pbVar8 - (ulonglong)*pbVar14 ^ uVar19) - uVar19) +
             (((ulonglong)pbVar7[0xc] - (ulonglong)pbVar13[0xc] ^ uVar4) - uVar4) +
             (((ulonglong)pbVar7[8] - (ulonglong)pbVar13[8] ^ uVar28) - uVar28) +
             (((ulonglong)pbVar7[4] - (ulonglong)pbVar13[4] ^ uVar27) - uVar27) +
             (((ulonglong)*pbVar7 - (ulonglong)*pbVar13 ^ uVar24) - uVar24);
    uVar5 = lVar12 + uVar5;
    *(int *)((int)auStack_d0 + iVar6) = (int)lVar12;
    iVar11 = (iStack_ec >> 4) + ((int)(param_5 * 3 + 0x80) >> 8);
    uVar3 = (ulonglong)param_5;
    if (iVar11 < (int)uVar5) break;
    iVar6 = iVar6 + 4;
    iStack_ec = iStack_ec + param_5;
    iStack_f0 = iStack_f0 + 1;
    uVar3 = uVar5;
  } while (iVar6 < 0x40);
  if ((iStack_f0 != 0x10) || (uVar5 = (ulonglong)param_5, (int)uVar3 <= iVar11)) {
    uVar5 = uVar3;
  }
  return uVar5;
}

