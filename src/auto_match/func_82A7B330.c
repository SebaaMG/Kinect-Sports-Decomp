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

int fn_82A7B330(int param_1,uint param_2,byte *param_3,int param_4,ulonglong param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  float *pfVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  
  dVar1 = lbl_820A6D70;
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar3 = 0;
  }
  else {
    uVar13 = (ulonglong)(param_2 >> 2);
    pbVar5 = param_3;
    if (uVar13 != 0) {
      pfVar6 = (float *)(param_1 + -4);
      do {
        uVar8 = uVar13;
        if ((param_5 & 0xffff) <= (uVar13 & 0xffffffff)) {
          uVar8 = param_5 & 0xffff;
        }
        *pbVar5 = 1;
        pbVar5[1] = 0;
        pbVar5[2] = 0x80;
        uVar13 = uVar13 - uVar8;
        iVar3 = (int)((double)pfVar6[1] * dVar1);
        iVar11 = 0x80;
        pfVar7 = pfVar6 + 1;
        if (uVar8 == 1) {
          iVar10 = 0;
          uVar8 = 0;
        }
        else {
          pfVar7 = pfVar6 + 2;
          uVar8 = uVar8 - 2;
          iVar10 = (int)((double)pfVar6[2] * dVar1);
        }
        *(short *)(pbVar5 + 3) = (short)iVar10;
        *(short *)(pbVar5 + 5) = (short)iVar3;
        pbVar5 = pbVar5 + 7;
        pfVar6 = pfVar7;
        while ((uVar8 & 0xffffffff) != 0) {
          pfVar7 = pfVar6 + 1;
          iVar3 = iVar10 * 2 - iVar3;
          uVar9 = uVar8 - 1;
          uVar4 = ((int)((double)pfVar6[1] * dVar1) - iVar3) / iVar11;
          if ((int)uVar4 < 8) {
            if ((int)uVar4 < -8) {
              uVar4 = 0xfffffff8;
            }
          }
          else {
            uVar4 = 7;
          }
          iVar3 = uVar4 * iVar11 + iVar3;
          if (iVar3 < 0x8000) {
            if (iVar3 < -0x8000) {
              iVar3 = -0x8000;
            }
          }
          else {
            iVar3 = 0x7fff;
          }
          iVar11 = *(int *)(&lbl_820A6D30 + (uVar4 & 0xf) * 4) * iVar11 >> 8;
          if (iVar11 < 0x10) {
            iVar11 = 0x10;
          }
          if ((uVar9 & 0xffffffff) == 0) {
            uVar12 = 0;
            iVar2 = iVar3;
            iVar3 = iVar10;
          }
          else {
            pfVar7 = pfVar6 + 2;
            uVar9 = uVar8 - 2;
            iVar10 = iVar3 * 2 - iVar10;
            uVar12 = ((int)((double)*pfVar7 * dVar1) - iVar10) / iVar11;
            if ((int)uVar12 < 8) {
              if ((int)uVar12 < -8) {
                uVar12 = 0xfffffff8;
              }
            }
            else {
              uVar12 = 7;
            }
            iVar2 = iVar11 * uVar12 + iVar10;
            if (iVar2 < 0x8000) {
              if (iVar2 < -0x8000) {
                iVar2 = -0x8000;
              }
            }
            else {
              iVar2 = 0x7fff;
            }
            iVar11 = *(int *)(&lbl_820A6D30 + (uVar12 & 0xf) * 4) * iVar11 >> 8;
            if (iVar11 < 0x10) {
              iVar11 = 0x10;
            }
          }
          *pbVar5 = (char)uVar4 << 4 | (byte)uVar12 & 0xf;
          pbVar5 = pbVar5 + 1;
          uVar8 = uVar9;
          pfVar6 = pfVar7;
          iVar10 = iVar2;
        }
      } while ((uVar13 & 0xffffffff) != 0);
    }
    iVar3 = (int)pbVar5 - (int)param_3;
  }
  return iVar3;
}

