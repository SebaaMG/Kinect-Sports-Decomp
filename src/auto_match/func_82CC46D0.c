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
extern unsigned int uStack_d2;


void fn_82CC46D0(longlong param_1,ulonglong param_2,int param_3,int param_4,int param_5,
                  uint param_6,int param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  short *psVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined2 uStack_d2;
  short asStack_d0 [104];
  
  param_6 = param_6 & 0xff;
  uVar5 = 1 << (param_7 + 3U & 0x3f);
  uVar11 = (ulonglong)uVar5;
  if (((param_7 != 0) && (param_7 != 1)) && (param_7 != 2)) {
    return;
  }
  if (param_4 == 0) {
    uVar18 = 4;
    if (param_5 != 2) {
      uVar18 = 6;
    }
    iVar16 = 0;
    iVar15 = 0;
    lVar13 = uVar11 + 1;
    asStack_d0[uVar5 + 2] = 0;
    asStack_d0[uVar5 + 1] = 0;
  }
  else {
    if (param_5 == 0) {
      uVar18 = 0;
      iVar16 = 4;
      if (param_4 != 2) {
        iVar16 = 6;
      }
      iVar17 = 0;
      iVar15 = (1 << (iVar16 - 1U & 0x3f)) - param_6;
      lVar13 = uVar11 + 3;
      goto LAB_82cc47d0;
    }
    iVar15 = 4;
    if (param_4 != 2) {
      iVar15 = 6;
    }
    iVar17 = 4;
    if (param_5 != 2) {
      iVar17 = 6;
    }
    iVar16 = 7;
    uVar18 = (iVar17 + iVar15) - 7;
    iVar15 = 0x40 - param_6;
    lVar13 = uVar11 + 3;
  }
  iVar17 = (1 << (uVar18 - 1 & 0x3f)) + param_6 + -1;
LAB_82cc47d0:
  if (0 < (int)uVar5) {
    param_3 = param_3 - (int)(asStack_d0 + 2);
    lVar14 = (param_1 - param_2) + -1;
    uVar12 = uVar11;
    do {
      if (0 < (int)lVar13) {
        sVar1 = *(short *)(&lbl_821090EE + param_5 * 8);
        sVar2 = *(short *)(&lbl_821090EC + param_5 * 8);
        sVar3 = (&lbl_821090EA)[param_5 * 4];
        sVar4 = (&lbl_821090E8)[param_5 * 4];
        puVar7 = &uStack_d2;
        lVar9 = lVar14;
        lVar19 = lVar13;
        do {
          pbVar6 = (byte *)lVar9;
          lVar9 = lVar9 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = (short)((int)((uint)pbVar6[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                                  (uint)pbVar6[(int)param_2 + (int)((param_2 & 0xffffffff) << 1)] *
                                  (int)sVar1 + (uint)pbVar6[(int)param_2] * (int)sVar3 +
                                  (uint)*pbVar6 * (int)sVar4 + iVar17) >> (uVar18 & 0x3f));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      psVar10 = asStack_d0 + 2;
      uVar20 = uVar11;
      do {
        iVar8 = (int)psVar10[-2] * (int)(short)(&lbl_821090E8)[param_4 * 4] +
                (int)psVar10[-1] * (int)(short)(&lbl_821090EA)[param_4 * 4] +
                (int)psVar10[1] * (int)*(short *)(&lbl_821090EE + param_4 * 8) +
                (int)*(short *)(&lbl_821090EC + param_4 * 8) * (int)*psVar10 + iVar15 >> iVar16;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else if (0xff < iVar8) {
          iVar8 = 0xff;
        }
        *(ushort *)(param_3 + (int)psVar10) = (ushort)iVar8 & 0xff;
        psVar10 = psVar10 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      uVar12 = uVar12 - 1;
      lVar14 = lVar14 + param_2;
      param_3 = param_3 + 0x30;
    } while (uVar12 != 0);
  }
  return;
}

