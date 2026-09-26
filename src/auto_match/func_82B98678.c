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
extern int fn_82B98348();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82011638;
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_8202EE88;
extern unsigned int lbl_8202EE8C;
extern unsigned int lbl_8202EE90;
extern unsigned int lbl_8202EE94;
extern unsigned int lbl_8202EE98;
extern unsigned int lbl_821AAD20;


void fn_82B98678(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar26;
  undefined8 uVar25;
  ushort *puVar27;
  uint uVar28;
  float *pfVar29;
  
  iVar26 = fn_82F6A548();
  if (*(int *)(iVar26 + 0xa4) == 0) {
    uVar25 = 0xffffffff8007000e;
  }
  else {
    if (((((param_2 & 0xffffffff) < (ulonglong)*(uint *)(iVar26 + 0x88)) ||
         ((ulonglong)*(uint *)(iVar26 + 0x90) <= (param_2 & 0xffffffff))) ||
        ((param_3 & 0xffffffff) < (ulonglong)*(uint *)(iVar26 + 0x94))) ||
       ((ulonglong)*(uint *)(iVar26 + 0x98) <= (param_3 & 0xffffffff))) {
      uVar25 = fn_82B98348(iVar26);
      if ((int)uVar25 < 0) goto LAB_82b98abc;
      iVar6 = (int)param_2;
      *(int *)(iVar26 + 0x88) = iVar6;
      iVar7 = (int)param_3;
      *(int *)(iVar26 + 0x94) = iVar7;
      *(int *)(iVar26 + 0x90) = iVar6 + 1;
      *(int *)(iVar26 + 0x98) = iVar7 + 1;
      fVar24 = lbl_821AAD20;
      fVar23 = lbl_8202EE98;
      fVar22 = lbl_8202EE94;
      fVar21 = lbl_8202EE90;
      fVar20 = lbl_8202EE8C;
      fVar19 = lbl_8202EE88;
      fVar18 = lbl_8201DFEC;
      fVar16 = lbl_82011638;
      fVar8 = lbl_82005328;
      fVar17 = lbl_82002AE0;
      if (param_4 != 0) {
        uVar28 = *(uint *)(iVar26 + 0x84);
        iVar3 = *(int *)(iVar26 + 4);
        puVar27 = (ushort *)
                  (*(int *)(iVar26 + 0x60) * iVar6 + *(int *)(iVar26 + 100) * iVar7 + uVar28 * 2 +
                  *(int *)(iVar26 + 0x20));
        if (0x1828004a < iVar3) {
          if (iVar3 < 0x1828004d) {
            if (uVar28 < *(uint *)(iVar26 + 0x8c)) {
              puVar27 = puVar27 + -1;
              pfVar29 = (float *)(*(int *)(iVar26 + 0x80) + -4);
              do {
                uVar4 = *(uint *)(iVar26 + 0xa8);
                uVar28 = uVar28 + 2;
                uVar5 = *(uint *)(iVar26 + 0xac);
                uVar1 = puVar27[1];
                puVar27 = puVar27 + 2;
                uVar2 = *puVar27;
                pfVar29[4] = fVar17;
                fVar16 = (float)(uVar2 >> (uVar5 & 0x3f) & 0xff) * fVar8;
                pfVar29[3] = fVar16;
                pfVar29[7] = fVar16;
                pfVar29[6] = (float)(uVar2 >> (uVar4 & 0x3f) & 0xff) * fVar8;
                fVar16 = (float)(uVar1 >> (uVar5 & 0x3f) & 0xff) * fVar8;
                pfVar29[1] = fVar16;
                pfVar29[5] = fVar16;
                pfVar29[2] = (float)(uVar1 >> (uVar4 & 0x3f) & 0xff) * fVar8;
                pfVar29 = pfVar29 + 8;
                *pfVar29 = fVar17;
              } while (uVar28 < *(uint *)(iVar26 + 0x8c));
            }
          }
          else if (((0x1a20004a < iVar3) && (iVar3 < 0x1a20004d)) &&
                  (uVar28 < *(uint *)(iVar26 + 0x8c))) {
            pfVar29 = (float *)(*(int *)(iVar26 + 0x80) + -8);
            do {
              uVar1 = *puVar27;
              uVar2 = puVar27[1];
              uVar4 = *(uint *)(iVar26 + 0xac);
              uVar5 = *(uint *)(iVar26 + 0xa8);
              pfVar29[5] = fVar17;
              fVar9 = (float)(((uint)(((ulonglong)uVar1 & 0xff) << 8) | (uint)(uVar1 >> 8)) >>
                              (uVar4 & 0x3f) & 0xff) - fVar18;
              fVar12 = (float)(((uint)(((ulonglong)uVar2 & 0xff) << 8) | (uint)(uVar2 >> 8)) >>
                               (uVar4 & 0x3f) & 0xff) - fVar18;
              fVar8 = ((float)(((uint)(((ulonglong)uVar1 & 0xff) << 8) | (uint)(uVar1 >> 8)) >>
                               (uVar5 & 0x3f) & 0xff) - fVar16) * fVar20;
              fVar10 = fVar9 * fVar21;
              fVar14 = fVar12 * fVar19;
              fVar9 = fVar9 * fVar23;
              fVar12 = fVar12 * fVar22;
              fVar11 = fVar8 + fVar14;
              pfVar29[2] = fVar11;
              fVar13 = fVar9 + fVar8;
              pfVar29[4] = fVar13;
              fVar15 = (fVar8 - fVar10) - fVar12;
              pfVar29[3] = fVar15;
              fVar8 = fVar24;
              if ((fVar24 <= fVar11) && (fVar8 = fVar11, fVar17 < fVar11)) {
                fVar8 = fVar17;
              }
              pfVar29[2] = fVar8;
              fVar8 = fVar24;
              if ((fVar24 <= fVar15) && (fVar8 = fVar15, fVar17 < fVar15)) {
                fVar8 = fVar17;
              }
              pfVar29[3] = fVar8;
              fVar8 = fVar24;
              if ((fVar24 <= fVar13) && (fVar8 = fVar13, fVar17 < fVar13)) {
                fVar8 = fVar17;
              }
              fVar11 = ((float)(((uint)(((ulonglong)uVar2 & 0xff) << 8) | (uint)(uVar2 >> 8)) >>
                                (uVar5 & 0x3f) & 0xff) - fVar16) * fVar20;
              pfVar29[4] = fVar8;
              pfVar29[9] = fVar17;
              fVar14 = fVar11 + fVar14;
              pfVar29[6] = fVar14;
              fVar9 = fVar11 + fVar9;
              pfVar29[8] = fVar9;
              fVar12 = (fVar11 - fVar10) - fVar12;
              pfVar29[7] = fVar12;
              fVar8 = fVar24;
              if ((fVar24 <= fVar14) && (fVar8 = fVar14, fVar17 < fVar14)) {
                fVar8 = fVar17;
              }
              pfVar29[6] = fVar8;
              fVar8 = fVar24;
              if ((fVar24 <= fVar12) && (fVar8 = fVar12, fVar17 < fVar12)) {
                fVar8 = fVar17;
              }
              pfVar29[7] = fVar8;
              fVar8 = fVar24;
              if ((fVar24 <= fVar9) && (fVar8 = fVar9, fVar17 < fVar9)) {
                fVar8 = fVar17;
              }
              uVar28 = uVar28 + 2;
              pfVar29 = pfVar29 + 8;
              *pfVar29 = fVar8;
              puVar27 = puVar27 + 2;
            } while (uVar28 < *(uint *)(iVar26 + 0x8c));
          }
        }
      }
    }
    uVar25 = 0;
  }
LAB_82b98abc:
  fn_82F6A594(uVar25);
  return;
}

