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
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_18c;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


int fn_82A7A170(byte *param_1,uint param_2,byte *param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
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
  
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar6 = 0;
  }
  else {
    uStack_18c = param_2 >> 2;
    pbVar8 = param_3;
    if (uStack_18c != 0) {
      do {
        uVar21 = uStack_18c;
        if ((param_5 & 0xffff) <= uStack_18c) {
          uVar21 = param_5 & 0xffff;
        }
        uStack_18c = uStack_18c - uVar21;
        uVar14 = 0;
        uVar15 = 0;
        iVar6 = 0;
        lVar23 = 5;
        pbVar19 = param_1;
        do {
          if (uVar15 < uVar21) {
            bVar1 = *pbVar19;
            pbVar5 = pbVar19 + 1;
            bVar3 = pbVar19[2];
            bVar2 = pbVar19[3];
            pbVar19 = pbVar19 + 4;
            *(uint *)((int)aiStack_140 + iVar6) = (uint)*pbVar5 * 0x100 + (uint)bVar1;
            *(uint *)((int)aiStack_160 + iVar6) = (uint)bVar2 * 0x100 + (uint)bVar3;
          }
          else {
            *(undefined4 *)((int)aiStack_140 + iVar6) = 0;
            *(undefined4 *)((int)aiStack_160 + iVar6) = 0;
          }
          uVar15 = uVar15 + 1;
          iVar6 = iVar6 + 4;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        do {
          iVar6 = *(int *)(&lbl_820A6CF8 + uVar14);
          iVar4 = *(int *)(&lbl_820A6D14 + uVar14);
          iVar18 = aiStack_140[0] * iVar4 + aiStack_140[1] * iVar6 >> 8;
          *(undefined4 *)((int)auStack_100 + uVar14) = 0;
          *(undefined4 *)((int)auStack_120 + uVar14) = 0;
          iVar10 = iVar18 - aiStack_140[2];
          if (iVar18 <= aiStack_140[2]) {
            iVar10 = aiStack_140[2] - iVar18;
          }
          iVar18 = aiStack_140[1] * iVar4 + aiStack_140[2] * iVar6 >> 8;
          iVar12 = iVar18 - aiStack_140[3];
          if (iVar18 <= aiStack_140[3]) {
            iVar12 = aiStack_140[3] - iVar18;
          }
          iVar18 = aiStack_140[2] * iVar4 + aiStack_140[3] * iVar6 >> 8;
          if (iStack_130 < iVar18) {
            iVar18 = iVar18 - iStack_130;
          }
          else {
            iVar18 = iStack_130 - iVar18;
          }
          iVar18 = (iVar18 + iVar12 + iVar10) / 0xc;
          if (iVar18 < 0x10) {
            iVar18 = 0x10;
          }
          iVar10 = aiStack_160[0] * iVar4 + aiStack_160[1] * iVar6 >> 8;
          iVar12 = iVar10 - aiStack_160[2];
          if (iVar10 <= aiStack_160[2]) {
            iVar12 = aiStack_160[2] - iVar10;
          }
          iVar10 = aiStack_160[1] * iVar4 + aiStack_160[2] * iVar6 >> 8;
          iVar13 = iVar10 - aiStack_160[3];
          if (iVar10 <= aiStack_160[3]) {
            iVar13 = aiStack_160[3] - iVar10;
          }
          iVar10 = aiStack_160[2] * iVar4 + aiStack_160[3] * iVar6 >> 8;
          if (iStack_150 < iVar10) {
            iVar10 = iVar10 - iStack_150;
          }
          else {
            iVar10 = iStack_150 - iVar10;
          }
          iVar10 = (iVar10 + iVar13 + iVar12) / 0xc;
          if (iVar10 < 0x10) {
            iVar10 = 0x10;
          }
          *(int *)((int)aiStack_e0 + uVar14) = iVar18;
          *(int *)((int)aiStack_c0 + uVar14) = iVar10;
          if (2 < uVar21) {
            lVar23 = (ulonglong)uVar21 - 2;
            pbVar19 = param_1 + 7;
            iVar12 = aiStack_140[1];
            iVar7 = aiStack_140[0];
            iVar13 = aiStack_160[1];
            iVar9 = aiStack_160[0];
            do {
              iVar17 = iVar13;
              iVar22 = iVar12;
              iVar12 = iVar7 * iVar4 + iVar22 * iVar6 >> 8;
              iVar7 = (uint)pbVar19[2] * 0x100 + (uint)pbVar19[1];
              uVar15 = (iVar7 - iVar12) / iVar18;
              if ((int)uVar15 < 8) {
                if ((int)uVar15 < -8) {
                  uVar15 = 0xfffffff8;
                }
              }
              else {
                uVar15 = 7;
              }
              iVar12 = uVar15 * iVar18 + iVar12;
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              iVar18 = *(int *)(&lbl_820A6D30 + (uVar15 & 0xf) * 4) * iVar18 >> 8;
              if (iVar18 < 0x10) {
                iVar18 = 0x10;
              }
              iVar7 = iVar12 - iVar7;
              pbVar5 = pbVar19 + 3;
              pbVar19 = pbVar19 + 4;
              iVar11 = (uint)*pbVar19 * 0x100 + (uint)*pbVar5;
              iVar13 = iVar9 * iVar4 + iVar17 * iVar6 >> 8;
              *(int *)((int)auStack_100 + uVar14) =
                   (iVar7 * iVar7 >> 7) + *(int *)((int)auStack_100 + uVar14);
              uVar15 = (iVar11 - iVar13) / iVar10;
              if ((int)uVar15 < 8) {
                if ((int)uVar15 < -8) {
                  uVar15 = 0xfffffff8;
                }
              }
              else {
                uVar15 = 7;
              }
              iVar13 = uVar15 * iVar10 + iVar13;
              if (iVar13 < 0x8000) {
                if (iVar13 < -0x8000) {
                  iVar13 = -0x8000;
                }
              }
              else {
                iVar13 = 0x7fff;
              }
              iVar10 = *(int *)(&lbl_820A6D30 + (uVar15 & 0xf) * 4) * iVar10 >> 8;
              if (iVar10 < 0x10) {
                iVar10 = 0x10;
              }
              iVar11 = iVar13 - iVar11;
              *(int *)((int)auStack_120 + uVar14) =
                   (iVar11 * iVar11 >> 7) + *(int *)((int)auStack_120 + uVar14);
              lVar23 = lVar23 + -1;
              iVar7 = iVar22;
              iVar9 = iVar17;
            } while (lVar23 != 0);
          }
          uVar14 = uVar14 + 4;
        } while (uVar14 < 0x1c);
        uVar14 = auStack_100[0];
        if (auStack_100[1] < auStack_100[0]) {
          uVar14 = auStack_100[1];
        }
        uVar16 = (uint)(auStack_100[1] < auStack_100[0]);
        uVar15 = auStack_120[0];
        if (auStack_120[1] < auStack_120[0]) {
          uVar15 = auStack_120[1];
        }
        uVar20 = (uint)(auStack_120[1] < auStack_120[0]);
        if (auStack_100[2] < uVar14) {
          uVar16 = 2;
          uVar14 = auStack_100[2];
        }
        if (auStack_120[2] < uVar15) {
          uVar20 = 2;
          uVar15 = auStack_120[2];
        }
        if (auStack_100[3] < uVar14) {
          uVar16 = 3;
          uVar14 = auStack_100[3];
        }
        if (auStack_120[3] < uVar15) {
          uVar20 = 3;
          uVar15 = auStack_120[3];
        }
        if (uStack_f0 < uVar14) {
          uVar16 = 4;
          uVar14 = uStack_f0;
        }
        if (uStack_110 < uVar15) {
          uVar20 = 4;
          uVar15 = uStack_110;
        }
        if (uStack_ec < uVar14) {
          uVar16 = 5;
          uVar14 = uStack_ec;
        }
        if (uStack_10c < uVar15) {
          uVar20 = 5;
          uVar15 = uStack_10c;
        }
        if (uStack_e8 < uVar14) {
          uVar16 = 6;
        }
        if (uStack_108 < uVar15) {
          uVar20 = 6;
        }
        iVar6 = *(int *)(&lbl_820A6CF8 + uVar20 * 4);
        iVar4 = *(int *)(&lbl_820A6CF8 + uVar16 * 4);
        iVar18 = aiStack_e0[uVar16];
        iVar10 = aiStack_c0[uVar20];
        iVar12 = *(int *)(&lbl_820A6D14 + uVar16 * 4);
        iVar13 = *(int *)(&lbl_820A6D14 + uVar20 * 4);
        *pbVar8 = (byte)uVar16;
        pbVar8[1] = (byte)uVar20;
        *(short *)(pbVar8 + 2) = (short)iVar18;
        *(short *)(pbVar8 + 4) = (short)iVar10;
        *(short *)(pbVar8 + 6) = (short)aiStack_140[1];
        *(short *)(pbVar8 + 8) = (short)aiStack_160[1];
        *(short *)(pbVar8 + 10) = (short)aiStack_140[0];
        *(short *)(pbVar8 + 0xc) = (short)aiStack_160[0];
        pbVar8 = pbVar8 + 0xe;
        param_1 = param_1 + 8;
        iVar7 = aiStack_160[0];
        iVar9 = aiStack_160[1];
        iVar17 = aiStack_140[0];
        iVar22 = aiStack_140[1];
        for (lVar23 = (ulonglong)uVar21 - 2; lVar23 != 0; lVar23 = lVar23 + -1) {
          iVar11 = iVar12 * iVar17 + iVar4 * iVar22 >> 8;
          uVar21 = (int)(((uint)param_1[1] * 0x100 + (uint)*param_1) - iVar11) / iVar18;
          if ((int)uVar21 < 8) {
            if ((int)uVar21 < -8) {
              uVar21 = 0xfffffff8;
            }
          }
          else {
            uVar21 = 7;
          }
          iVar11 = uVar21 * iVar18 + iVar11;
          if (iVar11 < 0x8000) {
            if (iVar11 < -0x8000) {
              iVar11 = -0x8000;
            }
          }
          else {
            iVar11 = 0x7fff;
          }
          iVar18 = *(int *)(&lbl_820A6D30 + (uVar21 & 0xf) * 4) * iVar18 >> 8;
          if (iVar18 < 0x10) {
            iVar18 = 0x10;
          }
          iVar17 = iVar13 * iVar7 + iVar6 * iVar9 >> 8;
          uVar14 = (int)(((uint)param_1[3] * 0x100 + (uint)param_1[2]) - iVar17) / iVar10;
          param_1 = param_1 + 4;
          if ((int)uVar14 < 8) {
            if ((int)uVar14 < -8) {
              uVar14 = 0xfffffff8;
            }
          }
          else {
            uVar14 = 7;
          }
          iVar17 = uVar14 * iVar10 + iVar17;
          if (iVar17 < 0x8000) {
            if (iVar17 < -0x8000) {
              iVar17 = -0x8000;
            }
          }
          else {
            iVar17 = 0x7fff;
          }
          iVar10 = *(int *)(&lbl_820A6D30 + (uVar14 & 0xf) * 4) * iVar10 >> 8;
          if (iVar10 < 0x10) {
            iVar10 = 0x10;
          }
          *pbVar8 = (char)uVar21 << 4 | (byte)uVar14 & 0xf;
          pbVar8 = pbVar8 + 1;
          iVar7 = iVar9;
          iVar9 = iVar17;
          iVar17 = iVar22;
          iVar22 = iVar11;
        }
      } while (uStack_18c != 0);
    }
    iVar6 = (int)pbVar8 - (int)param_3;
  }
  return iVar6;
}

