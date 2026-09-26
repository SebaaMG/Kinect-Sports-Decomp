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


void fn_82F2D370(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
  if ((((uVar3 != 0) && (uVar11 = *(uint *)(param_1 + 100), uVar11 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 4) != 0)) && (*(int *)(param_1 + 0x60) != 0)) {
    uVar17 = (uVar3 - 1) * uVar11;
    trapWord(5,(ulonglong)uVar11 &
               ~((((ulonglong)uVar3 & 0x7fffff) << 9 | ((ulonglong)uVar3 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(6,(ulonglong)uVar3,0);
    iVar18 = (int)(((ulonglong)uVar3 & 0xffffff) << 8) / (int)uVar11;
    uVar15 = (ulonglong)iVar18;
    trapWord(6,(ulonglong)uVar11,0);
    trapWord(5,(ulonglong)uVar3 &
               ~((((ulonglong)uVar17 & 0x7fffffff) << 1 | (ulonglong)(uVar17 >> 0x1f)) - 1),0xffff);
    iVar10 = *(int *)(param_1 + 0x60) * 2;
    lVar16 = (longlong)((int)uVar17 / (int)uVar3);
    if ((int)param_3 < (int)uVar17 / (int)uVar3) {
      lVar16 = param_3;
    }
    if (0 < iVar18) {
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar7 = 0;
      }
      else {
        uVar11 = iVar18 - 0x100;
        lVar7 = (longlong)((int)uVar11 >> 1) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 1) != 0);
      }
      iVar5 = (int)param_2;
      lVar7 = (longlong)iVar18 * (longlong)iVar5 + lVar7;
      puVar9 = (undefined1 *)(iVar10 * iVar5 + *(int *)(param_1 + 0x7c));
      lVar6 = param_2;
      if (lVar7 < 0) {
        uVar8 = uVar15 - lVar7;
        trapWord(6,uVar15,0);
        iVar1 = (int)uVar8 / iVar18;
        lVar6 = iVar1 + param_2;
        trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff
                );
        if (iVar5 < (int)lVar6) {
          param_2 = lVar6 - param_2;
          do {
            if (0 < iVar10) {
              puVar12 = (undefined1 *)(*(int *)(param_1 + 0x84) + -1);
              iVar5 = iVar10;
              do {
                puVar12 = puVar12 + 1;
                *puVar9 = *puVar12;
                puVar9 = puVar9 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        lVar7 = (longlong)iVar1 * (longlong)iVar18 + lVar7;
      }
      if ((int)lVar6 < (int)lVar16) {
        lVar6 = lVar16 - lVar6;
        do {
          uVar11 = (uint)lVar7 & 0xff;
          pbVar13 = (byte *)(((int)(uint)lVar7 >> 8) * iVar10 + *(int *)(param_1 + 0x84));
          iVar18 = iVar10;
          if (0 < iVar10) {
            do {
              pbVar14 = pbVar13 + iVar10;
              bVar2 = *pbVar13;
              pbVar13 = pbVar13 + 1;
              *puVar9 = (char)(*pbVar14 * uVar11 + (uint)bVar2 * (0x100 - uVar11) >> 8);
              puVar9 = puVar9 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          lVar6 = lVar6 + -1;
          lVar7 = lVar7 + uVar15;
        } while (lVar6 != 0);
      }
      if ((int)lVar16 < (int)param_3) {
        param_3 = param_3 - lVar16;
        pbVar13 = puVar9 + -1;
        do {
          uVar11 = (uint)lVar7 & 0xff;
          iVar18 = (int)(uint)lVar7 >> 8;
          pbVar14 = (byte *)(iVar18 * iVar10 + *(int *)(param_1 + 0x84));
          if (iVar18 < (int)(uVar3 - 1)) {
            iVar18 = iVar10;
            if (0 < iVar10) {
              do {
                pbVar4 = pbVar14 + iVar10;
                bVar2 = *pbVar14;
                pbVar14 = pbVar14 + 1;
                pbVar13[1] = (byte)(*pbVar4 * uVar11 + (uint)bVar2 * (0x100 - uVar11) >> 8);
                pbVar13 = pbVar13 + 1;
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
            }
          }
          else if (0 < iVar10) {
            pbVar14 = pbVar14 + -1;
            iVar18 = iVar10;
            do {
              pbVar14 = pbVar14 + 1;
              pbVar13 = pbVar13 + 1;
              *pbVar13 = *pbVar14;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          param_3 = param_3 + -1;
          lVar7 = lVar7 + uVar15;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

