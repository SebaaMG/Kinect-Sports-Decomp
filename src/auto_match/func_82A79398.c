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
extern unsigned int *auStack_e0;
extern unsigned int iStack_f0;
extern unsigned int lbl_820A6CF8;
extern unsigned int lbl_820A6D14;
extern unsigned int lbl_820A6D30;
extern unsigned int lbl_820A6D70;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82A79398(float *param_1,uint param_2,byte *param_3,int param_4,ulonglong param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar10;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int aiStack_100 [4];
  int iStack_f0;
  uint auStack_e0 [4];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  int aiStack_c0 [48];
  
  dVar3 = lbl_820A6D70;
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar5 = 0;
  }
  else {
    uVar18 = (ulonglong)(param_2 >> 2);
    pbVar6 = param_3;
    if (uVar18 != 0) {
      do {
        uVar8 = param_5 & 0xffff;
        if ((uVar18 & 0xffffffff) < (param_5 & 0xffff)) {
          uVar8 = uVar18;
        }
        uVar18 = uVar18 - uVar8;
        pfVar4 = param_1 + -1;
        uVar11 = 0;
        piVar15 = aiStack_100;
        lVar19 = 5;
        do {
          if ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            pfVar4 = pfVar4 + 1;
            *piVar15 = (int)((double)*pfVar4 * dVar3);
          }
          else {
            *piVar15 = 0;
          }
          uVar11 = uVar11 + 1;
          piVar15 = piVar15 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        param_1 = param_1 + 2;
        uVar14 = 0;
        do {
          iVar5 = *(int *)(&lbl_820A6CF8 + uVar14);
          iVar13 = *(int *)(&lbl_820A6D14 + uVar14);
          *(undefined4 *)((int)auStack_e0 + uVar14) = 0;
          iVar16 = aiStack_100[0] * iVar13 + aiStack_100[1] * iVar5 >> 8;
          iVar10 = iVar16 - aiStack_100[2];
          if (iVar16 <= aiStack_100[2]) {
            iVar10 = aiStack_100[2] - iVar16;
          }
          iVar16 = aiStack_100[1] * iVar13 + aiStack_100[2] * iVar5 >> 8;
          iVar12 = iVar16 - aiStack_100[3];
          if (iVar16 <= aiStack_100[3]) {
            iVar12 = aiStack_100[3] - iVar16;
          }
          iVar16 = aiStack_100[2] * iVar13 + aiStack_100[3] * iVar5 >> 8;
          if (iStack_f0 < iVar16) {
            iVar16 = iVar16 - iStack_f0;
          }
          else {
            iVar16 = iStack_f0 - iVar16;
          }
          iVar16 = (iVar16 + iVar12 + iVar10) / 0xc;
          if (iVar16 < 0x10) {
            iVar16 = 0x10;
          }
          uVar11 = 2;
          *(int *)((int)aiStack_c0 + uVar14) = iVar16;
          if (2 < (uVar8 & 0xffffffff)) {
            pfVar4 = param_1;
            iVar12 = aiStack_100[1];
            iVar10 = aiStack_100[0];
            if (3 < (int)uVar8 + -2) {
              do {
                iVar10 = iVar10 * iVar13 + iVar12 * iVar5 >> 8;
                uVar17 = ((int)((double)*pfVar4 * dVar3) - iVar10) / iVar16;
                if ((int)uVar17 < 8) {
                  if ((int)uVar17 < -8) {
                    uVar17 = 0xfffffff8;
                  }
                }
                else {
                  uVar17 = 7;
                }
                iVar10 = uVar17 * iVar16 + iVar10;
                if (iVar10 < 0x8000) {
                  if (iVar10 < -0x8000) {
                    iVar10 = -0x8000;
                  }
                }
                else {
                  iVar10 = 0x7fff;
                }
                iVar16 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar16 >> 8;
                if (iVar16 < 0x10) {
                  iVar16 = 0x10;
                }
                fVar1 = pfVar4[1];
                iVar7 = iVar10 - (int)((double)*pfVar4 * dVar3);
                iVar12 = iVar10 * iVar5 + iVar12 * iVar13 >> 8;
                *(int *)((int)auStack_e0 + uVar14) =
                     (iVar7 * iVar7 >> 7) + *(int *)((int)auStack_e0 + uVar14);
                uVar17 = ((int)((double)fVar1 * dVar3) - iVar12) / iVar16;
                if ((int)uVar17 < 8) {
                  if ((int)uVar17 < -8) {
                    uVar17 = 0xfffffff8;
                  }
                }
                else {
                  uVar17 = 7;
                }
                iVar12 = iVar16 * uVar17 + iVar12;
                if (iVar12 < 0x8000) {
                  if (iVar12 < -0x8000) {
                    iVar12 = -0x8000;
                  }
                }
                else {
                  iVar12 = 0x7fff;
                }
                iVar16 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar16 >> 8;
                if (iVar16 < 0x10) {
                  iVar16 = 0x10;
                }
                fVar2 = pfVar4[2];
                iVar7 = iVar12 - (int)((double)fVar1 * dVar3);
                iVar10 = iVar12 * iVar5 + iVar10 * iVar13 >> 8;
                *(int *)((int)auStack_e0 + uVar14) =
                     (iVar7 * iVar7 >> 7) + *(int *)((int)auStack_e0 + uVar14);
                uVar17 = ((int)((double)fVar2 * dVar3) - iVar10) / iVar16;
                if ((int)uVar17 < 8) {
                  if ((int)uVar17 < -8) {
                    uVar17 = 0xfffffff8;
                  }
                }
                else {
                  uVar17 = 7;
                }
                iVar10 = iVar16 * uVar17 + iVar10;
                if (iVar10 < 0x8000) {
                  if (iVar10 < -0x8000) {
                    iVar10 = -0x8000;
                  }
                }
                else {
                  iVar10 = 0x7fff;
                }
                iVar16 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar16 >> 8;
                if (iVar16 < 0x10) {
                  iVar16 = 0x10;
                }
                fVar1 = pfVar4[3];
                iVar7 = iVar10 - (int)((double)fVar2 * dVar3);
                iVar12 = iVar10 * iVar5 + iVar12 * iVar13 >> 8;
                *(int *)((int)auStack_e0 + uVar14) =
                     (iVar7 * iVar7 >> 7) + *(int *)((int)auStack_e0 + uVar14);
                uVar17 = ((int)((double)fVar1 * dVar3) - iVar12) / iVar16;
                if ((int)uVar17 < 8) {
                  if ((int)uVar17 < -8) {
                    uVar17 = 0xfffffff8;
                  }
                }
                else {
                  uVar17 = 7;
                }
                iVar12 = iVar16 * uVar17 + iVar12;
                if (iVar12 < 0x8000) {
                  if (iVar12 < -0x8000) {
                    iVar12 = -0x8000;
                  }
                }
                else {
                  iVar12 = 0x7fff;
                }
                iVar16 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar16 >> 8;
                if (iVar16 < 0x10) {
                  iVar16 = 0x10;
                }
                iVar7 = iVar12 - (int)((double)fVar1 * dVar3);
                uVar11 = uVar11 + 4;
                pfVar4 = pfVar4 + 4;
                *(int *)((int)auStack_e0 + uVar14) =
                     (iVar7 * iVar7 >> 7) + *(int *)((int)auStack_e0 + uVar14);
              } while ((uVar11 & 0xffffffff) < (uVar8 - 3 & 0xffffffff));
            }
            if ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff)) {
              lVar19 = uVar8 - uVar11;
              do {
                iVar7 = iVar10 * iVar13 + iVar12 * iVar5 >> 8;
                uVar17 = ((int)((double)*pfVar4 * dVar3) - iVar7) / iVar16;
                if ((int)uVar17 < 8) {
                  if ((int)uVar17 < -8) {
                    uVar17 = 0xfffffff8;
                  }
                }
                else {
                  uVar17 = 7;
                }
                iVar7 = uVar17 * iVar16 + iVar7;
                if (iVar7 < 0x8000) {
                  if (iVar7 < -0x8000) {
                    iVar7 = -0x8000;
                  }
                }
                else {
                  iVar7 = 0x7fff;
                }
                iVar16 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar16 >> 8;
                if (iVar16 < 0x10) {
                  iVar16 = 0x10;
                }
                iVar10 = iVar7 - (int)((double)*pfVar4 * dVar3);
                pfVar4 = pfVar4 + 1;
                *(int *)((int)auStack_e0 + uVar14) =
                     (iVar10 * iVar10 >> 7) + *(int *)((int)auStack_e0 + uVar14);
                lVar19 = lVar19 + -1;
                iVar10 = iVar12;
                iVar12 = iVar7;
              } while (lVar19 != 0);
            }
          }
          uVar14 = uVar14 + 4;
        } while (uVar14 < 0x1c);
        uVar14 = auStack_e0[0];
        if (auStack_e0[1] < auStack_e0[0]) {
          uVar14 = auStack_e0[1];
        }
        uVar17 = (uint)(auStack_e0[1] < auStack_e0[0]);
        if (auStack_e0[2] < uVar14) {
          uVar17 = 2;
          uVar14 = auStack_e0[2];
        }
        if (auStack_e0[3] < uVar14) {
          uVar17 = 3;
          uVar14 = auStack_e0[3];
        }
        if (uStack_d0 < uVar14) {
          uVar17 = 4;
          uVar14 = uStack_d0;
        }
        if (uStack_cc < uVar14) {
          uVar17 = 5;
          uVar14 = uStack_cc;
        }
        if (uStack_c8 < uVar14) {
          uVar17 = 6;
        }
        iVar5 = *(int *)(&lbl_820A6CF8 + uVar17 * 4);
        iVar13 = aiStack_c0[uVar17];
        iVar16 = *(int *)(&lbl_820A6D14 + uVar17 * 4);
        *pbVar6 = (byte)uVar17;
        *(short *)(pbVar6 + 1) = (short)iVar13;
        *(short *)(pbVar6 + 3) = (short)aiStack_100[1];
        *(short *)(pbVar6 + 5) = (short)aiStack_100[0];
        pbVar6 = pbVar6 + 7;
        uVar8 = uVar8 - 2;
        uVar11 = uVar8;
        iVar12 = aiStack_100[0];
        iVar10 = aiStack_100[1];
        while (uVar8 != 0) {
          pfVar4 = param_1 + 1;
          iVar7 = iVar16 * iVar12 + iVar5 * iVar10 >> 8;
          uVar9 = uVar11 - 1;
          uVar14 = ((int)((double)*param_1 * dVar3) - iVar7) / iVar13;
          if ((int)uVar14 < 8) {
            if ((int)uVar14 < -8) {
              uVar14 = 0xfffffff8;
            }
          }
          else {
            uVar14 = 7;
          }
          iVar7 = uVar14 * iVar13 + iVar7;
          if (iVar7 < 0x8000) {
            if (iVar7 < -0x8000) {
              iVar7 = -0x8000;
            }
          }
          else {
            iVar7 = 0x7fff;
          }
          iVar13 = *(int *)(&lbl_820A6D30 + (uVar14 & 0xf) * 4) * iVar13 >> 8;
          if (iVar13 < 0x10) {
            iVar13 = 0x10;
          }
          if ((uVar9 & 0xffffffff) == 0) {
            uVar17 = 0;
            iVar12 = iVar10;
            iVar10 = iVar7;
          }
          else {
            fVar1 = *pfVar4;
            pfVar4 = param_1 + 2;
            iVar10 = iVar5 * iVar7 + iVar16 * iVar10 >> 8;
            uVar9 = uVar11 - 2;
            uVar17 = ((int)((double)fVar1 * dVar3) - iVar10) / iVar13;
            if ((int)uVar17 < 8) {
              if ((int)uVar17 < -8) {
                uVar17 = 0xfffffff8;
              }
            }
            else {
              uVar17 = 7;
            }
            iVar10 = iVar13 * uVar17 + iVar10;
            if (iVar10 < 0x8000) {
              if (iVar10 < -0x8000) {
                iVar10 = -0x8000;
              }
            }
            else {
              iVar10 = 0x7fff;
            }
            iVar13 = *(int *)(&lbl_820A6D30 + (uVar17 & 0xf) * 4) * iVar13 >> 8;
            iVar12 = iVar7;
            if (iVar13 < 0x10) {
              iVar13 = 0x10;
            }
          }
          *pbVar6 = (char)uVar14 << 4 | (byte)uVar17 & 0xf;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar9;
          param_1 = pfVar4;
          uVar8 = uVar9 & 0xffffffff;
        }
      } while ((uVar18 & 0xffffffff) != 0);
    }
    iVar5 = (int)pbVar6 - (int)param_3;
  }
  return iVar5;
}

