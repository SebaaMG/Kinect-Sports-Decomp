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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82011630;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_82052318;
extern unsigned int uStack_c0;


undefined8
fn_82C6ECC0(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  undefined1 *puVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  uint uStack_c0;
  
  if (param_8 == 0) {
    return 0xfffffffffffffffd;
  }
  uVar2 = *(uint *)(param_8 + 0x14);
  iVar3 = *(int *)(param_8 + 0x3c30);
  iVar4 = *(int *)(param_8 + 0x3c34);
  iVar27 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  dVar30 = SQRT(param_1 * param_1 + param_2 * param_2);
  dVar32 = SQRT(param_4 * param_4 + param_5 * param_5);
  dVar33 = dVar32;
  if (dVar30 < dVar32) {
    dVar33 = dVar30;
  }
  if (dVar33 < lbl_82005758) {
    dVar33 = dVar32;
    if (dVar30 < dVar32) {
      dVar33 = dVar30;
    }
    dVar31 = lbl_82011630;
    if (dVar33 <= lbl_82011630) goto LAB_82c6ed90;
  }
  dVar33 = dVar32;
  if (dVar30 < dVar32) {
    dVar33 = dVar30;
  }
  dVar31 = lbl_82005758;
  if ((dVar33 < lbl_82005758) && (dVar31 = dVar30, dVar32 <= dVar30)) {
    dVar31 = dVar32;
  }
LAB_82c6ed90:
  iVar7 = (int)(param_7 * lbl_82052318 + lbl_82005730);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else if (0x100 < iVar7) {
    iVar7 = 0x100;
  }
  if (lbl_8202DCE0 <= dVar31) {
    if (lbl_82005730 <= dVar31) {
      iVar29 = 0x80;
      iVar17 = 7;
      iVar21 = 8;
      uVar9 = 0x7f;
    }
    else {
      iVar29 = 0x100;
      iVar17 = 8;
      iVar21 = 9;
      uVar9 = 0xff;
    }
  }
  else {
    iVar29 = 0x200;
    iVar17 = 9;
    iVar21 = 10;
    uVar9 = 0x1ff;
  }
  iVar18 = *(int *)(param_8 + 0x3c1c) * iVar29;
  iVar20 = 0;
  dVar33 = (double)(longlong)iVar29;
  uVar19 = (ulonglong)(uint)(int)(dVar33 * param_1);
  iVar1 = (int)(dVar33 * param_4);
  if (0 < *(int *)(param_8 + 0x3c24)) {
    uVar26 = (int)(dVar33 * param_6) - iVar1;
    lVar25 = (uint)(int)(dVar33 * param_3) - uVar19;
    puVar22 = (undefined1 *)(*(int *)(param_8 + 0x3c40) + -1);
    puVar23 = (undefined1 *)(*(int *)(param_8 + 0x3c3c) + -1);
    puVar28 = (undefined1 *)(*(int *)(param_8 + 0x3c38) + -1);
    do {
      iVar8 = *(int *)(param_8 + 0x3c20);
      bVar6 = true;
      iVar24 = 0;
      lVar12 = lVar25;
      uVar11 = uVar26;
      if (0 < iVar8) {
        do {
          lVar12 = lVar12 + uVar19;
          uVar11 = uVar11 + iVar1;
          if ((((-1 < lVar12) && (uVar13 = (uint)lVar12, (int)uVar13 < (int)(uVar2 * iVar29))) &&
              (-1 < (int)uVar11)) && ((int)uVar11 < iVar18)) {
            pbVar14 = (byte *)(((int)uVar11 >> iVar17) * *(int *)(param_8 + 0x14) +
                               ((int)uVar13 >> iVar17) + *(int *)(param_8 + 0x3c2c));
            puVar28[1] = (char)(((int)((((iVar29 - (uVar11 & uVar9)) - (uVar13 & uVar9)) *
                                        (uint)*pbVar14 +
                                        (uint)pbVar14[*(int *)(param_8 + 0x14)] * (uVar11 & uVar9) +
                                       (uint)pbVar14[1] * (uVar13 & uVar9)) * iVar7) >> 8) >> iVar17
                               );
            puVar28 = puVar28 + 1;
            if (bVar6) {
              iVar10 = ((int)uVar11 >> iVar21) * iVar27 + ((int)uVar13 >> iVar21);
              uVar5 = (int)uVar11 >> 1 & uVar9;
              iVar15 = iVar10 + iVar3;
              uVar13 = (int)uVar13 >> 1 & uVar9;
              iVar8 = (iVar29 - uVar5) - uVar13;
              bVar6 = false;
              iVar16 = iVar10 + iVar4;
              puVar23 = puVar23 + 1;
              *puVar23 = (char)(((int)((*(byte *)(iVar15 + iVar27) * uVar5 +
                                        *(byte *)(iVar15 + 1) * uVar13 +
                                       (uint)*(byte *)(iVar10 + iVar3) * iVar8) * iVar7) >> 8) >>
                               iVar17);
              uStack_c0 = (uint)*(byte *)(iVar10 + iVar4);
              puVar22 = puVar22 + 1;
              *puVar22 = (char)(((int)((*(byte *)(iVar16 + iVar27) * uVar5 +
                                        *(byte *)(iVar16 + 1) * uVar13 + uStack_c0 * iVar8) * iVar7)
                                >> 8) >> iVar17);
            }
            else {
              bVar6 = true;
            }
          }
          iVar8 = *(int *)(param_8 + 0x3c20);
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar8);
      }
      lVar25 = lVar25 + (ulonglong)(uint)(int)(dVar33 * param_2);
      iVar24 = 0;
      uVar26 = uVar26 + (int)(dVar33 * param_5);
      lVar12 = lVar25;
      uVar11 = uVar26;
      if (0 < iVar8) {
        do {
          lVar12 = lVar12 + uVar19;
          uVar11 = uVar11 + iVar1;
          if (((-1 < lVar12) && (uVar13 = (uint)lVar12, (int)uVar13 < (int)(uVar2 * iVar29))) &&
             ((-1 < (int)uVar11 && ((int)uVar11 < iVar18)))) {
            pbVar14 = (byte *)(((int)uVar11 >> iVar17) * *(int *)(param_8 + 0x14) +
                               ((int)uVar13 >> iVar17) + *(int *)(param_8 + 0x3c2c));
            uStack_c0 = (uint)pbVar14[1];
            puVar28 = puVar28 + 1;
            *puVar28 = (char)(((int)((((iVar29 - (uVar11 & uVar9)) - (uVar13 & uVar9)) *
                                      (uint)*pbVar14 +
                                      (uint)pbVar14[*(int *)(param_8 + 0x14)] * (uVar11 & uVar9) +
                                     uStack_c0 * (uVar13 & uVar9)) * iVar7) >> 8) >> iVar17);
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < *(int *)(param_8 + 0x3c20));
      }
      iVar20 = iVar20 + 2;
      lVar25 = lVar25 + (ulonglong)(uint)(int)(dVar33 * param_2);
      uVar26 = uVar26 + (int)(dVar33 * param_5);
    } while (iVar20 < *(int *)(param_8 + 0x3c24));
  }
  return 0;
}

