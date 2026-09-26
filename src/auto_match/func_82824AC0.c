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


void fn_82824AC0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,longlong param_5
                  )

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar13;
  longlong lVar12;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  while( true ) {
    iVar4 = (int)param_4;
    iVar7 = (int)param_3;
    iVar3 = (int)param_1;
    if (iVar4 < 0x10) break;
    iVar14 = iVar7 + iVar4;
    lVar10 = 0;
    lVar6 = 0;
    iVar4 = *(int *)((int)(((ulonglong)
                            *(uint *)((int)(((longlong)(iVar4 >> 1) +
                                             (ulonglong)(iVar4 < 0 && (param_4 & 1) != 0) + param_3
                                            & 0xffffffff) << 2) + iVar3) + param_5 & 0xffffffff) <<
                          2) + param_2);
    if (iVar7 < iVar14) {
      lVar9 = (param_3 & 0x3fffffff) * 4 + param_1;
      uVar8 = param_3;
      do {
        iVar17 = *(int *)((int)(((ulonglong)*(uint *)lVar9 + param_5 & 0xffffffff) << 2) + param_2);
        if (iVar17 < iVar4) {
          lVar10 = lVar10 + 1;
        }
        if (iVar17 == iVar4) {
          lVar6 = lVar6 + 1;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < iVar14);
    }
    uVar16 = lVar10 + param_3;
    uVar8 = lVar6 + uVar16;
    lVar10 = 0;
    lVar6 = 0;
    iVar17 = (int)uVar16;
    if (iVar7 < iVar17) {
      lVar11 = (param_3 & 0x3fffffff) * 4 + param_1;
      lVar12 = (uVar8 & 0x3fffffff) * 4 + param_1 + -4;
      lVar9 = (uVar16 & 0x3fffffff) * 4 + param_1 + -4;
      uVar5 = param_3;
      do {
        puVar13 = (uint *)lVar11;
        uVar1 = *puVar13;
        iVar15 = *(int *)((int)(((ulonglong)uVar1 + param_5 & 0xffffffff) << 2) + param_2);
        if (iVar15 < iVar4) {
          uVar5 = uVar5 + 1;
          lVar11 = lVar11 + 4;
        }
        else if (iVar15 == iVar4) {
          lVar10 = lVar10 + 1;
          *puVar13 = *(uint *)((int)lVar9 + 4);
          lVar9 = lVar9 + 4;
          *(uint *)lVar9 = uVar1;
        }
        else {
          lVar6 = lVar6 + 1;
          *puVar13 = *(uint *)((int)lVar12 + 4);
          lVar12 = lVar12 + 4;
          *(uint *)lVar12 = uVar1;
        }
      } while ((int)uVar5 < iVar17);
    }
    uVar5 = uVar16 + lVar10;
    iVar15 = (int)uVar8;
    if ((int)uVar5 < iVar15) {
      lVar9 = (uVar5 & 0x3fffffff) * 4 + param_1;
      lVar10 = (uVar8 + lVar6 & 0x3fffffff) * 4 + param_1 + -4;
      do {
        uVar1 = *(uint *)lVar9;
        if (*(int *)((int)(((ulonglong)uVar1 + param_5 & 0xffffffff) << 2) + param_2) == iVar4) {
          lVar9 = lVar9 + 4;
          uVar5 = uVar5 + 1;
        }
        else {
          *(uint *)lVar9 = *(uint *)((int)lVar10 + 4);
          lVar10 = lVar10 + 4;
          *(uint *)lVar10 = uVar1;
        }
      } while ((int)uVar5 < iVar15);
    }
    if (iVar7 < iVar17) {
      fn_82824AC0(param_1,param_2,param_3,uVar16 - param_3,param_5);
    }
    iVar7 = 0;
    if (0 < (longlong)(uVar8 - uVar16)) {
      lVar10 = (uVar16 & 0x3fffffff) * 4 + param_1 + -4;
      do {
        lVar10 = lVar10 + 4;
        iVar7 = iVar7 + 1;
        *(int *)(*(int *)lVar10 * 4 + param_2) = iVar15 + -1;
      } while (iVar7 < (int)(uVar8 - uVar16));
    }
    if (iVar17 == iVar15 + -1) {
      *(undefined4 *)((int)((uVar16 & 0xffffffff) << 2) + iVar3) = 0xffffffff;
    }
    if (iVar14 <= iVar15) {
      return;
    }
    param_4 = (param_3 - uVar8) + param_4;
    param_3 = uVar8;
  }
  iVar4 = iVar7 + iVar4;
  do {
    if (iVar4 <= iVar7) {
      return;
    }
    lVar9 = param_3 + 1;
    lVar6 = (param_3 & 0x3fffffff) * 4 + param_1;
    lVar12 = 1;
    iVar7 = *(int *)((int)(((ulonglong)*(uint *)lVar6 + param_5 & 0xffffffff) << 2) + param_2);
    lVar10 = lVar6;
    if ((int)lVar9 < iVar4) {
      do {
        puVar13 = (uint *)(lVar10 + 4);
        uVar1 = *puVar13;
        iVar14 = *(int *)((int)(((ulonglong)uVar1 + param_5 & 0xffffffff) << 2) + param_2);
        iVar17 = iVar7;
        if (iVar14 < iVar7) {
          lVar12 = 0;
          iVar17 = iVar14;
        }
        if (iVar14 <= iVar7) {
          uVar8 = lVar12 + param_3;
          lVar12 = lVar12 + 1;
          iVar7 = (int)((uVar8 & 0xffffffff) << 2);
          uVar2 = *(uint *)(iVar7 + iVar3);
          *(uint *)(iVar7 + iVar3) = uVar1;
          *puVar13 = uVar2;
        }
        lVar9 = lVar9 + 1;
        iVar7 = iVar17;
        lVar10 = lVar10 + 4;
      } while ((int)lVar9 < iVar4);
      if (0 < (int)lVar12) goto LAB_82824d64;
    }
    else {
LAB_82824d64:
      lVar10 = lVar6 + -4;
      lVar9 = lVar12;
      do {
        lVar10 = lVar10 + 4;
        *(int *)(*(int *)lVar10 * 4 + param_2) = (int)lVar12 + (int)param_3 + -1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((int)lVar12 == 1) {
      *(uint *)lVar6 = 0xffffffff;
    }
    param_3 = lVar12 + param_3;
    iVar7 = (int)param_3;
  } while( true );
}

