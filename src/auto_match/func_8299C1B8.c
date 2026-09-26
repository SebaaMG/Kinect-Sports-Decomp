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
extern int fn_82963FA8();
extern int fn_82964628();
extern int fn_82996970();
extern int fn_8299BF68();
extern unsigned int uStack_74;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


undefined8 fn_8299C1B8(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  int aiStack_90 [7];
  undefined4 uStack_74;
  int aiStack_70 [28];
  
  uVar10 = 0;
  uVar7 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar10 = uVar10 + 1;
    uVar7 = uVar7 - 1 & uVar7;
  } while (uVar10 < 7);
  if ((uVar10 < 7) && (*(int *)(param_1 + 0x484) - uVar10 < 7)) {
    lVar14 = 0;
    lVar12 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x484) != 0) {
      iVar3 = *(int *)(param_1 + 0x18);
      puVar6 = &uStack_94;
      puVar2 = &uStack_74;
      piVar8 = (int *)(param_1 + 0x454);
      do {
        puVar1 = *(uint **)(*piVar8 * 4 + iVar3);
        uVar10 = *puVar1 & 0xfff00000;
        if ((1 << (uVar7 & 0x3f) & param_2) == 0) {
          if (uVar10 == 0x11000000) {
            return 0;
          }
          if (uVar10 != 0x72100000) {
            iVar5 = *(int *)(*(int *)((*puVar1 & 0xfffff) * 4 + puVar1[2]) * 4 +
                            *(int *)(param_1 + 0x14));
            if (*(char *)(iVar5 + 0x6f) != '\x03') {
              return 0;
            }
            if (*(int *)(iVar5 + 0x3c) != 0) {
              return 0;
            }
          }
          puVar6 = puVar6 + 1;
          *puVar6 = puVar1;
          lVar14 = lVar14 + 1;
        }
        else {
          if (puVar1[9] == 1) {
            return 0;
          }
          puVar2 = puVar2 + 1;
          *puVar2 = puVar1;
          lVar12 = lVar12 + 1;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x484));
    }
    uStack_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    uStack_a0 = 0xffffffffffffffff;
    iVar3 = fn_8299BF68(param_1,*(undefined4 *)(param_1 + 0x230),&uStack_b0,aiStack_90,lVar14,0);
    if (((((iVar3 != 0) &&
          (iVar3 = fn_8299BF68(param_1,*(undefined4 *)(param_1 + 0x234),&uStack_b0,aiStack_70,
                                 lVar12,0), iVar3 != 0)) &&
         (iVar3 = fn_8299BF68(param_1,*(undefined4 *)(param_1 + 0x230),&uStack_b0,aiStack_90,
                                lVar14,1), iVar3 != 0)) &&
        ((iVar3 = fn_8299BF68(param_1,*(undefined4 *)(param_1 + 0x234),&uStack_b0,aiStack_70,
                                lVar12,1), iVar3 != 0 &&
         (iVar3 = fn_8299BF68(param_1,*(undefined4 *)(param_1 + 0x230),&uStack_b0,aiStack_90,
                                lVar14,2), iVar3 != 0)))) &&
       (iVar3 = fn_8299BF68(param_1,*(undefined4 *)(param_1 + 0x234),&uStack_b0,aiStack_70,lVar12,
                              2), iVar3 != 0)) {
      if (param_3 == 0) {
        iVar3 = 0;
        uVar7 = 0;
        aiStack_70[2] = 0;
        aiStack_70[3] = 0;
        aiStack_90[2] = 0;
        aiStack_90[3] = 0;
        aiStack_70[4] = 0;
        aiStack_70[5] = 0;
        aiStack_90[4] = 0;
        aiStack_90[5] = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x230);
          if ((*(int *)(uVar7 + iVar5) != 0) || (*(int *)(uVar7 + *(int *)(param_1 + 0x234)) != 0))
          {
            uVar11 = 0;
            uVar10 = 0;
            if (*(int *)(uVar7 + iVar5) != 0) {
              uVar10 = **(uint **)(uVar7 + iVar5) & 0xfff00000;
            }
            puVar1 = *(uint **)(uVar7 + *(int *)(param_1 + 0x234));
            if (puVar1 != (uint *)0x0) {
              uVar11 = *puVar1 & 0xfff00000;
            }
            lVar12 = fn_82996970(uVar10);
            if ((lVar12 != 0) || (iVar4 = fn_82996970(uVar11), iVar4 != 0)) {
              uVar13 = 0xffffffffffffffff;
              if ((int)lVar12 != 0) {
                iVar5 = *(int *)(**(int **)(*(int *)(uVar7 + iVar5) + 8) * 4 +
                                *(int *)(param_1 + 0x14));
                uVar13 = fn_82964628(*(undefined8 *)(iVar5 + 0x20),param_1,
                                           *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0xc),
                                           *(undefined4 *)(iVar5 + 0x10));
                if ((int)uVar13 == -1) {
                  return 0;
                }
                uVar10 = 0;
                if ((**(uint **)(uVar7 + *(int *)(param_1 + 0x230)) & 0xfffff) != 0) {
                  iVar4 = 0;
                  do {
                    uVar10 = uVar10 + 1;
                    *(int *)(*(int *)(*(int *)(uVar7 + *(int *)(param_1 + 0x230)) + 8) + iVar4) =
                         (int)uVar13;
                    iVar4 = iVar4 + 4;
                  } while (uVar10 < (**(uint **)(uVar7 + *(int *)(param_1 + 0x230)) & 0xfffff));
                }
                iVar4 = *(int *)((int)((uVar13 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14));
                *(int *)((int)aiStack_70 + uVar7) = iVar5;
                fn_82963FA8(iVar4,iVar5);
                *(int *)(iVar4 + 0xc) = iVar3;
              }
              iVar4 = (int)uVar13;
              iVar5 = fn_82996970(uVar11);
              if (iVar5 != 0) {
                iVar5 = *(int *)(**(int **)(*(int *)(uVar7 + *(int *)(param_1 + 0x234)) + 8) * 4 +
                                *(int *)(param_1 + 0x14));
                if ((iVar4 == -1) &&
                   (uVar13 = fn_82964628(*(undefined8 *)(iVar5 + 0x20),param_1,
                                               *(undefined4 *)(iVar5 + 4),
                                               *(undefined4 *)(iVar5 + 0xc),
                                               *(undefined4 *)(iVar5 + 0x10)), (int)uVar13 == -1)) {
                  return 0;
                }
                iVar4 = (int)uVar13;
                uVar10 = 0;
                if ((**(uint **)(uVar7 + *(int *)(param_1 + 0x234)) & 0xfffff) != 0) {
                  iVar9 = 0;
                  do {
                    uVar10 = uVar10 + 1;
                    *(int *)(*(int *)(*(int *)(uVar7 + *(int *)(param_1 + 0x234)) + 8) + iVar9) =
                         iVar4;
                    iVar9 = iVar9 + 4;
                  } while (uVar10 < (**(uint **)(uVar7 + *(int *)(param_1 + 0x234)) & 0xfffff));
                }
                *(int *)((int)aiStack_90 + uVar7) = iVar5;
                if ((int)lVar12 == 0) {
                  iVar9 = *(int *)((int)((uVar13 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14));
                  fn_82963FA8(iVar9,iVar5);
                  *(int *)(iVar9 + 0xc) = iVar3;
                }
              }
              if (iVar4 == -1) {
                return 0;
              }
            }
          }
          uVar7 = uVar7 + 4;
          iVar3 = iVar3 + 1;
        } while (uVar7 < 0x18);
        lVar12 = 6;
        iVar3 = 0;
        do {
          if (*(int *)((int)aiStack_70 + iVar3) != 0) {
            *(undefined4 *)(*(int *)((int)aiStack_70 + iVar3) + 4) = *(undefined4 *)(param_1 + 0x74)
            ;
          }
          if (*(int *)((int)aiStack_90 + iVar3) != 0) {
            *(undefined4 *)(*(int *)((int)aiStack_90 + iVar3) + 4) = *(undefined4 *)(param_1 + 0x74)
            ;
          }
          iVar3 = iVar3 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      *(undefined4 *)(param_1 + 0x224) = 6;
      *(undefined4 *)(param_1 + 0x228) = 6;
      return 1;
    }
  }
  return 0;
}

