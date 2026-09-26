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
extern int fn_82A6D090();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8209A8DC;
extern unsigned int lbl_8209A8E0;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82A73130(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar10;
  int iVar11;
  longlong lVar9;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int aiStack_70 [28];
  
  iVar10 = *param_1;
  uVar1 = *(uint *)(param_1[0x1d] * 0x98 + param_1[0x1e]);
  uVar17 = (ulonglong)uVar1;
  iVar18 = param_1[0x1d] * 0x98 + param_1[0x1e];
  uVar4 = 0;
  *(undefined4 *)(iVar18 + 0xc) = 0;
  *(int *)(iVar18 + 8) = param_1[0x18];
  if (uVar1 == 1) {
    *(undefined4 *)(iVar18 + 0xc) = 1;
    *(undefined4 *)(iVar18 + 0x10) = 2;
    **(undefined4 **)(iVar18 + 0x94) = lbl_82002AE0;
  }
  else {
    param_1 = param_1 + 0x38;
    aiStack_70[0] = 0;
    if (uVar1 == 2) {
      uVar4 = fn_82A6D090(param_1,1,aiStack_70);
      if (-1 < (int)uVar4) {
        if (aiStack_70[0] == 0) {
          *(undefined4 *)(iVar18 + 0xc) = 1;
          uVar2 = lbl_8209A8E0;
          *(undefined4 *)(iVar18 + 0x10) = 1;
          **(undefined4 **)(iVar18 + 0x94) = uVar2;
          *(undefined4 *)(*(int *)(iVar18 + 0x94) + 4) = lbl_8209A8DC;
          *(undefined4 *)(*(int *)(iVar18 + 0x94) + 8) = uVar2;
          *(undefined4 *)(*(int *)(iVar18 + 0x94) + 0xc) = uVar2;
        }
        else {
          aiStack_70[0] = 0;
          uVar4 = fn_82A6D090(param_1,1,aiStack_70);
          if ((-1 < (int)uVar4) && (aiStack_70[0] == 0)) {
            *(undefined4 *)(iVar18 + 0xc) = 1;
            uVar2 = lbl_82002AE0;
            *(undefined4 *)(iVar18 + 0x10) = 2;
            **(undefined4 **)(iVar18 + 0x94) = uVar2;
            uVar3 = lbl_821AAD20;
            *(undefined4 *)(*(int *)(iVar18 + 0x94) + 4) = lbl_821AAD20;
            *(undefined4 *)(*(int *)(iVar18 + 0x94) + 8) = uVar3;
            *(undefined4 *)(*(int *)(iVar18 + 0x94) + 0xc) = uVar2;
          }
        }
      }
    }
    else {
      uVar4 = fn_82A6D090(param_1,1,aiStack_70);
      if (-1 < (int)uVar4) {
        if (aiStack_70[0] == 0) {
          iVar10 = 2;
          lVar12 = 0;
          *(undefined4 *)(iVar18 + 0x10) = 2;
          *(undefined4 *)(iVar18 + 0xc) = 1;
          uVar2 = lbl_82002AE0;
          if (3 < (int)uVar1) {
            iVar16 = (int)((uVar17 + 1 & 0xffffffff) << 2);
            iVar6 = 0;
            do {
              iVar5 = iVar10 + 1;
              *(undefined4 *)(iVar6 + *(int *)(iVar18 + 0x94)) = uVar2;
              iVar11 = iVar10 * iVar16;
              *(undefined4 *)((iVar10 + -1) * iVar16 + *(int *)(iVar18 + 0x94)) = uVar2;
              lVar12 = lVar12 + 4;
              iVar10 = iVar10 + 4;
              iVar6 = iVar16 * (int)lVar12;
              *(undefined4 *)(iVar11 + *(int *)(iVar18 + 0x94)) = uVar2;
              *(undefined4 *)(iVar5 * iVar16 + *(int *)(iVar18 + 0x94)) = uVar2;
            } while ((int)lVar12 < (int)(uVar1 - 3));
          }
          if ((int)lVar12 < (int)uVar1) {
            lVar8 = uVar17 - lVar12;
            do {
              *(undefined4 *)
               ((int)((uVar17 + 1 & 0xffffffff) << 2) * (int)lVar12 + *(int *)(iVar18 + 0x94)) =
                   uVar2;
              lVar12 = lVar12 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
        }
        else {
          aiStack_70[0] = 0;
          uVar4 = fn_82A6D090(param_1,1,aiStack_70);
          if (-1 < (int)uVar4) {
            if (aiStack_70[0] == 0) {
              *(undefined4 *)(iVar18 + 0xc) = 1;
              *(undefined4 *)(iVar18 + 0x10) = 3;
              if (0 < (int)uVar1) {
                lVar12 = 0;
                iVar16 = 0;
                uVar15 = uVar17;
                do {
                  uVar13 = 0;
                  if (3 < (int)uVar1) {
                    iVar11 = 0;
                    iVar6 = *(int *)(*(int *)(*(int *)(iVar10 + 0x224) + uVar1 * 4) + iVar16);
                    do {
                      iVar5 = (int)((lVar12 + uVar13 & 0xffffffff) << 2);
                      lVar8 = lVar12 + uVar13;
                      iVar7 = iVar11 + 0xc;
                      uVar14 = lVar12 + 3 + uVar13;
                      *(undefined4 *)(iVar5 + *(int *)(iVar18 + 0x94)) =
                           *(undefined4 *)(iVar6 + iVar11);
                      *(undefined4 *)(iVar5 + *(int *)(iVar18 + 0x94) + 4) =
                           *(undefined4 *)(iVar6 + iVar11 + 4);
                      uVar13 = uVar13 + 4;
                      iVar11 = iVar11 + 0x10;
                      *(undefined4 *)
                       ((int)((lVar8 + 2U & 0xffffffff) << 2) + *(int *)(iVar18 + 0x94)) =
                           *(undefined4 *)(iVar6 + iVar7 + -4);
                      *(undefined4 *)((int)((uVar14 & 0xffffffff) << 2) + *(int *)(iVar18 + 0x94)) =
                           *(undefined4 *)(iVar6 + iVar7);
                    } while ((int)uVar13 < (int)(uVar1 - 3));
                  }
                  if ((int)uVar13 < (int)uVar1) {
                    lVar8 = uVar17 - uVar13;
                    lVar9 = (uVar13 & 0x3fffffff) << 2;
                    iVar6 = *(int *)(*(int *)(*(int *)(iVar10 + 0x224) + uVar1 * 4) + iVar16);
                    do {
                      uVar14 = lVar12 + uVar13;
                      iVar11 = (int)lVar9;
                      uVar13 = uVar13 + 1;
                      lVar9 = lVar9 + 4;
                      *(undefined4 *)((int)((uVar14 & 0xffffffff) << 2) + *(int *)(iVar18 + 0x94)) =
                           *(undefined4 *)(iVar6 + iVar11);
                      lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                  }
                  uVar15 = uVar15 - 1;
                  iVar16 = iVar16 + 4;
                  lVar12 = lVar12 + uVar17;
                } while (uVar15 != 0);
              }
            }
            else {
              *(undefined4 *)(iVar18 + 0xc) = 0;
              *(undefined4 *)(iVar18 + 0x10) = 0;
            }
          }
        }
      }
    }
  }
  return uVar4;
}

