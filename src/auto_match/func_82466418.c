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
extern unsigned int *auStack_1e4;
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern unsigned int *auStack_228;
extern int fn_82230040();
extern int fn_822EB2D0();
extern int fn_82466A20();
extern int fn_82467718();
extern int fn_824678B8();
extern int fn_82467A50();
extern int fn_82467BE8();
extern int fn_82467D80();
extern int fn_82467E00();
extern int fn_82468F58();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82828AE8();
extern int fn_82F68CC0();
extern unsigned int iStack_200;
extern unsigned int iStack_204;
extern unsigned int iStack_20c;
extern unsigned int iStack_27c;
extern unsigned int iStack_2a0;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832766CC;
extern unsigned int uStack_1e8;
extern unsigned int uStack_24c;
extern unsigned int uStack_254;
extern unsigned int uStack_25c;
extern unsigned int uStack_264;
extern unsigned int uStack_274;
extern unsigned int uStack_278;
extern unsigned int uStack_280;
extern unsigned int uStack_294;
extern unsigned int uStack_298;
extern unsigned int uStack_29c;


/* WARNING: Type propagation algorithm not settling */

undefined4 * fn_82466418(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar6;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar7;
  undefined8 uVar5;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  byte in_xer_so;
  longlong lVar17;
  int iStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_280;
  int iStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined **ppuStack_268;
  undefined4 uStack_264;
  undefined **ppuStack_260;
  undefined4 uStack_25c;
  undefined **ppuStack_258;
  undefined4 uStack_254;
  undefined **ppuStack_250;
  undefined4 uStack_24c;
  int aiStack_240 [6];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [4];
  int iStack_20c;
  int iStack_204;
  int iStack_200;
  uint uStack_1e8;
  undefined1 auStack_1e4 [484];
  
  uVar2 = *param_2;
  param_1[1] = 0xffffffff;
  *param_1 = uVar2;
  lVar17 = 2;
  puVar8 = param_1;
  do {
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8 = puVar8 + 5;
    *puVar8 = 0;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  fn_82828AE8(param_1 + 0xc);
  param_1[0x12] = 0;
  iVar6 = fn_8265C9E0(0x14);
  if (iVar6 == 0) {
    uStack_264 = 0;
    ppuStack_268 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_268);
  }
  param_1[0x11] = iVar6;
  *(int *)iVar6 = iVar6;
  *(undefined4 *)(param_1[0x11] + 4) = param_1[0x11];
  *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
  *(undefined1 *)(param_1[0x11] + 0x10) = 1;
  *(undefined1 *)(param_1[0x11] + 0x11) = 1;
  fn_82828AE8(param_1 + 0x14);
  param_1[0x1a] = 0;
  iVar6 = fn_8265C9E0(0x14);
  if (iVar6 == 0) {
    uStack_24c = 0;
    ppuStack_250 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_250);
  }
  param_1[0x19] = iVar6;
  *(int *)iVar6 = iVar6;
  *(undefined4 *)(param_1[0x19] + 4) = param_1[0x19];
  *(undefined4 *)(param_1[0x19] + 8) = param_1[0x19];
  *(undefined1 *)(param_1[0x19] + 0x10) = 1;
  *(undefined1 *)(param_1[0x19] + 0x11) = 1;
  param_1[0x1d] = 2;
  param_1[0x1e] = 6;
  param_1[0x1f] = 0x12;
  param_1[0x7d] = 0;
  lbl_832766CC = param_1;
  fn_82F68CC0(param_1 + 0x7e,param_2,0x2d8);
  uVar3 = fn_8251F720(param_2 + 1,0);
  uVar11 = 0;
  uVar4 = fn_8251FBA8();
  uVar12 = uVar3;
  if ((int)((uVar4 & 0xffffffff) / 0x28) != 0) {
    do {
      fn_82F68CC0(auStack_210,uVar12,0x28);
      puVar7 = (uint *)fn_8251F720(uVar12 + 0x24,0);
      uVar13 = 0;
      uVar4 = fn_8251FBA8();
      puVar14 = puVar7;
      if ((int)((uVar4 & 0xffffffff) / 0x88) != 0) {
        do {
          if ((puVar14 != (uint *)0x0) &&
             (uVar4 = (ulonglong)*puVar14, uVar4 != (uVar4 - 1) + (ulonglong)(uVar4 == 0))) {
            uVar5 = fn_8251F720(puVar14,0);
            fn_82F68CC0(auStack_1e4,uVar5,0x148);
            fn_8251FA58(uVar5);
            iVar6 = iStack_20c;
            uStack_1e8 = *puVar14;
            uVar10 = 0;
            uVar1 = (int)(param_1[iStack_20c * 5 + 4] - param_1[iStack_20c * 5 + 3]) / 0x14;
            if (uVar1 != 0) {
              iVar9 = 0;
              do {
                iVar16 = param_1[iStack_20c * 5 + 3];
                if (*(int *)(iVar16 + iVar9) == iStack_204) {
                  iVar16 = uVar10 * 0x14 + iVar16;
                  if (iVar16 != 0) goto LAB_82466660;
                  break;
                }
                uVar10 = uVar10 + 1;
                iVar9 = iVar9 + 0x14;
              } while (uVar10 < uVar1);
            }
            aiStack_240[0] = iStack_204;
            aiStack_240[1] = 0;
            aiStack_240[2] = 0;
            aiStack_240[3] = 0;
            fn_82467BE8(param_1 + iStack_20c * 5 + 3,aiStack_240);
            iVar16 = param_1[iVar6 * 5 + 4] + -0x14;
            fn_82467E00(aiStack_240 + 1);
LAB_82466660:
            uVar10 = 0;
            uVar1 = (*(int *)(iVar16 + 8) - *(int *)(iVar16 + 4)) / 0x14;
            if (uVar1 != 0) {
              iVar6 = 0;
              do {
                iVar9 = *(int *)(iVar16 + 4);
                if (*(int *)(iVar9 + iVar6) == iStack_200) {
                  iVar9 = uVar10 * 0x14 + iVar9;
                  if (iVar9 != 0) goto LAB_8246671c;
                  break;
                }
                uVar10 = uVar10 + 1;
                iVar6 = iVar6 + 0x14;
              } while ((bool)((byte)((uVar10 < uVar1) << 3 | in_xer_so) >> 3));
            }
            iStack_2a0 = iStack_200;
            uStack_29c = 0;
            uStack_298 = 0;
            uStack_294 = 0;
            fn_82467A50((int *)(iVar16 + 4),&iStack_2a0);
            uVar1 = uStack_298;
            iVar9 = *(int *)(iVar16 + 8) + -0x14;
            uVar4 = (ulonglong)uStack_29c;
            if (uVar4 != 0) {
              uVar15 = uVar4;
              if (uVar4 != uStack_298) {
                do {
                  fn_82468F58(uVar15);
                  uVar15 = uVar15 + 0x14;
                } while ((uVar15 & 0xffffffff) != (ulonglong)uVar1);
              }
              fn_8265CA20(uVar4);
            }
            uStack_29c = 0;
            uStack_298 = 0;
            uStack_294 = 0;
LAB_8246671c:
            uVar10 = 0;
            uVar1 = (*(int *)(iVar9 + 8) - *(int *)(iVar9 + 4)) / 0x14;
            if (uVar1 != 0) {
              iVar6 = 0;
              do {
                iVar16 = *(int *)(iVar9 + 4);
                if (*(int *)(iVar16 + iVar6) == 1) {
                  iVar16 = uVar10 * 0x14 + iVar16;
                  if (iVar16 != 0) goto LAB_824667a8;
                  break;
                }
                uVar10 = uVar10 + 1;
                iVar6 = iVar6 + 0x14;
              } while (uVar10 < uVar1);
            }
            iStack_27c = 0;
            uStack_278 = 0;
            uStack_274 = 0;
            uStack_280 = 1;
            fn_824678B8((int *)(iVar9 + 4),&uStack_280);
            iVar16 = *(int *)(iVar9 + 8) + -0x14;
            if (iStack_27c != 0) {
              fn_8265CA20();
            }
            iStack_27c = 0;
            uStack_278 = 0;
            uStack_274 = 0;
LAB_824667a8:
            fn_82467718(iVar16 + 4,auStack_210);
            puVar8 = (undefined4 *)fn_8265C9E0(0x14);
            if (puVar8 == (undefined4 *)0x0) {
              uStack_254 = 0;
              ppuStack_258 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
              fn_82230040(&ppuStack_258);
            }
            *puVar8 = param_1[0xd];
            puVar8[1] = param_1[0xd];
            uVar2 = param_1[0xd];
            *(undefined1 *)(puVar8 + 4) = 0;
            *(undefined1 *)((int)puVar8 + 0x11) = 0;
            puVar8[2] = uVar2;
            if (puVar8 + 3 != (int *)0x0) {
              puVar8[3] = iStack_204;
            }
            fn_822EB2D0(auStack_228,param_1 + 0xc);
            puVar8 = (undefined4 *)fn_8265C9E0(0x14);
            if (puVar8 == (undefined4 *)0x0) {
              uStack_25c = 0;
              ppuStack_260 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
              fn_82230040(&ppuStack_260);
            }
            *puVar8 = param_1[0x11];
            puVar8[1] = param_1[0x11];
            uVar2 = param_1[0x11];
            *(undefined1 *)(puVar8 + 4) = 0;
            *(undefined1 *)((int)puVar8 + 0x11) = 0;
            puVar8[2] = uVar2;
            if (puVar8 + 3 != (int *)0x0) {
              puVar8[3] = iStack_200;
            }
            fn_822EB2D0(auStack_220,param_1 + 0x10);
          }
          puVar14 = puVar14 + 0x22;
          uVar13 = uVar13 + 1;
          uVar4 = fn_8251FBA8(puVar7);
        } while ((uVar13 & 0xffffffff) < (uVar4 & 0xffffffff) / 0x88);
      }
      if (puVar7 != (uint *)0x0) {
        fn_8251FA58(puVar7);
      }
      uVar11 = uVar11 + 1;
      uVar4 = fn_8251FBA8(uVar3);
      uVar12 = uVar12 + 0x28;
    } while ((uVar11 & 0xffffffff) < (uVar4 & 0xffffffff) / 0x28);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8251FA58(uVar3);
  }
  param_1[0x1c] = 0;
  param_1[1] = 0xffffffff;
  param_1[0x1d] = 2;
  param_1[0x1f] = 0x12;
  param_1[0x7d] = 0;
  fn_82467D80(param_1 + 0x14);
  fn_82467D80(param_1 + 0x18);
  fn_82466A20((double)lbl_821CC160,param_1);
  return param_1;
}

