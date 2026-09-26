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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A5E338();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82022E5C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_82057B40;
extern unsigned int lbl_82089F08;
extern unsigned int lbl_82089F0C;
extern unsigned int lbl_82089F10;
extern unsigned int lbl_82089F14;
extern unsigned int lbl_82089F18;
extern unsigned int lbl_82089F1C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


longlong fn_82A5E850(ulonglong param_1,uint param_2,ulonglong param_3,ulonglong param_4,
                      float *param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  int iVar7;
  longlong lVar5;
  longlong lVar6;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  float *pfVar18;
  longlong lVar16;
  int iVar19;
  longlong lVar17;
  ulonglong uVar20;
  double dVar21;
  float afStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  fVar4 = lbl_82002AE0;
  iVar7 = (int)param_1;
  if ((iVar7 == 0) || (param_2 == 0)) {
LAB_82a5ed0c:
    lVar5 = -0x7ff8ffa9;
  }
  else {
    if ((param_3 & 0xffffffff) != 0) {
      iVar8 = 0;
      uVar15 = param_3;
      do {
        iVar8 = iVar8 + 1;
        uVar15 = uVar15 - 1 & uVar15;
      } while (uVar15 != 0);
      if (iVar7 != iVar8) goto LAB_82a5ed0c;
    }
    if ((param_4 & 0xffffffff) != 0) {
      uVar12 = 0;
      uVar15 = param_4;
      do {
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 - 1 & uVar15;
      } while (uVar15 != 0);
      if (param_2 != uVar12) goto LAB_82a5ed0c;
    }
    if ((((param_3 & 0xffffffff) == 0x3f) || ((param_3 & 0xffffffff) == 0x60f)) &&
       (((param_4 & 0xffffffff) == 0x3f || ((param_4 & 0xffffffff) == 0x60f)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((param_3 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) {
      bVar3 = true;
    }
    if (bVar3) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_5,0,((longlong)iVar7 * (longlong)(int)param_2 & 0x3fffffffU) << 2);
    }
    if ((param_3 & 0xffffffff) == 4) {
      *param_5 = lbl_82002AE0;
      if ((1 < (int)param_2) && (param_5[1] = fVar4, 2 < (int)param_2)) {
        param_5 = param_5 + 1;
        for (iVar7 = param_2 - 2; iVar7 != 0; iVar7 = iVar7 + -1) {
          param_5 = param_5 + 1;
          *param_5 = 0.0;
        }
      }
      lVar5 = 0;
    }
    else {
      dVar21 = (double)lbl_821AAD20;
      uVar20 = 0;
      uVar12 = 0;
      uVar15 = 1;
      afStack_90[0] = lbl_82089F1C;
      iVar8 = 0;
      afStack_90[1] = (float)lbl_82015B38;
      afStack_90[2] = lbl_821AAD20;
      afStack_90[3] = (float)lbl_82089F18;
      uStack_80 = lbl_82089F14;
      uStack_7c = lbl_82057B40;
      uStack_78 = lbl_82089F10;
      uStack_74 = lbl_82027070;
      uStack_70 = lbl_82022E5C;
      uStack_6c = lbl_82089F0C;
      uStack_68 = lbl_82089F08;
      lVar6 = fn_8265C940((param_1 & 0x3fffffff) << 2,0x20970000);
      if ((lVar6 == 0) || (iVar8 = fn_8265C940(param_2 & 0x3fffffff,0x20970000), iVar8 == 0))
      {
        lVar5 = -0x7ff8fff2;
      }
      else {
        uVar13 = 0;
        pfVar9 = (float *)(iVar8 + -4);
        pfVar18 = afStack_90;
        lVar5 = lVar6 + -4;
        do {
          if ((uVar15 & param_3) != 0) {
            if ((int)uVar20 != iVar7) {
              uVar20 = uVar20 + 1;
              lVar5 = lVar5 + 4;
              *(float *)lVar5 = *pfVar18;
              goto LAB_82a5eab8;
            }
LAB_82a5ec18:
            lVar5 = -0x7ff8ffa9;
            goto LAB_82a5ecec;
          }
LAB_82a5eab8:
          if ((uVar15 & param_4) != 0) {
            if (uVar12 == param_2) goto LAB_82a5ec18;
            uVar12 = uVar12 + 1;
            pfVar9 = pfVar9 + 1;
            *pfVar9 = *pfVar18;
          }
          uVar13 = uVar13 + 1;
          uVar15 = (uVar15 & 0x7fffffff) << 1;
          pfVar18 = pfVar18 + 1;
        } while (uVar13 < 0xb);
        if ((int)uVar20 < iVar7) {
          lVar5 = (uVar20 & 0x3fffffff) * 4 + lVar6 + -4;
          for (lVar16 = param_1 - uVar20; lVar16 != 0; lVar16 = lVar16 + -1) {
            lVar5 = lVar5 + 4;
            *(undefined4 *)lVar5 = 0xc3b40000;
          }
        }
        if ((int)uVar12 < (int)param_2) {
          puVar14 = (undefined4 *)(uVar12 * 4 + iVar8 + -4);
          for (iVar19 = param_2 - uVar12; iVar19 != 0; iVar19 = iVar19 + -1) {
            puVar14 = puVar14 + 1;
            *puVar14 = 0xc3b40000;
          }
        }
        lVar5 = fn_82A5E338(param_1,param_2,lVar6,iVar8,param_5);
        fVar4 = lbl_82002AE0;
        if (-1 < lVar5) {
          uVar12 = 0;
          lVar10 = 0;
          uVar15 = 1;
          lVar16 = 0;
          pfVar9 = afStack_90;
          do {
            if ((double)*pfVar9 < dVar21) {
              if (((uVar15 & param_3) != 0) && ((uVar15 & param_4) != 0)) {
                *(float *)((int)((lVar16 + lVar10 & 0xffffffffU) << 2) + (int)param_5) = fVar4;
              }
              if ((uVar15 & param_3) == 0) {
                if (((uVar15 & param_4) != 0) && ((uVar15 & 8) == 0)) {
LAB_82a5ece4:
                  lVar5 = -0x7fffbfff;
                  break;
                }
              }
              else if ((uVar15 & param_4) == 0) {
                if ((uVar15 & 8) == 0) goto LAB_82a5ece4;
                if (iVar7 == 1) {
                  if (0 < (int)param_2) {
                    pfVar18 = param_5 + -1;
                    uVar13 = param_2;
                    do {
                      pfVar18 = pfVar18 + 1;
                      *pfVar18 = fVar4 / (float)(longlong)(int)param_2;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                }
                else {
                  fVar1 = fVar4 / (float)(longlong)(iVar7 + -1);
                  if (0 < (int)param_2) {
                    lVar11 = 0;
                    uVar13 = param_2;
                    do {
                      lVar17 = 0;
                      if (0 < iVar7) {
                        uVar20 = param_1;
                        do {
                          iVar19 = (int)((lVar11 + lVar17 & 0x3fffffffU) << 2);
                          fVar2 = fVar1;
                          if ((int)lVar17 != (int)lVar10) {
                            fVar2 = *(float *)(iVar19 + (int)param_5) *
                                    (float)(longlong)(int)param_2;
                          }
                          *(float *)(iVar19 + (int)param_5) =
                               fVar2 / ((float)(longlong)(int)param_2 + fVar1);
                          lVar17 = lVar17 + 1;
                          uVar20 = uVar20 - 1;
                        } while (uVar20 != 0);
                      }
                      uVar13 = uVar13 - 1;
                      lVar11 = lVar11 + param_1;
                    } while (uVar13 != 0);
                  }
                }
              }
            }
            if ((uVar15 & param_3) != 0) {
              lVar10 = lVar10 + 1;
            }
            if ((uVar15 & param_4) != 0) {
              lVar16 = lVar16 + param_1;
            }
            uVar12 = uVar12 + 1;
            uVar15 = (uVar15 & 0x7fffffff) << 1;
            pfVar9 = pfVar9 + 1;
          } while (uVar12 < 0xb);
        }
      }
LAB_82a5ecec:
      fn_8265C990(lVar6,0x20970000);
      fn_8265C990(iVar8,0x20970000);
    }
  }
  return lVar5;
}

