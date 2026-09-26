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


longlong fn_829F9E30(int param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                      ulonglong param_5,ulonglong param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar9;
  ulonglong uVar8;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  
  lVar16 = 0;
  iVar3 = (int)param_2;
  if (((((-1 < iVar3) && (iVar3 < 0x50)) && (iVar4 = (int)param_3, -1 < iVar4)) &&
      ((iVar4 < 0x3c && (iVar7 = (int)param_5, -1 < iVar7)))) &&
     ((iVar7 < 0x50 && ((iVar9 = (int)param_6, -1 < iVar9 && (iVar9 < 0x3c)))))) {
    uVar17 = iVar7 - iVar3 >> 0x1f;
    uVar15 = iVar9 - iVar4 >> 0x1f;
    bVar1 = (int)((iVar9 - iVar4 ^ uVar15) - uVar15) <= (int)((iVar7 - iVar3 ^ uVar17) - uVar17);
    uVar11 = param_2;
    uVar6 = param_5;
    if (!bVar1) {
      uVar11 = param_3;
      param_3 = param_2;
      uVar6 = param_6;
      param_6 = param_5;
    }
    uVar8 = uVar11;
    uVar5 = param_3;
    uVar17 = param_7;
    if ((int)uVar6 < (int)uVar11) {
      uVar8 = uVar6;
      uVar5 = param_6;
      uVar6 = uVar11;
      param_6 = param_3;
      uVar17 = param_4;
      param_4 = param_7;
    }
    uVar13 = param_6 - uVar5;
    uVar18 = uVar6 - uVar8;
    uVar11 = (ulonglong)((int)uVar13 >> 0x1f);
    lVar20 = (longlong)((int)uVar18 >> 1) + (ulonglong)((int)uVar18 < 0 && (uVar18 & 1) != 0);
    uVar19 = 1;
    if ((int)param_6 <= (int)uVar5) {
      uVar19 = 0xffffffffffffffff;
    }
    bVar2 = false;
    if ((int)uVar8 <= (int)uVar6) {
      lVar12 = (uVar5 + (uVar5 & 0x3fffffff) * 4 & 0xfffffff) << 4;
      lVar10 = (uVar8 + (uVar8 & 0x3fffffff) * 4 & 0xfffffff) << 4;
      while( true ) {
        lVar14 = lVar10 + uVar5;
        if (bVar1) {
          lVar14 = lVar12 + uVar8;
        }
        lVar20 = lVar20 - ((uVar13 ^ uVar11) - uVar11);
        if (lVar20 < 0) {
          uVar5 = uVar19 + uVar5;
          lVar12 = (uVar19 + (uVar19 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 + lVar12;
          lVar20 = lVar20 + uVar18;
        }
        uVar15 = (uint)*(ushort *)((int)((lVar14 + 0x1c3fU & 0xffffffff) << 4) + param_1 + 0xc);
        if (uVar15 == uVar17) break;
        if (uVar15 == param_4) {
          bVar2 = true;
          lVar16 = 0;
        }
        else {
          lVar16 = lVar16 + 1;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x50;
        if ((int)uVar6 < (int)uVar8) {
          return -1;
        }
      }
      if (bVar2) {
        return lVar16;
      }
    }
  }
  return -1;
}

