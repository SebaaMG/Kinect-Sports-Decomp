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
extern unsigned int *auStack_4c0;
extern int fn_82F68CC0();


void fn_82F28A30(longlong param_1,ulonglong param_2,int param_3,int param_4,uint param_5,
                  uint param_6,undefined8 param_7,int param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar15;
  longlong lVar14;
  short *psVar16;
  short *psVar17;
  int iVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  int iVar21;
  short *psVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint in_stack_00000054;
  undefined1 auStack_4c0 [4];
  short asStack_4bc [606];
  
  param_5 = param_5 & 3;
  param_6 = param_6 & 3;
  iVar8 = param_5 * 8;
  iVar11 = param_6 * 8;
  psVar17 = (short *)(iVar8 + -0x7ce46618);
  psVar22 = (short *)(iVar11 + -0x7ce46618);
  iVar10 = (int)param_2;
  if (param_5 == 0) {
    if (param_6 == 0) {
      uVar23 = (ulonglong)in_stack_00000054;
      if (0 < (int)in_stack_00000054) {
        do {
          fn_82F68CC0(param_3,param_1,0x10);
          uVar23 = uVar23 - 1;
          param_3 = param_3 + param_4;
          param_1 = param_1 + param_2;
        } while (uVar23 != 0);
      }
    }
    else {
      iVar8 = 4;
      if (param_6 != 2) {
        iVar8 = 6;
      }
      uVar23 = (ulonglong)in_stack_00000054;
      iVar9 = (1 << (iVar8 - 1U & 0x3f)) + param_8 + -1;
      if (0 < (int)in_stack_00000054) {
        iVar12 = iVar10 * 3;
        param_1 = param_1 - param_2;
        do {
          iVar18 = 0;
          iVar21 = (int)param_1;
          lVar24 = 4;
          do {
            iVar15 = iVar21 + iVar18;
            iVar5 = (int)((param_2 & 0x7fffffff) << 1);
            iVar15 = (int)((uint)*(byte *)(iVar5 + iVar15) * (int)*(short *)(iVar11 + -0x7ce46614) +
                           (uint)*(byte *)(iVar12 + iVar15) * (int)*(short *)(iVar11 + -0x7ce46612)
                           + (uint)*(byte *)(iVar15 + iVar10) *
                             (int)*(short *)(iVar11 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*(byte *)(iVar21 + iVar18) + iVar9) >> iVar8;
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            else if (0xff < iVar15) {
              iVar15 = 0xff;
            }
            iVar6 = iVar21 + iVar18 + 1;
            *(char *)(param_3 + iVar18) = (char)iVar15;
            iVar15 = (int)((uint)*(byte *)(iVar5 + iVar6) * (int)*(short *)(iVar11 + -0x7ce46614) +
                           (uint)*(byte *)(iVar12 + iVar6) * (int)*(short *)(iVar11 + -0x7ce46612) +
                           (uint)*(byte *)(iVar6 + iVar10) * (int)*(short *)(iVar11 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*(byte *)(iVar21 + iVar18 + 1) + iVar9) >> iVar8;
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            else if (0xff < iVar15) {
              iVar15 = 0xff;
            }
            pbVar7 = (byte *)(iVar21 + iVar18 + 2);
            *(char *)(param_3 + iVar18 + 1) = (char)iVar15;
            iVar15 = (int)((uint)pbVar7[iVar5] * (int)*(short *)(iVar11 + -0x7ce46614) +
                           (uint)pbVar7[iVar12] * (int)*(short *)(iVar11 + -0x7ce46612) +
                           (uint)pbVar7[iVar10] * (int)*(short *)(iVar11 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*pbVar7 + iVar9) >> iVar8;
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            else if (0xff < iVar15) {
              iVar15 = 0xff;
            }
            iVar6 = iVar21 + 3 + iVar18;
            *(char *)(param_3 + iVar18 + 2) = (char)iVar15;
            iVar15 = (int)((uint)*(byte *)(iVar5 + iVar6) * (int)*(short *)(iVar11 + -0x7ce46614) +
                           (uint)*(byte *)(iVar12 + iVar6) * (int)*(short *)(iVar11 + -0x7ce46612) +
                           (uint)*(byte *)(iVar6 + iVar10) * (int)*(short *)(iVar11 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*(byte *)(iVar21 + 3 + iVar18) + iVar9) >> iVar8;
            if (iVar15 < 0) {
              iVar15 = 0;
            }
            else if (0xff < iVar15) {
              iVar15 = 0xff;
            }
            *(char *)(param_3 + 3 + iVar18) = (char)iVar15;
            iVar18 = iVar18 + 4;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          uVar23 = uVar23 - 1;
          param_1 = param_1 + param_2;
          param_3 = param_3 + param_4;
        } while (uVar23 != 0);
      }
    }
  }
  else if (param_6 == 0) {
    iVar10 = 4;
    if (param_5 != 2) {
      iVar10 = 6;
    }
    uVar23 = (ulonglong)in_stack_00000054;
    param_8 = (1 << (iVar10 - 1U & 0x3f)) - param_8;
    if (0 < (int)in_stack_00000054) {
      do {
        iVar9 = 0;
        iVar11 = (int)param_1;
        lVar24 = 4;
        do {
          iVar12 = iVar11 + iVar9;
          iVar12 = (int)((uint)*(byte *)(iVar12 + 1) * (int)*(short *)(iVar8 + -0x7ce46614) +
                         (uint)*(byte *)(iVar11 + iVar9) * (int)*(short *)(iVar8 + -0x7ce46616) +
                         (uint)*(byte *)(iVar12 + 2) * (int)*(short *)(iVar8 + -0x7ce46612) +
                         (uint)*(byte *)(iVar12 + -1) * (int)*psVar17 + param_8) >> iVar10;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          iVar21 = iVar11 + iVar9;
          *(char *)(param_3 + iVar9) = (char)iVar12;
          iVar12 = (int)((uint)*(byte *)(iVar21 + 2) * (int)*(short *)(iVar8 + -0x7ce46614) +
                         (uint)*(byte *)(iVar21 + 1) * (int)*(short *)(iVar8 + -0x7ce46616) +
                         (uint)*(byte *)(iVar21 + 3) * (int)*(short *)(iVar8 + -0x7ce46612) +
                         (uint)*(byte *)(iVar11 + iVar9) * (int)*psVar17 + param_8) >> iVar10;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          iVar21 = iVar11 + iVar9;
          *(char *)(param_3 + iVar9 + 1) = (char)iVar12;
          iVar12 = (int)((uint)*(byte *)(iVar21 + 3) * (int)*(short *)(iVar8 + -0x7ce46614) +
                         (uint)*(byte *)(iVar21 + 2) * (int)*(short *)(iVar8 + -0x7ce46616) +
                         (uint)*(byte *)(iVar21 + 4) * (int)*(short *)(iVar8 + -0x7ce46612) +
                         (uint)*(byte *)(iVar21 + 1) * (int)*psVar17 + param_8) >> iVar10;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          iVar21 = iVar11 + 2 + iVar9;
          *(char *)(param_3 + iVar9 + 2) = (char)iVar12;
          iVar12 = (int)((uint)*(byte *)(iVar21 + 2) * (int)*(short *)(iVar8 + -0x7ce46614) +
                         (uint)*(byte *)(iVar21 + 1) * (int)*(short *)(iVar8 + -0x7ce46616) +
                         (uint)*(byte *)(iVar21 + 3) * (int)*(short *)(iVar8 + -0x7ce46612) +
                         (uint)*(byte *)(iVar11 + 2 + iVar9) * (int)*psVar17 + param_8) >> iVar10;
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          else if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          *(char *)(param_3 + 3 + iVar9) = (char)iVar12;
          iVar9 = iVar9 + 4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        uVar23 = uVar23 - 1;
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      } while (uVar23 != 0);
    }
  }
  else {
    puVar19 = auStack_4c0;
    iVar9 = 4;
    if (param_5 != 2) {
      iVar9 = 6;
    }
    iVar12 = 4;
    if (param_6 != 2) {
      iVar12 = 6;
    }
    uVar23 = (ulonglong)in_stack_00000054;
    iVar21 = 0x40 - param_8;
    if (0 < (int)in_stack_00000054) {
      sVar1 = *(short *)(iVar11 + -0x7ce46612);
      sVar2 = *(short *)(iVar11 + -0x7ce46614);
      sVar3 = *(short *)(iVar11 + -0x7ce46616);
      sVar4 = *psVar22;
      lVar24 = (param_1 - param_2) + -1;
      uVar20 = uVar23;
      do {
        puVar13 = (undefined2 *)(puVar19 + -2);
        lVar25 = 0x13;
        lVar14 = lVar24;
        do {
          pbVar7 = (byte *)lVar14;
          lVar14 = lVar14 + 1;
          puVar13 = puVar13 + 1;
          *puVar13 = (short)((int)((uint)pbVar7[iVar10] * (int)sVar3 +
                                   (uint)pbVar7[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                                   (uint)pbVar7[iVar10 + (int)((param_2 & 0xffffffff) << 1)] *
                                   (int)sVar1 + (uint)*pbVar7 * (int)sVar4 +
                                  (1 << ((iVar12 + iVar9) - 8U & 0x3f)) + param_8 + -1) >>
                            ((iVar12 + iVar9) - 7U & 0x3f));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        uVar20 = uVar20 - 1;
        lVar24 = lVar24 + param_2;
        puVar19 = puVar19 + 0x40;
      } while (uVar20 != 0);
      if (0 < (int)in_stack_00000054) {
        psVar22 = asStack_4bc;
        param_3 = param_3 + 2;
        do {
          iVar10 = 0;
          lVar24 = 4;
          psVar16 = psVar22;
          do {
            sVar1 = *psVar16;
            sVar2 = psVar16[1];
            sVar3 = psVar16[-1];
            iVar11 = (int)*psVar17 * (int)psVar16[-2] +
                     (int)*(short *)(iVar8 + -0x7ce46614) * (int)sVar1 +
                     (int)*(short *)(iVar8 + -0x7ce46612) * (int)sVar2 +
                     (int)*(short *)(iVar8 + -0x7ce46616) * (int)sVar3 + iVar21 >> 7;
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            else if (0xff < iVar11) {
              iVar11 = 0xff;
            }
            sVar4 = psVar16[2];
            *(char *)(param_3 + iVar10 + -2) = (char)iVar11;
            iVar11 = (int)*(short *)(iVar8 + -0x7ce46612) * (int)sVar4 + (int)*psVar17 * (int)sVar3
                     + (int)*(short *)(iVar8 + -0x7ce46616) * (int)sVar1 +
                     (int)*(short *)(iVar8 + -0x7ce46614) * (int)sVar2 + iVar21 >> 7;
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            else if (0xff < iVar11) {
              iVar11 = 0xff;
            }
            *(char *)(param_3 + -1 + iVar10) = (char)iVar11;
            sVar3 = psVar16[3];
            iVar11 = (int)*(short *)(iVar8 + -0x7ce46612) * (int)sVar3 +
                     (int)*(short *)(iVar8 + -0x7ce46616) * (int)sVar2 + (int)*psVar17 * (int)sVar1
                     + (int)*(short *)(iVar8 + -0x7ce46614) * (int)sVar4 + iVar21 >> 7;
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            else if (0xff < iVar11) {
              iVar11 = 0xff;
            }
            *(char *)(param_3 + iVar10) = (char)iVar11;
            iVar11 = (int)*(short *)(iVar8 + -0x7ce46612) * (int)psVar16[4] +
                     (int)*(short *)(iVar8 + -0x7ce46616) * (int)sVar4 + (int)*psVar17 * (int)sVar2
                     + (int)*(short *)(iVar8 + -0x7ce46614) * (int)sVar3 + iVar21 >> 7;
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            else if (0xff < iVar11) {
              iVar11 = 0xff;
            }
            *(char *)(param_3 + 1 + iVar10) = (char)iVar11;
            psVar16 = psVar16 + 4;
            iVar10 = iVar10 + 4;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          uVar23 = uVar23 - 1;
          psVar22 = psVar22 + 0x20;
          param_3 = param_3 + param_4;
        } while (uVar23 != 0);
      }
    }
  }
  return;
}

