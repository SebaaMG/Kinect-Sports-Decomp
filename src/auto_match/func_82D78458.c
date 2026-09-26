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


void fn_82D78458(undefined8 param_1,byte *param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  
  if (2 < param_2[0x21]) {
    if (param_2[0x20] < 4) {
      if ((param_3 >> 4 & 8U) == 0) {
        iVar13 = ((uint)LZCOUNT(param_3 >> 4 & 4) >> 5) + 1;
      }
      else {
        iVar13 = 0;
      }
      if ((param_4 >> 4 & 8U) == 0) {
        iVar14 = ((uint)LZCOUNT(param_4 >> 4 & 4) >> 5) + 1;
      }
      else {
        iVar14 = 0;
      }
      uVar9 = 0;
      bVar3 = true;
      uVar8 = 0;
      if (param_2[0x21] != 0) {
        uVar11 = (ulonglong)param_2[0x21];
        pbVar7 = param_2;
        uVar9 = 0;
        uVar8 = 0;
        do {
          bVar2 = *pbVar7;
          if (bVar2 < 3) {
            uVar12 = (ulonglong)(pbVar7[1] >> 4);
            uVar6 = (uint)((~uVar12 & 0xffffffff) >> 3) & 1;
            uVar4 = (uint)((~uVar12 & 0xffffffff) >> 2) & 1;
            uVar5 = (uint)((~uVar12 & 0xffffffff) >> 1) & 1;
            if ((iVar14 != 0) && (iVar10 = 1 << (uVar5 * 2 + uVar4) * 2, (iVar10 << 1 & uVar8) == 0)
               ) {
              uVar8 = iVar10 + uVar8;
            }
            if ((iVar14 != 1) &&
               (iVar10 = 1 << ((uVar5 + 2) * 2 + uVar6) * 2, (iVar10 << 1 & uVar8) == 0)) {
              uVar8 = iVar10 + uVar8;
            }
            if (iVar14 != 2) {
              iVar10 = 1 << ((uVar4 + 4) * 2 + uVar6) * 2;
              bVar1 = (iVar10 << 1 & uVar8) == 0;
LAB_82d7875c:
              if (bVar1) {
                uVar8 = iVar10 + uVar8;
              }
            }
          }
          else {
            if (6 < bVar2) {
              uVar12 = (ulonglong)((int)(uint)bVar2 >> 4);
              uVar4 = (uint)((~uVar12 & 0xffffffff) >> 2) & 1;
              uVar5 = (uint)((~uVar12 & 0xffffffff) >> 1) & 1;
              if ((bVar2 & 0xf) == 0) {
                iVar10 = uVar5 * 2 + uVar4;
              }
              else {
                if ((bVar2 & 0xf) == 1) {
                  iVar10 = uVar5 + 2;
                }
                else {
                  iVar10 = uVar4 + 4;
                }
                iVar10 = iVar10 * 2 + ((uint)((~uVar12 & 0xffffffff) >> 3) & 1);
              }
              iVar10 = 1 << iVar10 * 2;
              if ((iVar10 << 1 & uVar9) == 0) {
                uVar9 = iVar10 + uVar9;
              }
              bVar2 = pbVar7[1];
              uVar12 = (ulonglong)((int)(uint)bVar2 >> 4);
              uVar4 = (uint)((~uVar12 & 0xffffffff) >> 2) & 1;
              uVar5 = (uint)((~uVar12 & 0xffffffff) >> 1) & 1;
              if ((bVar2 & 0xf) == 0) {
                iVar10 = 1 << (uVar5 * 2 + uVar4) * 2;
                bVar1 = (iVar10 << 1 & uVar8) == 0;
              }
              else {
                if ((bVar2 & 0xf) == 1) {
                  iVar10 = uVar5 + 2;
                }
                else {
                  iVar10 = uVar4 + 4;
                }
                iVar10 = 1 << (iVar10 * 2 + ((uint)((~uVar12 & 0xffffffff) >> 3) & 1)) * 2;
                bVar1 = (iVar10 << 1 & uVar8) == 0;
              }
              goto LAB_82d7875c;
            }
            uVar12 = (ulonglong)(pbVar7[1] >> 4);
            uVar6 = (uint)((~uVar12 & 0xffffffff) >> 3) & 1;
            uVar4 = (uint)((~uVar12 & 0xffffffff) >> 2) & 1;
            uVar5 = (uint)((~uVar12 & 0xffffffff) >> 1) & 1;
            if ((iVar13 != 0) && (iVar10 = 1 << (uVar5 * 2 + uVar4) * 2, (iVar10 << 1 & uVar9) == 0)
               ) {
              uVar9 = iVar10 + uVar9;
            }
            if ((iVar13 != 1) &&
               (iVar10 = 1 << ((uVar5 + 2) * 2 + uVar6) * 2, (iVar10 << 1 & uVar9) == 0)) {
              uVar9 = iVar10 + uVar9;
            }
            if ((iVar13 != 2) &&
               (iVar10 = 1 << ((uVar4 + 4) * 2 + uVar6) * 2, (iVar10 << 1 & uVar9) == 0)) {
              uVar9 = iVar10 + uVar9;
            }
          }
          pbVar7 = pbVar7 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (((uVar9 & 0x555555) == 0) && ((uVar8 & 0x555555) == 0)) {
        bVar3 = false;
      }
      param_2[0x22] = !bVar3;
    }
    else {
      param_2[0x22] = 1;
    }
  }
  return;
}

