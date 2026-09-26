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
extern int fn_829EC740();


bool fn_829ECB08(int param_1,longlong param_2,ulonglong param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  short sVar7;
  longlong lVar8;
  ushort uVar12;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  
  if ((1 < (param_3 & 0xffffffff)) && ((param_3 & 0xffffffff) != 0)) {
    uVar12 = *(ushort *)param_2;
    uVar13 = param_2 + param_3;
    *(ushort *)(param_1 + 0x10) = uVar12;
    lVar8 = param_2;
    if (9 < uVar12) {
      lVar8 = param_2 + 2;
      uVar3 = lVar8 - param_2 & 1;
      if (uVar3 != 0) {
        lVar8 = (lVar8 - uVar3) + 2;
      }
      if ((uVar13 & 0xffffffff) < (lVar8 + 2U & 0xffffffff)) {
        return false;
      }
      uVar12 = *(ushort *)lVar8;
    }
    *(ushort *)(param_1 + 0x12) = uVar12;
    if (uVar12 == 2) {
      lVar8 = lVar8 + 2;
      uVar3 = lVar8 - param_2 & 1;
      if (uVar3 != 0) {
        lVar8 = (lVar8 - uVar3) + 2;
      }
      if ((((lVar8 + 2U & 0xffffffff) <= (uVar13 & 0xffffffff)) && (param_4 == *(short *)lVar8)) &&
         (uVar3 = fn_829EC740(param_1,param_2,param_3,lVar8 + 2U,*(undefined2 *)(param_1 + 0x10)),
         (uVar3 & 0xffffffff) != 0)) {
        uVar9 = uVar3 - param_2 & 3;
        if (uVar9 != 0) {
          uVar3 = (uVar3 - uVar9) + 4;
        }
        uVar9 = uVar3 + 4;
        if ((uVar9 & 0xffffffff) <= (uVar13 & 0xffffffff)) {
          uVar5 = uVar9 - param_2 & 1;
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)uVar3;
          if (uVar5 != 0) {
            uVar9 = (uVar9 - uVar5) + 2;
          }
          iVar4 = (int)uVar9;
          uVar3 = (ulonglong)*(uint *)(param_1 + 0x94);
          if (((uVar3 != 0) && (uVar3 < 0x1fffffff)) &&
             ((uVar3 * 6 + uVar9 & 0xffffffff) <= (uVar13 & 0xffffffff))) {
            iVar11 = *(int *)(param_1 + 0x50);
            iVar14 = 1;
            *(int *)(param_1 + 0x98) = iVar4;
            if (1 < *(ushort *)(param_1 + 0x14)) {
              iVar15 = *(int *)(param_1 + 0x2c);
              iVar10 = 2;
              piVar6 = (int *)(param_1 + 0x78);
              uVar3 = uVar9;
              do {
                uVar12 = *(ushort *)(iVar10 + iVar15);
                uVar2 = iVar11 + 3U & 0xfffffffc;
                piVar6[-8] = uVar2;
                iVar11 = (uint)uVar12 * 4 + uVar2;
                *piVar6 = iVar11;
                iVar15 = *(int *)(param_1 + 0x2c);
                if (*(short *)(iVar10 + iVar15 + -2) != 0) {
                  uVar5 = (ulonglong)*(ushort *)(iVar10 + iVar15 + -2);
                  sVar7 = *(short *)uVar3;
                  do {
                    do {
                      iVar1 = (int)uVar3;
                      uVar3 = uVar3 + 6;
                      iVar11 = (((uint)*(ushort *)(iVar1 + 4) - (uint)*(ushort *)(iVar1 + 2)) + 1) *
                               2 + iVar11;
                    } while (sVar7 == *(short *)uVar3);
                    uVar5 = uVar5 - 1;
                    sVar7 = *(short *)uVar3;
                  } while (uVar5 != 0);
                }
                iVar14 = iVar14 + 1;
                piVar6 = piVar6 + 1;
                iVar10 = iVar10 + 2;
              } while (iVar14 < (int)(uint)*(ushort *)(param_1 + 0x14));
            }
            if (*(ushort *)(param_1 + 0x10) < 10) {
              iVar11 = iVar4 - (int)param_2;
            }
            else {
              lVar8 = (ulonglong)*(uint *)(param_1 + 0x94) * 6 + uVar9;
              uVar3 = lVar8 - param_2 & 3;
              if (uVar3 != 0) {
                lVar8 = (lVar8 - uVar3) + 4;
              }
              iVar4 = (int)(lVar8 + 4U);
              if ((uVar13 & 0xffffffff) < (lVar8 + 4U & 0xffffffff)) {
                return false;
              }
              iVar11 = *(int *)lVar8;
            }
            return iVar4 - (int)param_2 == iVar11;
          }
        }
      }
    }
  }
  return false;
}

