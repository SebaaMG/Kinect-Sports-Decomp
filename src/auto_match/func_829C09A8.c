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


void fn_829C09A8(longlong param_1,int *param_2)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  piVar3 = (int *)param_2[2];
  iVar4 = *param_2;
  iVar5 = param_2[1];
  lVar18 = 0;
  lVar14 = param_1 + 0xb32;
  iVar6 = *piVar3;
  lVar20 = 0x10;
  iVar7 = piVar3[1];
  iVar8 = piVar3[2];
  uVar12 = piVar3[4];
  uVar17 = (ulonglong)uVar12;
  do {
    lVar14 = lVar14 + 2;
    *(undefined2 *)lVar14 = 0;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar10 = (int)param_1;
  *(undefined2 *)(*(int *)((*(int *)(iVar10 + 0x144c) + 0x2d5) * 4 + iVar10) * 4 + iVar4 + 2) = 0;
  lVar14 = (ulonglong)*(uint *)(iVar10 + 0x144c) + 1;
  if ((int)lVar14 < 0x23d) {
    lVar20 = 0x23d - lVar14;
    lVar14 = lVar20 + lVar14;
    lVar19 = ((ulonglong)*(uint *)(iVar10 + 0x144c) + 0x2d6 & 0x3fffffff) * 4 + param_1;
    do {
      iVar9 = *(int *)lVar19;
      puVar16 = (ushort *)(iVar9 * 4 + iVar4);
      uVar15 = (ulonglong)*(ushort *)((uint)puVar16[1] * 4 + iVar4 + 2) + 1;
      if ((int)uVar12 < (int)uVar15) {
        lVar18 = lVar18 + 1;
        uVar15 = uVar17;
      }
      puVar16[1] = (ushort)uVar15;
      if (iVar9 <= iVar5) {
        iVar13 = 0;
        iVar11 = (int)((uVar15 + 0x59a & 0xffffffff) << 1);
        *(short *)(iVar11 + iVar10) = *(short *)(iVar11 + iVar10) + 1;
        if (iVar8 <= iVar9) {
          iVar13 = *(int *)((iVar9 - iVar8) * 4 + iVar7);
        }
        uVar1 = *puVar16;
        *(uint *)(iVar10 + 0x16a0) =
             (iVar13 + (int)uVar15) * (uint)uVar1 + *(int *)(iVar10 + 0x16a0);
        if (iVar6 != 0) {
          *(uint *)(iVar10 + 0x16a4) =
               ((uint)*(ushort *)(iVar9 * 4 + iVar6 + 2) + iVar13) * (uint)uVar1 +
               *(int *)(iVar10 + 0x16a4);
        }
      }
      lVar19 = lVar19 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    if ((int)lVar18 != 0) {
      lVar20 = (uVar17 + 0x59a & 0x7fffffff) * 2 + param_1;
      do {
        lVar19 = (uVar17 + 0x599 & 0x7fffffff) * 2 + param_1;
        sVar2 = *(short *)lVar19;
        uVar15 = uVar17;
        while( true ) {
          if (sVar2 != 0) break;
          lVar19 = lVar19 + -2;
          sVar2 = *(short *)lVar19;
          uVar15 = uVar15 - 1;
        }
        iVar6 = (int)((uVar15 + 0x599 & 0xffffffff) << 1);
        iVar7 = (int)((uVar15 + 0x59a & 0xffffffff) << 1);
        lVar18 = lVar18 + -2;
        sVar2 = *(short *)(iVar7 + iVar10);
        *(short *)(iVar6 + iVar10) = *(short *)(iVar6 + iVar10) + -1;
        *(short *)(iVar7 + iVar10) = sVar2 + 2;
        *(short *)lVar20 = *(short *)lVar20 + -1;
      } while (0 < lVar18);
      if (uVar12 != 0) {
        do {
          uVar12 = (uint)*(ushort *)lVar20;
          if (*(ushort *)lVar20 != 0) {
            lVar18 = (lVar14 + 0x2d5U & 0x3fffffff) * 4 + param_1;
            do {
              lVar18 = lVar18 + -4;
              lVar14 = lVar14 + -1;
              if (*(int *)lVar18 <= iVar5) {
                puVar16 = (ushort *)(*(int *)lVar18 * 4 + iVar4);
                if ((ulonglong)puVar16[1] != (uVar17 & 0xffffffff)) {
                  *(uint *)(iVar10 + 0x16a0) =
                       ((int)uVar17 - (uint)puVar16[1]) * (uint)*puVar16 + *(int *)(iVar10 + 0x16a0)
                  ;
                  puVar16[1] = (ushort)uVar17;
                }
                uVar12 = uVar12 - 1;
              }
            } while (uVar12 != 0);
          }
          uVar17 = uVar17 - 1;
          lVar20 = lVar20 + -2;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}

