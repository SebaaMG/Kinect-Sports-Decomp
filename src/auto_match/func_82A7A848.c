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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int iStack_130;
extern unsigned int iStack_150;
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;
extern unsigned int lbl_820A6D70;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_18c;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82A7A848(float *param_1,uint param_2,byte *param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint uStack_18c;
  int aiStack_160 [4];
  int iStack_150;
  int aiStack_140 [4];
  int iStack_130;
  uint auStack_120 [4];
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint auStack_100 [4];
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  int aiStack_e0 [8];
  int aiStack_c0 [48];
  
  dVar5 = lbl_820A6D70;
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar7 = 0;
  }
  else {
    uStack_18c = param_2 >> 3;
    pbVar9 = param_3;
    if (uStack_18c != 0) {
      do {
        uVar10 = param_5 & 0xffff;
        if (uStack_18c < (param_5 & 0xffff)) {
          uVar10 = uStack_18c;
        }
        uStack_18c = uStack_18c - uVar10;
        uVar12 = 0;
        uVar20 = 0;
        iVar7 = 0;
        lVar24 = 5;
        pfVar8 = param_1;
        do {
          if (uVar20 < uVar10) {
            fVar1 = *pfVar8;
            fVar2 = pfVar8[1];
            pfVar8 = pfVar8 + 2;
            *(int *)((int)aiStack_160 + iVar7) = (int)((double)fVar1 * dVar5);
            *(int *)((int)aiStack_140 + iVar7) = (int)((double)fVar2 * dVar5);
          }
          else {
            *(undefined4 *)((int)aiStack_160 + iVar7) = 0;
            *(undefined4 *)((int)aiStack_140 + iVar7) = 0;
          }
          uVar20 = uVar20 + 1;
          iVar7 = iVar7 + 4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        do {
          iVar7 = *(int *)(&lbl_820A6CF8 + uVar12);
          iVar3 = *(int *)(&lbl_820A6D14 + uVar12);
          iVar19 = aiStack_160[0] * iVar3 + aiStack_160[1] * iVar7 >> 8;
          *(undefined4 *)((int)auStack_120 + uVar12) = 0;
          *(undefined4 *)((int)auStack_100 + uVar12) = 0;
          iVar13 = iVar19 - aiStack_160[2];
          if (iVar19 <= aiStack_160[2]) {
            iVar13 = aiStack_160[2] - iVar19;
          }
          iVar19 = aiStack_160[1] * iVar3 + aiStack_160[2] * iVar7 >> 8;
          iVar15 = iVar19 - aiStack_160[3];
          if (iVar19 <= aiStack_160[3]) {
            iVar15 = aiStack_160[3] - iVar19;
          }
          iVar19 = aiStack_160[2] * iVar3 + aiStack_160[3] * iVar7 >> 8;
          if (iStack_150 < iVar19) {
            iVar19 = iVar19 - iStack_150;
          }
          else {
            iVar19 = iStack_150 - iVar19;
          }
          iVar19 = (iVar19 + iVar15 + iVar13) / 0xc;
          if (iVar19 < 0x10) {
            iVar19 = 0x10;
          }
          iVar13 = aiStack_140[0] * iVar3 + aiStack_140[1] * iVar7 >> 8;
          iVar15 = iVar13 - aiStack_140[2];
          if (iVar13 <= aiStack_140[2]) {
            iVar15 = aiStack_140[2] - iVar13;
          }
          iVar13 = aiStack_140[1] * iVar3 + aiStack_140[2] * iVar7 >> 8;
          iVar16 = iVar13 - aiStack_140[3];
          if (iVar13 <= aiStack_140[3]) {
            iVar16 = aiStack_140[3] - iVar13;
          }
          iVar13 = aiStack_140[2] * iVar3 + aiStack_140[3] * iVar7 >> 8;
          if (iStack_130 < iVar13) {
            iVar13 = iVar13 - iStack_130;
          }
          else {
            iVar13 = iStack_130 - iVar13;
          }
          iVar13 = (iVar13 + iVar16 + iVar15) / 0xc;
          if (iVar13 < 0x10) {
            iVar13 = 0x10;
          }
          *(int *)((int)aiStack_e0 + uVar12) = iVar19;
          *(int *)((int)aiStack_c0 + uVar12) = iVar13;
          if (2 < uVar10) {
            lVar24 = (ulonglong)uVar10 - 2;
            pfVar8 = param_1 + 3;
            iVar15 = aiStack_160[1];
            iVar6 = aiStack_160[0];
            iVar16 = aiStack_140[1];
            iVar11 = aiStack_140[0];
            do {
              iVar22 = iVar16;
              iVar23 = iVar15;
              pfVar4 = pfVar8 + 1;
              iVar15 = iVar6 * iVar3 + iVar23 * iVar7 >> 8;
              uVar20 = ((int)((double)*pfVar4 * dVar5) - iVar15) / iVar19;
              if ((int)uVar20 < 8) {
                if ((int)uVar20 < -8) {
                  uVar20 = 0xfffffff8;
                }
              }
              else {
                uVar20 = 7;
              }
              iVar15 = uVar20 * iVar19 + iVar15;
              if (iVar15 < 0x8000) {
                if (iVar15 < -0x8000) {
                  iVar15 = -0x8000;
                }
              }
              else {
                iVar15 = 0x7fff;
              }
              iVar19 = *(int *)(&lbl_820A6D30 + (uVar20 & 0xf) * 4) * iVar19 >> 8;
              if (iVar19 < 0x10) {
                iVar19 = 0x10;
              }
              pfVar8 = pfVar8 + 2;
              fVar1 = *pfVar8;
              iVar6 = iVar15 - (int)((double)*pfVar4 * dVar5);
              iVar16 = iVar11 * iVar3 + iVar22 * iVar7 >> 8;
              *(int *)((int)auStack_120 + uVar12) =
                   (iVar6 * iVar6 >> 7) + *(int *)((int)auStack_120 + uVar12);
              uVar20 = ((int)((double)fVar1 * dVar5) - iVar16) / iVar13;
              if ((int)uVar20 < 8) {
                if ((int)uVar20 < -8) {
                  uVar20 = 0xfffffff8;
                }
              }
              else {
                uVar20 = 7;
              }
              iVar16 = uVar20 * iVar13 + iVar16;
              if (iVar16 < 0x8000) {
                if (iVar16 < -0x8000) {
                  iVar16 = -0x8000;
                }
              }
              else {
                iVar16 = 0x7fff;
              }
              iVar13 = *(int *)(&lbl_820A6D30 + (uVar20 & 0xf) * 4) * iVar13 >> 8;
              if (iVar13 < 0x10) {
                iVar13 = 0x10;
              }
              iVar6 = iVar16 - (int)((double)fVar1 * dVar5);
              *(int *)((int)auStack_100 + uVar12) =
                   (iVar6 * iVar6 >> 7) + *(int *)((int)auStack_100 + uVar12);
              lVar24 = lVar24 + -1;
              iVar6 = iVar23;
              iVar11 = iVar22;
            } while (lVar24 != 0);
          }
          uVar12 = uVar12 + 4;
        } while (uVar12 < 0x1c);
        uVar20 = auStack_120[0];
        if (auStack_120[1] < auStack_120[0]) {
          uVar20 = auStack_120[1];
        }
        uVar17 = (uint)(auStack_120[1] < auStack_120[0]);
        uVar12 = auStack_100[0];
        if (auStack_100[1] < auStack_100[0]) {
          uVar12 = auStack_100[1];
        }
        uVar21 = (uint)(auStack_100[1] < auStack_100[0]);
        if (auStack_120[2] < uVar20) {
          uVar17 = 2;
          uVar20 = auStack_120[2];
        }
        if (auStack_100[2] < uVar12) {
          uVar21 = 2;
          uVar12 = auStack_100[2];
        }
        if (auStack_120[3] < uVar20) {
          uVar17 = 3;
          uVar20 = auStack_120[3];
        }
        if (auStack_100[3] < uVar12) {
          uVar21 = 3;
          uVar12 = auStack_100[3];
        }
        if (uStack_110 < uVar20) {
          uVar17 = 4;
          uVar20 = uStack_110;
        }
        if (uStack_f0 < uVar12) {
          uVar21 = 4;
          uVar12 = uStack_f0;
        }
        if (uStack_10c < uVar20) {
          uVar17 = 5;
          uVar20 = uStack_10c;
        }
        if (uStack_ec < uVar12) {
          uVar21 = 5;
          uVar12 = uStack_ec;
        }
        if (uStack_108 < uVar20) {
          uVar17 = 6;
        }
        if (uStack_e8 < uVar12) {
          uVar21 = 6;
        }
        iVar7 = *(int *)(&lbl_820A6CF8 + uVar21 * 4);
        iVar3 = *(int *)(&lbl_820A6CF8 + uVar17 * 4);
        iVar19 = aiStack_e0[uVar17];
        iVar13 = aiStack_c0[uVar21];
        iVar15 = *(int *)(&lbl_820A6D14 + uVar17 * 4);
        iVar16 = *(int *)(&lbl_820A6D14 + uVar21 * 4);
        *pbVar9 = (byte)uVar17;
        pbVar9[1] = (byte)uVar21;
        *(short *)(pbVar9 + 2) = (short)iVar19;
        *(short *)(pbVar9 + 4) = (short)iVar13;
        *(short *)(pbVar9 + 6) = (short)aiStack_160[1];
        *(short *)(pbVar9 + 8) = (short)aiStack_140[1];
        *(short *)(pbVar9 + 10) = (short)aiStack_160[0];
        *(short *)(pbVar9 + 0xc) = (short)aiStack_140[0];
        pbVar9 = pbVar9 + 0xe;
        param_1 = param_1 + 4;
        iVar6 = aiStack_160[0];
        iVar11 = aiStack_160[1];
        iVar22 = aiStack_140[0];
        iVar23 = aiStack_140[1];
        for (lVar24 = (ulonglong)uVar10 - 2; lVar24 != 0; lVar24 = lVar24 + -1) {
          iVar14 = iVar15 * iVar6 + iVar3 * iVar11 >> 8;
          uVar10 = ((int)((double)*param_1 * dVar5) - iVar14) / iVar19;
          if ((int)uVar10 < 8) {
            if ((int)uVar10 < -8) {
              uVar10 = 0xfffffff8;
            }
          }
          else {
            uVar10 = 7;
          }
          iVar14 = uVar10 * iVar19 + iVar14;
          if (iVar14 < 0x8000) {
            if (iVar14 < -0x8000) {
              iVar14 = -0x8000;
            }
          }
          else {
            iVar14 = 0x7fff;
          }
          iVar19 = *(int *)(&lbl_820A6D30 + (uVar10 & 0xf) * 4) * iVar19 >> 8;
          if (iVar19 < 0x10) {
            iVar19 = 0x10;
          }
          iVar18 = iVar16 * iVar22 + iVar7 * iVar23 >> 8;
          uVar20 = ((int)((double)param_1[1] * dVar5) - iVar18) / iVar13;
          param_1 = param_1 + 2;
          if ((int)uVar20 < 8) {
            if ((int)uVar20 < -8) {
              uVar20 = 0xfffffff8;
            }
          }
          else {
            uVar20 = 7;
          }
          iVar18 = uVar20 * iVar13 + iVar18;
          if (iVar18 < 0x8000) {
            if (iVar18 < -0x8000) {
              iVar18 = -0x8000;
            }
          }
          else {
            iVar18 = 0x7fff;
          }
          iVar13 = *(int *)(&lbl_820A6D30 + (uVar20 & 0xf) * 4) * iVar13 >> 8;
          if (iVar13 < 0x10) {
            iVar13 = 0x10;
          }
          *pbVar9 = (char)uVar10 << 4 | (byte)uVar20 & 0xf;
          pbVar9 = pbVar9 + 1;
          iVar6 = iVar11;
          iVar11 = iVar14;
          iVar22 = iVar23;
          iVar23 = iVar18;
        }
      } while (uStack_18c != 0);
    }
    iVar7 = (int)pbVar9 - (int)param_3;
  }
  return iVar7;
}

