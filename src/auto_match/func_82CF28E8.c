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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82006848;
extern float lbl_8200DFF4;
extern unsigned int lbl_8200E818;
extern unsigned int lbl_8213308C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8317F2DC;


void fn_82CF28E8(int *param_1,uint *param_2,undefined4 *param_3,float *param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar17;
  longlong lVar16;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  uVar19 = param_2[1];
  uVar3 = param_1[1];
  uVar20 = (ulonglong)*param_2 + (ulonglong)uVar19;
  uVar4 = *(uint *)(*(int *)*param_1 + 0x34);
  if ((int)uVar4 < (int)uVar20) {
    uVar19 = uVar4 - *param_2;
    uVar20 = (ulonglong)uVar4;
  }
  if (0 < (int)uVar19) {
    uVar4 = param_2[1];
    iVar12 = fn_82CE5410();
    if ((int)(param_5[2] & 0x3fffffffU) < (int)uVar4) {
      uVar18 = ((ulonglong)(uint)param_5[2] & 0x3fffffff) << 1;
      if ((int)uVar18 <= (int)uVar4) {
        uVar18 = (ulonglong)uVar4;
      }
      fn_82CE6310(*(undefined4 *)(iVar12 + 0x10),param_5,uVar18,4);
    }
    uVar18 = (ulonglong)uVar4 - (ulonglong)(uint)param_5[1];
    if (0 < (longlong)uVar18) {
      puVar17 = (undefined4 *)(param_5[1] * 4 + *param_5 + -4);
      uVar22 = uVar18 & 0xffffffff;
      while (uVar22 != 0) {
        puVar17 = puVar17 + 1;
        *puVar17 = 0;
        uVar18 = uVar18 - 1;
        uVar22 = uVar18;
      }
    }
    param_5[1] = uVar4;
    fVar10 = lbl_821AAD20;
    *param_4 = lbl_821AAD20;
    uVar11 = lbl_8200E818;
    uVar4 = *param_2;
    uVar18 = (ulonglong)uVar4;
    iVar12 = (int)uVar20;
    if ((int)uVar4 < iVar12) {
      lVar21 = (uVar18 + ((ulonglong)uVar4 & 0x1fffffff) * 8 & 0x3fffffff) * 4 +
               (ulonglong)*(uint *)*param_3 + 4;
      do {
        piVar8 = (int *)lVar21;
        if (piVar8[2] == 0) {
          iVar5 = *piVar8;
        }
        else {
          iVar5 = piVar8[1];
        }
        iVar9 = (int)((uVar18 - *param_2 & 0x3fffffff) << 2);
        *(undefined4 *)(iVar9 + *param_5) = uVar11;
        if (0 < (int)uVar3) {
          iVar13 = 0;
          uVar22 = (ulonglong)uVar3;
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(iVar13 + *param_1) + 0x30) +
                            (int)((uVar18 & 0xffffffff) << 2));
            if (0 < *(int *)(iVar6 + 0x34)) {
              iVar14 = 0;
              iVar15 = 0;
              do {
                fVar2 = *(float *)(iVar9 + *param_5);
                fVar1 = (float)*(double *)(*(int *)(iVar15 + *(int *)(iVar6 + 0x30)) + 0x40);
                if (fVar1 < fVar2) {
                  fVar2 = fVar1;
                }
                *(float *)(iVar9 + *param_5) = fVar2;
                iVar14 = iVar14 + 1;
                iVar15 = iVar15 + 4;
              } while (iVar14 < *(int *)(iVar6 + 0x34));
              iVar14 = 0;
              if (0 < *(int *)(iVar6 + 0x34)) {
                iVar15 = 0;
                do {
                  iVar7 = *(int *)(iVar15 + *(int *)(iVar6 + 0x30));
                  fVar1 = (float)(((double)*(float *)(iVar7 + iVar5 * 4) + *(double *)(iVar7 + 0x40)
                                  ) - (double)*(float *)(iVar9 + *param_5));
                  fVar2 = *param_4;
                  if (*param_4 < fVar1) {
                    fVar2 = fVar1;
                  }
                  *param_4 = fVar2;
                  iVar14 = iVar14 + 1;
                  iVar15 = iVar15 + 4;
                } while (iVar14 < *(int *)(iVar6 + 0x34));
              }
            }
            iVar13 = iVar13 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar18 = uVar18 + 1;
        lVar21 = lVar21 + 0x24;
      } while ((int)uVar18 < iVar12);
    }
    if (fVar10 < (float)param_2[7]) {
      uVar3 = *param_2;
      uVar18 = (ulonglong)uVar3;
      if ((int)uVar3 < iVar12) {
        if (3 < (int)(iVar12 - uVar3)) {
          lVar21 = (((uVar20 - uVar18) - 4 & 0xffffffff) >> 2) + 1;
          do {
            iVar5 = (int)((uVar18 - *param_2 & 0xffffffff) << 2);
            *(float *)(iVar5 + *param_5) = *(float *)(iVar5 + *param_5) + (float)param_2[7];
            iVar5 = (int)(((uVar18 - *param_2) + 1 & 0xffffffff) << 2);
            *(float *)(iVar5 + *param_5) = *(float *)(iVar5 + *param_5) + (float)param_2[7];
            iVar5 = (int)(((uVar18 - *param_2) + 2 & 0xffffffff) << 2);
            *(float *)(iVar5 + *param_5) = (float)param_2[7] + *(float *)(iVar5 + *param_5);
            lVar16 = uVar18 - *param_2;
            uVar18 = uVar18 + 4;
            iVar5 = (int)((lVar16 + 3U & 0xffffffff) << 2);
            *(float *)(iVar5 + *param_5) = (float)param_2[7] + *(float *)(iVar5 + *param_5);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
        if ((int)uVar18 < iVar12) {
          lVar21 = uVar20 - uVar18;
          do {
            uVar20 = uVar18 - *param_2;
            uVar18 = uVar18 + 1;
            iVar12 = (int)((uVar20 & 0xffffffff) << 2);
            *(float *)(iVar12 + *param_5) = *(float *)(iVar12 + *param_5) + (float)param_2[7];
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
      }
    }
    fVar1 = lbl_8213308C;
    if (fVar10 < (float)param_2[6]) {
      *param_4 = (float)param_2[6];
    }
    else if (uVar19 == 1) {
      uVar19 = (uint)(int)(*param_4 * lbl_82006848) >> 1 | (int)(*param_4 * lbl_82006848);
      uVar19 = uVar19 >> 2 | uVar19;
      uVar19 = uVar19 >> 4 | uVar19;
      uVar19 = uVar19 >> 8 | uVar19;
      fVar10 = (float)((uVar19 >> 0x10 | uVar19) + 1) * lbl_8200DFF4 - lbl_8317F2DC;
      fVar2 = lbl_8317F2DC * lbl_82002C28;
      if (fVar10 <= lbl_8317F2DC * lbl_82002C28) {
        fVar2 = fVar10;
      }
      lbl_8317F2DC = fVar2 * lbl_82005718 + lbl_8317F2DC;
      *param_4 = lbl_8317F2DC;
      if (lbl_8317F2DC < fVar1) {
        lbl_8317F2DC = fVar1;
      }
      *param_4 = lbl_8317F2DC;
    }
  }
  return;
}

