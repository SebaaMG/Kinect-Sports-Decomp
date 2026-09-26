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
extern unsigned int lbl_821090E8;
extern unsigned int lbl_821090EA;
extern unsigned int lbl_821090EC;
extern unsigned int lbl_821090EE;
extern unsigned int uStack_e2;


void fn_82CC4B78(longlong param_1,ulonglong param_2,longlong param_3,int param_4,int param_5,
                  uint param_6,int param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  short *psVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined2 uStack_e2;
  short asStack_e0 [112];
  
  param_6 = param_6 & 0xff;
  uVar5 = 1 << (param_7 + 3U & 0x3f);
  uVar13 = (ulonglong)uVar5;
  if (((param_7 != 0) && (param_7 != 1)) && (param_7 != 2)) {
    return;
  }
  if (param_4 == 0) {
    uVar19 = 4;
    if (param_5 != 2) {
      uVar19 = 6;
    }
    iVar17 = 0;
    iVar16 = 0;
    lVar14 = uVar13 + 1;
    asStack_e0[uVar5 + 2] = 0;
    asStack_e0[uVar5 + 1] = 0;
  }
  else {
    if (param_5 == 0) {
      uVar19 = 0;
      iVar17 = 4;
      if (param_4 != 2) {
        iVar17 = 6;
      }
      iVar18 = 0;
      iVar16 = (1 << (iVar17 - 1U & 0x3f)) - param_6;
      lVar14 = uVar13 + 3;
      goto LAB_82cc4c78;
    }
    iVar16 = 4;
    if (param_4 != 2) {
      iVar16 = 6;
    }
    iVar18 = 4;
    if (param_5 != 2) {
      iVar18 = 6;
    }
    iVar17 = 7;
    uVar19 = (iVar18 + iVar16) - 7;
    iVar16 = 0x40 - param_6;
    lVar14 = uVar13 + 3;
  }
  iVar18 = (1 << (uVar19 - 1 & 0x3f)) + param_6 + -1;
LAB_82cc4c78:
  if (0 < (int)uVar5) {
    lVar15 = (param_1 - param_2) + -1;
    uVar12 = uVar13;
    do {
      if (0 < (int)lVar14) {
        sVar1 = *(short *)(&lbl_821090EE + param_5 * 8);
        sVar2 = *(short *)(&lbl_821090EC + param_5 * 8);
        puVar8 = &uStack_e2;
        sVar3 = (&lbl_821090E8)[param_5 * 4];
        sVar4 = (&lbl_821090EA)[param_5 * 4];
        lVar10 = lVar15;
        lVar20 = lVar14;
        do {
          pbVar6 = (byte *)lVar10;
          lVar10 = lVar10 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = (short)((int)((uint)pbVar6[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                                  (uint)pbVar6[(int)param_2 + (int)((param_2 & 0xffffffff) << 1)] *
                                  (int)sVar1 + (uint)pbVar6[(int)param_2] * (int)sVar4 +
                                  (uint)*pbVar6 * (int)sVar3 + iVar18) >> (uVar19 & 0x3f));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      iVar7 = 0;
      psVar11 = asStack_e0 + 2;
      uVar21 = uVar13;
      do {
        iVar9 = (int)psVar11[1] * (int)*(short *)(&lbl_821090EE + param_4 * 8) +
                (int)*psVar11 * (int)*(short *)(&lbl_821090EC + param_4 * 8) +
                (int)psVar11[-1] * (int)(short)(&lbl_821090EA)[param_4 * 4] +
                (int)psVar11[-2] * (int)(short)(&lbl_821090E8)[param_4 * 4] + iVar16 >> iVar17;
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        else if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        *(char *)(iVar7 + (int)param_3) = (char)iVar9;
        psVar11 = psVar11 + 1;
        iVar7 = iVar7 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      uVar12 = uVar12 - 1;
      lVar15 = lVar15 + param_2;
      param_3 = param_2 + param_3;
    } while (uVar12 != 0);
  }
  return;
}

