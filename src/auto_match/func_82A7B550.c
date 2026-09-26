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


int fn_82A7B550(byte *param_1,uint param_2,byte *param_3,int param_4,ulonglong param_5)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    iVar7 = 0;
  }
  else {
    uVar14 = (ulonglong)(param_2 >> 1);
    pbVar3 = param_3;
    if (uVar14 != 0) {
      do {
        uVar8 = uVar14;
        if ((param_5 & 0xffff) <= (uVar14 & 0xffffffff)) {
          uVar8 = param_5 & 0xffff;
        }
        *pbVar3 = 1;
        pbVar3[1] = 1;
        uVar14 = uVar14 - uVar8;
        iVar13 = 0x80;
        pbVar3[2] = 0;
        pbVar3[3] = 0x80;
        pbVar3[4] = 0;
        pbVar3[5] = 0x80;
        iVar11 = (*param_1 - 0x80) * 0x100;
        iVar9 = (param_1[1] - 0x80) * 0x100;
        iVar7 = 0x80;
        pbVar5 = param_1 + 2;
        if (uVar8 == 1) {
          iVar4 = 0;
          iVar15 = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 - 2;
          iVar4 = (*pbVar5 - 0x80) * 0x100;
          iVar15 = (param_1[3] - 0x80) * 0x100;
          pbVar5 = param_1 + 4;
        }
        *(short *)(pbVar3 + 6) = (short)iVar4;
        *(short *)(pbVar3 + 8) = (short)iVar15;
        *(short *)(pbVar3 + 10) = (short)iVar11;
        *(short *)(pbVar3 + 0xc) = (short)iVar9;
        pbVar3 = pbVar3 + 0xe;
        param_1 = pbVar5;
        uVar1 = uVar8 & 0xffffffff;
        while (uVar1 != 0) {
          pbVar5 = param_1 + 1;
          iVar11 = iVar4 * 2 - iVar11;
          uVar2 = (int)((*param_1 - 0x80) * 0x100 - iVar11) / iVar7;
          if ((int)uVar2 < 8) {
            if ((int)uVar2 < -8) {
              uVar2 = 0xfffffff8;
            }
          }
          else {
            uVar2 = 7;
          }
          iVar6 = uVar2 * iVar7 + iVar11;
          if (iVar6 < 0x8000) {
            if (iVar6 < -0x8000) {
              iVar6 = -0x8000;
            }
          }
          else {
            iVar6 = 0x7fff;
          }
          iVar7 = *(int *)(&lbl_820A6D30 + (uVar2 & 0xf) * 4) * iVar7 >> 8;
          if (iVar7 < 0x10) {
            iVar7 = 0x10;
          }
          iVar9 = iVar15 * 2 - iVar9;
          param_1 = param_1 + 2;
          uVar12 = (int)((*pbVar5 - 0x80) * 0x100 - iVar9) / iVar13;
          if ((int)uVar12 < 8) {
            if ((int)uVar12 < -8) {
              uVar12 = 0xfffffff8;
            }
          }
          else {
            uVar12 = 7;
          }
          iVar10 = uVar12 * iVar13 + iVar9;
          if (iVar10 < 0x8000) {
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
          }
          else {
            iVar10 = 0x7fff;
          }
          iVar13 = *(int *)(&lbl_820A6D30 + (uVar12 & 0xf) * 4) * iVar13 >> 8;
          if (iVar13 < 0x10) {
            iVar13 = 0x10;
          }
          *pbVar3 = (char)uVar2 << 4 | (byte)uVar12 & 0xf;
          pbVar3 = pbVar3 + 1;
          uVar8 = uVar8 - 1;
          iVar11 = iVar4;
          iVar4 = iVar6;
          iVar9 = iVar15;
          iVar15 = iVar10;
          uVar1 = uVar8;
        }
      } while ((uVar14 & 0xffffffff) != 0);
    }
    iVar7 = (int)pbVar3 - (int)param_3;
  }
  return iVar7;
}

