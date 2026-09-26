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


void fn_82F2D130(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  ushort *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0x74) + 8);
  if ((((uVar4 != 0) && (uVar13 = *(uint *)(param_1 + 100), uVar13 != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 4) != 0)) && (*(uint *)(param_1 + 0x60) != 0)) {
    uVar19 = (uVar4 - 1) * uVar13;
    trapWord(6,(ulonglong)uVar4,0);
    iVar1 = (int)(((ulonglong)uVar4 & 0xffffff) << 8) / (int)uVar13;
    uVar16 = (ulonglong)iVar1;
    trapWord(6,(ulonglong)uVar13,0);
    trapWord(5,(ulonglong)uVar13 &
               ~((((ulonglong)uVar4 & 0x7fffff) << 9 | ((ulonglong)uVar4 & 0xffffff) >> 0x17) - 1),
             0xffff);
    trapWord(5,(ulonglong)uVar4 &
               ~((((ulonglong)uVar19 & 0x7fffffff) << 1 | (ulonglong)(uVar19 >> 0x1f)) - 1),0xffff);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x60) & 0x7fffffff;
    lVar17 = uVar6 << 1;
    lVar21 = (longlong)((int)uVar19 / (int)uVar4);
    if ((int)param_3 < (int)uVar19 / (int)uVar4) {
      lVar21 = param_3;
    }
    if (0 < iVar1) {
      if (*(int *)(param_1 + 0x68) == 0) {
        lVar9 = 0;
      }
      else {
        uVar13 = iVar1 - 0x100;
        lVar9 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0);
      }
      iVar7 = (int)param_2;
      iVar18 = (int)lVar17;
      lVar9 = (longlong)iVar1 * (longlong)iVar7 + lVar9;
      puVar11 = (undefined2 *)(iVar18 * iVar7 * 2 + *(int *)(param_1 + 0x7c));
      lVar8 = param_2;
      if (lVar9 < 0) {
        uVar10 = uVar16 - lVar9;
        trapWord(6,uVar16,0);
        iVar2 = (int)uVar10 / iVar1;
        lVar8 = iVar2 + param_2;
        trapWord(5,uVar16 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (iVar7 < (int)lVar8) {
          param_2 = lVar8 - param_2;
          do {
            if (0 < iVar18) {
              puVar14 = (undefined2 *)(*(int *)(param_1 + 0x84) + -2);
              lVar20 = lVar17;
              do {
                puVar14 = puVar14 + 1;
                *puVar11 = *puVar14;
                puVar11 = puVar11 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        lVar9 = (longlong)iVar2 * (longlong)iVar1 + lVar9;
      }
      if ((int)lVar8 < (int)lVar21) {
        lVar8 = lVar21 - lVar8;
        do {
          uVar13 = (uint)lVar9 & 0xff;
          puVar12 = (ushort *)(((int)(uint)lVar9 >> 8) * iVar18 * 2 + *(int *)(param_1 + 0x84));
          if (0 < iVar18) {
            lVar20 = lVar17;
            do {
              puVar15 = (ushort *)((int)(uVar6 << 2) + (int)puVar12);
              uVar3 = *puVar12;
              puVar12 = puVar12 + 1;
              *puVar11 = (short)(*puVar15 * uVar13 + (uint)uVar3 * (0x100 - uVar13) >> 8);
              puVar11 = puVar11 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          lVar8 = lVar8 + -1;
          lVar9 = lVar9 + uVar16;
        } while (lVar8 != 0);
      }
      if ((int)lVar21 < (int)param_3) {
        param_3 = param_3 - lVar21;
        puVar12 = puVar11 + -1;
        do {
          uVar13 = (uint)lVar9 & 0xff;
          iVar1 = (int)(uint)lVar9 >> 8;
          puVar15 = (ushort *)(iVar1 * iVar18 * 2 + *(int *)(param_1 + 0x84));
          if (iVar1 < (int)(uVar4 - 1)) {
            if (0 < iVar18) {
              lVar21 = lVar17;
              do {
                puVar5 = (ushort *)((int)(uVar6 << 2) + (int)puVar15);
                uVar3 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar12[1] = (ushort)(*puVar5 * uVar13 + (uint)uVar3 * (0x100 - uVar13) >> 8);
                puVar12 = puVar12 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          else if (0 < iVar18) {
            puVar15 = puVar15 + -1;
            lVar21 = lVar17;
            do {
              puVar15 = puVar15 + 1;
              puVar12 = puVar12 + 1;
              *puVar12 = *puVar15;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
          param_3 = param_3 + -1;
          lVar9 = lVar9 + uVar16;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

