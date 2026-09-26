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
extern int fn_8265C940();
extern int fn_82F68918();
extern int fn_82F6A524();
extern int fn_82F6A570();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;


void fn_82922700(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  uVar2 = fn_82F6A524();
  if (((uVar2 & 0xffffffff) != 0) && ((param_2 & 0xffffffff) != 0)) {
    dVar19 = (double)(uVar2 & 0xffffffff);
    dVar22 = (double)lbl_82002C5C;
    lVar3 = 0x10;
    dVar23 = (double)lbl_82002AE0;
    dVar20 = (double)(param_2 & 0xffffffff);
    dVar24 = (double)(float)(dVar20 / dVar19);
    dVar17 = (double)(float)(dVar22 / dVar24);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar13 = uVar2;
      uVar9 = 0;
      do {
        dVar15 = (double)(float)((double)(float)((double)uVar9 - dVar22) * dVar24);
        lVar3 = ((longlong)
                 ((double)((float)((double)(float)(dVar15 + dVar24) - dVar15) +
                          (float)(param_3 != 0)) + dVar23) & 0xfffffffU) * 0x10 + lVar3 + 0xc;
        uVar13 = uVar13 - 1;
        uVar9 = uVar9 + 1;
      } while (uVar13 != 0);
    }
    piVar4 = (int *)fn_8265C940(lVar3,0x24810000);
    if (piVar4 != (int *)0x0) {
      iVar12 = 4;
      uVar13 = 0;
      uVar10 = 0;
      dVar15 = (double)lbl_821AAD20;
      if ((uVar2 & 0xffffffff) != 0) {
        dVar18 = (double)lbl_8201DCB8;
        iVar11 = iVar12;
        do {
          iVar12 = iVar11 + 4;
          uVar9 = 0;
          dVar21 = (double)(uVar10 & 0xffffffff);
          dVar26 = dVar15;
          do {
            dVar27 = (double)(float)((double)(float)((double)uVar9 + dVar21) - dVar22);
            dVar28 = (double)(float)(dVar27 * dVar24);
            dVar29 = (double)(float)(dVar28 + dVar24);
            if ((int)param_3 == 0) {
              if (dVar28 < dVar15) {
                dVar28 = dVar15;
              }
              if (dVar20 < dVar29) {
                dVar29 = dVar20;
              }
            }
            dVar14 = (double)fn_82F68918(dVar28);
            uVar7 = (ulonglong)(uint)(int)dVar14;
            dVar14 = (double)(longlong)(int)dVar14;
            if (dVar14 < dVar29) {
              uVar5 = uVar7 - param_2;
              uVar8 = uVar13;
              do {
                if ((int)uVar7 < 0) {
                  uVar6 = uVar7 + param_2;
                }
                else {
                  uVar6 = uVar5;
                  if ((int)uVar7 < (int)param_2) {
                    uVar6 = uVar7;
                  }
                }
                uVar13 = uVar8;
                dVar25 = dVar26;
                if (((uVar6 & 0xffffffff) != (uVar8 & 0xffffffff)) &&
                   (uVar13 = uVar6, dVar25 = dVar15, dVar18 < dVar26)) {
                  puVar1 = (undefined4 *)(iVar12 + (int)piVar4);
                  iVar12 = iVar12 + 8;
                  puVar1[1] = (float)dVar26;
                  *puVar1 = (int)uVar8;
                }
                dVar26 = dVar14;
                if (dVar14 < dVar28) {
                  dVar26 = dVar28;
                }
                dVar16 = (double)(float)(dVar14 + dVar23);
                if (dVar29 < (double)(float)(dVar14 + dVar23)) {
                  dVar16 = dVar29;
                }
                if (((int)param_3 != 0) ||
                   ((dVar14 = dVar23, dVar15 <= dVar27 &&
                    (dVar14 = dVar15, (double)(float)(dVar27 + dVar23) < dVar19)))) {
                  dVar14 = (double)(float)((double)(float)(dVar16 + dVar26) * dVar17 - dVar27);
                }
                if (uVar9 != 0) {
                  dVar14 = (double)(float)(dVar23 - dVar14);
                }
                uVar7 = uVar7 + 1;
                uVar5 = uVar5 + 1;
                dVar26 = (double)(float)((double)(float)(dVar16 - dVar26) * dVar14 + dVar25);
                dVar14 = (double)(longlong)(int)uVar7;
                uVar8 = uVar13;
              } while (dVar14 < dVar29);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 2);
          if (dVar18 < dVar26) {
            puVar1 = (undefined4 *)(iVar12 + (int)piVar4);
            iVar12 = iVar12 + 8;
            puVar1[1] = (float)dVar26;
            *puVar1 = (int)uVar13;
          }
          uVar10 = uVar10 + 1;
          *(int *)(iVar11 + (int)piVar4) = iVar12 - iVar11;
          iVar11 = iVar12;
        } while ((uVar10 & 0xffffffff) < (uVar2 & 0xffffffff));
      }
      *piVar4 = iVar12;
      goto code_r0x829229e4;
    }
  }
  piVar4 = (int *)0x0;
code_r0x829229e4:
  fn_82F6A570(piVar4);
  return;
}

