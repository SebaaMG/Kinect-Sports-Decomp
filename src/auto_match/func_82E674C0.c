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


void fn_82E674C0(byte *param_1,longlong param_2,int param_3,ulonglong param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  uVar10 = 0;
  iVar8 = (int)param_2 + 7 >> 3;
  iVar5 = (int)param_4;
  pbVar9 = param_1 + iVar8;
  pbVar13 = (byte *)((iVar5 >> 3) + (uint)(iVar5 < 0 && (param_4 & 7) != 0) + iVar8 + param_3);
  lVar6 = param_4 + ((longlong)(iVar5 >> 3) + (ulonglong)(iVar5 < 0 && (param_4 & 7) != 0) &
                    0x1fffffff) * -8;
  param_2 = param_2 + lVar6;
  uVar3 = (uint)lVar6;
  uVar7 = 8 - uVar3;
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)(param_2 - 1U);
    iVar5 = iVar5 + ((iVar5 >> 3) + (uint)(iVar5 < 0 && (param_2 - 1U & 7) != 0)) * -8 + 1;
  }
  bVar4 = (byte)((0xff >> (8U - iVar5 & 0x3f)) << (8U - iVar5 & 0x3f));
  if ((int)uVar7 < 8) {
    bVar1 = true;
    pbVar14 = pbVar13;
    if (param_1 < pbVar9) {
      pbVar12 = pbVar9 + -1;
      bVar2 = *pbVar12;
      uVar10 = (uint)bVar2;
      bVar1 = (int)param_2 <= iVar8 << 3;
      if (!bVar1) {
        *pbVar13 = (bVar2 << (uVar7 & 0x3f) | (byte)(0 >> (uVar3 & 0x3f))) & bVar4 |
                   *pbVar13 & ~bVar4;
      }
      pbVar14 = pbVar13 + -1;
      if (param_1 < pbVar12) {
        if (bVar1) {
          pbVar12 = pbVar9 + -2;
          uVar10 = (uint)*pbVar12;
          *pbVar14 = (*pbVar12 << (uVar7 & 0x3f) | bVar2 >> (uVar3 & 0x3f)) & bVar4 |
                     *pbVar14 & ~bVar4;
          pbVar14 = pbVar13 + -2;
        }
        bVar1 = !bVar1 && bVar1;
        if (param_1 < pbVar12) {
          iVar8 = (int)pbVar12 - (int)param_1;
          uVar11 = uVar10;
          do {
            pbVar12 = pbVar12 + -1;
            uVar10 = (uint)*pbVar12;
            *pbVar14 = *pbVar12 << (uVar7 & 0x3f) | (byte)(uVar11 >> (uVar3 & 0x3f));
            pbVar14 = pbVar14 + -1;
            iVar8 = iVar8 + -1;
            uVar11 = uVar10;
          } while (iVar8 != 0);
        }
      }
    }
    bVar2 = (byte)(0xff << (uVar7 & 0x3f)) & *pbVar14;
    if (bVar1) {
      *pbVar14 = ((byte)(uVar10 >> (uVar3 & 0x3f)) | bVar2) & bVar4 | *pbVar14 & ~bVar4;
    }
    else {
      *pbVar14 = (byte)(uVar10 >> (uVar3 & 0x3f)) | bVar2;
    }
  }
  else {
    pbVar14 = pbVar13 + -1;
    if (param_1 <= pbVar9 + -1) {
      bVar2 = *pbVar14;
      *pbVar14 = bVar2 & ~bVar4;
      *pbVar14 = pbVar9[-1] & bVar4 | bVar2 & ~bVar4;
      if (param_1 <= pbVar9 + -2) {
        pbVar14 = pbVar9 + -1;
        pbVar9 = pbVar9 + -2 + (1 - (int)param_1);
        pbVar13 = pbVar13 + -1;
        do {
          pbVar14 = pbVar14 + -1;
          pbVar13 = pbVar13 + -1;
          *pbVar13 = *pbVar14;
          pbVar9 = pbVar9 + -1;
        } while (pbVar9 != (byte *)0x0);
      }
    }
  }
  return;
}

