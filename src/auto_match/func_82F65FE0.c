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
extern unsigned int *auStack_154;
extern unsigned int *auStack_d4;
extern int fn_82F63BA0();
extern int fn_82F68240();


void fn_82F65FE0(ulonglong param_1,uint param_2,ulonglong param_3,code *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar9;
  ulonglong uVar8;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint auStack_154 [32];
  uint auStack_d4 [53];
  
  if (((((param_1 & 0xffffffff) == 0) && (param_2 != 0)) || ((param_3 & 0xffffffff) == 0)) ||
     (param_4 == (code *)0x0)) {
    puVar5 = (undefined4 *)fn_82F68240();
    *puVar5 = 0x16;
    fn_82F63BA0();
  }
  else if (1 < param_2) {
    lVar10 = 0;
    puVar12 = auStack_d4;
    uVar14 = (longlong)(int)(param_2 - 1) * (longlong)(int)param_3 + param_1;
    puVar11 = auStack_154;
LAB_82f66058:
    while( true ) {
      trapWord(6,param_3,0);
      uVar7 = (uVar14 - param_1 & 0xffffffff) / (param_3 & 0xffffffff) + 1;
      if ((uVar7 & 0xffffffff) < 9) break;
      uVar7 = (longlong)(int)((uint)uVar7 >> 1) * (longlong)(int)param_3 + param_1;
      iVar6 = (*param_4)(param_1,uVar7);
      uVar3 = (uint)param_1;
      if ((0 < iVar6) && ((param_1 & 0xffffffff) != (uVar7 & 0xffffffff))) {
        iVar6 = uVar3 - (int)uVar7;
        uVar15 = uVar7;
        uVar16 = param_3;
        do {
          puVar9 = (undefined1 *)uVar15;
          uVar1 = puVar9[iVar6];
          puVar9[iVar6] = *puVar9;
          *puVar9 = uVar1;
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar6 = (*param_4)(param_1,uVar14);
      uVar2 = (uint)uVar14;
      if ((0 < iVar6) && ((param_1 & 0xffffffff) != (uVar14 & 0xffffffff))) {
        uVar15 = uVar14;
        uVar16 = param_3;
        do {
          puVar9 = (undefined1 *)uVar15;
          uVar1 = puVar9[uVar3 - uVar2];
          puVar9[uVar3 - uVar2] = *puVar9;
          *puVar9 = uVar1;
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar6 = (*param_4)(uVar7,uVar14);
      uVar15 = uVar14;
      uVar16 = param_1;
      if ((0 < iVar6) && ((uVar7 & 0xffffffff) != (uVar14 & 0xffffffff))) {
        iVar6 = (int)uVar7 - uVar2;
        uVar8 = uVar14;
        uVar17 = param_3;
        do {
          puVar9 = (undefined1 *)uVar8;
          uVar1 = puVar9[iVar6];
          puVar9[iVar6] = *puVar9;
          *puVar9 = uVar1;
          uVar8 = uVar8 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
LAB_82f661ec:
      if ((uVar16 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        do {
          uVar16 = uVar16 + param_3;
          if ((uVar7 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82f66220;
          iVar6 = (*param_4)(uVar16,uVar7);
        } while (iVar6 < 1);
        if ((uVar7 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82f66220;
      }
      else {
LAB_82f66220:
        do {
          uVar16 = uVar16 + param_3;
          if ((uVar14 & 0xffffffff) < (uVar16 & 0xffffffff)) break;
          iVar6 = (*param_4)(uVar16,uVar7);
        } while (iVar6 < 1);
      }
      do {
        uVar15 = uVar15 - param_3;
        if ((uVar15 & 0xffffffff) <= (uVar7 & 0xffffffff)) break;
        iVar6 = (*param_4)(uVar15,uVar7);
      } while (0 < iVar6);
      uVar4 = (uint)uVar16;
      if ((uVar16 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
        if ((uVar16 & 0xffffffff) != (uVar15 & 0xffffffff)) {
          iVar6 = uVar4 - (int)uVar15;
          uVar8 = uVar15;
          uVar17 = param_3;
          do {
            puVar9 = (undefined1 *)uVar8;
            uVar1 = puVar9[iVar6];
            puVar9[iVar6] = *puVar9;
            *puVar9 = uVar1;
            uVar8 = uVar8 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if ((uVar7 & 0xffffffff) == (uVar15 & 0xffffffff)) {
          uVar7 = uVar16;
        }
        goto LAB_82f661ec;
      }
      uVar15 = uVar15 + param_3;
      if ((uVar7 & 0xffffffff) < (uVar15 & 0xffffffff)) {
        do {
          uVar15 = uVar15 - param_3;
          if ((uVar15 & 0xffffffff) <= (uVar7 & 0xffffffff)) goto LAB_82f662e0;
          iVar6 = (*param_4)(uVar15,uVar7);
        } while (iVar6 == 0);
        if ((uVar15 & 0xffffffff) <= (uVar7 & 0xffffffff)) goto LAB_82f662e0;
      }
      else {
LAB_82f662e0:
        do {
          uVar15 = uVar15 - param_3;
          if ((uVar15 & 0xffffffff) <= (param_1 & 0xffffffff)) break;
          iVar6 = (*param_4)(uVar15,uVar7);
        } while (iVar6 == 0);
      }
      if ((int)((uint)uVar15 - uVar3) < (int)(uVar2 - uVar4)) goto LAB_82f66340;
      if ((param_1 & 0xffffffff) < (uVar15 & 0xffffffff)) {
        puVar12[1] = uVar3;
        lVar10 = lVar10 + 1;
        puVar11[1] = (uint)uVar15;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      }
      param_1 = uVar16;
      puVar13 = puVar12;
      if ((uVar14 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82f660f0;
    }
    puVar13 = puVar12;
    if ((param_1 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      do {
        uVar7 = param_1;
        uVar15 = param_1 + param_3;
        if ((param_1 + param_3 & 0xffffffff) <= (uVar14 & 0xffffffff)) {
          do {
            iVar6 = (*param_4)(uVar15,uVar7);
            if (0 < iVar6) {
              uVar7 = uVar15;
            }
            uVar15 = uVar15 + param_3;
          } while ((uVar15 & 0xffffffff) <= (uVar14 & 0xffffffff));
        }
        if ((uVar7 & 0xffffffff) != (uVar14 & 0xffffffff)) {
          iVar6 = (int)uVar7 - (int)uVar14;
          uVar7 = uVar14;
          uVar15 = param_3;
          do {
            puVar9 = (undefined1 *)uVar7;
            uVar1 = puVar9[iVar6];
            puVar9[iVar6] = *puVar9;
            *puVar9 = uVar1;
            uVar7 = uVar7 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        uVar14 = uVar14 - param_3;
      } while ((param_1 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
    goto LAB_82f660f0;
  }
  return;
LAB_82f66340:
  if ((uVar16 & 0xffffffff) < (uVar14 & 0xffffffff)) {
    puVar12 = puVar12 + 1;
    *puVar12 = uVar4;
    lVar10 = lVar10 + 1;
    puVar11 = puVar11 + 1;
    *puVar11 = uVar2;
  }
  uVar14 = uVar15;
  puVar13 = puVar12;
  if ((uVar15 & 0xffffffff) <= (param_1 & 0xffffffff)) {
LAB_82f660f0:
    lVar10 = lVar10 + -1;
    puVar12 = puVar13 + -1;
    if (lVar10 < 0) {
      return;
    }
    param_1 = (ulonglong)*puVar13;
    uVar14 = (ulonglong)*puVar11;
    puVar11 = puVar11 + -1;
  }
  goto LAB_82f66058;
}

