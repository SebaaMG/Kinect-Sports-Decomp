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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();
extern unsigned int lbl_8216079C;
extern unsigned int lbl_82160864;
extern unsigned int lbl_82160928;
extern unsigned int lbl_82160DC0;
extern unsigned int lbl_82160DD8;


void fn_82F01850(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  ulonglong uVar11;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  
  iVar25 = 2;
  lVar24 = 1;
  if ((*(int *)(param_1 + 0x7660) == 0) || (iVar6 = *(int *)(param_1 + 0x7610), iVar6 < 2)) {
    iVar6 = *(int *)(param_1 + 0x588);
    iVar26 = *(int *)(param_1 + 0x10) * 4;
    if (*(int *)(iVar26 + -0x7ce567c8) < iVar6) {
      iVar25 = 3;
      if (iVar6 < *(int *)(iVar26 + -0x7ce567b8)) {
        lVar24 = 2;
      }
      else if (iVar6 < *(int *)(iVar26 + -0x7ce567a8)) {
        lVar24 = 3;
      }
      else if (iVar6 < *(int *)(iVar26 + -0x7ce56798)) {
        lVar24 = 4;
      }
      else if (iVar6 < *(int *)(iVar26 + -0x7ce56788)) {
        lVar24 = 5;
      }
    }
  }
  else {
    iVar25 = 3;
    if (iVar6 == 2) {
      lVar24 = 2;
    }
    else if (iVar6 == 3) {
      lVar24 = 3;
    }
  }
  uVar22 = (longlong)param_3 * (longlong)param_4;
  iVar6 = fn_8265C940(uVar22,0x248c8000);
  if (iVar6 != 0) {
    iVar26 = param_3 * 3;
    fn_82F68CC0(iVar6,param_2,iVar26);
    param_4 = param_4 + -3;
    fn_82F68CC0(param_4 * param_3 + iVar6,param_4 * param_3 + param_2,iVar26);
    piVar7 = (int *)fn_8265C940(0xc4,0x248c8000);
    if (piVar7 != (int *)0x0) {
      piVar8 = (int *)fn_8265C940(0x80,0x248c8000);
      if (piVar8 == (int *)0x0) {
        fn_8265C990(iVar6,0x248c8000);
        fn_8265C990(piVar7,0x248c8000);
        return;
      }
      lVar27 = 0x31;
      iVar17 = 0;
      piVar15 = piVar7 + -1;
      do {
        iVar12 = iVar25 * 0x31 + iVar17;
        iVar17 = iVar17 + 1;
        piVar15 = piVar15 + 1;
        *piVar15 = *(int *)(&lbl_82160928 + iVar12 * 4);
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 0;
      uVar2 = *(uint *)(&lbl_82160DC0 + (int)(lVar24 << 2));
      uVar23 = (ulonglong)uVar2;
      if (-1 < (longlong)(uVar23 - 1)) {
        piVar15 = piVar8 + -1;
        uVar28 = uVar23;
        do {
          uVar11 = lVar24 * 0x20 + lVar27;
          lVar27 = lVar27 + 1;
          piVar15 = piVar15 + 1;
          *piVar15 = *(int *)(&lbl_82160DD8 + (int)((uVar11 & 0xffffffff) << 2));
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      if ((int)uVar2 < 0x20) {
        uVar23 = 0x20 - uVar23;
        piVar15 = piVar8 + (uVar2 - 1);
        uVar28 = uVar23 & 0xffffffff;
        while (uVar28 != 0) {
          piVar15 = piVar15 + 1;
          *piVar15 = 0;
          uVar23 = uVar23 - 1;
          uVar28 = uVar23;
        }
      }
      iVar25 = 3;
      if (3 < param_4) {
        iVar17 = param_3 + -3;
        puVar20 = (undefined1 *)(iVar26 + param_2);
        puVar21 = (undefined1 *)(iVar26 + iVar6 + 1);
        do {
          puVar21[-1] = *puVar20;
          *puVar21 = puVar21[param_2 - iVar6];
          puVar21[1] = puVar20[2];
          if (iVar17 < param_3) {
            iVar13 = param_3 - iVar17;
            iVar12 = iVar17;
            do {
              (puVar21 + -1)[iVar12] = puVar20[iVar12];
              iVar12 = iVar12 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          iVar12 = 3;
          if (3 < iVar17) {
            do {
              iVar13 = iVar12 + iVar26;
              iVar9 = 0;
              iVar14 = 0;
              uVar23 = (longlong)*piVar7 * (longlong)*piVar8;
              uVar10 = (uint)*(byte *)(iVar13 + param_2) * (int)uVar23;
              do {
                if ((0xbf < iVar14) || (iVar3 = *(int *)((int)piVar7 + iVar14 + 4), iVar3 < 1))
                break;
                uVar18 = *(uint *)(&lbl_8216079C + iVar14);
                uVar4 = *(uint *)(&lbl_82160864 + iVar14);
                bVar1 = *(byte *)((uVar18 + iVar25) * param_3 + uVar4 + iVar12 + param_2);
                uVar19 = (uint)*(byte *)(iVar13 + param_2) - (uint)bVar1;
                uVar5 = (int)uVar19 >> 0x1f;
                iVar16 = (uVar19 ^ uVar5) - uVar5;
                if (iVar16 < (int)uVar2) {
                  iVar9 = 0;
                  lVar24 = (longlong)piVar8[iVar16] * (longlong)iVar3;
                  uVar10 = (uint)bVar1 * (int)lVar24 + uVar10;
                  uVar23 = uVar23 + lVar24;
                }
                else {
                  iVar9 = iVar9 + 1;
                }
                iVar14 = iVar14 + 4;
              } while (iVar9 < (int)((((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) +
                                     ((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f))) * 4))
              ;
              if ((int)uVar23 < 1) {
                uVar18 = (uint)*(byte *)(iVar13 + param_2);
              }
              else {
                uVar18 = (int)uVar10 / (int)uVar23;
                trapWord(6,uVar23,0);
                trapWord(5,uVar23 & ~((((ulonglong)uVar10 & 0x7fffffff) << 1 |
                                      (ulonglong)(uVar10 >> 0x1f)) - 1),0xffff);
                if ((int)uVar18 < 0) {
                  uVar18 = 0;
                }
                else if (0xff < (int)uVar18) {
                  uVar18 = 0xff;
                }
              }
              iVar12 = iVar12 + 1;
              *(char *)(iVar13 + iVar6) = (char)uVar18;
            } while (iVar12 < iVar17);
          }
          iVar25 = iVar25 + 1;
          iVar26 = iVar26 + param_3;
          puVar21 = puVar21 + param_3;
          puVar20 = puVar20 + param_3;
        } while (iVar25 < param_4);
        uVar22 = uVar22 & 0xffffffff;
      }
      fn_82F68CC0(param_2,iVar6,uVar22);
      fn_8265C990(piVar7,0x248c8000);
      fn_8265C990(piVar8,0x248c8000);
    }
    fn_8265C990(iVar6,0x248c8000);
  }
  return;
}

