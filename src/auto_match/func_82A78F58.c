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
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


int fn_82A78F58(byte *param_1,uint param_2,byte *param_3,int param_4,ulonglong param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  int iVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int aiStack_100 [4];
  int iStack_f0;
  uint auStack_e0 [4];
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  int aiStack_c0 [48];
  
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar4 = 0;
  }
  else {
    uVar17 = (ulonglong)(param_2 >> 1);
    pbVar5 = param_3;
    if (uVar17 != 0) {
      do {
        uVar7 = uVar17;
        if ((param_5 & 0xffff) <= (uVar17 & 0xffffffff)) {
          uVar7 = param_5 & 0xffff;
        }
        uVar17 = uVar17 - uVar7;
        pbVar3 = param_1 + -1;
        uVar6 = 0;
        piVar12 = aiStack_100;
        lVar18 = 5;
        do {
          if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
            pbVar2 = pbVar3 + 1;
            pbVar3 = pbVar3 + 2;
            *piVar12 = (uint)*pbVar3 * 0x100 + (uint)*pbVar2;
          }
          else {
            *piVar12 = 0;
          }
          uVar6 = uVar6 + 1;
          piVar12 = piVar12 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        uVar13 = 0;
        do {
          iVar4 = *(int *)(&lbl_820A6CF8 + uVar13);
          iVar11 = *(int *)(&lbl_820A6D14 + uVar13);
          *(undefined4 *)((int)auStack_e0 + uVar13) = 0;
          iVar14 = aiStack_100[0] * iVar11 + aiStack_100[1] * iVar4 >> 8;
          iVar9 = iVar14 - aiStack_100[2];
          if (iVar14 <= aiStack_100[2]) {
            iVar9 = aiStack_100[2] - iVar14;
          }
          iVar14 = aiStack_100[1] * iVar11 + aiStack_100[2] * iVar4 >> 8;
          iVar10 = iVar14 - aiStack_100[3];
          if (iVar14 <= aiStack_100[3]) {
            iVar10 = aiStack_100[3] - iVar14;
          }
          iVar14 = aiStack_100[2] * iVar11 + aiStack_100[3] * iVar4 >> 8;
          if (iStack_f0 < iVar14) {
            iVar14 = iVar14 - iStack_f0;
          }
          else {
            iVar14 = iStack_f0 - iVar14;
          }
          iVar14 = (iVar14 + iVar10 + iVar9) / 0xc;
          if (iVar14 < 0x10) {
            iVar14 = 0x10;
          }
          *(int *)((int)aiStack_c0 + uVar13) = iVar14;
          if (2 < (uVar7 & 0xffffffff)) {
            lVar18 = uVar7 - 2;
            pbVar3 = param_1 + 3;
            iVar9 = aiStack_100[1];
            iVar10 = aiStack_100[0];
            do {
              iVar16 = iVar9;
              pbVar2 = pbVar3 + 1;
              pbVar3 = pbVar3 + 2;
              iVar9 = iVar10 * iVar11 + iVar16 * iVar4 >> 8;
              iVar10 = (uint)*pbVar3 * 0x100 + (uint)*pbVar2;
              uVar15 = (iVar10 - iVar9) / iVar14;
              if ((int)uVar15 < 8) {
                if ((int)uVar15 < -8) {
                  uVar15 = 0xfffffff8;
                }
              }
              else {
                uVar15 = 7;
              }
              iVar9 = uVar15 * iVar14 + iVar9;
              if (iVar9 < 0x8000) {
                if (iVar9 < -0x8000) {
                  iVar9 = -0x8000;
                }
              }
              else {
                iVar9 = 0x7fff;
              }
              iVar14 = *(int *)(&lbl_820A6D30 + (uVar15 & 0xf) * 4) * iVar14 >> 8;
              if (iVar14 < 0x10) {
                iVar14 = 0x10;
              }
              iVar10 = iVar9 - iVar10;
              *(int *)((int)auStack_e0 + uVar13) =
                   (iVar10 * iVar10 >> 7) + *(int *)((int)auStack_e0 + uVar13);
              lVar18 = lVar18 + -1;
              iVar10 = iVar16;
            } while (lVar18 != 0);
          }
          uVar13 = uVar13 + 4;
        } while (uVar13 < 0x1c);
        uVar13 = auStack_e0[0];
        if (auStack_e0[1] < auStack_e0[0]) {
          uVar13 = auStack_e0[1];
        }
        uVar15 = (uint)(auStack_e0[1] < auStack_e0[0]);
        if (auStack_e0[2] < uVar13) {
          uVar15 = 2;
          uVar13 = auStack_e0[2];
        }
        if (auStack_e0[3] < uVar13) {
          uVar15 = 3;
          uVar13 = auStack_e0[3];
        }
        if (uStack_d0 < uVar13) {
          uVar15 = 4;
          uVar13 = uStack_d0;
        }
        if (uStack_cc < uVar13) {
          uVar15 = 5;
          uVar13 = uStack_cc;
        }
        if (uStack_c8 < uVar13) {
          uVar15 = 6;
        }
        iVar4 = *(int *)(&lbl_820A6CF8 + uVar15 * 4);
        iVar11 = aiStack_c0[uVar15];
        iVar14 = *(int *)(&lbl_820A6D14 + uVar15 * 4);
        *pbVar5 = (byte)uVar15;
        *(short *)(pbVar5 + 1) = (short)iVar11;
        *(short *)(pbVar5 + 3) = (short)aiStack_100[1];
        *(short *)(pbVar5 + 5) = (short)aiStack_100[0];
        pbVar5 = pbVar5 + 7;
        uVar7 = uVar7 - 2;
        uVar6 = uVar7;
        param_1 = param_1 + 4;
        iVar10 = aiStack_100[0];
        iVar9 = aiStack_100[1];
        while (uVar7 != 0) {
          iVar16 = iVar14 * iVar10 + iVar4 * iVar9 >> 8;
          pbVar3 = param_1 + 2;
          uVar8 = uVar6 - 1;
          uVar13 = (int)(((uint)param_1[1] * 0x100 + (uint)*param_1) - iVar16) / iVar11;
          if ((int)uVar13 < 8) {
            if ((int)uVar13 < -8) {
              uVar13 = 0xfffffff8;
            }
          }
          else {
            uVar13 = 7;
          }
          iVar16 = uVar13 * iVar11 + iVar16;
          if (iVar16 < 0x8000) {
            if (iVar16 < -0x8000) {
              iVar16 = -0x8000;
            }
          }
          else {
            iVar16 = 0x7fff;
          }
          iVar11 = *(int *)(&lbl_820A6D30 + (uVar13 & 0xf) * 4) * iVar11 >> 8;
          if (iVar11 < 0x10) {
            iVar11 = 0x10;
          }
          if ((uVar8 & 0xffffffff) == 0) {
            uVar15 = 0;
            iVar10 = iVar9;
            iVar9 = iVar16;
          }
          else {
            bVar1 = *pbVar3;
            iVar9 = iVar4 * iVar16 + iVar14 * iVar9 >> 8;
            pbVar3 = param_1 + 4;
            uVar8 = uVar6 - 2;
            uVar15 = (int)(((uint)param_1[3] * 0x100 + (uint)bVar1) - iVar9) / iVar11;
            if ((int)uVar15 < 8) {
              if ((int)uVar15 < -8) {
                uVar15 = 0xfffffff8;
              }
            }
            else {
              uVar15 = 7;
            }
            iVar9 = iVar11 * uVar15 + iVar9;
            if (iVar9 < 0x8000) {
              if (iVar9 < -0x8000) {
                iVar9 = -0x8000;
              }
            }
            else {
              iVar9 = 0x7fff;
            }
            iVar11 = *(int *)(&lbl_820A6D30 + (uVar15 & 0xf) * 4) * iVar11 >> 8;
            iVar10 = iVar16;
            if (iVar11 < 0x10) {
              iVar11 = 0x10;
            }
          }
          *pbVar5 = (char)uVar13 << 4 | (byte)uVar15 & 0xf;
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar8;
          param_1 = pbVar3;
          uVar7 = uVar8 & 0xffffffff;
        }
      } while ((uVar17 & 0xffffffff) != 0);
    }
    iVar4 = (int)pbVar5 - (int)param_3;
  }
  return iVar4;
}

