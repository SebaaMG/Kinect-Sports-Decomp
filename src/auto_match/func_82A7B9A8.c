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
extern unsigned int lbl_820A6D30;
extern unsigned int lbl_820A6D70;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82A7B9A8(float *param_1,uint param_2,byte *param_3,int param_4,ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  float *pfVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  
  dVar5 = lbl_820A6D70;
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar15 = 0;
  }
  else {
    uVar18 = (ulonglong)(param_2 >> 3);
    pbVar8 = param_3;
    if (uVar18 != 0) {
      do {
        uVar11 = uVar18;
        if ((param_5 & 0xffff) <= (uVar18 & 0xffffffff)) {
          uVar11 = param_5 & 0xffff;
        }
        *pbVar8 = 1;
        pbVar8[1] = 1;
        uVar18 = uVar18 - uVar11;
        iVar15 = 0x80;
        iVar17 = 0x80;
        pbVar8[2] = 0;
        pbVar8[3] = 0x80;
        pbVar8[4] = 0;
        pbVar8[5] = 0x80;
        fVar1 = *param_1;
        fVar3 = param_1[1];
        pfVar6 = param_1 + 2;
        if (uVar11 == 1) {
          iVar19 = 0;
          iVar9 = 0;
          uVar11 = 0;
        }
        else {
          fVar2 = *pfVar6;
          uVar11 = uVar11 - 2;
          pfVar6 = param_1 + 4;
          iVar19 = (int)((double)fVar2 * dVar5);
          iVar9 = (int)((double)param_1[3] * dVar5);
        }
        *(short *)(pbVar8 + 6) = (short)iVar19;
        *(short *)(pbVar8 + 8) = (short)iVar9;
        *(short *)(pbVar8 + 10) = (short)(int)((double)fVar1 * dVar5);
        *(short *)(pbVar8 + 0xc) = (short)(int)((double)fVar3 * dVar5);
        pbVar8 = pbVar8 + 0xe;
        iVar14 = (int)((double)fVar1 * dVar5);
        iVar12 = (int)((double)fVar3 * dVar5);
        param_1 = pfVar6;
        uVar4 = uVar11 & 0xffffffff;
        while (uVar4 != 0) {
          pfVar6 = param_1 + 1;
          iVar14 = iVar19 * 2 - iVar14;
          uVar7 = ((int)((double)*param_1 * dVar5) - iVar14) / iVar15;
          if ((int)uVar7 < 8) {
            if ((int)uVar7 < -8) {
              uVar7 = 0xfffffff8;
            }
          }
          else {
            uVar7 = 7;
          }
          iVar10 = uVar7 * iVar15 + iVar14;
          if (iVar10 < 0x8000) {
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
          }
          else {
            iVar10 = 0x7fff;
          }
          iVar15 = *(int *)(&lbl_820A6D30 + (uVar7 & 0xf) * 4) * iVar15 >> 8;
          if (iVar15 < 0x10) {
            iVar15 = 0x10;
          }
          iVar12 = iVar9 * 2 - iVar12;
          param_1 = param_1 + 2;
          uVar16 = ((int)((double)*pfVar6 * dVar5) - iVar12) / iVar17;
          if ((int)uVar16 < 8) {
            if ((int)uVar16 < -8) {
              uVar16 = 0xfffffff8;
            }
          }
          else {
            uVar16 = 7;
          }
          iVar13 = uVar16 * iVar17 + iVar12;
          if (iVar13 < 0x8000) {
            if (iVar13 < -0x8000) {
              iVar13 = -0x8000;
            }
          }
          else {
            iVar13 = 0x7fff;
          }
          iVar17 = *(int *)(&lbl_820A6D30 + (uVar16 & 0xf) * 4) * iVar17 >> 8;
          if (iVar17 < 0x10) {
            iVar17 = 0x10;
          }
          *pbVar8 = (char)uVar7 << 4 | (byte)uVar16 & 0xf;
          pbVar8 = pbVar8 + 1;
          uVar11 = uVar11 - 1;
          iVar14 = iVar19;
          iVar12 = iVar9;
          iVar19 = iVar10;
          iVar9 = iVar13;
          uVar4 = uVar11;
        }
      } while ((uVar18 & 0xffffffff) != 0);
    }
    iVar15 = (int)pbVar8 - (int)param_3;
  }
  return iVar15;
}

