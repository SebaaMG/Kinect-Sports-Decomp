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
extern int fn_8294B588();
extern int fn_8294B608();
extern int fn_82996970();
extern int fn_8299C670();
extern int fn_8299D050();
extern int fn_8299D1C0();
extern int fn_829A1818();
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


undefined8 fn_829A3BD8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar11;
  ulonglong uVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  
  uVar14 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      uVar14 = uVar14 + 1;
      piVar1 = (int *)(iVar4 + *(int *)(param_1 + 0x18));
      iVar4 = iVar4 + 4;
      *(undefined4 *)(*piVar1 + 0x28) = 0;
    } while (uVar14 < *(uint *)(param_1 + 0xc));
  }
  uVar14 = 0;
  do {
    iVar4 = *(int *)(uVar14 + *(int *)(param_1 + 0x234));
    if (iVar4 != 0) {
      fn_8294B588(param_1,*(undefined4 *)(param_1 + 0x18),iVar4,1);
      fn_8294B608(param_1,*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(uVar14 + *(int *)(param_1 + 0x234)),2);
    }
    iVar4 = *(int *)(uVar14 + *(int *)(param_1 + 0x230));
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x28) = 1;
    }
    uVar14 = uVar14 + 4;
  } while (uVar14 < 0x18);
  uVar7 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    lVar8 = 0;
    do {
      puVar11 = *(uint **)((int)lVar8 + *(int *)(param_1 + 0x18));
      uVar6 = (ulonglong)*puVar11 & 0xfff00000;
      iVar4 = fn_82996970(uVar6);
      if (((iVar4 == 0) && ((uVar6 & 0xffffffff) != 0x72100000)) &&
         ((uVar6 & 0xffffffff) != 0x11000000)) {
        if (0x1ff < *(uint *)(param_1 + 0x224)) {
          return 0xffffffff80004005;
        }
        if (puVar11[10] == 1) {
          *(uint **)(*(uint *)(param_1 + 0x224) * 4 + *(int *)(param_1 + 0x230)) = puVar11;
          *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
  }
  bVar2 = true;
  if (*(int *)(param_1 + 0x230) != 0) {
    uVar14 = 0;
    if (*(uint *)(param_1 + 0x224) != 0) {
      iVar4 = 0;
      bVar2 = true;
      do {
        piVar1 = (int *)(iVar4 + *(int *)(param_1 + 0x230));
        uVar14 = uVar14 + 1;
        iVar4 = iVar4 + 4;
        bVar2 = (bool)(*piVar1 == 0 & bVar2);
      } while (uVar14 < *(uint *)(param_1 + 0x224));
    }
  }
  uVar14 = 0;
  do {
    iStack_70 = 0;
    uVar3 = fn_8299C670(param_1,&iStack_70);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    fn_829A1818(param_1,*(undefined4 *)(param_1 + 0x230),6,*(undefined4 *)(param_1 + 0x224),
                  &uStack_6c);
    uVar6 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      lVar9 = 0;
      lVar8 = -0x7cdeba6c;
      do {
        puVar11 = *(uint **)((int)lVar9 + *(int *)(param_1 + 0x18));
        if (puVar11 != (uint *)0x0) {
          uVar10 = (ulonglong)*puVar11 & 0xfff00000;
          if (((puVar11[10] == 2) || (puVar11[10] == 0)) &&
             ((iVar4 = fn_82996970(uVar10), iVar4 == 0 &&
              (((uVar10 & 0xffffffff) != 0x11000000 && ((uVar10 & 0xffffffff) != 0x72100000)))))) {
            lVar8 = lVar8 + 4;
            *(undefined4 *)lVar8 = puVar11;
            uVar6 = uVar6 + 1;
          }
          if (0x1ff < (uVar6 & 0xffffffff)) {
            return 0xffffffff8007000e;
          }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 4;
      } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
    }
    while ((fn_829A1818(param_1,0xffffffff83214598,0), 7 < uStack_68 + iStack_70 ||
           (((uStack_6c < uStack_68 && (uVar14 == 0)) && (!bVar2))))) {
      uVar13 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar4 = 0;
        do {
          puVar11 = *(uint **)(iVar4 + *(int *)(param_1 + 0x18));
          if (puVar11[10] == 0) {
            uVar7 = (ulonglong)*puVar11 & 0xfff00000;
            iVar5 = fn_82996970(uVar7);
            if ((iVar5 == 0) && ((uVar7 & 0xffffffff) != 0x72100000)) {
              uVar12 = 0;
              if (puVar11[1] != 0) {
                iVar5 = 0;
                do {
                  if (*(char *)(*(int *)(*(int *)(puVar11[2] + iVar5) * 4 + *(int *)(param_1 + 0x14)
                                        ) + 0x6f) == '\x01') break;
                  uVar12 = uVar12 + 1;
                  iVar5 = iVar5 + 4;
                } while (uVar12 < puVar11[1]);
              }
              if (uVar12 == puVar11[1]) {
                if (uVar14 == 0) {
                  uVar12 = 0;
                  if (puVar11[3] != 0) {
                    iVar5 = 0;
                    do {
                      if (*(int *)(*(int *)(*(int *)(puVar11[4] + iVar5) * 4 +
                                           *(int *)(param_1 + 0x14)) + 0x10) == 3) break;
                      uVar12 = uVar12 + 1;
                      iVar5 = iVar5 + 4;
                    } while (uVar12 < puVar11[3]);
                  }
                  if (uVar12 != puVar11[3]) goto LAB_829a3fb8;
                }
                if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)puVar11[4] * 4 +
                                                         *(int *)(param_1 + 0x14)) + 4) * 4 +
                                       *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0) {
                  puVar11[10] = 1;
                  iVar5 = fn_8299D050(param_1);
                  if ((iVar5 == 0) && (iVar5 = fn_8299D1C0(param_1,puVar11), iVar5 == 0)) {
                    if (0x1ff < *(uint *)(param_1 + 0x224)) {
                      return 0xffffffff8007000e;
                    }
                    *(uint **)(*(uint *)(param_1 + 0x224) * 4 + *(int *)(param_1 + 0x230)) = puVar11
                    ;
                    *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
                    break;
                  }
                  puVar11[10] = 0;
                }
              }
            }
          }
LAB_829a3fb8:
          uVar13 = uVar13 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar13 < *(uint *)(param_1 + 0xc));
      }
      if (uVar13 == *(uint *)(param_1 + 0xc)) break;
      iStack_70 = 0;
      uVar3 = fn_8299C670(param_1,&iStack_70);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      fn_829A1818(param_1,*(undefined4 *)(param_1 + 0x230),6,*(undefined4 *)(param_1 + 0x224),
                    &uStack_6c);
      uVar6 = 0;
      uVar7 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        lVar9 = 0;
        lVar8 = -0x7cdeba6c;
        do {
          puVar11 = *(uint **)((int)lVar9 + *(int *)(param_1 + 0x18));
          if (puVar11 != (uint *)0x0) {
            uVar10 = (ulonglong)*puVar11 & 0xfff00000;
            if ((((puVar11[10] == 2) || (puVar11[10] == 0)) &&
                (iVar4 = fn_82996970(uVar10), iVar4 == 0)) &&
               (((uVar10 & 0xffffffff) != 0x11000000 && ((uVar10 & 0xffffffff) != 0x72100000)))) {
              lVar8 = lVar8 + 4;
              *(undefined4 *)lVar8 = puVar11;
              uVar6 = uVar6 + 1;
            }
            if (0x1ff < (uVar6 & 0xffffffff)) {
              return 0xffffffff8007000e;
            }
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 4;
        } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
      }
    }
    uVar14 = uVar14 + 1;
    if (1 < uVar14) {
      uVar7 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        lVar8 = 0;
        do {
          puVar11 = *(uint **)((int)lVar8 + *(int *)(param_1 + 0x18));
          if (puVar11[10] == 0) {
            puVar11[10] = 2;
          }
          uVar6 = (ulonglong)*(uint *)(param_1 + 0x228);
          if (0x1ff < uVar6) {
            return 0xffffffff80004005;
          }
          uVar10 = (ulonglong)*puVar11 & 0xfff00000;
          if (((puVar11[10] == 2) && (iVar4 = fn_82996970(uVar10), iVar4 == 0)) &&
             (((uVar10 & 0xffffffff) != 0x11000000 && ((uVar10 & 0xffffffff) != 0x72100000)))) {
            *(uint **)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(param_1 + 0x234)) = puVar11;
            *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 4;
        } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
      }
      return 0;
    }
  } while( true );
}

