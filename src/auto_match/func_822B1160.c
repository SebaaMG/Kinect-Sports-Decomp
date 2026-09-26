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
extern int fn_822ABA88();
extern int fn_82368C30();
extern int fn_823692A0();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_a4;


void fn_822B1160(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  double extraout_f1;
  undefined4 uStack_a4;
  int aiStack_a0 [40];
  
  piVar2 = *(int **)(param_1 + 0xc);
  uVar14 = ZEXT48(piVar2);
  piVar3 = *(int **)(param_1 + 0x14);
  bVar7 = true;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar21 = -1;
  iVar11 = *(int *)(iVar4 + 0x9a0);
  iVar12 = *(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x10);
  uVar15 = *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  uVar5 = *(uint *)(*(int *)(piVar3[4] * 4 + *piVar3) + 8);
  if (iVar11 != 0) {
    bVar7 = false;
    iVar21 = *(int *)(iVar11 + 0x28);
    if (iVar12 == *(int *)(iVar11 + 0x2c)) {
      return;
    }
  }
  uVar16 = 0xffffffffffffffff;
  uVar20 = 0xffffffffffffffff;
  uVar18 = 0xffffffffffffffff;
  iVar11 = 0;
  uVar23 = 0;
  if (uVar15 != 0) {
    puVar22 = &uStack_a4;
    uVar6 = *(undefined4 *)(piVar2[4] * 4 + *piVar2);
    uVar17 = uVar16;
    uVar19 = uVar18;
    do {
      iVar9 = fn_822ABA88(uVar6,uVar23);
      iVar10 = *(int *)(*(int *)(iVar9 + 0x110) + 0x1c);
      uVar16 = uVar23;
      uVar18 = uVar19;
      if (iVar10 != 8) {
        uVar16 = uVar17;
        if (iVar10 == 3) {
          iVar10 = fn_823692A0(iVar4,*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x2c)
                                  );
          if (((iVar10 != 0) &&
              (iVar10 = *(int *)(*(int *)(iVar10 + 0x110) + 0x1c), uVar18 = uVar23, iVar10 != 0xe))
             && (iVar10 != 0xf)) {
            uVar18 = uVar19;
            uVar20 = uVar23;
          }
        }
        else if (((iVar10 == 10) &&
                 (iVar10 = fn_823692A0(iVar4,*(undefined4 *)(iVar9 + 0x28),
                                           *(undefined4 *)(iVar9 + 0x2c)), iVar10 != 0)) &&
                (*(int *)(*(int *)(iVar10 + 0x110) + 0x18) == 2)) {
          puVar22 = puVar22 + 1;
          *puVar22 = (int)uVar23;
          iVar11 = iVar11 + 1;
        }
      }
      uVar23 = uVar23 + 1;
      uVar17 = uVar16;
      uVar19 = uVar18;
    } while ((uVar23 & 0xffffffff) < (ulonglong)uVar15);
  }
  if ((iVar21 != *(int *)(param_1 + 0x20)) && (iVar21 != -1)) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    uVar6 = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x18) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x24) = uVar6;
  }
  *(int *)(param_1 + 0x20) = iVar21;
  if (*(int *)(param_1 + 0x1c) != -1) {
    aiStack_a0[iVar11] = *(int *)(param_1 + 0x1c);
  }
  iVar11 = fn_82368C30(iVar4);
  fVar8 = lbl_82193B00;
  if (((((iVar11 == 0) || (*(int *)(iVar11 + 0x2c) != iVar12)) ||
       (iVar12 = *(int *)(iVar4 + 0x41c), iVar12 < 1)) || ((2 < iVar12 && (iVar12 != 10)))) ||
     (lbl_82193B00 <= *(float *)(iVar4 + 0x428))) {
    if (((int)uVar20 != -1) &&
       ((!bVar7 ||
        (fVar1 = (float)((double)*(float *)(param_1 + 0x24) + extraout_f1),
        *(float *)(param_1 + 0x24) = fVar1, fVar1 < fVar8)))) {
      iVar11 = fn_822ABA88(*(undefined4 *)(((int *)uVar14)[4] * 4 + *(int *)uVar14),uVar20);
      uVar13 = 5;
      if (iVar11 != 0) goto LAB_822b14e4;
    }
    if ((int)uVar18 == -1) {
      if ((int)uVar16 != -1) {
        uVar13 = 0;
        uVar15 = *(uint *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x10);
        uVar18 = (ulonglong)uVar15;
        if ((*(uint *)(iVar4 + 0xde0) == uVar15) && (*(int *)(iVar4 + 0xdf0) == 2)) {
          uVar13 = 1;
        }
        iVar11 = (int)uVar13;
        uVar20 = 0;
        if (uVar5 != 0) {
          uVar23 = (ulonglong)*(uint *)(piVar3[4] * 4 + *piVar3);
          do {
            iVar12 = fn_822ABA88(uVar23);
            iVar11 = (int)uVar13;
            uVar15 = (uint)uVar18;
            if (*(int *)(*(int *)(iVar12 + 0x110) + 0x1c) == 0x14) {
              iVar11 = 1;
              break;
            }
            uVar20 = uVar20 + 1;
          } while ((uVar20 & 0xffffffff) < (ulonglong)uVar5);
        }
        if (((*(uint *)(iVar4 + 0x9b4) == uVar15) && (bVar7)) &&
           (((iVar12 = *(int *)(iVar4 + 0x41c), iVar12 == 2 ||
             (((iVar12 == 8 || (iVar12 == 9)) || (iVar12 == 6)))) || (iVar12 == 7)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if ((iVar11 != 0) || (bVar7)) {
          iVar11 = fn_822ABA88(*(undefined4 *)(((int *)uVar14)[4] * 4 + *(int *)uVar14),uVar16);
          uVar13 = 6;
          goto LAB_822b14dc;
        }
      }
    }
    else {
      iVar11 = fn_822ABA88(*(undefined4 *)(((int *)uVar14)[4] * 4 + *(int *)uVar14),uVar18);
      uVar13 = 5;
LAB_822b14dc:
      if (iVar11 != 0) goto LAB_822b14e4;
    }
    fn_8236BA88(uVar14);
  }
  else {
    uVar13 = 4;
LAB_822b14e4:
    fn_8236A928(iVar4,iVar11,uVar13);
  }
  return;
}

