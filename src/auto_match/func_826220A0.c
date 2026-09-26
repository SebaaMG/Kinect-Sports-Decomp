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
#define NAN(x) ((x) != (x))
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821CC160;


void fn_826220A0(int param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar13;
  longlong lVar12;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar21;
  uint uVar22;
  longlong lVar20;
  uint uVar24;
  longlong lVar23;
  float fVar25;
  uint uVar28;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  
  fVar25 = param_2[2] - param_3[2];
  uVar1 = (uint)(param_3[1] * lbl_821956B4 + lbl_8218E8E8);
  uVar2 = (uint)(param_4[1] * lbl_821956B4 + lbl_8218E8E8);
  uVar3 = (uint)(param_2[1] * lbl_821956B4 + lbl_8218E8E8);
  uVar4 = (uint)(*param_4 * lbl_821956B4 + lbl_8218E8E8);
  uVar5 = (uint)(*param_2 * lbl_821956B4 + lbl_8218E8E8);
  uVar6 = (uint)(*param_3 * lbl_821956B4 + lbl_8218E8E8);
  fVar7 = param_2[2];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar25 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar25) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar7 = param_3[2];
  }
  fVar25 = fVar7 - param_4[2];
  uVar32 = (ulonglong)uVar1 - (ulonglong)uVar2;
  uVar31 = (ulonglong)uVar2 - (ulonglong)uVar3;
  uVar30 = (ulonglong)uVar5 - (ulonglong)uVar6;
  uVar33 = (ulonglong)uVar3 - (ulonglong)uVar1;
  uVar29 = (ulonglong)uVar6 - (ulonglong)uVar4;
  uVar11 = (ulonglong)uVar4 - (ulonglong)uVar5;
  uVar39 = (uVar32 & 0xfffffff) * 0x10;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar25 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar25) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar7 = param_4[2];
  }
  uVar37 = (uVar31 & 0xfffffff) * 0x10;
  uVar41 = (uVar30 & 0xfffffff) << 4;
  uVar38 = (uVar29 & 0xfffffff) << 4;
  uVar36 = (uVar11 & 0xfffffff) << 4;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar7 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar7) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar7 = lbl_821CC160;
  }
  uVar14 = (uint)((uVar41 & 0x1fffffff) << 3);
  if ((int)uVar41 < 1) {
    uVar14 = 0;
  }
  iVar15 = (int)((uVar39 & 0x1fffffff) << 3);
  if (-1 < (int)uVar39) {
    iVar15 = 0;
  }
  iVar16 = (int)((uVar38 & 0x1fffffff) << 3);
  if ((int)uVar38 < 1) {
    iVar16 = 0;
  }
  iVar17 = (int)((uVar37 & 0x1fffffff) << 3);
  if (-1 < (int)uVar37) {
    iVar17 = 0;
  }
  iVar18 = (int)((uVar36 & 0x1fffffff) << 3);
  if ((int)uVar36 < 1) {
    iVar18 = 0;
  }
  uVar28 = uVar5;
  if ((int)uVar6 <= (int)uVar5) {
    uVar28 = uVar6;
  }
  if ((int)uVar4 <= (int)uVar28) {
    uVar28 = uVar4;
  }
  uVar24 = uVar3;
  if ((int)uVar1 <= (int)uVar3) {
    uVar24 = uVar1;
  }
  if ((int)uVar2 <= (int)uVar24) {
    uVar24 = uVar2;
  }
  uVar21 = uVar5;
  if ((int)uVar5 < (int)uVar6) {
    uVar21 = uVar6;
  }
  uVar22 = uVar4;
  if ((int)uVar4 <= (int)uVar21) {
    uVar22 = uVar21;
  }
  uVar21 = uVar3;
  if ((int)uVar3 < (int)uVar1) {
    uVar21 = uVar1;
  }
  uVar13 = uVar2;
  if ((int)uVar2 <= (int)uVar21) {
    uVar13 = uVar21;
  }
  uVar28 = -((int)(uVar28 + 0xf) >> 0x1f) - 1U & (int)(uVar28 + 0xf) >> 4;
  if (0xbf < (int)uVar28) {
    uVar28 = 0xc0;
  }
  uVar24 = -((int)(uVar24 + 0xf) >> 0x1f) - 1U & (int)(uVar24 + 0xf) >> 4;
  if (0x5f < (int)uVar24) {
    uVar24 = 0x60;
  }
  uVar21 = -((int)(uVar22 + 0xf) >> 0x1f) - 1U & (int)(uVar22 + 0xf) >> 4;
  if (0xbf < (int)uVar21) {
    uVar21 = 0xc0;
  }
  uVar22 = -((int)(uVar13 + 0xf) >> 0x1f) - 1U & (int)(uVar13 + 0xf) >> 4;
  if (0x5f < (int)uVar22) {
    uVar22 = 0x60;
  }
  uVar36 = (longlong)((int)uVar28 >> 3) + (ulonglong)((int)uVar28 < 0 && (uVar28 & 7) != 0);
  uVar39 = (longlong)((int)uVar24 >> 3) + (ulonglong)((int)uVar24 < 0 && (uVar24 & 7) != 0);
  uVar28 = ((int)uVar21 >> 3) + (uint)((int)uVar21 < 0 && (uVar21 & 7) != 0);
  uVar28 = -((int)uVar28 >> 0x1f) - 1U & uVar28;
  if (0x16 < (int)uVar28) {
    uVar28 = 0x17;
  }
  uVar37 = (longlong)((int)uVar22 >> 3) + (ulonglong)((int)uVar22 < 0 && (uVar22 & 7) != 0);
  uVar37 = ((uVar37 & 0xffffffff) >> 0x1f) - 1 & uVar37;
  if (10 < (int)uVar37) {
    uVar37 = 0xb;
  }
  if ((int)uVar39 <= (int)uVar37) {
    lVar35 = uVar39 * 0x18;
    uVar38 = (uVar39 & 0x1fffffff) << 3;
    lVar34 = (uVar37 - uVar39) + 1;
    do {
      if ((int)uVar36 <= (int)uVar28) {
        iVar9 = (int)((uVar38 & 0xffffffff) << 4);
        uVar37 = (uVar36 & 0x1fffffff) << 3;
        uVar39 = uVar36;
        do {
          iVar10 = (int)((uVar37 & 0xffffffff) << 4);
          lVar12 = ((longlong)iVar9 * (longlong)(int)uVar30 -
                   (longlong)iVar10 * (longlong)(int)uVar33) +
                   (ulonglong)((int)uVar33 * uVar5 - (int)uVar30 * uVar3);
          lVar42 = ((longlong)iVar9 * (longlong)(int)uVar29 -
                   (longlong)iVar10 * (longlong)(int)uVar32) +
                   (ulonglong)((int)uVar32 * uVar6 - (int)uVar29 * uVar1);
          lVar40 = ((longlong)iVar9 * (longlong)(int)uVar11 -
                   (longlong)iVar10 * (longlong)(int)uVar31) +
                   (ulonglong)((int)uVar31 * uVar4 - (int)uVar11 * uVar2);
          if (((-1 < (longlong)(lVar12 + (ulonglong)uVar14)) &&
              (-1 < (longlong)(lVar42 + (ulonglong)(uint)(iVar16 - iVar15)))) &&
             (-1 < (longlong)(lVar40 + (ulonglong)(uint)(iVar18 - iVar17)))) {
            lVar26 = (lVar35 + uVar39) * 0x108 + (ulonglong)*(uint *)(param_1 + 0xd0);
            pfVar8 = (float *)lVar26;
            if ((uint)fVar7 <= (uint)pfVar8[1]) {
              if (((0 < (longlong)
                        (lVar12 + (ulonglong)
                                  (((int)((uVar30 & 0xffffffff) << 7) -
                                   (int)((uVar33 & 0xffffffff) << 7)) - uVar14))) &&
                  (0 < (longlong)
                       (lVar42 + (ulonglong)
                                 (uint)(((int)((uVar29 & 0xffffffff) << 7) -
                                        (int)((uVar32 & 0xffffffff) << 7)) - (iVar16 - iVar15)))))
                 && (0 < (longlong)
                         (lVar40 + (ulonglong)
                                   (uint)(((int)((uVar11 & 0xffffffff) << 7) -
                                          (int)((uVar31 & 0xffffffff) << 7)) - (iVar18 - iVar17)))))
              {
                if ((uint)fVar7 < (uint)*pfVar8) {
                  lVar23 = lVar26 + 4;
                  lVar43 = 0x40;
                  do {
                    lVar23 = lVar23 + 4;
                    *(float *)lVar23 = fVar7;
                    lVar43 = lVar43 + -1;
                  } while (lVar43 != 0);
                  pfVar8[1] = fVar7;
                  *pfVar8 = fVar7;
                }
                if (*pfVar8 == fVar7) goto LAB_82622610;
              }
              fVar25 = *pfVar8;
              if ((uint)fVar7 <= (uint)*pfVar8) {
                fVar25 = fVar7;
              }
              *pfVar8 = fVar25;
              fVar25 = pfVar8[1];
              if ((uint)pfVar8[1] <= (uint)fVar7) {
                fVar25 = fVar7;
              }
              pfVar8[1] = fVar25;
              lVar26 = lVar26 + 8;
              lVar23 = 8;
              do {
                lVar44 = 8;
                lVar43 = lVar40;
                lVar19 = lVar42;
                lVar20 = lVar12;
                lVar27 = lVar26;
                do {
                  if (((-1 < (int)lVar20) && (-1 < (int)lVar19)) && (-1 < (int)lVar43)) {
                    fVar25 = *(float *)lVar27;
                    if ((uint)fVar7 <= (uint)fVar25) {
                      fVar25 = fVar7;
                    }
                    *(float *)lVar27 = fVar25;
                  }
                  lVar27 = lVar27 + 4;
                  lVar43 = lVar43 + (uVar31 & 0xfffffff) * -0x10;
                  lVar20 = lVar20 + (uVar33 & 0xfffffff) * -0x10;
                  lVar19 = lVar19 + (uVar32 & 0xfffffff) * -0x10;
                  lVar44 = lVar44 + -1;
                } while (lVar44 != 0);
                lVar23 = lVar23 + -1;
                lVar12 = lVar12 + (uVar30 & 0xfffffff) * 0x10;
                lVar26 = lVar26 + 0x20;
                lVar42 = lVar42 + (uVar29 & 0xfffffff) * 0x10;
                lVar40 = lVar40 + (uVar11 & 0xfffffff) * 0x10;
              } while (lVar23 != 0);
            }
          }
LAB_82622610:
          uVar39 = uVar39 + 1;
          uVar37 = uVar37 + 8;
        } while ((int)uVar39 <= (int)uVar28);
      }
      lVar34 = lVar34 + -1;
      uVar38 = uVar38 + 8;
      lVar35 = lVar35 + 0x18;
    } while (lVar34 != 0);
  }
  return;
}

