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
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_82A56BB0(int *param_1,undefined8 param_2,uint param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  iVar12 = *param_1;
  uVar2 = *(ushort *)(iVar12 + 0x22);
  uVar13 = (uint)uVar2;
  if (uVar2 != 0) {
    iVar7 = 0;
    iVar3 = 0;
    uVar14 = uVar13;
    do {
      iVar10 = *(int *)(iVar12 + 0x140) + iVar3;
      iVar3 = iVar3 + 0x6f0;
      *(undefined4 *)(param_1[0x61] + iVar7) = *(undefined4 *)(iVar10 + 0x3c);
      iVar7 = iVar7 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (param_1[0x6e] != 0) {
    param_3 = param_3 & 0xffff;
    iVar12 = 0;
    if (param_3 != 0) {
      uVar14 = (uint)uVar2;
      iVar7 = uVar2 * uVar14;
      dVar20 = (double)lbl_821AAD20;
      dVar19 = (double)lbl_82002AE0;
      do {
        if (param_1[0x73] == 0) {
          fn_82F68CC0(param_1[0x75],param_1[0x70],iVar7 * 4);
        }
        else {
          iVar3 = 0;
          dVar16 = (double)((float)(longlong)iVar12 / (float)(longlong)(int)param_3);
          fVar1 = (float)(dVar19 - dVar16);
          if (3 < iVar7) {
            iVar10 = 0;
            do {
              iVar8 = iVar10 + 0xc;
              iVar3 = iVar3 + 4;
              iVar6 = iVar10 + 8;
              *(float *)(param_1[0x75] + iVar10) =
                   (float)((double)*(float *)(iVar10 + param_1[0x70]) * dVar16 +
                          (double)(*(float *)(param_1[0x74] + iVar10) * fVar1));
              iVar5 = param_1[0x74] + iVar10;
              iVar9 = iVar10 + param_1[0x70];
              iVar4 = param_1[0x75] + iVar10;
              iVar10 = iVar10 + 0x10;
              *(float *)(iVar4 + 4) =
                   (float)((double)*(float *)(iVar9 + 4) * dVar16 +
                          (double)(*(float *)(iVar5 + 4) * fVar1));
              *(float *)(iVar6 + param_1[0x75]) =
                   (float)((double)*(float *)(iVar6 + param_1[0x70]) * dVar16 +
                          (double)(*(float *)(iVar6 + param_1[0x74]) * fVar1));
              *(float *)(iVar8 + param_1[0x75]) =
                   (float)((double)*(float *)(iVar8 + param_1[0x70]) * dVar16 +
                          (double)(*(float *)(iVar8 + param_1[0x74]) * fVar1));
            } while (iVar3 < iVar7 + -3);
          }
          if (iVar3 < iVar7) {
            iVar10 = iVar7 - iVar3;
            iVar3 = iVar3 << 2;
            do {
              *(float *)(iVar3 + param_1[0x75]) =
                   (float)((double)*(float *)(iVar3 + param_1[0x70]) * dVar16 +
                          (double)(*(float *)(iVar3 + param_1[0x74]) * fVar1));
              iVar3 = iVar3 + 4;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        iVar3 = 0;
        if (3 < uVar14) {
          iVar10 = 0;
          do {
            iVar6 = iVar10 + 0xc;
            iVar3 = iVar3 + 4;
            iVar4 = iVar10 + 8;
            *(undefined4 *)(iVar10 + param_1[0x60]) = **(undefined4 **)(iVar10 + param_1[0x61]);
            iVar5 = iVar10 + param_1[0x61];
            iVar9 = iVar10 + param_1[0x60];
            iVar10 = iVar10 + 0x10;
            *(undefined4 *)(iVar9 + 4) = **(undefined4 **)(iVar5 + 4);
            *(undefined4 *)(param_1[0x60] + iVar4) = **(undefined4 **)(param_1[0x61] + iVar4);
            *(undefined4 *)(param_1[0x60] + iVar6) = **(undefined4 **)(param_1[0x61] + iVar6);
          } while (iVar3 < (int)(uVar2 - 3));
        }
        if (iVar3 < (int)uVar14) {
          iVar10 = uVar13 - iVar3;
          iVar3 = iVar3 << 2;
          do {
            *(undefined4 *)(param_1[0x60] + iVar3) = **(undefined4 **)(param_1[0x61] + iVar3);
            iVar3 = iVar3 + 4;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (uVar14 != 0) {
          iVar3 = 0;
          iVar10 = 0;
          uVar15 = uVar13;
          do {
            iVar9 = 0;
            iVar5 = param_1[0x75] + iVar10;
            dVar16 = dVar20;
            dVar18 = dVar20;
            if (1 < uVar2) {
              iVar4 = 0;
              do {
                iVar6 = param_1[0x60] + iVar4;
                iVar8 = iVar4 + iVar5;
                iVar9 = iVar9 + 2;
                dVar16 = (double)(float)((double)*(float *)(iVar4 + iVar5) *
                                         (double)*(float *)(param_1[0x60] + iVar4) + dVar16);
                iVar4 = iVar4 + 8;
                dVar18 = (double)(float)((double)*(float *)(iVar8 + 4) *
                                         (double)*(float *)(iVar6 + 4) + dVar18);
              } while (iVar9 < (int)(uVar2 - 1));
            }
            dVar17 = dVar20;
            if (iVar9 < (int)(uint)uVar2) {
              dVar17 = (double)(*(float *)(param_1[0x60] + iVar9 * 4) *
                               *(float *)(iVar9 * 4 + iVar5));
            }
            iVar10 = uVar13 * 4 + iVar10;
            **(float **)(param_1[0x61] + iVar3) = (float)((double)(float)(dVar18 + dVar16) + dVar17)
            ;
            piVar11 = (int *)(param_1[0x61] + iVar3);
            iVar3 = iVar3 + 4;
            *piVar11 = *piVar11 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)param_3);
    }
  }
  return 0;
}

