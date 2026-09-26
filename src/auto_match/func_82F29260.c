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


void fn_82F29260(longlong param_1,ulonglong param_2,int param_3,int param_4,uint param_5,
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
  undefined2 *puVar11;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar12;
  short *psVar15;
  short *psVar17;
  ulonglong uVar16;
  int iVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  int iVar21;
  short *psVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  uint in_stack_00000054;
  undefined1 auStack_4c0 [4];
  short asStack_4bc [606];
  
  param_5 = param_5 & 3;
  param_6 = param_6 & 3;
  iVar23 = param_5 * 8;
  iVar9 = param_6 * 8;
  psVar17 = (short *)(iVar23 + -0x7ce46618);
  psVar22 = (short *)(iVar9 + -0x7ce46618);
  iVar24 = (int)param_2;
  if (param_5 == 0) {
    if (param_6 == 0) {
      uVar16 = (ulonglong)in_stack_00000054;
      if (0 < (int)in_stack_00000054) {
        param_1 = param_1 - param_2;
        puVar13 = (undefined8 *)(param_3 - param_4);
        do {
          param_1 = param_1 + param_2;
          puVar13 = (undefined8 *)((int)puVar13 + param_4);
          *puVar13 = *(undefined8 *)param_1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    else {
      iVar23 = 4;
      if (param_6 != 2) {
        iVar23 = 6;
      }
      uVar16 = (ulonglong)in_stack_00000054;
      iVar8 = (1 << (iVar23 - 1U & 0x3f)) + param_8 + -1;
      if (0 < (int)in_stack_00000054) {
        iVar10 = iVar24 * 3;
        param_1 = param_1 - param_2;
        do {
          iVar18 = 0;
          iVar21 = (int)param_1;
          lVar25 = 2;
          do {
            iVar14 = iVar21 + iVar18;
            iVar5 = (int)((param_2 & 0x7fffffff) << 1);
            iVar14 = (int)((uint)*(byte *)(iVar5 + iVar14) * (int)*(short *)(iVar9 + -0x7ce46614) +
                           (uint)*(byte *)(iVar10 + iVar14) * (int)*(short *)(iVar9 + -0x7ce46612) +
                           (uint)*(byte *)(iVar14 + iVar24) * (int)*(short *)(iVar9 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*(byte *)(iVar21 + iVar18) + iVar8) >> iVar23;
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            else if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            iVar6 = iVar21 + iVar18 + 1;
            *(char *)(param_3 + iVar18) = (char)iVar14;
            iVar14 = (int)((uint)*(byte *)(iVar5 + iVar6) * (int)*(short *)(iVar9 + -0x7ce46614) +
                           (uint)*(byte *)(iVar10 + iVar6) * (int)*(short *)(iVar9 + -0x7ce46612) +
                           (uint)*(byte *)(iVar6 + iVar24) * (int)*(short *)(iVar9 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*(byte *)(iVar21 + iVar18 + 1) + iVar8) >> iVar23;
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            else if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            pbVar7 = (byte *)(iVar21 + iVar18 + 2);
            *(char *)(param_3 + iVar18 + 1) = (char)iVar14;
            iVar14 = (int)((uint)pbVar7[iVar5] * (int)*(short *)(iVar9 + -0x7ce46614) +
                           (uint)pbVar7[iVar10] * (int)*(short *)(iVar9 + -0x7ce46612) +
                           (uint)pbVar7[iVar24] * (int)*(short *)(iVar9 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*pbVar7 + iVar8) >> iVar23;
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            else if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            iVar6 = iVar21 + 3 + iVar18;
            *(char *)(param_3 + iVar18 + 2) = (char)iVar14;
            iVar14 = (int)((uint)*(byte *)(iVar5 + iVar6) * (int)*(short *)(iVar9 + -0x7ce46614) +
                           (uint)*(byte *)(iVar10 + iVar6) * (int)*(short *)(iVar9 + -0x7ce46612) +
                           (uint)*(byte *)(iVar6 + iVar24) * (int)*(short *)(iVar9 + -0x7ce46616) +
                           (int)*psVar22 * (uint)*(byte *)(iVar21 + 3 + iVar18) + iVar8) >> iVar23;
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            else if (0xff < iVar14) {
              iVar14 = 0xff;
            }
            *(char *)(param_3 + 3 + iVar18) = (char)iVar14;
            iVar18 = iVar18 + 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          uVar16 = uVar16 - 1;
          param_1 = param_1 + param_2;
          param_3 = param_3 + param_4;
        } while (uVar16 != 0);
      }
    }
  }
  else if (param_6 == 0) {
    iVar24 = 4;
    if (param_5 != 2) {
      iVar24 = 6;
    }
    uVar16 = (ulonglong)in_stack_00000054;
    param_8 = (1 << (iVar24 - 1U & 0x3f)) - param_8;
    if (0 < (int)in_stack_00000054) {
      do {
        iVar8 = 0;
        iVar9 = (int)param_1;
        lVar25 = 2;
        do {
          iVar10 = iVar9 + iVar8;
          iVar10 = (int)((uint)*(byte *)(iVar10 + 1) * (int)*(short *)(iVar23 + -0x7ce46614) +
                         (uint)*(byte *)(iVar9 + iVar8) * (int)*(short *)(iVar23 + -0x7ce46616) +
                         (uint)*(byte *)(iVar10 + 2) * (int)*(short *)(iVar23 + -0x7ce46612) +
                         (uint)*(byte *)(iVar10 + -1) * (int)*psVar17 + param_8) >> iVar24;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          iVar21 = iVar9 + iVar8;
          *(char *)(param_3 + iVar8) = (char)iVar10;
          iVar10 = (int)((uint)*(byte *)(iVar21 + 2) * (int)*(short *)(iVar23 + -0x7ce46614) +
                         (uint)*(byte *)(iVar21 + 1) * (int)*(short *)(iVar23 + -0x7ce46616) +
                         (uint)*(byte *)(iVar21 + 3) * (int)*(short *)(iVar23 + -0x7ce46612) +
                         (uint)*(byte *)(iVar9 + iVar8) * (int)*psVar17 + param_8) >> iVar24;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          iVar21 = iVar9 + iVar8;
          *(char *)(param_3 + iVar8 + 1) = (char)iVar10;
          iVar10 = (int)((uint)*(byte *)(iVar21 + 3) * (int)*(short *)(iVar23 + -0x7ce46614) +
                         (uint)*(byte *)(iVar21 + 2) * (int)*(short *)(iVar23 + -0x7ce46616) +
                         (uint)*(byte *)(iVar21 + 4) * (int)*(short *)(iVar23 + -0x7ce46612) +
                         (uint)*(byte *)(iVar21 + 1) * (int)*psVar17 + param_8) >> iVar24;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          iVar21 = iVar9 + 2 + iVar8;
          *(char *)(param_3 + iVar8 + 2) = (char)iVar10;
          iVar10 = (int)((uint)*(byte *)(iVar21 + 2) * (int)*(short *)(iVar23 + -0x7ce46614) +
                         (uint)*(byte *)(iVar21 + 1) * (int)*(short *)(iVar23 + -0x7ce46616) +
                         (uint)*(byte *)(iVar21 + 3) * (int)*(short *)(iVar23 + -0x7ce46612) +
                         (uint)*(byte *)(iVar9 + 2 + iVar8) * (int)*psVar17 + param_8) >> iVar24;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          *(char *)(param_3 + 3 + iVar8) = (char)iVar10;
          iVar8 = iVar8 + 4;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        uVar16 = uVar16 - 1;
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      } while (uVar16 != 0);
    }
  }
  else {
    puVar19 = auStack_4c0;
    iVar8 = 4;
    if (param_5 != 2) {
      iVar8 = 6;
    }
    iVar10 = 4;
    if (param_6 != 2) {
      iVar10 = 6;
    }
    uVar16 = (ulonglong)in_stack_00000054;
    iVar21 = 0x40 - param_8;
    if (0 < (int)in_stack_00000054) {
      sVar1 = *(short *)(iVar9 + -0x7ce46612);
      sVar2 = *(short *)(iVar9 + -0x7ce46614);
      sVar3 = *(short *)(iVar9 + -0x7ce46616);
      sVar4 = *psVar22;
      lVar25 = (param_1 - param_2) + -1;
      uVar20 = uVar16;
      do {
        puVar11 = (undefined2 *)(puVar19 + -2);
        lVar26 = 0xb;
        lVar12 = lVar25;
        do {
          pbVar7 = (byte *)lVar12;
          lVar12 = lVar12 + 1;
          puVar11 = puVar11 + 1;
          *puVar11 = (short)((int)((uint)pbVar7[iVar24] * (int)sVar3 +
                                   (uint)pbVar7[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                                   (uint)pbVar7[iVar24 + (int)((param_2 & 0xffffffff) << 1)] *
                                   (int)sVar1 + (uint)*pbVar7 * (int)sVar4 +
                                  (1 << ((iVar10 + iVar8) - 8U & 0x3f)) + param_8 + -1) >>
                            ((iVar10 + iVar8) - 7U & 0x3f));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        uVar20 = uVar20 - 1;
        lVar25 = lVar25 + param_2;
        puVar19 = puVar19 + 0x40;
      } while (uVar20 != 0);
      if (0 < (int)in_stack_00000054) {
        psVar22 = asStack_4bc;
        param_3 = param_3 + 2;
        do {
          iVar24 = 0;
          lVar25 = 2;
          psVar15 = psVar22;
          do {
            sVar1 = *psVar15;
            sVar2 = psVar15[1];
            sVar3 = psVar15[-1];
            iVar9 = (int)*psVar17 * (int)psVar15[-2] +
                    (int)*(short *)(iVar23 + -0x7ce46614) * (int)sVar1 +
                    (int)*(short *)(iVar23 + -0x7ce46612) * (int)sVar2 +
                    (int)*(short *)(iVar23 + -0x7ce46616) * (int)sVar3 + iVar21 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            sVar4 = psVar15[2];
            *(char *)(param_3 + iVar24 + -2) = (char)iVar9;
            iVar9 = (int)*(short *)(iVar23 + -0x7ce46612) * (int)sVar4 + (int)*psVar17 * (int)sVar3
                    + (int)*(short *)(iVar23 + -0x7ce46616) * (int)sVar1 +
                    (int)*(short *)(iVar23 + -0x7ce46614) * (int)sVar2 + iVar21 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_3 + -1 + iVar24) = (char)iVar9;
            sVar3 = psVar15[3];
            iVar9 = (int)*(short *)(iVar23 + -0x7ce46612) * (int)sVar3 +
                    (int)*(short *)(iVar23 + -0x7ce46616) * (int)sVar2 + (int)*psVar17 * (int)sVar1
                    + (int)*(short *)(iVar23 + -0x7ce46614) * (int)sVar4 + iVar21 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_3 + iVar24) = (char)iVar9;
            iVar9 = (int)*(short *)(iVar23 + -0x7ce46612) * (int)psVar15[4] +
                    (int)*(short *)(iVar23 + -0x7ce46616) * (int)sVar4 + (int)*psVar17 * (int)sVar2
                    + (int)*(short *)(iVar23 + -0x7ce46614) * (int)sVar3 + iVar21 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_3 + 1 + iVar24) = (char)iVar9;
            psVar15 = psVar15 + 4;
            iVar24 = iVar24 + 4;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          uVar16 = uVar16 - 1;
          psVar22 = psVar22 + 0x20;
          param_3 = param_3 + param_4;
        } while (uVar16 != 0);
      }
    }
  }
  return;
}

