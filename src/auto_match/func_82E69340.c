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
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_d8;


void fn_82E69340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iStack_e0;
  int iStack_dc;
  uint uStack_d8;
  int iStack_d4;
  
  fVar9 = lbl_821AAD20;
  fVar8 = lbl_82005344;
  iVar1 = *param_1;
  iStack_e0 = param_1[0x1dfc];
  iVar20 = param_1[0x1df8];
  iVar19 = param_1[0x1df9];
  iStack_d4 = 0;
  piVar22 = *(int **)(iVar1 + 0x158);
  uStack_d8 = 1;
  if (0 < *(int *)(iVar1 + 0xf4)) {
    iStack_dc = 0;
    do {
      iVar21 = 0;
      iVar4 = *(int *)(iStack_dc + *(int *)(iVar1 + 0x154));
      if (0 < iVar4) {
        piVar23 = piVar22;
        do {
          iVar25 = *(int *)((iVar20 - (int)piVar22) + (int)piVar23);
          iVar13 = piVar23[1] * (int)(short)uStack_d8;
          iVar17 = *(int *)((iVar19 - (int)piVar22) + (int)piVar23);
          iVar24 = (int)(short)uStack_d8 * *piVar23;
          fVar5 = fVar9;
          if (iVar25 <= iVar17) {
            fVar6 = fVar9;
            fVar7 = fVar9;
            if (1 < (iVar17 - iVar25) + 1) {
              iVar2 = *(int *)(iVar1 + 0x158);
              iVar18 = iVar25 << 2;
              do {
                piVar14 = (int *)(iVar18 + *(int *)(iVar1 + 0x158));
                iVar10 = piVar14[1];
                iVar11 = iVar10;
                if (iVar13 <= iVar10) {
                  iVar11 = iVar13;
                }
                iVar15 = *piVar14;
                if (iVar15 <= iVar24) {
                  iVar15 = iVar24;
                }
                iVar16 = iVar18 + 8;
                iVar3 = *(int *)(iVar18 + iVar2 + 4);
                iVar12 = *(int *)(iVar16 + *(int *)(iVar1 + 0x158));
                fVar7 = ((float)(longlong)(iVar11 - iVar15) *
                        *(float *)((int)param_1 + iVar18 + 0xf984)) /
                        (float)(longlong)(iVar3 - *(int *)(iVar18 + iVar2)) + fVar7;
                if (iVar13 <= iVar12) {
                  iVar12 = iVar13;
                }
                if (iVar10 <= iVar24) {
                  iVar10 = iVar24;
                }
                iVar11 = iVar18 + 0xf988;
                iVar25 = iVar25 + 2;
                iVar18 = iVar18 + 8;
                fVar6 = ((float)(longlong)(iVar12 - iVar10) * *(float *)((int)param_1 + iVar11)) /
                        (float)(longlong)(*(int *)(iVar16 + iVar2) - iVar3) + fVar6;
              } while (iVar25 <= iVar17 + -1);
            }
            if (iVar25 <= iVar17) {
              piVar14 = (int *)(iVar25 * 4 + *(int *)(iVar1 + 0x158));
              iVar17 = piVar14[1];
              if (iVar13 <= iVar17) {
                iVar17 = iVar13;
              }
              iVar13 = *piVar14;
              if (iVar13 <= iVar24) {
                iVar13 = iVar24;
              }
              piVar14 = (int *)(iVar25 * 4 + *(int *)(iVar1 + 0x158));
              fVar5 = ((float)(longlong)(iVar17 - iVar13) * (float)param_1[iVar25 + 0x3e61]) /
                      (float)(longlong)(piVar14[1] - *piVar14);
            }
            fVar5 = fVar6 + fVar7 + fVar5;
            if (fVar8 <= fVar5) {
              fVar5 = fVar8;
            }
          }
          if (iVar21 < 5) {
            iVar25 = 0x10984;
          }
          else {
            iVar25 = 0x1098c;
            if (iVar21 < iVar4 + -5) {
              iVar25 = 0x10988;
            }
          }
          iVar21 = iVar21 + 1;
          *(float *)((iStack_e0 - (int)piVar22) + (int)piVar23) =
               *(float *)((int)param_1 + iVar25) * fVar5;
          piVar23 = piVar23 + 1;
        } while (iVar21 < iVar4);
      }
      iStack_dc = iStack_dc + 4;
      iVar20 = iVar20 + 0x74;
      iStack_d4 = iStack_d4 + 1;
      iStack_e0 = iStack_e0 + 0x74;
      uStack_d8 = uStack_d8 << 1 | uStack_d8 >> 0x1f;
      iVar19 = iVar19 + 0x74;
      piVar22 = piVar22 + 0x1d;
    } while (iStack_d4 < *(int *)(iVar1 + 0xf4));
  }
  return;
}

