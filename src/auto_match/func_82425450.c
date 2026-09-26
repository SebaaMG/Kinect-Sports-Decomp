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
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_823AB478();
extern int fn_824B7728();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832975B0;


void fn_82425450(int param_1)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  char cVar6;
  int iVar4;
  int iVar5;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  int iVar20;
  
  iVar10 = lbl_83265988;
  iVar20 = *(int *)(param_1 + 4);
  piVar14 = (int *)(iVar20 + 8);
  uVar12 = 0;
  uVar8 = 0;
  iVar4 = *(int *)(iVar20 + 8);
  uVar9 = (*(int *)(iVar20 + 0xc) - iVar4) / 0x1ac;
  if (uVar9 != 0) {
    iVar15 = 0;
    do {
      uVar11 = *(uint *)(iVar4 + iVar15 + 0x30);
      if (uVar12 < uVar11) {
        uVar12 = uVar11;
      }
      uVar8 = uVar8 + 1;
      iVar15 = iVar15 + 0x1ac;
    } while (uVar8 < uVar9);
  }
  uVar11 = 0;
  uVar8 = 0;
  if (uVar9 != 0) {
    iVar15 = 0;
    do {
      if (*(uint *)(iVar4 + iVar15 + 0x30) == uVar12) {
        uVar11 = uVar11 + 1;
      }
      uVar8 = uVar8 + 1;
      iVar15 = iVar15 + 0x1ac;
    } while (uVar8 < uVar9);
  }
  bVar3 = false;
  if ((lbl_83265988 != 0) &&
     (((cVar6 = fn_828EA610(lbl_83265988), cVar6 != '\0' ||
       (cVar6 = fn_828EA5F8(iVar10), cVar6 == '\0')) ||
      (cVar6 = fn_82512508(iVar10), cVar6 == '\0')))) {
    iVar10 = 0;
  }
  iVar4 = *piVar14;
  uVar13 = 0;
  uVar9 = (*(int *)(iVar20 + 0xc) - iVar4) / 0x1ac;
  uVar8 = 0;
  if (uVar9 != 0) {
    iVar15 = 0;
    do {
      if (1 < uVar9) {
        iVar4 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar4 = fn_82250A18();
        }
        iVar5 = *piVar14 + iVar15;
        bVar1 = *(uint *)(iVar5 + 0x30) != uVar12;
        if (*(char *)(iVar4 + 4) == '\0') {
          if (bVar1) {
            *(int *)(iVar5 + 0x94) = *(int *)(iVar5 + 0x94) + 1;
          }
          else if (uVar11 < 2) {
            *(int *)(iVar5 + 0xc4) = *(int *)(iVar5 + 0xc4) + 1;
          }
          else {
            *(int *)(iVar5 + 0x7c) = *(int *)(iVar5 + 0x7c) + 1;
          }
        }
        else if (bVar1) {
          *(int *)(iVar5 + 0x90) = *(int *)(iVar5 + 0x90) + 1;
        }
        else if (uVar11 < 2) {
          *(int *)(iVar5 + 0xc0) = *(int *)(iVar5 + 0xc0) + 1;
        }
        else {
          *(int *)(iVar5 + 0x78) = *(int *)(iVar5 + 0x78) + 1;
        }
      }
      if (!bVar3) {
        uVar18 = 0;
        piVar2 = *(int **)(*(int *)(*piVar14 + iVar15) * 4 + **(int **)(*(int *)(param_1 + 8) + 8));
        iVar4 = *(int *)(piVar2[4] * 4 + *piVar2);
        if (*(int *)(iVar4 + 8) != 0) {
          do {
            iVar4 = fn_822ABA88(iVar4,uVar18);
            iVar4 = *(int *)(iVar4 + 0x74);
            if (((iVar4 != 0) && (iVar10 != 0)) && (cVar6 = fn_828EA5F8(iVar4), cVar6 != '\0')) {
              iVar4 = fn_823AB478(iVar4);
              iVar5 = fn_823AB478(iVar10);
              if (iVar4 == iVar5) {
                bVar3 = true;
              }
            }
            uVar18 = uVar18 + 1;
            iVar4 = *(int *)(piVar2[4] * 4 + *piVar2);
          } while ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(iVar4 + 8));
        }
      }
      iVar4 = *piVar14;
      uVar13 = uVar13 + 1;
      iVar15 = iVar15 + 0x1ac;
      uVar9 = (*(int *)(iVar20 + 0xc) - iVar4) / 0x1ac;
      uVar8 = uVar9;
    } while (uVar13 < uVar9);
  }
  iVar15 = 0;
  if (((1 < uVar8) && (*(int *)(iVar4 + 4) != 0)) &&
     ((*(int *)(iVar4 + 0x1b0) == 0 && (iVar15 = 1, *(uint *)(iVar4 + 0x30) == uVar12)))) {
    iVar4 = fn_8225F160();
    uVar9 = *(uint *)(iVar4 + 0x14);
    if (uVar9 == 0) {
      *(int *)(*piVar14 + 0x80) = *(int *)(*piVar14 + 0x80) + 1;
    }
    else if (uVar9 == 1) {
      *(int *)(*piVar14 + 0x98) = *(int *)(*piVar14 + 0x98) + 1;
    }
    else if (uVar9 < 3) {
      *(int *)(*piVar14 + 0x8c) = *(int *)(*piVar14 + 0x8c) + 1;
    }
    else if (uVar9 == 3) {
      *(int *)(*piVar14 + 0x84) = *(int *)(*piVar14 + 0x84) + 1;
    }
  }
  if (((iVar10 != 0) && (bVar3)) &&
     ((iVar4 = *(int *)(*(int *)(param_1 + 8) + 0xa0), iVar4 == 0 || (*(int *)(iVar4 + 0x40) != 1)))
     ) {
    iVar4 = *piVar14;
    uVar9 = (*(int *)(iVar20 + 0xc) - iVar4) / 0x1ac;
    if (uVar9 < 4) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(iVar4 + 0x534);
    }
    if (uVar9 < 3) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)(iVar4 + 0x388);
    }
    if (uVar9 < 2) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)(iVar4 + 0x1dc);
    }
    if (iVar15 == 0) {
      iVar20 = (*(int *)(*(int *)(param_1 + 4) + 0xc) - *(int *)(*(int *)(param_1 + 4) + 8)) / 0x1ac
      ;
      uVar7 = 4;
    }
    else {
      iVar20 = 1;
      iVar4 = fn_8225F160();
      uVar7 = *(undefined4 *)(iVar4 + 0x14);
    }
    fn_824B7728(iVar10,uVar7,iVar20,iVar15,*(undefined4 *)(*piVar14 + 0x30),uVar19,uVar17,
                      uVar16);
  }
  return;
}

