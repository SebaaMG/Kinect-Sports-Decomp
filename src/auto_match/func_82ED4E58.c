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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82ED4DB0();
extern unsigned int stack0x00000000;


void fn_82ED4E58(ulonglong param_1,uint param_2,ulonglong param_3,code *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  if (((param_1 | param_3) & 3) == 0) {
    bVar10 = -(4 < param_3) & 1;
  }
  else {
    bVar10 = 2;
  }
  iVar3 = (int)param_3;
  if (param_2 < 7) {
    uVar14 = param_1 + param_3;
    uVar11 = (longlong)(int)param_2 * (longlong)iVar3 + param_1;
    if ((uVar14 & 0xffffffff) < (uVar11 & 0xffffffff)) {
      lVar13 = uVar14 - param_3;
      do {
        uVar9 = uVar14;
        lVar15 = lVar13;
        if ((param_1 & 0xffffffff) < (uVar14 & 0xffffffff)) {
          do {
            iVar3 = (*param_4)(lVar15,uVar9);
            if (iVar3 < 1) break;
            if (bVar10 == 0) {
              uVar2 = *(undefined4 *)uVar9;
              *(undefined4 *)uVar9 = *(undefined4 *)lVar15;
              *(undefined4 *)lVar15 = uVar2;
            }
            else if (bVar10 < 2) {
              lVar7 = uVar9 - 4;
              lVar6 = lVar15 + -4;
              uVar8 = param_3;
              do {
                uVar8 = uVar8 - 4;
                uVar2 = *(undefined4 *)((int)lVar7 + 4);
                lVar7 = lVar7 + 4;
                *(undefined4 *)lVar7 = *(undefined4 *)((int)lVar6 + 4);
                lVar6 = lVar6 + 4;
                *(undefined4 *)lVar6 = uVar2;
              } while (uVar8 != 0);
            }
            else {
              lVar7 = uVar9 - 1;
              lVar6 = lVar15 + -1;
              uVar8 = param_3;
              do {
                uVar8 = uVar8 - 1;
                uVar1 = *(undefined1 *)((int)lVar7 + 1);
                lVar7 = lVar7 + 1;
                *(undefined1 *)lVar7 = *(undefined1 *)((int)lVar6 + 1);
                lVar6 = lVar6 + 1;
                *(undefined1 *)lVar6 = uVar1;
              } while (uVar8 != 0);
            }
            uVar9 = uVar9 - param_3;
            lVar15 = lVar15 - param_3;
          } while ((param_1 & 0xffffffff) < (uVar9 & 0xffffffff));
        }
        uVar14 = uVar14 + param_3;
        lVar13 = lVar13 + param_3;
      } while ((uVar14 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
  }
  else {
    lVar13 = (longlong)(int)(param_2 >> 1) * (longlong)iVar3 + param_1;
    if (7 < param_2) {
      lVar15 = (longlong)(int)(param_2 - 1) * (longlong)iVar3 + param_1;
      uVar11 = param_1;
      if (0x28 < param_2) {
        uVar14 = (longlong)(int)(param_2 >> 3) * (longlong)iVar3;
        uVar11 = fn_82ED4DB0(param_1,uVar14 + param_1,(uVar14 & 0x7fffffff) * 2 + param_1,
                                   param_4);
        lVar13 = fn_82ED4DB0(lVar13 - uVar14,lVar13,uVar14 + lVar13,param_4);
        lVar15 = fn_82ED4DB0(lVar15 + (uVar14 & 0x7fffffff) * -2,lVar15 - uVar14,lVar15,
                                   param_4);
      }
      lVar13 = fn_82ED4DB0(uVar11,lVar13,lVar15,param_4);
    }
    if (bVar10 == 0) {
      uVar11 = ZEXT48(&stack0x00000000) - 0x70;
    }
    else {
      uVar11 = param_1;
      if (bVar10 < 2) {
        lVar15 = param_1 - 4;
        lVar13 = lVar13 + -4;
        uVar14 = param_3;
        do {
          uVar14 = uVar14 - 4;
          uVar2 = *(undefined4 *)((int)lVar15 + 4);
          lVar15 = lVar15 + 4;
          *(undefined4 *)lVar15 = *(undefined4 *)((int)lVar13 + 4);
          lVar13 = lVar13 + 4;
          *(undefined4 *)lVar13 = uVar2;
        } while (uVar14 != 0);
      }
      else {
        lVar15 = param_1 - 1;
        lVar13 = lVar13 + -1;
        uVar14 = param_3;
        do {
          uVar14 = uVar14 - 1;
          uVar1 = *(undefined1 *)((int)lVar15 + 1);
          lVar15 = lVar15 + 1;
          *(undefined1 *)lVar15 = *(undefined1 *)((int)lVar13 + 1);
          lVar13 = lVar13 + 1;
          *(undefined1 *)lVar13 = uVar1;
        } while (uVar14 != 0);
      }
    }
    uVar12 = (longlong)(int)(param_2 - 1) * (longlong)iVar3 + param_1;
    uVar14 = param_1;
    uVar9 = param_1;
    uVar8 = uVar12;
    while ((uVar9 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
      while( true ) {
        iVar4 = (*param_4)(uVar9,uVar11);
        puVar16 = (undefined4 *)uVar9;
        if (0 < iVar4) break;
        if (iVar4 == 0) {
          if (bVar10 == 0) {
            uVar2 = *(undefined4 *)uVar14;
            *(undefined4 *)uVar14 = *puVar16;
            *puVar16 = uVar2;
          }
          else if (bVar10 < 2) {
            lVar13 = uVar14 - 4;
            lVar15 = uVar9 - 4;
            uVar5 = param_3;
            do {
              uVar5 = uVar5 - 4;
              uVar2 = *(undefined4 *)((int)lVar13 + 4);
              lVar13 = lVar13 + 4;
              *(undefined4 *)lVar13 = *(undefined4 *)((int)lVar15 + 4);
              lVar15 = lVar15 + 4;
              *(undefined4 *)lVar15 = uVar2;
            } while (uVar5 != 0);
          }
          else {
            lVar13 = uVar14 - 1;
            lVar15 = uVar9 - 1;
            uVar5 = param_3;
            do {
              uVar5 = uVar5 - 1;
              uVar1 = *(undefined1 *)((int)lVar13 + 1);
              lVar13 = lVar13 + 1;
              *(undefined1 *)lVar13 = *(undefined1 *)((int)lVar15 + 1);
              lVar15 = lVar15 + 1;
              *(undefined1 *)lVar15 = uVar1;
            } while (uVar5 != 0);
          }
          uVar14 = uVar14 + param_3;
        }
        uVar9 = uVar9 + param_3;
        if ((uVar8 & 0xffffffff) < (uVar9 & 0xffffffff)) goto LAB_82ed5134;
      }
      while( true ) {
        iVar4 = (*param_4)(uVar8,uVar11);
        puVar17 = (undefined4 *)uVar8;
        if (iVar4 < 0) break;
        if (iVar4 == 0) {
          if (bVar10 == 0) {
            uVar2 = *puVar17;
            *puVar17 = *(undefined4 *)uVar12;
            *(undefined4 *)uVar12 = uVar2;
          }
          else if (bVar10 < 2) {
            lVar13 = uVar8 - 4;
            lVar15 = uVar12 - 4;
            uVar5 = param_3;
            do {
              uVar5 = uVar5 - 4;
              uVar2 = *(undefined4 *)((int)lVar13 + 4);
              lVar13 = lVar13 + 4;
              *(undefined4 *)lVar13 = *(undefined4 *)((int)lVar15 + 4);
              lVar15 = lVar15 + 4;
              *(undefined4 *)lVar15 = uVar2;
            } while (uVar5 != 0);
          }
          else {
            lVar13 = uVar8 - 1;
            lVar15 = uVar12 - 1;
            uVar5 = param_3;
            do {
              uVar5 = uVar5 - 1;
              uVar1 = *(undefined1 *)((int)lVar13 + 1);
              lVar13 = lVar13 + 1;
              *(undefined1 *)lVar13 = *(undefined1 *)((int)lVar15 + 1);
              lVar15 = lVar15 + 1;
              *(undefined1 *)lVar15 = uVar1;
            } while (uVar5 != 0);
          }
          uVar12 = uVar12 - param_3;
        }
        uVar8 = uVar8 - param_3;
        if ((uVar8 & 0xffffffff) < (uVar9 & 0xffffffff)) goto LAB_82ed5134;
      }
      if (bVar10 == 0) {
        uVar2 = *puVar16;
        *puVar16 = *puVar17;
        uVar9 = uVar9 + param_3;
        *puVar17 = uVar2;
        uVar8 = uVar8 - param_3;
      }
      else if (bVar10 < 2) {
        lVar13 = uVar9 - 4;
        lVar15 = uVar8 - 4;
        uVar5 = param_3;
        do {
          uVar5 = uVar5 - 4;
          uVar2 = *(undefined4 *)((int)lVar13 + 4);
          lVar13 = lVar13 + 4;
          *(undefined4 *)lVar13 = *(undefined4 *)((int)lVar15 + 4);
          lVar15 = lVar15 + 4;
          *(undefined4 *)lVar15 = uVar2;
        } while (uVar5 != 0);
        uVar9 = uVar9 + param_3;
        uVar8 = uVar8 - param_3;
      }
      else {
        lVar13 = uVar9 - 1;
        lVar15 = uVar8 - 1;
        uVar5 = param_3;
        do {
          uVar5 = uVar5 - 1;
          uVar1 = *(undefined1 *)((int)lVar13 + 1);
          lVar13 = lVar13 + 1;
          *(undefined1 *)lVar13 = *(undefined1 *)((int)lVar15 + 1);
          lVar15 = lVar15 + 1;
          *(undefined1 *)lVar15 = uVar1;
        } while (uVar5 != 0);
        uVar9 = uVar9 + param_3;
        uVar8 = uVar8 - param_3;
      }
    }
LAB_82ed5134:
    lVar13 = (longlong)(int)param_2 * (longlong)iVar3 + param_1;
    uVar5 = uVar9 - uVar14;
    uVar11 = uVar14 - param_1;
    if ((int)uVar5 <= (int)(uVar14 - param_1)) {
      uVar11 = uVar5;
    }
    if ((uVar11 & 0xffffffff) != 0) {
      if (bVar10 < 2) {
        lVar15 = param_1 - 4;
        lVar7 = (uVar9 - uVar11) + -4;
        do {
          uVar11 = uVar11 - 4;
          uVar2 = *(undefined4 *)((int)lVar15 + 4);
          lVar15 = lVar15 + 4;
          *(undefined4 *)lVar15 = *(undefined4 *)((int)lVar7 + 4);
          lVar7 = lVar7 + 4;
          *(undefined4 *)lVar7 = uVar2;
        } while (uVar11 != 0);
      }
      else {
        lVar15 = param_1 - 1;
        lVar7 = (uVar9 - uVar11) + -1;
        do {
          uVar11 = uVar11 - 1;
          uVar1 = *(undefined1 *)((int)lVar15 + 1);
          lVar15 = lVar15 + 1;
          *(undefined1 *)lVar15 = *(undefined1 *)((int)lVar7 + 1);
          lVar7 = lVar7 + 1;
          *(undefined1 *)lVar7 = uVar1;
        } while (uVar11 != 0);
      }
    }
    uVar8 = uVar12 - uVar8;
    uVar11 = (lVar13 - uVar12) - param_3;
    if ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff)) {
      uVar11 = uVar8;
    }
    if ((uVar11 & 0xffffffff) != 0) {
      if (bVar10 < 2) {
        lVar15 = uVar9 - 4;
        lVar7 = (lVar13 - uVar11) + -4;
        do {
          uVar11 = uVar11 - 4;
          uVar2 = *(undefined4 *)((int)lVar15 + 4);
          lVar15 = lVar15 + 4;
          *(undefined4 *)lVar15 = *(undefined4 *)((int)lVar7 + 4);
          lVar7 = lVar7 + 4;
          *(undefined4 *)lVar7 = uVar2;
        } while (uVar11 != 0);
      }
      else {
        lVar15 = uVar9 - 1;
        lVar7 = (lVar13 - uVar11) + -1;
        do {
          uVar11 = uVar11 - 1;
          uVar1 = *(undefined1 *)((int)lVar15 + 1);
          lVar15 = lVar15 + 1;
          *(undefined1 *)lVar15 = *(undefined1 *)((int)lVar7 + 1);
          lVar7 = lVar7 + 1;
          *(undefined1 *)lVar7 = uVar1;
        } while (uVar11 != 0);
      }
    }
    if ((param_3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      trapWord(6,param_3,0);
      fn_82ED4E58(param_1,(uVar5 & 0xffffffff) / (param_3 & 0xffffffff),param_3,param_4);
    }
    if ((param_3 & 0xffffffff) < (uVar8 & 0xffffffff)) {
      trapWord(6,param_3,0);
      fn_82ED4E58(lVar13 - uVar8,(uVar8 & 0xffffffff) / (param_3 & 0xffffffff),param_3,param_4);
    }
  }
  return;
}

