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
extern int fn_82520780();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_82560690();
extern int fn_825F9C50();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82191FC0;
extern unsigned int lbl_82195BE4;
extern unsigned int lbl_82195BE8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DB304;
extern unsigned int lbl_83265A28;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825F98C8(void)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  double extraout_f1;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  piVar3 = (int *)fn_82F6A534();
  iVar7 = 0;
  dVar12 = (double)lbl_821917B0;
  dVar11 = (double)(float)(extraout_f1 * (double)lbl_82191FC0);
  dVar13 = extraout_f1;
  if (piVar3[2] != 0) {
    dVar17 = (double)lbl_821917C0;
    dVar19 = (double)lbl_821CA460;
    dVar16 = (double)lbl_82195BE8;
    dVar15 = (double)lbl_82195BE4;
    dVar14 = (double)lbl_831DB304;
    dVar18 = (double)lbl_821CC160;
    iVar9 = piVar3[2];
    do {
      fVar1 = (float)((double)*(float *)(iVar9 + 4) + dVar13);
      *(float *)(iVar9 + 4) = fVar1;
      if (fVar1 <= *(float *)(iVar9 + 0x10) + *(float *)(iVar9 + 0xc)) {
code_r0x825f9a80:
        iVar4 = *(int *)(iVar9 + 0x20);
        iVar7 = iVar9;
      }
      else {
        if (fVar1 <= (float)((double)*(float *)(iVar9 + 8) + dVar12)) {
          for (iVar7 = *(int *)(iVar9 + 0x1c); *(int *)(iVar7 + 0x18) != 0;
              iVar7 = *(int *)(iVar7 + 0x18)) {
          }
          iVar4 = fn_82520780(dVar11,0xffffffff83265a28);
          if (iVar4 == 0) {
            *(float *)(iVar7 + 8) =
                 (float)((double)*(float *)(iVar7 + 0x10) * dVar13 + (double)*(float *)(iVar7 + 8));
            *(float *)(iVar7 + 0xc) =
                 (float)((double)*(float *)(iVar7 + 0x14) * dVar13 + (double)*(float *)(iVar7 + 0xc)
                        );
          }
          else {
            puVar5 = (undefined4 *)fn_82522DF8(0x1c);
            *(undefined4 **)(iVar7 + 0x18) = puVar5;
            *puVar5 = *(undefined4 *)(iVar7 + 8);
            *(undefined4 *)(*(int *)(iVar7 + 0x18) + 4) = *(undefined4 *)(iVar7 + 0xc);
            lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
            *(float *)(*(int *)(iVar7 + 0x18) + 0x10) =
                 (float)((double)(float)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                        0x3f800000) - dVar19) *
                                         dVar16 + (double)*(float *)(iVar7 + 0x10)) - dVar15);
            lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
            *(float *)(*(int *)(iVar7 + 0x18) + 0x14) =
                 -(float)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                                         dVar19) * dVar17 - dVar14) * *(float *)(iVar9 + 0x14) +
                 ABS(*(float *)(*(int *)(iVar7 + 0x18) + 0x10));
            if (dVar18 < (double)*(float *)(*(int *)(iVar7 + 0x18) + 0x14)) {
              *(float *)(*(int *)(iVar7 + 0x18) + 0x14) = (float)dVar18;
            }
            pfVar2 = *(float **)(iVar7 + 0x18);
            pfVar2[2] = (float)((double)pfVar2[4] * dVar13 + (double)*pfVar2);
            iVar7 = *(int *)(iVar7 + 0x18);
            *(float *)(iVar7 + 0xc) =
                 (float)((double)*(float *)(iVar7 + 0x14) * dVar13 + (double)*(float *)(iVar7 + 4));
          }
          goto code_r0x825f9a80;
        }
        iVar4 = *(int *)(iVar9 + 0x1c);
        while (iVar4 != 0) {
          iVar4 = *(int *)(iVar4 + 0x18);
          fn_82522ED8();
        }
        iVar4 = *(int *)(iVar9 + 0x20);
        *(undefined4 *)(iVar9 + 0x1c) = 0;
        if (iVar7 == 0) {
          piVar3[2] = iVar4;
        }
        else {
          *(int *)(iVar7 + 0x20) = iVar4;
        }
        fn_82522ED8(iVar9);
        *piVar3 = *piVar3 + -1;
      }
      iVar9 = iVar4;
    } while (iVar4 != 0);
  }
  lVar8 = 3;
  piVar10 = piVar3;
  do {
    iVar7 = piVar10[5];
    iVar9 = 0;
    while (iVar4 = iVar7, iVar4 != 0) {
      fVar1 = (float)((double)*(float *)(iVar4 + 4) + dVar13);
      *(float *)(iVar4 + 4) = fVar1;
      if (fVar1 < (float)((double)*(float *)(iVar4 + 8) + dVar12)) {
        iVar7 = *(int *)(iVar4 + 0x28);
        iVar9 = iVar4;
      }
      else {
        iVar7 = *(int *)(iVar4 + 0x28);
        if (iVar9 == 0) {
          piVar10[5] = iVar7;
        }
        else {
          *(int *)(iVar9 + 0x28) = iVar7;
        }
        fn_82522ED8();
        piVar10[4] = piVar10[4] + -1;
      }
    }
    lVar8 = lVar8 + -1;
    piVar10 = piVar10 + 3;
  } while (lVar8 != 0);
  if (piVar3[2] == 0) {
    uVar6 = 0;
    piVar10 = piVar3 + 5;
    do {
      if (*piVar10 != 0) {
        lVar8 = fn_82560690(2);
        if (((int)lVar8 < 3) && (0 < (int)lVar8)) {
          puVar5 = (undefined4 *)0x8326b35c;
          do {
            puVar5[1] = fn_825F9C50;
            puVar5 = puVar5 + 2;
            *puVar5 = piVar3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        break;
      }
      uVar6 = uVar6 + 1;
      piVar10 = piVar10 + 3;
    } while (uVar6 < 3);
  }
  else {
    lVar8 = fn_82560690(2);
    if (((int)lVar8 < 3) && (0 < (int)lVar8)) {
      puVar5 = (undefined4 *)0x8326b35c;
      do {
        puVar5[1] = fn_825F9C50;
        puVar5 = puVar5 + 2;
        *puVar5 = piVar3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  fn_82F6A580();
  return;
}

