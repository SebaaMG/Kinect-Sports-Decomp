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
extern int fn_8265C9E0();
extern int fn_82F68918();
extern int fn_82F6A524();
extern int fn_82F6A570();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821AAD20;


void fn_82B661E0(undefined8 param_1,uint param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
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
  
  uVar3 = fn_82F6A524();
  if (((uVar3 & 0xffffffff) != 0) && (param_2 != 0)) {
    dVar18 = (double)(uVar3 & 0xffffffff);
    dVar21 = (double)lbl_82002C5C;
    dVar23 = (double)lbl_82002AE0;
    dVar19 = (double)param_2;
    dVar24 = (double)(float)(dVar19 / dVar18);
    dVar16 = (double)(float)(dVar21 / dVar24);
    uVar13 = uVar3;
    uVar2 = uVar3 & 0xffffffff;
    while (uVar2 != 0) {
      uVar13 = uVar13 - 1;
      uVar2 = uVar13;
    }
    piVar4 = (int *)fn_8265C9E0();
    if (piVar4 != (int *)0x0) {
      iVar12 = 4;
      iVar9 = 0;
      uVar13 = 0;
      dVar22 = (double)lbl_821AAD20;
      if ((uVar3 & 0xffffffff) != 0) {
        dVar17 = (double)lbl_8201DCB8;
        iVar11 = iVar12;
        do {
          iVar12 = iVar11 + 4;
          uVar10 = 0;
          dVar20 = (double)(uVar13 & 0xffffffff);
          dVar26 = dVar22;
          do {
            dVar27 = (double)(float)((double)(float)((double)uVar10 + dVar20) - dVar21);
            dVar28 = (double)(float)(dVar27 * dVar24);
            dVar29 = (double)(float)(dVar28 + dVar24);
            if (param_3 == 0) {
              if (dVar28 < dVar22) {
                dVar28 = dVar22;
              }
              if (dVar19 < dVar29) {
                dVar29 = dVar19;
              }
            }
            dVar14 = (double)fn_82F68918(dVar28);
            iVar7 = (int)dVar14;
            dVar14 = (double)(longlong)iVar7;
            if (dVar14 < dVar29) {
              iVar5 = iVar7 - param_2;
              iVar8 = iVar9;
              do {
                if (iVar7 < 0) {
                  iVar6 = iVar7 + param_2;
                }
                else {
                  iVar6 = iVar5;
                  if (iVar7 < (int)param_2) {
                    iVar6 = iVar7;
                  }
                }
                dVar25 = dVar26;
                iVar9 = iVar8;
                if ((iVar6 != iVar8) && (dVar25 = dVar22, iVar9 = iVar6, dVar17 < dVar26)) {
                  piVar1 = (int *)(iVar12 + (int)piVar4);
                  iVar12 = iVar12 + 8;
                  piVar1[1] = (int)(float)dVar26;
                  *piVar1 = iVar8;
                }
                dVar26 = dVar14;
                if (dVar14 < dVar28) {
                  dVar26 = dVar28;
                }
                dVar15 = (double)(float)(dVar14 + dVar23);
                if (dVar29 < (double)(float)(dVar14 + dVar23)) {
                  dVar15 = dVar29;
                }
                if ((param_3 != 0) ||
                   ((dVar14 = dVar23, dVar22 <= dVar27 &&
                    (dVar14 = dVar22, (double)(float)(dVar27 + dVar23) < dVar18)))) {
                  dVar14 = (double)(float)((double)(float)(dVar15 + dVar26) * dVar16 - dVar27);
                }
                if (uVar10 != 0) {
                  dVar14 = (double)(float)(dVar23 - dVar14);
                }
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + 1;
                dVar26 = (double)(float)((double)(float)(dVar15 - dVar26) * dVar14 + dVar25);
                dVar14 = (double)(longlong)iVar7;
                iVar8 = iVar9;
              } while (dVar14 < dVar29);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 2);
          if (dVar17 < dVar26) {
            piVar1 = (int *)(iVar12 + (int)piVar4);
            iVar12 = iVar12 + 8;
            piVar1[1] = (int)(float)dVar26;
            *piVar1 = iVar9;
          }
          uVar13 = uVar13 + 1;
          *(int *)(iVar11 + (int)piVar4) = iVar12 - iVar11;
          iVar11 = iVar12;
        } while ((uVar13 & 0xffffffff) < (uVar3 & 0xffffffff));
      }
      *piVar4 = iVar12;
      goto code_r0x82b664c0;
    }
  }
  piVar4 = (int *)0x0;
code_r0x82b664c0:
  fn_82F6A570(piVar4);
  return;
}

