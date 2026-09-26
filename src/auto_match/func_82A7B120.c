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


int fn_82A7B120(int param_1,uint param_2,byte *param_3,int param_4,ulonglong param_5)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  int iVar12;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar2 = 0;
  }
  else {
    uVar11 = (ulonglong)(param_2 >> 1);
    pbVar3 = param_3;
    if (uVar11 != 0) {
      pbVar9 = (byte *)(param_1 + -1);
      do {
        uVar4 = uVar11;
        if ((param_5 & 0xffff) <= (uVar11 & 0xffffffff)) {
          uVar4 = param_5 & 0xffff;
        }
        *pbVar3 = 1;
        pbVar3[1] = 0;
        pbVar3[2] = 0x80;
        uVar11 = uVar11 - uVar4;
        iVar2 = 0x80;
        iVar6 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[1];
        pbVar10 = pbVar9 + 2;
        if (uVar4 == 1) {
          iVar12 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 - 2;
          pbVar10 = pbVar9 + 4;
          iVar12 = (uint)pbVar9[4] * 0x100 + (uint)pbVar9[3];
        }
        *(short *)(pbVar3 + 3) = (short)iVar12;
        *(short *)(pbVar3 + 5) = (short)iVar6;
        pbVar3 = pbVar3 + 7;
        pbVar9 = pbVar10;
        while ((uVar4 & 0xffffffff) != 0) {
          pbVar10 = pbVar9 + 2;
          iVar6 = iVar12 * 2 - iVar6;
          uVar5 = uVar4 - 1;
          uVar1 = (int)(((uint)pbVar9[2] * 0x100 + (uint)pbVar9[1]) - iVar6) / iVar2;
          if ((int)uVar1 < 8) {
            if ((int)uVar1 < -8) {
              uVar1 = 0xfffffff8;
            }
          }
          else {
            uVar1 = 7;
          }
          iVar7 = uVar1 * iVar2 + iVar6;
          if (iVar7 < 0x8000) {
            if (iVar7 < -0x8000) {
              iVar7 = -0x8000;
            }
          }
          else {
            iVar7 = 0x7fff;
          }
          iVar2 = *(int *)(&lbl_820A6D30 + (uVar1 & 0xf) * 4) * iVar2 >> 8;
          if (iVar2 < 0x10) {
            iVar2 = 0x10;
          }
          if ((uVar5 & 0xffffffff) == 0) {
            uVar8 = 0;
            iVar6 = iVar12;
            iVar12 = iVar7;
          }
          else {
            pbVar10 = pbVar9 + 4;
            uVar5 = uVar4 - 2;
            iVar12 = iVar7 * 2 - iVar12;
            uVar8 = (int)(((uint)*pbVar10 * 0x100 + (uint)pbVar9[3]) - iVar12) / iVar2;
            if ((int)uVar8 < 8) {
              if ((int)uVar8 < -8) {
                uVar8 = 0xfffffff8;
              }
            }
            else {
              uVar8 = 7;
            }
            iVar12 = iVar2 * uVar8 + iVar12;
            if (iVar12 < 0x8000) {
              if (iVar12 < -0x8000) {
                iVar12 = -0x8000;
              }
            }
            else {
              iVar12 = 0x7fff;
            }
            iVar2 = *(int *)(&lbl_820A6D30 + (uVar8 & 0xf) * 4) * iVar2 >> 8;
            iVar6 = iVar7;
            if (iVar2 < 0x10) {
              iVar2 = 0x10;
            }
          }
          *pbVar3 = (char)uVar1 << 4 | (byte)uVar8 & 0xf;
          pbVar3 = pbVar3 + 1;
          uVar4 = uVar5;
          pbVar9 = pbVar10;
        }
      } while ((uVar11 & 0xffffffff) != 0);
    }
    iVar2 = (int)pbVar3 - (int)param_3;
  }
  return iVar2;
}

