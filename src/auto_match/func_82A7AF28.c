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


int fn_82A7AF28(int param_1,ulonglong param_2,byte *param_3,int param_4,ulonglong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == 0)) {
    iVar6 = 0;
  }
  else {
    pbVar1 = (byte *)(param_1 + -1);
    pbVar3 = param_3;
    do {
      uVar4 = param_2;
      if ((param_5 & 0xffff) <= (param_2 & 0xffffffff)) {
        uVar4 = param_5 & 0xffff;
      }
      *pbVar3 = 1;
      pbVar3[1] = 0;
      pbVar3[2] = 0x80;
      param_2 = param_2 - uVar4;
      iVar6 = 0x80;
      iVar7 = (pbVar1[1] - 0x80) * 0x100;
      pbVar2 = pbVar1 + 1;
      if (uVar4 == 1) {
        iVar10 = 0;
        uVar4 = 0;
      }
      else {
        pbVar2 = pbVar1 + 2;
        uVar4 = uVar4 - 2;
        iVar10 = (pbVar1[2] - 0x80) * 0x100;
      }
      *(short *)(pbVar3 + 3) = (short)iVar10;
      *(short *)(pbVar3 + 5) = (short)iVar7;
      pbVar3 = pbVar3 + 7;
      pbVar1 = pbVar2;
      while ((uVar4 & 0xffffffff) != 0) {
        pbVar2 = pbVar1 + 1;
        iVar7 = iVar10 * 2 - iVar7;
        uVar5 = uVar4 - 1;
        uVar11 = (int)((pbVar1[1] - 0x80) * 0x100 - iVar7) / iVar6;
        if ((int)uVar11 < 8) {
          if ((int)uVar11 < -8) {
            uVar11 = 0xfffffff8;
          }
        }
        else {
          uVar11 = 7;
        }
        iVar8 = uVar11 * iVar6 + iVar7;
        if (iVar8 < 0x8000) {
          if (iVar8 < -0x8000) {
            iVar8 = -0x8000;
          }
        }
        else {
          iVar8 = 0x7fff;
        }
        iVar6 = *(int *)(&lbl_820A6D30 + (uVar11 & 0xf) * 4) * iVar6 >> 8;
        if (iVar6 < 0x10) {
          iVar6 = 0x10;
        }
        if ((uVar5 & 0xffffffff) == 0) {
          uVar9 = 0;
          iVar7 = iVar10;
          iVar10 = iVar8;
        }
        else {
          pbVar2 = pbVar1 + 2;
          uVar5 = uVar4 - 2;
          iVar10 = iVar8 * 2 - iVar10;
          uVar9 = (int)((*pbVar2 - 0x80) * 0x100 - iVar10) / iVar6;
          if ((int)uVar9 < 8) {
            if ((int)uVar9 < -8) {
              uVar9 = 0xfffffff8;
            }
          }
          else {
            uVar9 = 7;
          }
          iVar10 = iVar6 * uVar9 + iVar10;
          if (iVar10 < 0x8000) {
            if (iVar10 < -0x8000) {
              iVar10 = -0x8000;
            }
          }
          else {
            iVar10 = 0x7fff;
          }
          iVar6 = *(int *)(&lbl_820A6D30 + (uVar9 & 0xf) * 4) * iVar6 >> 8;
          iVar7 = iVar8;
          if (iVar6 < 0x10) {
            iVar6 = 0x10;
          }
        }
        *pbVar3 = (char)uVar11 << 4 | (byte)uVar9 & 0xf;
        pbVar3 = pbVar3 + 1;
        uVar4 = uVar5;
        pbVar1 = pbVar2;
      }
    } while ((param_2 & 0xffffffff) != 0);
    iVar6 = (int)pbVar3 - (int)param_3;
  }
  return iVar6;
}

