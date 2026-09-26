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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BB1BB8();
extern int fn_82BB1BE8();
extern int fn_82BB1D38();
extern int fn_82BB53C0();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern int fn_82BD11A0();
extern int fn_82F6C420();
extern unsigned int lbl_83223EC0;
extern unsigned int lbl_83223EC4;
extern unsigned int uStack_a0;


void fn_82BD1358(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  char cVar9;
  uint uVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uStack_a0;
  
  uVar16 = (ulonglong)*(uint *)(param_1 + 0xc);
  if ((int)*(uint *)(param_1 + 0xc) < 1) {
    uVar16 = 1;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar21 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar21 == (undefined4 *)0x0) {
    puVar21 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar21,*(undefined4 *)(*(int *)(param_1 + 8) + 0x5b0));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar18 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar18,*(undefined4 *)(*(int *)(param_1 + 8) + 0x5b0));
  }
  iVar22 = 0;
  lbl_83223EC0 = fn_82B7BD28(*(undefined4 *)(*(int *)(param_1 + 8) + 0x5ac),
                                   *(int *)(param_1 + 0x10) << 2);
  iVar13 = 0;
  iVar17 = *(int *)(param_1 + 0x10);
  if (0 < iVar17) {
    iVar12 = 0;
    do {
      iVar17 = iVar13;
      if (*(int *)(param_1 + 0xc) <= iVar13) {
        iVar17 = -1;
      }
      iVar13 = iVar13 + 1;
      *(int *)(iVar12 + lbl_83223EC0) = iVar17;
      iVar17 = *(int *)(param_1 + 0x10);
      iVar12 = iVar12 + 4;
    } while (iVar13 < iVar17);
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar23 = (ulonglong)uVar8;
  if ((int)uVar8 < iVar17) {
    iVar17 = uVar8 << 2;
    iVar22 = 0;
    do {
      if ((int)uVar23 == *(int *)(iVar17 + lbl_83223EC4)) {
        iVar13 = *(int *)(param_1 + 4);
        iVar22 = iVar22 + 1;
        if ((uVar23 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 4)) {
          piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
        }
        else {
          piVar6 = (int *)fn_82BC0088(iVar13,uVar23);
        }
        iVar13 = *(int *)(param_1 + 4);
        if ((uVar23 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 4)) {
          piVar5 = (int *)(*(int *)(iVar13 + 8) + iVar17);
        }
        else {
          piVar5 = (int *)fn_82BC0088(iVar13,uVar23);
        }
        *(undefined4 *)(*piVar5 + 0xc) = *(undefined4 *)(*piVar6 + 4);
        iVar13 = *(int *)(param_1 + 4);
        if ((uVar23 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 4)) {
          piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
        }
        else {
          piVar6 = (int *)fn_82BC0088(iVar13,uVar23);
        }
        if (*(int *)(*piVar6 + 0xc) == 0) {
          uVar1 = puVar18[1];
          puVar4 = puVar18;
        }
        else {
          iVar13 = *(int *)(param_1 + 4);
          if ((uVar23 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 4)) {
            piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
          }
          else {
            piVar6 = (int *)fn_82BC0088(iVar13,uVar23);
          }
          if ((int)uVar16 <= *(int *)(*piVar6 + 0xc)) goto LAB_82bd156c;
          uVar1 = puVar21[1];
          puVar4 = puVar21;
        }
        piVar6 = (int *)fn_82BC0088(puVar4,uVar1);
        *piVar6 = (int)uVar23;
      }
LAB_82bd156c:
      uVar23 = uVar23 + 1;
      iVar17 = iVar17 + 4;
    } while ((int)uVar23 < *(int *)(param_1 + 0x10));
  }
  lVar19 = 0;
  while (uVar23 = uVar16, puVar18[1] != iVar22) {
    lVar19 = lVar19 + 1;
    while (puVar21[1] != 0) {
      uVar16 = fn_82BC7368(puVar21);
      piVar6 = (int *)fn_82BC0088(puVar18,puVar18[1]);
      *piVar6 = (int)uVar16;
      iVar17 = *(int *)(param_1 + 4);
      if ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(iVar17 + 4)) {
        piVar6 = (int *)(*(int *)(iVar17 + 8) + (int)uVar16 * 4);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar17,uVar16);
      }
      *(undefined4 *)(*piVar6 + 0xc) = 0;
      fn_82BD11A0(param_1,uVar16,puVar21,uVar23);
    }
    if (puVar18[1] == iVar22) break;
    uVar8 = *(uint *)(param_1 + 0xc);
    uVar24 = (ulonglong)uVar8;
    uVar16 = uVar23 + 1;
    if ((int)uVar8 < *(int *)(param_1 + 0x10)) {
      iVar17 = uVar8 << 2;
      do {
        if ((int)uVar24 == *(int *)(iVar17 + lbl_83223EC4)) {
          iVar13 = *(int *)(param_1 + 4);
          if ((uVar24 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 4)) {
            piVar6 = (int *)(*(int *)(iVar13 + 8) + iVar17);
          }
          else {
            piVar6 = (int *)fn_82BC0088(iVar13,uVar24);
          }
          if (*(int *)(*piVar6 + 0xc) == (int)uVar23) {
            piVar6 = (int *)fn_82BC0088(puVar21,puVar21[1]);
            *piVar6 = (int)uVar24;
          }
        }
        uVar24 = uVar24 + 1;
        iVar17 = iVar17 + 4;
      } while ((int)uVar24 < *(int *)(param_1 + 0x10));
    }
  }
  iVar17 = *(int *)(param_1 + 8);
  lVar20 = 0;
  iVar22 = *(int *)(iVar17 + 0xab0);
  iVar13 = *(int *)(*(int *)(iVar17 + 0x550) + 4);
  puVar7 = (uint *)fn_82BA0FD8(iVar13,*(undefined4 *)(iVar17 + 0x5b0));
  if (puVar18[1] != 0) {
    uVar16 = (ulonglong)uStack_a0;
    do {
      uVar8 = 0;
      if (*puVar7 != 0) {
        puVar14 = puVar7 + 1;
        do {
          puVar14 = puVar14 + 1;
          *puVar14 = 0;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *puVar7);
      }
      uVar23 = 0;
      if (0 < iVar13) {
        do {
          cVar9 = fn_82BB1BB8(iVar22,uVar23);
          if (cVar9 == '\0') {
            iVar17 = (int)((uVar23 & 0xffffffff) >> 5) + 2;
            puVar7[iVar17] = 1 << ((uint)uVar23 & 0x1f) | puVar7[iVar17];
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < iVar13);
      }
      uVar8 = fn_82BC7368(puVar18);
      iVar17 = *(int *)(param_1 + 4);
      if (uVar8 < *(uint *)(iVar17 + 4)) {
        piVar6 = (int *)(*(int *)(iVar17 + 8) + uVar8 * 4);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar17,uVar8);
      }
      iVar17 = *piVar6;
      iVar15 = -1;
      iVar10 = 0;
      iVar12 = *(int *)(iVar17 + 8);
      if (0 < *(int *)(iVar17 + 4)) {
        do {
          iVar15 = iVar15 + 1;
          if (iVar15 == 7) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            iVar15 = 0;
          }
          uVar2 = *(uint *)(*(int *)(iVar15 * 4 + iVar12) * 4 + lbl_83223EC0);
          if (-1 < (int)uVar2) {
            iVar11 = (uVar2 >> 5) + 2;
            puVar7[iVar11] = 1 << (uVar2 & 0x1f) | puVar7[iVar11];
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar17 + 4));
      }
      iVar17 = *(int *)(param_1 + 4);
      bVar3 = false;
      if (uVar8 < *(uint *)(iVar17 + 4)) {
        piVar6 = (int *)(*(int *)(iVar17 + 8) + uVar8 * 4);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar17,uVar8);
      }
      uVar23 = 0;
      iVar17 = *(int *)(*(int *)(*piVar6 + 0x10) + 4);
      if (0 < iVar17) {
        iVar12 = 0;
        do {
          iVar10 = *(int *)(param_1 + 4);
          if (uVar8 < *(uint *)(iVar10 + 4)) {
            piVar6 = (int *)(*(int *)(iVar10 + 8) + uVar8 * 4);
          }
          else {
            piVar6 = (int *)fn_82BC0088(iVar10,uVar8);
          }
          iVar10 = *(int *)(*piVar6 + 0x10);
          if ((uVar23 & 0xffffffff) < (ulonglong)*(uint *)(iVar10 + 4)) {
            puVar4 = (undefined4 *)(*(int *)(iVar10 + 8) + iVar12);
          }
          else {
            puVar4 = (undefined4 *)fn_82BC0088(iVar10,uVar23);
          }
          uVar2 = *(uint *)(*(int *)*puVar4 * 4 + lbl_83223EC0);
          if ((-1 < (int)uVar2) && ((puVar7[(uVar2 >> 5) + 2] >> (uVar2 & 0x1f) & 1) == 0)) {
            bVar3 = true;
            lVar20 = lVar20 + 1;
            uVar16 = (ulonglong)uVar2;
            break;
          }
          uVar23 = uVar23 + 1;
          iVar12 = iVar12 + 4;
        } while ((int)uVar23 < iVar17);
      }
      if ((!bVar3) && (uVar16 = fn_82BB53C0(puVar7), (int)uVar16 == -1)) {
        iVar17 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar17 + 0x554) = 0x16;
                    /* WARNING: Subroutine does not return */
        fn_82F6C420(iVar17 + 0x10,1);
      }
      *(int *)(uVar8 * 4 + lbl_83223EC0) = (int)uVar16;
      fn_82BB1BE8(iVar22,uVar16);
    } while (puVar18[1] != 0);
  }
  if (puVar7 != (uint *)0x0) {
    fn_82B7BEB0(puVar7[-1],puVar7 + -1);
  }
  fn_82BB1D38(iVar22);
  fn_82BA02A8(*(undefined4 *)(param_1 + 8),0xffffffff820e82e8,
               ((ulonglong)*(uint *)(iVar22 + 0x820) - (ulonglong)*(uint *)(param_1 + 0xc)) + 1);
  if (0 < (int)lVar20) {
    fn_82BA02A8(*(undefined4 *)(param_1 + 8),0xffffffff820e82a4,lVar20);
  }
  fn_82BA02A8(*(undefined4 *)(param_1 + 8),0xffffffff820e8260,lVar19);
  iVar17 = *(int *)(param_1 + 0xc);
  if (iVar17 < *(int *)(param_1 + 0x10)) {
    iVar22 = iVar17 << 2;
    do {
      iVar17 = iVar17 + 1;
      *(undefined4 *)(iVar22 + lbl_83223EC0) =
           *(undefined4 *)(*(int *)(iVar22 + lbl_83223EC4) * 4 + lbl_83223EC0);
      iVar22 = iVar22 + 4;
    } while (iVar17 < *(int *)(param_1 + 0x10));
  }
  return;
}

