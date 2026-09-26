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


void fn_82CDA168(undefined8 param_1,longlong param_2,ulonglong param_3,int param_4,int param_5,
                  uint param_6,uint param_7)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  short *psVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar8;
  short *psVar12;
  undefined4 *puVar13;
  short *psVar15;
  ulonglong uVar14;
  short *psVar16;
  short *psVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  int in_stack_00000054;
  uint in_stack_0000005c;
  short asStack_4c0 [608];
  
  param_6 = param_6 & 3;
  param_7 = param_7 & 3;
  iVar22 = param_6 * 8;
  iVar10 = param_7 * 8;
  psVar12 = &lbl_821090E8 + param_6 * 4;
  psVar15 = &lbl_821090E8 + param_7 * 4;
  iVar6 = (int)param_3;
  if (param_6 == 0) {
    if (param_7 == 0) {
      uVar14 = (ulonglong)in_stack_0000005c;
      if (0 < (int)in_stack_0000005c) {
        param_2 = param_2 - param_3;
        puVar13 = (undefined4 *)(param_4 - param_5);
        do {
          param_2 = param_2 + param_3;
          puVar13 = (undefined4 *)((int)puVar13 + param_5);
          *puVar13 = *(undefined4 *)param_2;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else {
      iVar22 = 4;
      if (param_7 != 2) {
        iVar22 = 6;
      }
      uVar14 = (ulonglong)in_stack_0000005c;
      iVar21 = (1 << (iVar22 - 1U & 0x3f)) + in_stack_00000054 + -1;
      if (0 < (int)in_stack_0000005c) {
        iVar11 = -1 - iVar6;
        iVar19 = 1 - iVar6;
        iVar4 = iVar6 * 3;
        puVar5 = (undefined1 *)(param_4 + 2);
        lVar20 = (param_2 - param_3) + 2;
        param_2 = param_2 + 2;
        iVar6 = -2 - iVar6;
        do {
          pbVar3 = (byte *)param_2;
          iVar1 = (int)((param_3 & 0x7fffffff) << 1);
          iVar9 = (int)((uint)pbVar3[iVar1 + iVar6] * (int)*(short *)(&lbl_821090EC + iVar10) +
                        (uint)pbVar3[iVar4 + iVar6] * (int)*(short *)(&lbl_821090EE + iVar10) +
                        (uint)pbVar3[-2] * (int)(short)(&lbl_821090EA)[param_7 * 4] +
                        (int)*psVar15 * (uint)pbVar3[iVar6] + iVar21) >> iVar22;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (0xff < iVar9) {
            iVar9 = 0xff;
          }
          puVar5[-2] = (char)iVar9;
          iVar9 = (int)((uint)pbVar3[iVar1 + iVar11] * (int)*(short *)(&lbl_821090EC + iVar10) +
                        (uint)pbVar3[iVar4 + iVar11] * (int)*(short *)(&lbl_821090EE + iVar10) +
                        (uint)pbVar3[-1] * (int)(short)(&lbl_821090EA)[param_7 * 4] +
                        (int)*psVar15 * (uint)pbVar3[iVar11] + iVar21) >> iVar22;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (0xff < iVar9) {
            iVar9 = 0xff;
          }
          puVar5[-1] = (char)iVar9;
          pbVar2 = (byte *)lVar20;
          iVar9 = (int)((uint)pbVar2[iVar1] * (int)*(short *)(&lbl_821090EC + iVar10) +
                        (uint)pbVar2[iVar4] * (int)*(short *)(&lbl_821090EE + iVar10) +
                        (int)*psVar15 * (uint)*pbVar2 +
                        (int)(short)(&lbl_821090EA)[param_7 * 4] * (uint)*pbVar3 + iVar21) >> iVar22
          ;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (0xff < iVar9) {
            iVar9 = 0xff;
          }
          *puVar5 = (char)iVar9;
          iVar9 = (int)((uint)pbVar3[iVar1 + iVar19] * (int)*(short *)(&lbl_821090EC + iVar10) +
                        (uint)pbVar3[iVar4 + iVar19] * (int)*(short *)(&lbl_821090EE + iVar10) +
                        (uint)pbVar3[1] * (int)(short)(&lbl_821090EA)[param_7 * 4] +
                        (uint)pbVar3[iVar19] * (int)*psVar15 + iVar21) >> iVar22;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (0xff < iVar9) {
            iVar9 = 0xff;
          }
          puVar5[1] = (char)iVar9;
          lVar20 = lVar20 + param_3;
          param_2 = param_2 + param_3;
          puVar5 = puVar5 + param_5;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
  }
  else if (param_7 == 0) {
    iVar6 = 4;
    if (param_6 != 2) {
      iVar6 = 6;
    }
    uVar14 = (ulonglong)in_stack_0000005c;
    in_stack_00000054 = (1 << (iVar6 - 1U & 0x3f)) - in_stack_00000054;
    if (0 < (int)in_stack_0000005c) {
      puVar5 = (undefined1 *)(param_4 + 2);
      param_2 = param_2 + 1;
      do {
        pbVar3 = (byte *)param_2;
        iVar10 = (int)((uint)pbVar3[-1] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                       (uint)pbVar3[-2] * (int)*psVar12 +
                       (uint)pbVar3[1] * (int)*(short *)(&lbl_821090EE + iVar22) +
                       (uint)*pbVar3 * (int)*(short *)(&lbl_821090EC + iVar22) + in_stack_00000054)
                 >> iVar6;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        puVar5[-2] = (char)iVar10;
        iVar10 = (int)((uint)pbVar3[1] * (int)*(short *)(&lbl_821090EC + iVar22) +
                       (uint)pbVar3[-1] * (int)*psVar12 +
                       (uint)pbVar3[2] * (int)*(short *)(&lbl_821090EE + iVar22) +
                       (uint)*pbVar3 * (int)(short)(&lbl_821090EA)[param_6 * 4] + in_stack_00000054)
                 >> iVar6;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        puVar5[-1] = (char)iVar10;
        iVar10 = (int)((uint)pbVar3[2] * (int)*(short *)(&lbl_821090EC + iVar22) +
                       (uint)pbVar3[1] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                       (uint)pbVar3[3] * (int)*(short *)(&lbl_821090EE + iVar22) +
                       (uint)*pbVar3 * (int)*psVar12 + in_stack_00000054) >> iVar6;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        *puVar5 = (char)iVar10;
        iVar10 = (int)((uint)pbVar3[3] * (int)*(short *)(&lbl_821090EC + iVar22) +
                       (uint)pbVar3[2] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                       (uint)pbVar3[1] * (int)*psVar12 +
                       (uint)pbVar3[4] * (int)*(short *)(&lbl_821090EE + iVar22) + in_stack_00000054
                      ) >> iVar6;
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        else if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        puVar5[1] = (char)iVar10;
        param_2 = param_2 + param_3;
        puVar5 = puVar5 + param_5;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  else {
    psVar16 = asStack_4c0;
    iVar21 = 4;
    if (param_6 != 2) {
      iVar21 = 6;
    }
    iVar11 = 4;
    if (param_7 != 2) {
      iVar11 = 6;
    }
    uVar14 = (ulonglong)in_stack_0000005c;
    iVar19 = 0x40 - in_stack_00000054;
    if (0 < (int)in_stack_0000005c) {
      lVar20 = (param_2 - param_3) + -1;
      uVar18 = uVar14;
      psVar17 = psVar16;
      do {
        psVar7 = psVar17 + -1;
        lVar23 = 7;
        lVar8 = lVar20;
        do {
          pbVar3 = (byte *)lVar8;
          lVar8 = lVar8 + 1;
          psVar7 = psVar7 + 1;
          *psVar7 = (short)((int)((uint)pbVar3[iVar6] * (int)(short)(&lbl_821090EA)[param_7 * 4] +
                                  (uint)pbVar3[(int)((param_3 & 0xffffffff) << 1)] *
                                  (int)*(short *)(&lbl_821090EC + iVar10) +
                                  (uint)pbVar3[iVar6 + (int)((param_3 & 0xffffffff) << 1)] *
                                  (int)*(short *)(&lbl_821090EE + iVar10) +
                                  (int)*psVar15 * (uint)*pbVar3 +
                                 (1 << ((iVar11 + iVar21) - 8U & 0x3f)) + in_stack_00000054 + -1) >>
                           ((iVar11 + iVar21) - 7U & 0x3f));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        uVar18 = uVar18 - 1;
        lVar20 = lVar20 + param_3;
        psVar17 = psVar17 + 0x20;
      } while (uVar18 != 0);
    }
    if (0 < (int)in_stack_0000005c) {
      puVar5 = (undefined1 *)(param_4 + 2);
      do {
        iVar6 = (int)psVar16[3] * (int)*(short *)(&lbl_821090EE + iVar22) +
                (int)psVar16[1] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                (int)*(short *)(&lbl_821090EC + iVar22) * (int)psVar16[2] +
                (int)*psVar16 * (int)*psVar12 + iVar19 >> 7;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        puVar5[-2] = (char)iVar6;
        iVar6 = (int)psVar16[4] * (int)*(short *)(&lbl_821090EE + iVar22) +
                (int)psVar16[2] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                (int)*(short *)(&lbl_821090EC + iVar22) * (int)psVar16[3] +
                (int)psVar16[1] * (int)*psVar12 + iVar19 >> 7;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        puVar5[-1] = (char)iVar6;
        iVar6 = (int)psVar16[5] * (int)*(short *)(&lbl_821090EE + iVar22) +
                (int)psVar16[3] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                (int)*(short *)(&lbl_821090EC + iVar22) * (int)psVar16[4] +
                (int)psVar16[2] * (int)*psVar12 + iVar19 >> 7;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        *puVar5 = (char)iVar6;
        iVar6 = (int)psVar16[6] * (int)*(short *)(&lbl_821090EE + iVar22) +
                (int)psVar16[4] * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                (int)*(short *)(&lbl_821090EC + iVar22) * (int)psVar16[5] +
                (int)psVar16[3] * (int)*psVar12 + iVar19 >> 7;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        puVar5[1] = (char)iVar6;
        psVar16 = psVar16 + 0x20;
        puVar5 = puVar5 + param_5;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  return;
}

