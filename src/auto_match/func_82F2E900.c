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


void fn_82F2E900(int param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  short *psVar10;
  int iVar11;
  uint uVar13;
  longlong lVar12;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  
  iVar6 = *(int *)(param_1 + 0x74);
  uVar2 = *(uint *)(iVar6 + 8);
  if (((uVar2 != 0) && (*(int *)(param_1 + 100) != 0)) &&
     (iVar11 = *(int *)(param_1 + 0x60), iVar11 != 0)) {
    uVar13 = *(uint *)(param_1 + 100);
    uVar20 = (uVar2 - 1) * uVar13;
    trapWord(6,(ulonglong)uVar2,0);
    iVar3 = (int)(iVar11 * 0x18 + 0x1fU & 0xffffffe0) >> 3;
    iVar7 = (int)(((ulonglong)uVar2 & 0xffffff) << 8) / (int)uVar13;
    uVar17 = (ulonglong)iVar7;
    trapWord(6,(ulonglong)uVar13,0);
    trapWord(5,(ulonglong)uVar13 &
               ~((((ulonglong)uVar2 & 0x7fffff) << 9 | ((ulonglong)uVar2 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(5,(ulonglong)uVar2 &
               ~((((ulonglong)uVar20 & 0x7fffffff) << 1 | (ulonglong)(uVar20 >> 0x1f)) - 1),0xffff);
    lVar18 = (longlong)((int)uVar20 / (int)uVar2);
    if ((int)param_3 < (int)uVar20 / (int)uVar2) {
      lVar18 = param_3;
    }
    if (0 < iVar7) {
      if (*(int *)(iVar6 + 0x10) == 0) {
        iVar19 = 10;
      }
      else if (((*(int *)(iVar6 + 0x28) != 0x7c00) || (*(int *)(iVar6 + 0x2c) != 0x3e0)) ||
              (iVar19 = 10, *(int *)(iVar6 + 0x30) != 0x1f)) {
        iVar19 = 0xb;
      }
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar8 = 0;
      }
      else {
        uVar13 = iVar7 - 0x100;
        lVar8 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0);
      }
      iVar5 = (int)param_2;
      lVar8 = (longlong)iVar7 * (longlong)iVar5 + lVar8;
      psVar10 = (short *)(((int)((uint)*(ushort *)(iVar6 + 0xe) * iVar11 + 0x1f & 0xffffffe0) >> 3)
                          * iVar5 + *(int *)(param_1 + 0x7c));
      lVar21 = 0;
      if (lVar8 < 0) {
        uVar9 = uVar17 - lVar8;
        trapWord(6,uVar17,0);
        iVar6 = (int)uVar9 / iVar7;
        lVar21 = (longlong)iVar6;
        trapWord(5,uVar17 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar5 < (int)(lVar21 + param_2)) {
          lVar12 = (lVar21 + param_2) - param_2;
          do {
            pbVar14 = *(byte **)(param_1 + 0x84);
            iVar5 = 0;
            if (0 < iVar11) {
              do {
                bVar1 = *pbVar14;
                iVar5 = iVar5 + 1;
                pbVar4 = pbVar14 + 1;
                pbVar15 = pbVar14 + 2;
                pbVar14 = pbVar14 + 3;
                *psVar10 = ((ushort)*pbVar15 << iVar19) + (ushort)*pbVar4 * 0x20 + (ushort)bVar1;
                psVar10 = psVar10 + 1;
                iVar11 = *(int *)(param_1 + 0x60);
              } while (iVar5 < iVar11);
            }
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        lVar8 = (longlong)iVar6 * (longlong)iVar7 + lVar8;
      }
      if ((int)(lVar21 + param_2) < (int)lVar18) {
        lVar21 = lVar18 - (lVar21 + param_2);
        do {
          uVar13 = (uint)lVar8 & 0xff;
          iVar7 = 0;
          iVar6 = 0x100 - uVar13;
          pbVar14 = (byte *)(((int)(uint)lVar8 >> 8) * iVar3 + *(int *)(param_1 + 0x84));
          if (0 < iVar11) {
            do {
              pbVar4 = pbVar14 + iVar3;
              iVar7 = iVar7 + 1;
              bVar1 = *pbVar14;
              pbVar15 = pbVar14 + 1;
              pbVar16 = pbVar14 + 2;
              pbVar14 = pbVar14 + 3;
              *psVar10 = (short)((pbVar16[iVar3] * uVar13 + (uint)*pbVar16 * iVar6 >> 8) << iVar19)
                         + ((ushort)(((longlong)(int)(uint)pbVar15[iVar3] * (longlong)(int)uVar13 +
                                      (longlong)(int)(uint)*pbVar15 * (longlong)iVar6 & 0xffffffffU)
                                    >> 3) & 0xffe0) +
                         (short)((ulonglong)
                                 ((longlong)(int)(uint)*pbVar4 * (longlong)(int)uVar13 +
                                 (longlong)(int)(uint)bVar1 * (longlong)iVar6) >> 8);
              psVar10 = psVar10 + 1;
              iVar11 = *(int *)(param_1 + 0x60);
            } while (iVar7 < iVar11);
          }
          lVar8 = lVar8 + uVar17;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if ((int)lVar18 < (int)param_3) {
        param_3 = param_3 - lVar18;
        psVar10 = psVar10 + -1;
        do {
          iVar6 = (int)(uint)lVar8 >> 8;
          pbVar14 = (byte *)(iVar6 * iVar3 + *(int *)(param_1 + 0x84));
          if (iVar6 < (int)(uVar2 - 1)) {
            uVar13 = (uint)lVar8 & 0xff;
            iVar7 = 0;
            iVar6 = 0x100 - uVar13;
            if (0 < iVar11) {
              do {
                pbVar4 = pbVar14 + iVar3;
                iVar7 = iVar7 + 1;
                bVar1 = *pbVar14;
                pbVar15 = pbVar14 + 1;
                pbVar16 = pbVar14 + 2;
                pbVar14 = pbVar14 + 3;
                psVar10[1] = (short)((pbVar16[iVar3] * uVar13 + (uint)*pbVar16 * iVar6 >> 8) <<
                                    iVar19) +
                             ((ushort)(((longlong)(int)(uint)pbVar15[iVar3] * (longlong)(int)uVar13
                                        + (longlong)(int)(uint)*pbVar15 * (longlong)iVar6 &
                                       0xffffffffU) >> 3) & 0xffe0) +
                             (short)((ulonglong)
                                     ((longlong)(int)(uint)*pbVar4 * (longlong)(int)uVar13 +
                                     (longlong)(int)(uint)bVar1 * (longlong)iVar6) >> 8);
                psVar10 = psVar10 + 1;
                iVar11 = *(int *)(param_1 + 0x60);
              } while (iVar7 < iVar11);
            }
          }
          else {
            iVar6 = 0;
            if (0 < iVar11) {
              do {
                bVar1 = *pbVar14;
                iVar6 = iVar6 + 1;
                pbVar4 = pbVar14 + 1;
                pbVar15 = pbVar14 + 2;
                pbVar14 = pbVar14 + 3;
                psVar10 = psVar10 + 1;
                *psVar10 = ((ushort)*pbVar15 << iVar19) + (ushort)*pbVar4 * 0x20 + (ushort)bVar1;
                iVar11 = *(int *)(param_1 + 0x60);
              } while (iVar6 < iVar11);
            }
          }
          lVar8 = lVar8 + uVar17;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

