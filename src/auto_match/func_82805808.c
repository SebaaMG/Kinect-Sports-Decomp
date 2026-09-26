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


longlong fn_82805808(int param_1)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar6 = (ulonglong)*(ushort *)(param_1 + 0x22);
  lVar2 = 0;
  pbVar9 = *(byte **)(param_1 + 0xc);
  if (uVar6 != 0) {
    uVar10 = (uint)*(ushort *)(param_1 + 0x1e);
    do {
      if (uVar10 != 0) {
        uVar3 = 6;
        do {
          bVar1 = *pbVar9;
          uVar7 = uVar3 - 6;
          lVar4 = 0;
          uVar8 = 0x80;
          do {
            if (uVar10 <= uVar7) break;
            if (((bVar1 & uVar8) != 0) && (((ulonglong)bVar1 & uVar8 >> 3) == 0)) {
              lVar4 = lVar4 + 1;
            }
            uVar8 = uVar8 >> 1;
            uVar7 = uVar7 + 1;
          } while (uVar8 != 0x10);
          bVar1 = bVar1 & 3;
          lVar2 = lVar4 + lVar2;
          if (bVar1 == 1) {
            lVar4 = 0;
            uVar8 = 0x80;
            uVar7 = uVar3;
            do {
              if (uVar10 <= uVar7) break;
              if (((pbVar9[1] & uVar8) != 0) && (((ulonglong)pbVar9[1] & uVar8 >> 3) == 0)) {
                lVar4 = lVar4 + 1;
              }
              uVar8 = uVar8 >> 1;
              uVar7 = uVar7 + 1;
            } while (uVar8 != 0x10);
LAB_828059bc:
            pbVar9 = pbVar9 + 1;
            lVar2 = lVar4 + lVar2;
          }
          else {
            if (bVar1 == 2) {
              uVar7 = uVar3 - 3;
              lVar4 = 0;
              uVar8 = 0x80;
              do {
                if (uVar10 <= uVar7) break;
                if (((pbVar9[1] & uVar8) != 0) && (((ulonglong)pbVar9[1] & uVar8 >> 3) == 0)) {
                  lVar4 = lVar4 + 1;
                }
                uVar8 = uVar8 >> 1;
                uVar7 = uVar7 + 1;
              } while (uVar8 != 0x10);
              goto LAB_828059bc;
            }
            if (bVar1 == 3) {
              uVar7 = uVar3 - 3;
              lVar4 = 0;
              uVar8 = 0x80;
              do {
                if (uVar10 <= uVar7) break;
                if (((pbVar9[1] & uVar8) != 0) && (((ulonglong)pbVar9[1] & uVar8 >> 3) == 0)) {
                  lVar4 = lVar4 + 1;
                }
                uVar8 = uVar8 >> 1;
                uVar7 = uVar7 + 1;
              } while (uVar8 != 0x10);
              pbVar9 = pbVar9 + 2;
              lVar5 = 0;
              uVar8 = 0x80;
              uVar7 = uVar3;
              do {
                if (uVar10 <= uVar7) break;
                if (((*pbVar9 & uVar8) != 0) && (((ulonglong)*pbVar9 & uVar8 >> 3) == 0)) {
                  lVar5 = lVar5 + 1;
                }
                uVar8 = uVar8 >> 1;
                uVar7 = uVar7 + 1;
              } while (uVar8 != 0x10);
              lVar2 = lVar5 + lVar4 + lVar2;
            }
          }
          pbVar9 = pbVar9 + 1;
          uVar7 = uVar3 + 3;
          uVar3 = uVar3 + 9;
        } while (uVar7 < uVar10);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return lVar2;
}

