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
#define ZEXT48(x) ((U64)((U32)(x)))


void fn_8258B170(int param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *(uint *)(param_1 + 0x38);
  lVar11 = (longlong)((int)uVar1 >> 0x15);
  uVar4 = *(uint *)(param_1 + 0x20);
  uVar5 = *(uint *)(param_1 + 0x24);
  iVar7 = (int)(uVar1 << 0xb | uVar1 >> 0x15) >> 0x16;
  iVar8 = (int)(uVar2 << 0xb | uVar2 >> 0x15) >> 0x16;
  iVar15 = (int)(uVar2 << 0x15 | uVar2 >> 0xb) >> 0x15;
  if (-1 < lVar11) {
    iVar9 = (int)(uVar1 << 0x15 | uVar1 >> 0xb) >> 0x15;
    if (iVar9 <= iVar15) {
      lVar19 = (longlong)iVar9 * (longlong)(int)uVar5;
      lVar18 = ((longlong)iVar15 - (longlong)iVar9) + 1;
      do {
        if (iVar7 <= iVar8) {
          lVar20 = ((longlong)iVar8 - (longlong)iVar7) + 1;
          lVar10 = ((longlong)(int)uVar4 * (longlong)iVar7 + lVar19 + lVar11 & 0x3fffffffU) * 4 +
                   (ulonglong)uVar3;
          do {
            if ((int)uVar1 >> 0x15 <= (int)uVar2 >> 0x15) {
              lVar16 = (((int)uVar2 >> 0x15) - lVar11) + 1;
              lVar21 = lVar10;
              do {
                lVar12 = lVar21;
                for (piVar6 = (int *)*(undefined4 *)lVar21; uVar17 = ZEXT48(piVar6), uVar17 != 0;
                    piVar6 = (int *)piVar6[0x1f]) {
                  iVar15 = 0;
                  lVar14 = uVar17 + 4;
                  do {
                    iVar15 = iVar15 + 1;
                    if (*(int *)lVar14 == param_2) {
                      piVar6[iVar15] = 0;
                      *piVar6 = *piVar6 + 1;
                      break;
                    }
                    lVar14 = lVar14 + 4;
                  } while (iVar15 < 0x1e);
                  if (*piVar6 == 0x1e) {
                    *(int *)lVar12 = piVar6[0x1f];
                    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
                    *piVar6 = 0;
                    puVar13 = (undefined4 *)(uVar17 + 4);
                    if (*(int *)(param_1 + 0x7c) == 0) {
                      *(undefined4 **)(param_1 + 0x7c) = puVar13;
                    }
                    *puVar13 = *(undefined4 *)(param_1 + 0x78);
                    *(undefined4 *)(param_1 + 0x78) = puVar13;
                    break;
                  }
                  lVar12 = uVar17 + 0x7c;
                }
                lVar21 = lVar21 + 4;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            lVar20 = lVar20 + -1;
            lVar10 = ((ulonglong)uVar4 & 0x3fffffff) * 4 + lVar10;
          } while (lVar20 != 0);
        }
        lVar18 = lVar18 + -1;
        lVar19 = lVar19 + (ulonglong)uVar5;
      } while (lVar18 != 0);
    }
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  }
  return;
}

