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


ulonglong fn_82F68CC0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar13;
  longlong lVar12;
  ulonglong uVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  
  dataCacheBlockTouch(param_2);
  uVar14 = 8 - (param_1 & 7);
  uVar10 = param_1;
  if ((param_1 & 7) == 0) {
LAB_82f68d24:
    bVar1 = 0x7f < (param_3 & 0xffffffff);
    if ((param_2 & 7) == 4) {
      param_2 = param_2 - 4;
      if (bVar1) {
        lVar12 = uVar10 - 4;
        uVar14 = 0x80 - (uVar10 & 0x7f);
        if ((uVar10 & 0x7f) != 0) {
          uVar10 = (uVar14 & 0xffffffff) >> 2;
          param_3 = param_3 - uVar14;
          do {
            param_2 = param_2 + 4;
            lVar12 = lVar12 + 4;
            *(undefined4 *)lVar12 = *(undefined4 *)param_2;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        uVar10 = (param_3 & 0xffffffff) >> 7;
        if (uVar10 != 0) {
          bVar1 = (param_3 & 0x7f) == 0;
          lVar20 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
          lVar11 = 4;
          do {
            dataCacheBlockTouch(lVar11 + param_2);
            lVar11 = lVar11 + 0x80;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = param_2 + param_3;
          lVar21 = lVar12 + param_3;
          do {
            while( true ) {
              iVar16 = 8;
              do {
                iVar16 = iVar16 + -1;
                iVar8 = (int)param_2;
                uVar5 = *(undefined4 *)(iVar8 + 8);
                uVar6 = *(undefined4 *)(iVar8 + 0xc);
                iVar9 = (int)lVar12;
                *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 4);
                param_2 = param_2 + 0x10;
                uVar7 = *(undefined4 *)param_2;
                *(undefined4 *)(iVar9 + 8) = uVar5;
                *(undefined4 *)(iVar9 + 0xc) = uVar6;
                lVar12 = lVar12 + 0x10;
                *(undefined4 *)lVar12 = uVar7;
              } while (iVar16 != 0);
              if ((lVar20 - lVar11 & 0xffffffffU) <= (param_2 & 0xffffffff)) break;
              dataCacheBlockTouch(lVar11 + param_2);
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_82f68f18;
            }
            if (!bVar1) {
              dataCacheBlockTouchForStore(lVar21 + -1);
              bVar1 = false;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        dataCacheBlockTouchForStore(uVar10);
        lVar12 = uVar10 - 4;
      }
LAB_82f68f18:
      uVar10 = param_3 & 3;
      for (uVar14 = (param_3 & 0xffffffff) >> 2 & 0x1f; uVar14 != 0; uVar14 = uVar14 - 1) {
        param_2 = param_2 + 4;
        lVar12 = lVar12 + 4;
        *(undefined4 *)lVar12 = *(undefined4 *)param_2;
      }
      if (uVar10 != 0) {
        lVar12 = lVar12 + 3;
        lVar11 = param_2 + 3;
        do {
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 1;
          *(undefined1 *)lVar12 = *(undefined1 *)lVar11;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return param_1;
    }
    if ((param_2 & 7) != 0) {
      param_2 = param_2 - 1;
      if (bVar1) {
        lVar12 = uVar10 - 1;
        lVar11 = 0x80 - (uVar10 & 0x7f);
        if ((uVar10 & 0x7f) != 0) {
          param_3 = param_3 - lVar11;
          do {
            param_2 = param_2 + 1;
            lVar12 = lVar12 + 1;
            *(undefined1 *)lVar12 = *(undefined1 *)param_2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar10 = (param_3 & 0xffffffff) >> 7;
        if (uVar10 != 0) {
          bVar1 = (param_3 & 0x7f) == 0;
          lVar20 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
          lVar11 = 1;
          do {
            dataCacheBlockTouch(lVar11 + param_2);
            lVar11 = lVar11 + 0x80;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = param_2 + param_3;
          lVar21 = lVar12 + param_3;
          do {
            while( true ) {
              iVar16 = 0x20;
              do {
                iVar8 = (int)param_2;
                iVar16 = iVar16 + -1;
                bVar4 = *(byte *)(iVar8 + 2);
                param_2 = param_2 + 4;
                *(undefined4 *)((int)lVar12 + 1) = *(undefined4 *)(iVar8 + 1);
                lVar12 = lVar12 + 4;
              } while (iVar16 != 0);
              if ((lVar20 - lVar11 & 0xffffffffU) <= (param_2 & 0xffffffff)) break;
              dataCacheBlockTouch(bVar4 + param_2);
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_82f69048;
            }
            if (!bVar1) {
              dataCacheBlockTouchForStore(lVar21 + -1);
              bVar1 = false;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        dataCacheBlockTouchForStore(uVar10);
        lVar12 = uVar10 - 1;
      }
LAB_82f69048:
      for (param_3 = param_3 & 0x7f; param_3 != 0; param_3 = param_3 - 1) {
        param_2 = param_2 + 1;
        lVar12 = lVar12 + 1;
        *(undefined1 *)lVar12 = *(undefined1 *)param_2;
      }
      return param_1;
    }
    if (bVar1) {
      uVar14 = uVar10 - 8;
      param_2 = param_2 - 8;
      uVar17 = 0x80 - (uVar10 & 0x7f);
      if ((uVar10 & 0x7f) != 0) {
        uVar10 = (uVar17 & 0xffffffff) >> 3;
        param_3 = param_3 - uVar17;
        do {
          param_2 = param_2 + 8;
          uVar14 = uVar14 + 8;
          *(undefined8 *)uVar14 = *(undefined8 *)param_2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar10 = (param_3 & 0xffffffff) >> 7;
      if (uVar10 != 0) {
        bVar1 = (param_3 & 0x7f) == 0;
        lVar11 = (((param_3 + 0x7f & 0xffffffff) >> 7) - 1 & 7) + 1;
        lVar12 = 8;
        do {
          dataCacheBlockTouch(lVar12 + param_2);
          lVar12 = lVar12 + 0x80;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar11 = param_2 + param_3;
        lVar20 = uVar14 + param_3;
        do {
          while( true ) {
            iVar16 = (int)param_2;
            uVar18 = *(undefined8 *)(iVar16 + 0x10);
            uVar19 = *(undefined8 *)(iVar16 + 0x18);
            iVar8 = (int)uVar14;
            *(undefined8 *)(iVar8 + 8) = *(undefined8 *)(iVar16 + 8);
            uVar15 = *(undefined8 *)(iVar16 + 0x20);
            *(undefined8 *)(iVar8 + 0x10) = uVar18;
            uVar18 = *(undefined8 *)(iVar16 + 0x28);
            *(undefined8 *)(iVar8 + 0x18) = uVar19;
            uVar19 = *(undefined8 *)(iVar16 + 0x30);
            *(undefined8 *)(iVar8 + 0x20) = uVar15;
            uVar15 = *(undefined8 *)(iVar16 + 0x38);
            *(undefined8 *)(iVar8 + 0x28) = uVar18;
            uVar18 = *(undefined8 *)(iVar16 + 0x40);
            *(undefined8 *)(iVar8 + 0x30) = uVar19;
            uVar19 = *(undefined8 *)(iVar16 + 0x48);
            *(undefined8 *)(iVar8 + 0x38) = uVar15;
            uVar15 = *(undefined8 *)(iVar16 + 0x50);
            *(undefined8 *)(iVar8 + 0x40) = uVar18;
            uVar18 = *(undefined8 *)(iVar16 + 0x58);
            *(undefined8 *)(iVar8 + 0x48) = uVar19;
            uVar19 = *(undefined8 *)(iVar16 + 0x60);
            *(undefined8 *)(iVar8 + 0x50) = uVar15;
            uVar15 = *(undefined8 *)(iVar16 + 0x68);
            *(undefined8 *)(iVar8 + 0x58) = uVar18;
            uVar18 = *(undefined8 *)(iVar16 + 0x70);
            *(undefined8 *)(iVar8 + 0x60) = uVar19;
            uVar19 = *(undefined8 *)(iVar16 + 0x78);
            *(undefined8 *)(iVar8 + 0x68) = uVar15;
            param_2 = param_2 + 0x80;
            uVar15 = *(undefined8 *)param_2;
            *(undefined8 *)(iVar8 + 0x70) = uVar18;
            *(undefined8 *)(iVar8 + 0x78) = uVar19;
            uVar14 = uVar14 + 0x80;
            *(undefined8 *)uVar14 = uVar15;
            if ((lVar11 - lVar12 & 0xffffffffU) <= (param_2 & 0xffffffff)) break;
            dataCacheBlockTouch(lVar12 + param_2);
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_82f68d4c;
          }
          if (!bVar1) {
            dataCacheBlockTouchForStore(lVar20 + -1);
            bVar1 = false;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      goto LAB_82f68d4c;
    }
  }
  else if ((uVar14 & 0xffffffff) < (param_3 & 0xffffffff)) {
    if ((uVar14 & 0xffffffff) == 4) {
      param_3 = param_3 - uVar14;
      puVar13 = (undefined4 *)param_2;
      param_2 = param_2 + 4;
      *(undefined4 *)param_1 = *puVar13;
      uVar10 = param_1 + 4;
    }
    else {
      param_3 = param_3 - uVar14;
      lVar11 = param_1 - 1;
      lVar12 = param_2 - 1;
      do {
        lVar21 = lVar12;
        lVar20 = lVar11;
        lVar12 = lVar21 + 1;
        lVar11 = lVar20 + 1;
        *(undefined1 *)lVar11 = *(undefined1 *)lVar12;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar10 = lVar20 + 2;
      param_2 = lVar21 + 2;
    }
    goto LAB_82f68d24;
  }
  dataCacheBlockTouchForStore(uVar10);
  param_2 = param_2 - 8;
  uVar14 = uVar10 - 8;
LAB_82f68d4c:
  uVar10 = param_3 & 7;
  for (uVar17 = (param_3 & 0xffffffff) >> 3 & 0xf; uVar17 != 0; uVar17 = uVar17 - 1) {
    param_2 = param_2 + 8;
    uVar14 = uVar14 + 8;
    *(undefined8 *)uVar14 = *(undefined8 *)param_2;
  }
  if (uVar10 != 0) {
    if (uVar10 == 4) {
      iVar16 = (int)param_2;
      uVar5 = *(undefined4 *)(iVar16 + 8);
      iVar8 = (int)uVar14;
      if ((uVar14 & 3) != 0) {
        uVar2 = *(undefined1 *)(iVar16 + 9);
        uVar3 = *(undefined1 *)(iVar16 + 10);
        *(undefined1 *)(iVar8 + 8) = *(undefined1 *)(iVar16 + 8);
        *(undefined1 *)(iVar8 + 9) = uVar2;
        *(undefined1 *)(iVar8 + 10) = uVar3;
        *(char *)(iVar8 + 0xb) = (char)uVar5;
        return param_1;
      }
      *(undefined4 *)(iVar8 + 8) = uVar5;
      return param_1;
    }
    lVar11 = uVar14 + 7;
    lVar12 = param_2 + 7;
    do {
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 1;
      *(undefined1 *)lVar11 = *(undefined1 *)lVar12;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return param_1;
}

