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


undefined8 fn_829975C8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  
  iVar8 = *(int *)(param_1 + 0x228);
  piVar1 = *(int **)(param_1 + 0x234);
  piVar2 = (int *)piVar1[iVar8 + -1];
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0x10000004)) {
    uVar12 = 0;
    do {
      iVar10 = *(int *)(*(int *)(uVar12 + piVar2[4]) * 4 + *(int *)(param_1 + 0x14));
      if (*(int *)(iVar10 + 4) != *(int *)(param_1 + 0x84)) {
        return 0;
      }
      if (*(int *)(iVar10 + 0x3c) != 0) {
        return 0;
      }
      piVar11 = (int *)piVar2[2];
      if ((*(uint *)(*(int *)(*(int *)(uVar12 + (int)piVar11) * 4 + *(int *)(param_1 + 0x14)) + 0x3c
                    ) & 0x1f0000) != 0) {
        return 0;
      }
      uVar12 = uVar12 + 4;
    } while (uVar12 < 0x10);
    bVar5 = true;
    uVar12 = 0;
    iVar10 = iVar8 + -1;
    do {
      bVar6 = false;
      uVar14 = 0;
      piVar15 = piVar1;
      if (iVar8 != 1) {
        do {
          piVar3 = (int *)*piVar15;
          if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
            uVar7 = 0;
            if (piVar3[3] != 0) {
              iVar13 = 0;
              do {
                if (*(int *)(iVar13 + piVar3[4]) == *piVar11) {
                  bVar6 = true;
                }
                uVar7 = uVar7 + 1;
                iVar13 = iVar13 + 4;
              } while (uVar7 < (uint)piVar3[3]);
            }
            if (bVar6) break;
          }
          uVar14 = uVar14 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar14 < iVar8 - 1U);
      }
      if (*(short *)(param_1 + 0xca) == 0x104) {
        if ((uVar14 < *(uint *)(param_1 + 0x4c)) && (uVar14 != 0)) {
          bVar5 = false;
        }
      }
      else {
        bVar5 = (bool)(*(uint *)(param_1 + 0x4c) <= uVar14 & bVar5);
      }
      if (!bVar6) {
        return 0;
      }
      uVar14 = uVar14 + 1;
      if (uVar14 < iVar8 - 1U) {
        iVar13 = iVar10 - uVar14;
        piVar15 = piVar1 + uVar14;
        do {
          piVar3 = (int *)*piVar15;
          if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
            uVar14 = 0;
            if (piVar3[3] != 0) {
              iVar9 = 0;
              do {
                iVar4 = *(int *)(*(int *)(iVar9 + piVar3[4]) * 4 + *(int *)(param_1 + 0x14));
                if ((*(int *)(iVar4 + 4) == *(int *)(param_1 + 0x88)) &&
                   (*(uint *)(iVar4 + 0x10) == uVar12)) {
                  bVar5 = (bool)(*(int *)(iVar4 + 0xc) != 0 & bVar5);
                }
                uVar14 = uVar14 + 1;
                iVar9 = iVar9 + 4;
              } while (uVar14 < (uint)piVar3[3]);
            }
            uVar14 = 0;
            if (piVar3[1] != 0) {
              iVar9 = 0;
              do {
                iVar4 = *(int *)(*(int *)(iVar9 + piVar3[2]) * 4 + *(int *)(param_1 + 0x14));
                if ((*(int *)(iVar4 + 4) == *(int *)(param_1 + 0x88)) &&
                   (*(uint *)(iVar4 + 0x10) == uVar12)) {
                  bVar5 = (bool)(*(int *)(iVar4 + 0xc) != 0 & bVar5);
                }
                uVar14 = uVar14 + 1;
                iVar9 = iVar9 + 4;
              } while (uVar14 < (uint)piVar3[1]);
            }
          }
          piVar15 = piVar15 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      uVar12 = uVar12 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar12 < 4);
    if (bVar5) {
      uVar12 = 0;
      do {
        uVar14 = 0;
        if (iVar10 != 0) {
          iVar8 = 0;
          do {
            piVar1 = *(int **)(iVar8 + *(int *)(param_1 + 0x234));
            if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (uVar7 = 0, piVar1[3] != 0)) {
              iVar10 = 0;
              do {
                if (*(int *)(iVar10 + piVar1[4]) == *(int *)(uVar12 + piVar2[2])) {
                  *(undefined4 *)
                   (*(int *)(*(int *)(iVar10 + piVar1[4]) * 4 + *(int *)(param_1 + 0x14)) + 0xc) = 0
                  ;
                }
                uVar7 = uVar7 + 1;
                iVar10 = iVar10 + 4;
              } while (uVar7 < (uint)piVar1[3]);
            }
            uVar14 = uVar14 + 1;
            iVar8 = iVar8 + 4;
            iVar10 = *(int *)(param_1 + 0x228) + -1;
          } while (uVar14 < *(int *)(param_1 + 0x228) - 1U);
        }
        uVar12 = uVar12 + 4;
      } while (uVar12 < 0x10);
      *piVar2 = 0;
    }
  }
  return 0;
}

