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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
extern int fn_82A63B70();
extern int fn_82A63B98();
extern int fn_82A67290();
extern int fn_82A672C0();
extern int fn_82A67308();
extern int fn_82A67350();
extern int fn_82A67380();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201467C;
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_82057518;
extern unsigned int lbl_8208E080;
extern unsigned int lbl_8208E084;
extern unsigned int lbl_8208E088;


void fn_82A673A8(uint *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  code *pcVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  
  uVar32 = 0;
  uVar7 = param_1[8];
  uVar37 = (ulonglong)uVar7;
  uVar35 = *param_1;
  uVar36 = (ulonglong)uVar35;
  iVar29 = (int)(float)param_1[4];
  uVar26 = (ulonglong)param_1[1];
  uVar8 = param_1[6];
  uVar25 = (ulonglong)uVar8;
  dVar42 = (double)(float)param_1[3];
  uVar9 = param_1[7];
  lVar27 = ((ulonglong)uVar7 & 0x1fffffff) * 8 + (ulonglong)param_1[2];
  uVar34 = param_1[9];
  uVar33 = (ulonglong)uVar34;
  lVar24 = (longlong)iVar29 * (longlong)(int)uVar7;
  uVar10 = param_1[5];
  dVar41 = (double)((float)param_1[4] - (float)(longlong)iVar29);
  if (uVar10 == 1) {
    lVar23 = 2;
    pcVar22 = fn_82A63B70;
  }
  else if (uVar10 == 2) {
    lVar23 = 3;
    pcVar22 = fn_82A672C0;
  }
  else {
    if (uVar10 == 3) {
      pcVar22 = fn_82A63B98;
    }
    else {
      if (uVar10 == 4) {
        lVar23 = 3;
        pcVar22 = fn_82A67308;
        goto LAB_82a674b0;
      }
      if (uVar10 == 5) {
        pcVar22 = fn_82A67350;
      }
      else {
        if (uVar10 == 0) {
          lVar23 = 1;
          pcVar22 = fn_82A67290;
          goto LAB_82a674b0;
        }
        pcVar22 = fn_82A67380;
      }
    }
    lVar23 = 4;
  }
LAB_82a674b0:
  if ((uVar25 != 0) && (uVar7 != 0)) {
    lVar28 = lVar27 + -4;
    uVar30 = uVar36;
    uVar31 = uVar37;
    do {
      dVar39 = (double)(*pcVar22)(uVar30);
      lVar28 = lVar28 + 4;
      *(float *)lVar28 = (float)dVar39;
      uVar31 = uVar31 - 1;
      uVar30 = uVar30 + lVar23;
    } while (uVar31 != 0);
  }
  dVar39 = (double)lbl_82002AE0;
  fVar1 = lbl_8201467C;
  fVar2 = lbl_8201DFEC;
  fVar3 = lbl_82057518;
  fVar4 = lbl_8208E080;
  fVar5 = lbl_8208E084;
  fVar6 = lbl_8208E088;
  while (lbl_8201467C = fVar1, lbl_8201DFEC = fVar2, lbl_82057518 = fVar3, lbl_8208E080 = fVar4,
        lbl_8208E084 = fVar5, lbl_8208E088 = fVar6, (int)uVar34 < (int)uVar7) {
    if ((ulonglong)uVar9 <= (uVar32 & 0xffffffff)) goto LAB_82a67984;
    iVar29 = (int)(uVar33 + uVar37);
    if ((int)uVar33 < iVar29) {
      uVar30 = uVar33;
      if (3 < iVar29 - (int)uVar33) {
        lVar16 = (uVar32 & 0x3fffffff) * 4 + uVar26 + -4;
        lVar19 = (uVar33 & 0x3fffffff) * 4 + lVar27 + -4;
        lVar28 = ((uVar33 - uVar37) - 1 & 0x3fffffff) * 4 + lVar27;
        do {
          iVar11 = (int)lVar28;
          uVar30 = uVar30 + 4;
          iVar12 = (int)lVar19;
          uVar32 = uVar32 + 4;
          fVar1 = *(float *)(iVar11 + 8);
          fVar2 = *(float *)(iVar11 + 0xc);
          fVar3 = *(float *)(iVar12 + 8);
          fVar4 = *(float *)(iVar12 + 0xc);
          lVar28 = lVar28 + 0x10;
          fVar5 = *(float *)lVar28;
          lVar19 = lVar19 + 0x10;
          fVar6 = *(float *)lVar19;
          iVar13 = (int)lVar16;
          *(float *)(iVar13 + 4) =
               (float)((double)(float)((double)*(float *)(iVar12 + 4) -
                                      (double)*(float *)(iVar11 + 4)) * dVar42 +
                      (double)*(float *)(iVar11 + 4));
          *(float *)(iVar13 + 8) =
               (float)((double)(float)((double)fVar3 - (double)fVar1) * dVar42 + (double)fVar1);
          *(float *)(iVar13 + 0xc) =
               (float)((double)(float)((double)fVar4 - (double)fVar2) * dVar42 + (double)fVar2);
          lVar16 = lVar16 + 0x10;
          *(float *)lVar16 =
               (float)((double)(float)((double)fVar6 - (double)fVar5) * dVar42 + (double)fVar5);
        } while ((int)uVar30 < iVar29 + -3);
      }
      if ((int)uVar30 < iVar29) {
        lVar20 = (uVar33 + uVar37) - uVar30;
        lVar16 = (uVar32 & 0x3fffffff) * 4 + uVar26 + -4;
        lVar19 = (uVar30 & 0x3fffffff) * 4 + lVar27 + -4;
        lVar28 = ((uVar30 - uVar37) - 1 & 0x3fffffff) * 4 + lVar27;
        uVar32 = lVar20 + uVar32;
        do {
          lVar28 = lVar28 + 4;
          lVar19 = lVar19 + 4;
          lVar16 = lVar16 + 4;
          *(float *)lVar16 =
               (float)((double)(float)((double)*(float *)lVar19 - (double)*(float *)lVar28) * dVar42
                      + (double)*(float *)lVar28);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
    }
    uVar33 = lVar24 + uVar33;
    for (dVar42 = dVar41 + dVar42; dVar42 = (double)(float)dVar42, dVar39 <= dVar42;
        dVar42 = dVar42 - dVar39) {
      uVar33 = uVar33 + uVar37;
    }
    fVar1 = lbl_8201467C;
    fVar2 = lbl_8201DFEC;
    fVar3 = lbl_82057518;
    fVar4 = lbl_8208E080;
    fVar5 = lbl_8208E084;
    fVar6 = lbl_8208E088;
    uVar34 = (uint)uVar33;
  }
  if ((uVar32 & 0xffffffff) < (ulonglong)uVar9) {
    do {
      iVar29 = (int)uVar33 + uVar7;
      if ((int)uVar33 < iVar29) {
        uVar34 = param_1[5];
        lVar21 = uVar33 + (uVar33 & 0x7fffffff) * 2;
        lVar19 = (uVar33 & 0x7fffffff) * 2 + uVar36;
        lVar17 = (uVar33 - uVar37 & 0x3fffffff) * 4 + uVar36;
        lVar28 = (uVar32 & 0x3fffffff) * 4 + uVar26 + -4;
        lVar20 = (uVar33 & 0x3fffffff) * 4 + uVar36;
        lVar16 = (uVar33 - uVar37 & 0x7fffffff) * 2 + uVar36;
        uVar30 = uVar33;
        do {
          if (uVar34 == 1) {
            dVar38 = (double)((float)(longlong)*(short *)lVar16 * fVar1);
            dVar40 = (double)((float)(longlong)*(short *)lVar19 * fVar1);
          }
          else {
            iVar11 = (int)lVar21;
            if (uVar34 == 2) {
              puVar14 = (undefined1 *)(iVar11 + uVar7 * -3 + uVar35);
              dVar38 = (double)((float)(longlong)
                                       ((int)((uint)CONCAT21(CONCAT11(puVar14[2],puVar14[1]),
                                                             *puVar14) << 8) >> 0xc) * fVar5);
              dVar40 = (double)((float)(longlong)
                                       ((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)
                                                                       (iVar11 + uVar35 + 2),
                                                                      *(undefined1 *)
                                                                       (iVar11 + uVar35 + 1)),
                                                             *(undefined1 *)(iVar11 + uVar35)) << 8)
                                       >> 0xc) * fVar5);
            }
            else {
              piVar18 = (int *)lVar17;
              piVar15 = (int *)lVar20;
              if (uVar34 == 3) {
                dVar40 = (double)((float)(longlong)(*piVar15 >> 0xc) * fVar5);
                dVar38 = (double)((float)(longlong)(*piVar18 >> 0xc) * fVar5);
              }
              else if (uVar34 == 4) {
                puVar14 = (undefined1 *)(iVar11 + uVar7 * -3 + uVar35);
                dVar38 = (double)((float)(longlong)
                                         ((int)((uint)CONCAT21(CONCAT11(puVar14[2],puVar14[1]),
                                                               *puVar14) << 8) >> 8) * fVar3);
                dVar40 = (double)((float)(longlong)
                                         ((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)
                                                                         (iVar11 + uVar35 + 2),
                                                                        *(undefined1 *)
                                                                         (iVar11 + uVar35 + 1)),
                                                               *(undefined1 *)(iVar11 + uVar35)) <<
                                               8) >> 8) * fVar3);
              }
              else if (uVar34 == 5) {
                dVar40 = (double)((float)(longlong)(*piVar15 >> 8) * fVar3);
                dVar38 = (double)((float)(longlong)(*piVar18 >> 8) * fVar3);
              }
              else if (uVar34 == 0) {
                dVar40 = (double)(((float)*(byte *)((int)uVar30 + uVar35) - fVar2) * fVar4);
                dVar38 = (double)(((float)*(byte *)((uVar35 - uVar7) + (int)uVar30) - fVar2) * fVar4
                                 );
              }
              else {
                dVar40 = (double)((float)(longlong)*piVar15 * fVar6);
                dVar38 = (double)((float)(longlong)*piVar18 * fVar6);
              }
            }
          }
          uVar30 = uVar30 + 1;
          uVar32 = uVar32 + 1;
          lVar16 = lVar16 + 2;
          lVar19 = lVar19 + 2;
          lVar21 = lVar21 + 3;
          lVar17 = lVar17 + 4;
          lVar20 = lVar20 + 4;
          lVar28 = lVar28 + 4;
          *(float *)lVar28 = (float)((double)(float)(dVar40 - dVar38) * dVar42 + dVar38);
        } while ((int)uVar30 < iVar29);
      }
      uVar33 = lVar24 + uVar33;
      for (dVar42 = dVar41 + dVar42; dVar42 = (double)(float)dVar42, dVar39 <= dVar42;
          dVar42 = dVar42 - dVar39) {
        uVar33 = uVar33 + uVar37;
      }
    } while ((uVar32 & 0xffffffff) < (ulonglong)uVar9);
  }
LAB_82a67984:
  uVar35 = (uint)uVar33;
  if ((int)(uint)uVar33 < (int)(uVar8 - uVar7)) {
    uVar35 = uVar8 - uVar7;
  }
  param_1[3] = (uint)(float)dVar42;
  uVar32 = 0;
  if (uVar35 != uVar8) {
    uVar32 = -uVar37;
  }
  param_1[9] = (uint)uVar32;
  uVar37 = (uVar32 & 0xffffffff) - uVar37;
  iVar29 = (int)-uVar25;
  if ((int)uVar37 < iVar29) {
    if (3 < iVar29 - (int)uVar37) {
      lVar28 = (uVar37 & 0x3fffffff) * 4 + lVar27 + -4;
      lVar24 = ((uVar37 + uVar25) - 3 & 0x3fffffff) * 4 + lVar27;
      do {
        uVar33 = uVar37 + uVar25 + 2;
        iVar11 = (int)lVar28;
        *(undefined4 *)(iVar11 + 4) = *(undefined4 *)((int)lVar24 + 0xc);
        uVar32 = uVar37 + uVar25 + 3;
        lVar24 = lVar24 + 0x10;
        *(undefined4 *)(iVar11 + 8) = *(undefined4 *)lVar24;
        uVar37 = uVar37 + 4;
        *(undefined4 *)(iVar11 + 0xc) =
             *(undefined4 *)((int)((uVar33 & 0xffffffff) << 2) + (int)lVar27);
        lVar28 = lVar28 + 0x10;
        *(undefined4 *)lVar28 = *(undefined4 *)((int)((uVar32 & 0xffffffff) << 2) + (int)lVar27);
      } while ((int)uVar37 < iVar29 + -3);
    }
    if ((int)uVar37 < iVar29) {
      lVar19 = -uVar25 - uVar37;
      lVar28 = (uVar37 & 0x3fffffff) * 4 + lVar27 + -4;
      lVar24 = (uVar37 + uVar25 & 0x3fffffff) * 4 + lVar27 + -4;
      uVar37 = lVar19 + uVar37;
      do {
        lVar24 = lVar24 + 4;
        lVar28 = lVar28 + 4;
        *(undefined4 *)lVar28 = *(undefined4 *)lVar24;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  if ((int)uVar37 < 0) {
    lVar24 = (uVar37 & 0x3fffffff) * 4 + lVar27 + -4;
    lVar27 = (longlong)(int)((int)uVar37 + uVar8) * (longlong)(int)lVar23 + uVar36;
    lVar28 = -uVar37;
    do {
      dVar42 = (double)(*pcVar22)(lVar27);
      lVar24 = lVar24 + 4;
      *(float *)lVar24 = (float)dVar42;
      lVar28 = lVar28 + -1;
      lVar27 = lVar27 + lVar23;
    } while (lVar28 != 0);
  }
  return;
}

