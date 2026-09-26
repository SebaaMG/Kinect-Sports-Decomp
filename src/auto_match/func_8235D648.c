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
extern int fn_822ABA88();
extern int fn_822B70F0();
extern int fn_822B7178();
extern int fn_82417F58();
extern int fn_82F622E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D17A0;


void fn_8235D648(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  iVar1 = fn_82F6A548();
  piVar8 = *(int **)(iVar1 + 8);
  uVar9 = 0;
  if ((piVar8[1] - *piVar8 & 0xfffffffcU) != 0) {
    iVar10 = 0;
    dVar15 = (double)lbl_82193B00;
    dVar16 = (double)lbl_821CC160;
    dVar14 = (double)lbl_821CA460;
    do {
      uVar11 = 0;
      piVar8 = *(int **)(iVar10 + *piVar8);
      iVar3 = *(int *)(piVar8[4] * 4 + *piVar8);
      if (*(int *)(iVar3 + 8) != 0) {
        do {
          piVar2 = (int *)fn_822ABA88(iVar3,uVar11);
          if (((*(int *)(iVar1 + 0xc34) != 0) && ((uVar11 & 0xffffffff) == 0)) &&
             (uVar9 < (uint)(*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20) >> 2))) {
            piVar7 = *(int **)(iVar10 + *(int *)(iVar1 + 0x20));
            piVar4 = (int *)*piVar7;
            if (piVar7[1] - (int)piVar4 >> 2 != 0) {
              if (piVar7[1] - (int)piVar4 >> 2 == 0) {
                    /* WARNING: Subroutine does not return */
                fn_82F622E0(0xffffffff821ae698);
              }
              iVar3 = *piVar4;
              if (piVar2[9] != iVar3) {
                piVar2[9] = iVar3;
                if (iVar3 == 0) {
                  *(undefined4 *)(*(int *)(piVar2[5] + 0x8c0) + 0x90) = 0;
                }
                else {
                  *(undefined4 *)(*(int *)(piVar2[5] + 0x8c0) + 0x90) = 1;
                }
                (**(code **)(*piVar2 + 0x24))(piVar2);
                dVar14 = (double)lbl_821CA460;
              }
            }
          }
          iVar3 = piVar2[9];
          piVar2[0x8f] = iVar1 + 0x1a0;
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0x3a00) = iVar1 + 0x1a0;
            *(int *)(iVar3 + 0x3a08) = iVar1 + 0xc00;
          }
          piVar2[0x90] = -0x7ce2e8f0;
          if (piVar2[9] != 0) {
            *(undefined4 *)(piVar2[9] + 0x3a04) = 0x831d1710;
          }
          if (piVar2[9] == 0) {
            fn_822B70F0(dVar14,piVar2);
          }
          else {
            uVar6 = (ulonglong)(uint)piVar2[0x8e];
            if (piVar2[0x8e] != 0) {
              uVar5 = -(uint)(*(int *)(iVar1 + 0xc4c) != 0) & 3;
              if ((uVar5 < 3) || (*(int *)(iVar1 + 0xcb8) == 0)) {
                fn_822B70F0((double)*(float *)(iVar1 + 0x620),piVar2);
              }
              else {
                iVar3 = fn_82417F58(uVar6);
                if (iVar3 == 0) {
code_r0x8235d8a8:
                  piVar7 = (int *)uVar6;
                  bVar12 = false;
code_r0x8235d88c:
                  if ((piVar7[0xac] < 3) || (dVar17 = dVar14, 6 < piVar7[0xac])) {
                    dVar17 = dVar16;
                  }
                }
                else {
                  piVar4 = (int *)fn_82417F58(uVar6);
                  piVar7 = (int *)uVar6;
                  if (piVar4 != piVar2) goto code_r0x8235d8a8;
                  bVar12 = true;
                  if ((((piVar2[0x68] != 0) || (piVar2[0x78] != 0)) &&
                      (((-(*(int *)(*piVar7 + 0xc4c) != 0) & 3U) < 4 ||
                       (dVar14 < (double)(float)((double)(float)piVar2[0xf9] + dVar15))))) ||
                     ((((dVar17 = dVar14, (int)uVar5 < 4 && (iVar3 = piVar7[0xc], iVar3 != 0)) &&
                       (*(int *)(iVar3 + 0x2c) != 2)) && (*(int *)(iVar3 + 0x3c) == 0))))
                  goto code_r0x8235d88c;
                }
                if (((3 < (int)uVar5) && (piVar7[0xc] != 0)) && (*(int *)(piVar7[0xc] + 0x2c) != 2))
                {
                  dVar17 = (double)lbl_82191FC8;
                }
                if (piVar2[0x4b] == 0) {
                  dVar13 = (double)(float)piVar2[0x4c];
                }
                else {
                  piVar4 = *(int **)(piVar2[5] + 0x8c0);
                  dVar13 = dVar14;
                  if (piVar4 != (int *)0x0) {
                    dVar13 = (double)(**(code **)(*piVar4 + 0x80))(piVar4,0);
                    dVar14 = (double)lbl_821CA460;
                  }
                }
                if (piVar2[0x4b] == 0) {
                  dVar14 = (double)(float)piVar2[0x4c];
                }
                else {
                  piVar4 = *(int **)(piVar2[5] + 0x8c0);
                  if (piVar4 != (int *)0x0) {
                    dVar14 = (double)(**(code **)(*piVar4 + 0x80))(piVar4,0);
                  }
                }
                dVar14 = (double)(float)((double)(float)(dVar17 - dVar14) * (double)lbl_831D17A0 +
                                        dVar13);
                if (!bVar12) {
                  dVar14 = dVar17;
                }
                if (dVar14 < dVar17) {
                  dVar14 = dVar17;
                }
                if (dVar14 < (double)lbl_821917D4) {
                  dVar14 = dVar16;
                }
                fn_822B7178(dVar14,piVar2);
                bVar12 = dVar14 < (double)lbl_821917D4;
                dVar14 = (double)lbl_821CA460;
                *(uint *)(piVar2[5] + 0x1d0) = (uint)bVar12 + (-(uint)!bVar12 - (bVar12 - 1));
              }
              if ((*(int *)(iVar1 + 0xc48) != 0) && (2 < *(int *)(piVar2[0x8e] + 0x2b0))) {
                fn_822B70F0(dVar14,piVar2);
                *(undefined4 *)(piVar2[5] + 0x1d0) = 0;
              }
            }
          }
          uVar11 = uVar11 + 1;
          iVar3 = *(int *)(piVar8[4] * 4 + *piVar8);
        } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 8));
      }
      piVar8 = *(int **)(iVar1 + 8);
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 4;
    } while ((int)uVar9 < piVar8[1] - *piVar8 >> 2);
  }
  fn_82F6A594();
  return;
}

