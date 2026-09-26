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
extern int fn_82C2B580();
extern int fn_82C2B590();
extern int fn_82E69340();
extern int fn_82E69640();
extern int fn_82E69840();
extern int fn_82E69A68();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8209A9A4;
extern unsigned int lbl_8209A9A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82E6A220(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar7;
  undefined8 uVar6;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  iVar1 = *param_1;
  puVar11 = (undefined4 *)param_1[0x1df8];
  iVar13 = param_1[0x1df9];
  iVar22 = 0;
  iVar21 = *(int *)(iVar1 + 0x158);
  iVar20 = **(int **)(iVar1 + 0x154);
  iVar7 = fn_82C2B580(*(int *)(iVar1 + 0x100) << 2);
  if (iVar7 == 0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    iVar23 = 0;
    if (0 < iVar20) {
      iVar10 = *(int *)(iVar1 + 0x158);
      iVar18 = 0;
      iVar14 = iVar10;
      do {
        if (iVar22 < *(int *)(iVar10 + 4)) {
          piVar15 = (int *)(iVar22 * 4 + iVar7 + -4);
          do {
            piVar15 = piVar15 + 1;
            *piVar15 = iVar23;
            iVar22 = iVar22 + 1;
            iVar14 = *(int *)(iVar1 + 0x158);
          } while (iVar22 < *(int *)(iVar18 + iVar14 + 4));
        }
        iVar23 = iVar23 + 1;
        iVar18 = iVar18 + 4;
        iVar10 = iVar18 + iVar14;
      } while (iVar23 < iVar20);
    }
    iVar20 = 0;
    uVar9 = 1;
    if (0 < *(int *)(iVar1 + 0xf4)) {
      iVar22 = 0;
      piVar15 = (int *)(iVar21 + 4);
      iVar21 = -4 - iVar21;
      do {
        iVar23 = 0;
        if (0 < *(int *)(iVar22 + *(int *)(iVar1 + 0x154))) {
          puVar8 = puVar11;
          piVar17 = piVar15;
          do {
            *(undefined4 *)((iVar13 - (int)puVar11) + (int)puVar8) = 0;
            *puVar8 = 0x1d;
            iVar10 = (int)uVar9;
            iVar14 = piVar17[-1] * iVar10;
            if (iVar14 < *piVar17 * iVar10) {
              iVar18 = iVar21 + (int)piVar17;
              piVar19 = (int *)(iVar14 * 4 + iVar7);
              do {
                iVar16 = *piVar19;
                if (*piVar19 <= *(int *)(iVar18 + iVar13)) {
                  iVar16 = *(int *)(iVar18 + iVar13);
                }
                *(int *)(iVar18 + iVar13) = iVar16;
                iVar16 = *piVar19;
                if (*(int *)(iVar18 + (int)puVar11) <= *piVar19) {
                  iVar16 = *(int *)(iVar18 + (int)puVar11);
                }
                *(int *)(iVar18 + (int)puVar11) = iVar16;
                iVar14 = iVar14 + 1;
                piVar19 = piVar19 + 1;
              } while (iVar14 < *piVar17 * iVar10);
            }
            iVar23 = iVar23 + 1;
            puVar8 = puVar8 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar23 < *(int *)(iVar22 + *(int *)(iVar1 + 0x154)));
        }
        iVar20 = iVar20 + 1;
        iVar13 = iVar13 + 0x74;
        iVar21 = iVar21 + -0x74;
        piVar15 = piVar15 + 0x1d;
        puVar11 = puVar11 + 0x1d;
        iVar22 = iVar22 + 4;
        uVar9 = (uVar9 & 0x7fffffff) << 1 | uVar9 >> 0x1f;
      } while (iVar20 < *(int *)(iVar1 + 0xf4));
    }
    fn_82E69A68(param_1);
    fn_82E69340();
    fn_82E69640();
    fn_82E69840();
    fVar5 = lbl_8209A9A8;
    fVar4 = lbl_8209A9A4;
    fVar3 = lbl_8200DFF4;
    uVar12 = 0;
    if (0 < *(int *)(iVar1 + 0xf4)) {
      iVar21 = 0;
      iVar13 = 0;
      do {
        iVar20 = *(int *)(iVar1 + 0x50);
        iVar22 = *(int *)(iVar1 + 0xfc);
        iVar23 = *(int *)(iVar1 + 0x158);
        *(undefined4 *)(iVar21 + param_1[15999]) = *(undefined4 *)(iVar21 + *(int *)(iVar1 + 0x154))
        ;
        piVar17 = (int *)(iVar13 + iVar23);
        iVar23 = 0;
        fVar2 = ((float)(longlong)(1 << (uVar12 & 0x3f)) * (float)(longlong)iVar20) /
                (float)(longlong)iVar22;
        iVar20 = *(int *)(iVar21 + *(int *)(iVar1 + 0x154));
        piVar15 = piVar17;
        if (0 < iVar20) {
          do {
            if (fVar3 < (float)(longlong)*piVar15 * fVar2) {
              *(int *)(iVar21 + param_1[15999]) = iVar23;
              break;
            }
            iVar23 = iVar23 + 1;
            piVar15 = piVar15 + 1;
          } while (iVar23 < iVar20);
        }
        iVar22 = 0;
        *(undefined4 *)(iVar21 + param_1[16000]) = *(undefined4 *)(iVar21 + *(int *)(iVar1 + 0x154))
        ;
        iVar20 = *(int *)(iVar21 + *(int *)(iVar1 + 0x154));
        piVar15 = piVar17;
        if (0 < iVar20) {
          do {
            if (fVar4 < (float)(longlong)*piVar15 * fVar2) {
              *(int *)(iVar21 + param_1[16000]) = iVar22;
              break;
            }
            iVar22 = iVar22 + 1;
            piVar15 = piVar15 + 1;
          } while (iVar22 < iVar20);
        }
        iVar22 = 0;
        *(undefined4 *)(iVar21 + param_1[0x3e81]) =
             *(undefined4 *)(iVar21 + *(int *)(iVar1 + 0x154));
        iVar20 = *(int *)(iVar21 + *(int *)(iVar1 + 0x154));
        if (0 < iVar20) {
          do {
            if (fVar5 < (float)(longlong)*piVar17 * fVar2) {
              *(int *)(iVar21 + param_1[0x3e81]) = iVar22;
              break;
            }
            iVar22 = iVar22 + 1;
            piVar17 = piVar17 + 1;
          } while (iVar22 < iVar20);
        }
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 0x74;
        iVar21 = iVar21 + 4;
      } while ((int)uVar12 < *(int *)(iVar1 + 0xf4));
    }
    fn_82C2B590(iVar7);
    uVar6 = 0;
  }
  return uVar6;
}

