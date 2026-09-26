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
extern unsigned int iStack_c0;


void fn_82E69840(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  float *pfVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  int iStack_c0;
  
  iVar1 = *param_1;
  iVar20 = param_1[0x1dfe];
  uVar16 = 1;
  iVar18 = param_1[0x1df8];
  iVar15 = 0;
  iVar17 = param_1[0x1df9];
  piVar2 = *(int **)(iVar1 + 0x158);
  uVar3 = **(uint **)(iVar1 + 0x154);
  if (0 < *(int *)(iVar1 + 0xf4)) {
    iStack_c0 = 0;
    piVar19 = piVar2;
    iVar22 = iVar20;
    do {
      uVar25 = (ulonglong)uVar3;
      iVar21 = 0;
      iVar6 = *(int *)(iStack_c0 + *(int *)(iVar1 + 0x154));
      if (0 < (int)uVar3) {
        puVar13 = (undefined4 *)(iVar22 + -4);
        do {
          puVar13[1] = 0xffffffff;
          puVar13[2] = 0xffffffff;
          puVar13 = puVar13 + 3;
          *puVar13 = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      if (0 < iVar6) {
        piVar7 = piVar19;
        do {
          iVar11 = *(int *)((iVar18 - (int)piVar19) + (int)piVar7);
          iVar24 = piVar7[1] * (int)(short)uVar16;
          iVar23 = *piVar7 * (int)(short)uVar16;
          if (iVar11 <= *(int *)((iVar17 - (int)piVar19) + (int)piVar7)) {
            piVar9 = piVar2 + iVar11;
            piVar8 = (int *)(iVar11 * 0xc + iVar22);
            pfVar14 = (float *)(iVar11 * 0xc + iVar20 + 4);
            do {
              iVar4 = piVar9[1];
              iVar10 = iVar4;
              if (iVar24 <= iVar4) {
                iVar10 = iVar24;
              }
              iVar5 = *piVar9;
              iVar12 = iVar5;
              if (iVar5 <= iVar23) {
                iVar12 = iVar23;
              }
              if (*(int *)((iVar22 - iVar20) + (int)pfVar14) < 0) {
                *piVar8 = iVar21;
                *pfVar14 = (float)(longlong)(iVar10 - iVar12) / (float)(longlong)(iVar4 - iVar5);
              }
              else if (piVar8[2] < 0) {
                pfVar14[1] = (float)(longlong)(iVar10 - iVar12) / (float)(longlong)(iVar4 - iVar5);
              }
              iVar11 = iVar11 + 1;
              piVar9 = piVar9 + 1;
              piVar8 = piVar8 + 3;
              pfVar14 = pfVar14 + 3;
            } while (iVar11 <= *(int *)((iVar17 - (int)piVar19) + (int)piVar7));
          }
          iVar21 = iVar21 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar21 < iVar6);
      }
      uVar25 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        piVar7 = (int *)(iVar22 + 8);
        do {
          if (*piVar7 < 0) {
            *piVar7 = 0;
          }
          piVar7 = piVar7 + 3;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      iVar15 = iVar15 + 1;
      iStack_c0 = iStack_c0 + 4;
      iVar18 = iVar18 + 0x74;
      iVar17 = iVar17 + 0x74;
      piVar19 = piVar19 + 0x1d;
      iVar22 = iVar22 + 0x15c;
      iVar20 = iVar20 + 0x15c;
      uVar16 = (uVar16 & 0x7fffffff) << 1 | uVar16 >> 0x1f;
    } while (iVar15 < *(int *)(iVar1 + 0xf4));
  }
  return;
}

