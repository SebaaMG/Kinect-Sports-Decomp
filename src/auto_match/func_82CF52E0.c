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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_100;
extern unsigned int *auStack_142;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1a2;
extern unsigned int *auStack_1c0;
extern unsigned int fStack_164;
extern unsigned int fStack_1c4;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEDE90();
extern int fn_82CF0B50();
extern int fn_82CF0E70();
extern int fn_82CF1188();
extern int fn_82CF1228();
extern int fn_82CF1790();
extern int fn_82CF1A78();
extern int fn_82CF2010();
extern int fn_82CF2270();
extern int fn_82CF4FC8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_12c;
extern unsigned int iStack_130;
extern unsigned int iStack_18c;
extern unsigned int iStack_190;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82021544;
extern unsigned int lbl_8202E4D0;
extern unsigned int lbl_8213360C;
extern unsigned int lbl_82196582;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CC884;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_188;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1f0;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_82CF52E0(undefined8 param_1,int *param_2,uint param_3,undefined8 param_4,ulonglong param_5
                  ,undefined8 param_6,ulonglong param_7)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  uint uVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 uStack_1f0;
  uint *puStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint *puStack_1d4;
  longlong lStack_1d0;
  undefined *puStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1c0 [30];
  undefined2 auStack_1a2 [9];
  int iStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined *puStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_164;
  undefined1 auStack_160 [30];
  undefined2 auStack_142 [9];
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined *puStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_100 [4];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  
  uVar6 = fn_82F6A540();
  fn_82CEDE90(uVar6,0xffffffff82133610,0xffffffff82133624);
  fVar3 = lbl_821AAD20;
  lVar21 = 8;
  dVar24 = (double)lbl_821AAD20;
  puVar16 = auStack_1a2;
  pfVar18 = &fStack_1c4;
  iVar7 = *(int *)*param_2;
  iStack_190 = 0;
  iStack_18c = 0;
  uStack_188 = 0x80000000;
  uStack_178 = 0;
  puStack_174 = &lbl_8213360C;
  uStack_170 = 0;
  uStack_16c = 1;
  do {
    pfVar18 = pfVar18 + 1;
    *pfVar18 = fVar3;
    puVar16 = puVar16 + 1;
    *puVar16 = 0;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar9 = 0;
  uStack_180 = lbl_82005710;
  lStack_1d0 = (longlong)*(int *)(iVar7 + 0x34);
  dVar23 = (double)lbl_82002AE0;
  dVar25 = (double)(float)(dVar23 / (double)lStack_1d0);
  uVar13 = lbl_82005710;
  if (0 < *(int *)(iVar7 + 0x34)) {
    iVar20 = 0;
    do {
      fn_82CF2270(auStack_1c0,*(undefined4 *)(iVar20 + *(int *)(iVar7 + 0x30)));
      iVar9 = iVar9 + 1;
      iVar20 = iVar20 + 4;
    } while (iVar9 < *(int *)(iVar7 + 0x34));
  }
  for (iVar7 = fn_82CF1188(auStack_1c0,param_6,uStack_1f0); iVar7 != 0;
      iVar7 = fn_82CF1228(auStack_1c0,param_6,iVar7)) {
  }
  puStack_1c8 = &lbl_8202E4D0;
  if ((param_5 & 1) != 0) {
    fn_82CEDE90(uVar6);
    fn_82CEDE90(uVar6,0xffffffff821335e8);
    fn_82CEDE90(uVar6,0xffffffff821335c4);
    fn_82CEDE90(uVar6,0xffffffff821335e8);
    fn_82CEDE90(uVar6,0xffffffff821335a8);
    iVar7 = 0;
    if (0 < iStack_18c) {
      iVar9 = 0;
      do {
        fn_82CF0E70(dVar25,uVar6,*(undefined4 *)(iVar9 + iStack_190),1);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar7 < iStack_18c);
    }
  }
  fn_82CF1790(auStack_1c0);
  if ((param_5 & 2) == 0) {
    lStack_1d0 = CONCAT44(&lbl_821CC884,(((U64)(lStack_1d0) >> 32) & 0xFFFFFFFF));
    if ((param_5 & 4) != 0) {
      iVar7 = param_2[1];
      if ((iVar7 == 1) || ((param_7 & 0xff) == 0)) {
        lVar21 = 0;
        if (0 < *(int *)(*(int *)*param_2 + 0x34)) {
          iVar9 = 0;
          dVar25 = (double)lbl_82021544;
          do {
            lVar22 = 0;
            if (0 < iVar7) {
              iVar20 = 0;
              do {
                iVar7 = *(int *)(*param_2 + iVar20);
                if ((int)lVar21 < *(int *)(iVar7 + 0x34)) {
                  puStack_114 = &lbl_8213360C;
                  iStack_130 = 0;
                  iStack_12c = 0;
                  uStack_128 = 0x80000000;
                  puVar16 = auStack_142;
                  uStack_118 = 0;
                  lVar19 = 8;
                  uStack_110 = 0;
                  pfVar18 = &fStack_164;
                  uStack_10c = 1;
                  do {
                    pfVar18 = pfVar18 + 1;
                    *pfVar18 = (float)dVar24;
                    puVar16 = puVar16 + 1;
                    *puVar16 = 0;
                    lVar19 = lVar19 + -1;
                  } while (lVar19 != 0);
                  uStack_120 = uVar13;
                  fn_82CF2270(auStack_160,*(undefined4 *)(*(int *)(iVar7 + 0x30) + iVar9));
                  fn_82CEDE90(uVar6,0xffffffff821cc86c);
                  fn_82CEDE90(uVar6,0xffffffff82133508);
                  fn_82CEDE90(uVar6,0xffffffff821334dc,lVar21,lVar22);
                  fn_82CEDE90(uVar6,0xffffffff82133508);
                  fn_82CEDE90(uVar6,(((U64)(lStack_1d0) >> 0) & 0xFFFFFFFF),
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x30) + iVar9) + 0x4c));
                  iVar7 = 0;
                  if (0 < iStack_12c) {
                    iVar10 = 0;
                    do {
                      fn_82CF0E70(dVar23,uVar6,*(undefined4 *)(iStack_130 + iVar10),1);
                      iVar7 = iVar7 + 1;
                      iVar10 = iVar10 + 4;
                    } while (iVar7 < iStack_12c);
                  }
                  if ((param_5 & 8) != 0) {
                    fn_82CF4FC8(dVar25,uVar6,auStack_160);
                  }
                  fn_82CF1790(auStack_160);
                }
                iVar7 = param_2[1];
                lVar22 = lVar22 + 1;
                iVar20 = iVar20 + 4;
              } while ((int)lVar22 < iVar7);
            }
            lVar21 = lVar21 + 1;
            iVar9 = iVar9 + 4;
          } while ((int)lVar21 < *(int *)(*(int *)*param_2 + 0x34));
        }
      }
      else {
        lVar21 = 0;
        if (0 < *(int *)(*(int *)*param_2 + 0x34)) {
          dVar25 = (double)lbl_82021544;
          iVar7 = 0;
          do {
            fn_82CEDE90(uVar6,0xffffffff821cc86c);
            fn_82CEDE90(uVar6,0xffffffff82133508);
            fn_82CEDE90(uVar6,0xffffffff82133534,lVar21);
            fn_82CEDE90(uVar6,0xffffffff82133508);
            puStack_1e0 = (uint *)0x0;
            uStack_1dc = 0;
            uStack_1d8 = 0x80000000;
            uVar1 = param_2[1];
            piVar8 = (int *)fn_82CE5410();
            uStack_1d8 = uVar1 | 0x80000000;
            puStack_1e0 = (uint *)*piVar8;
            *piVar8 = (uVar1 * 4 + 0x7f & 0xffffff80) + (int)puStack_1e0;
            uVar1 = param_2[1];
            puStack_1d4 = puStack_1e0;
            iVar9 = fn_82CE5410();
            if ((int)(uStack_1d8 & 0x3fffffff) < (int)uVar1) {
              uVar17 = (uStack_1d8 & 0x3fffffff) << 1;
              if ((int)uVar17 <= (int)uVar1) {
                uVar17 = uVar1;
              }
              fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),&puStack_1e0,uVar17,4);
            }
            iVar9 = 0;
            uStack_1dc = uVar1;
            if (0 < param_2[1]) {
              iVar20 = 0;
              do {
                iVar10 = fn_82CE5410();
                iVar10 = (**(code **)(**(int **)(iVar10 + 0x10) + 4))(*(int **)(iVar10 + 0x10),0x58)
                ;
                if (iVar10 == 0) {
                  iVar10 = 0;
                }
                else {
                  *(undefined4 *)(iVar10 + 0x30) = 0;
                  *(undefined4 *)(iVar10 + 0x34) = 0;
                  *(undefined4 *)(iVar10 + 0x38) = 0x80000000;
                  pfVar18 = (float *)(iVar10 + -4);
                  *(undefined4 *)(iVar10 + 0x48) = 0;
                  puVar16 = (undefined2 *)(iVar10 + 0x1e);
                  *(undefined1 **)(iVar10 + 0x4c) = &lbl_82196582;
                  *(undefined4 *)(iVar10 + 0x50) = 0;
                  lVar22 = 8;
                  *(undefined4 *)(iVar10 + 0x54) = 1;
                  do {
                    pfVar18 = pfVar18 + 1;
                    *pfVar18 = (float)dVar24;
                    puVar16 = puVar16 + 1;
                    *puVar16 = 0;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                  *(undefined8 *)(iVar10 + 0x40) = uVar13;
                }
                *(int *)(iVar20 + (int)puStack_1e0) = iVar10;
                if ((int)lVar21 < *(int *)(*(int *)(iVar20 + *param_2) + 0x34)) {
                  fn_82CF2270(*(undefined4 *)(iVar20 + (int)puStack_1e0),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(iVar20 + *param_2) + 0x30) + iVar7));
                }
                iVar9 = iVar9 + 1;
                iVar20 = iVar20 + 4;
              } while (iVar9 < param_2[1]);
            }
            lVar22 = 1;
            uStack_f8 = 4;
            uStack_f4 = 2;
            uStack_fc = 0x10;
            uStack_f0 = 0;
            if (1 < (int)uStack_1dc) {
              iVar9 = 4;
              do {
                uVar15 = (ulonglong)*puStack_1e0;
                uVar2 = *(undefined4 *)((int)puStack_1e0 + iVar9);
                fn_82CF0B50(dVar24,uVar15,lVar22);
                fn_82CF1A78(dVar24,uVar15,uVar2,lVar22,0);
                lVar22 = lVar22 + 1;
                iVar9 = iVar9 + 4;
              } while ((int)lVar22 < (int)uStack_1dc);
            }
            fn_82CF2010(*puStack_1e0,param_3,param_4,uVar6,auStack_100);
            if ((param_5 & 8) != 0) {
              fn_82CF4FC8(dVar25,uVar6,*puStack_1e0);
            }
            iVar9 = 0;
            if (0 < param_2[1]) {
              iVar20 = 0;
              do {
                iVar10 = *(int *)((int)puStack_1e0 + iVar20);
                if (iVar10 != 0) {
                  fn_82CF1790(iVar10);
                  iVar11 = fn_82CE5410();
                  (**(code **)(**(int **)(iVar11 + 0x10) + 8))(*(int **)(iVar11 + 0x10),iVar10,0x58)
                  ;
                }
                iVar9 = iVar9 + 1;
                iVar20 = iVar20 + 4;
              } while (iVar9 < param_2[1]);
            }
            puVar4 = puStack_1d4;
            uStack_1dc = -(uint)(puStack_1e0 != puStack_1d4) & uStack_1dc;
            puVar12 = (undefined4 *)fn_82CE5410();
            *puVar12 = puVar4;
            iVar9 = fn_82CE5410();
            uStack_1dc = 0;
            if ((uStack_1d8 & 0x80000000) == 0) {
              (**(code **)(**(int **)(iVar9 + 0x10) + 0x10))
                        (*(int **)(iVar9 + 0x10),puStack_1e0,uStack_1d8 & 0x3fffffff,4);
            }
            lVar21 = lVar21 + 1;
            puStack_1e0 = (uint *)0x0;
            iVar7 = iVar7 + 4;
            uStack_1d8 = 0x80000000;
          } while ((int)lVar21 < *(int *)(*(int *)*param_2 + 0x34));
        }
      }
    }
    if (((param_5 & 0x10) != 0) && (lVar21 = 0, 0 < *(int *)(*(int *)*param_2 + 0x34))) {
      iVar7 = 0;
      do {
        puVar5 = puStack_1c8;
        lVar22 = 0;
        if (0 < param_2[1]) {
          iVar9 = 0;
          uVar2 = (((U64)(lStack_1d0) >> 0) & 0xFFFFFFFF);
          lVar19 = -(ulonglong)param_3;
          do {
            iVar20 = *(int *)(*param_2 + iVar9);
            if ((int)lVar21 < *(int *)(iVar20 + 0x34)) {
              fn_82CEDE90(uVar6,puVar5);
              fn_82CEDE90(uVar6,0xffffffff8213345c);
              uVar13 = 0xffffffff82133488;
              lVar14 = lVar22;
              if ((int)param_3 <= (int)lVar22) {
                uVar13 = 0xffffffff821334b4;
                lVar14 = lVar19;
              }
              fn_82CEDE90(uVar6,uVar13,lVar21,lVar14);
              fn_82CEDE90(uVar6,0xffffffff8213345c);
              fn_82CEDE90(uVar6,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar20 + 0x30) + iVar7) + 0x4c));
              iVar10 = 0;
              iVar20 = *(int *)(*(int *)(iVar20 + 0x30) + iVar7);
              if (0 < *(int *)(iVar20 + 0x34)) {
                iVar11 = 0;
                do {
                  fn_82CF0E70(dVar23,uVar6,*(undefined4 *)(*(int *)(iVar20 + 0x30) + iVar11),1);
                  iVar10 = iVar10 + 1;
                  iVar11 = iVar11 + 4;
                } while (iVar10 < *(int *)(iVar20 + 0x34));
              }
            }
            lVar22 = lVar22 + 1;
            iVar9 = iVar9 + 4;
            lVar19 = lVar19 + 1;
          } while ((int)lVar22 < param_2[1]);
        }
        lVar21 = lVar21 + 1;
        iVar7 = iVar7 + 4;
      } while ((int)lVar21 < *(int *)(*(int *)*param_2 + 0x34));
    }
    fn_82F6A58C();
    return;
  }
  fn_82CEDE90(uVar6,puStack_1c8);
  fn_82CEDE90(uVar6,0xffffffff821335e8);
  fn_82CEDE90(uVar6,0xffffffff82133584);
  fn_82CEDE90(uVar6,0xffffffff821335e8);
  fn_82CEDE90(uVar6,0xffffffff82133564);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(auStack_100,0x20,0x28);
}

