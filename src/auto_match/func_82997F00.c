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
extern unsigned int *auStack_140;
extern unsigned int *auStack_f0;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82963FA8();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82997D98();
extern int fn_82BA02A8();
extern unsigned int iStack_168;
extern unsigned int iStack_170;
extern unsigned int lbl_82005710;
extern unsigned int uStack_130;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82997F00(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int *piVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int iStack_170;
  int iStack_168;
  int aiStack_150 [4];
  undefined4 auStack_140 [4];
  undefined4 uStack_130;
  int aiStack_120 [12];
  uint auStack_f0 [60];
  
  uVar22 = *(uint *)(param_1 + 0x4c);
  uVar1 = *(uint *)(param_1 + 0x228);
  if (uVar22 < uVar1) {
    iStack_168 = uVar22 << 2;
    uVar32 = lbl_82005710;
    do {
      iStack_170 = 0;
      puVar8 = *(uint **)(*(int *)(param_1 + 0x234) + iStack_168);
      if ((puVar8 != (uint *)0x0) && (uVar2 = *puVar8, uVar2 != 0)) {
        uVar3 = puVar8[1];
        uVar12 = (ulonglong)uVar2 & 0xfffff;
        uVar23 = 0;
        trapWord(6,uVar12,0);
        if ((int)(uVar3 / uVar12) != 0) {
          lVar26 = 0;
          lVar24 = 0;
          lVar25 = 0;
          piVar27 = aiStack_120;
          do {
            iVar15 = 0;
            *piVar27 = -1;
            piVar27[1] = -1;
            bVar11 = false;
            piVar27[2] = -1;
            bVar13 = false;
            piVar27[3] = -1;
            uVar17 = 0;
            auStack_f0[2] = 0xffffffff;
            auStack_f0[3] = 0xffffffff;
            if ((uVar2 & 0xfffff) == 0) {
LAB_82998130:
              iVar14 = fn_82997D98(piVar27,auStack_f0,2);
              if (iVar14 == 0) {
                if (bVar13) {
                  fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x11b5,
                                0xffffffff82050e24);
                  return -0x7fffbffb;
                }
                iVar14 = fn_82964628(uVar32,param_1,*(undefined4 *)(param_1 + 0x88),0,3);
                if (iVar14 == -1) goto LAB_829984f4;
                iVar15 = fn_82963998(0x74);
                if (iVar15 == 0) {
                  iVar15 = 0;
                }
                else {
                  iVar15 = fn_829632A0();
                }
                if (iVar15 == 0) goto LAB_829984f4;
                lVar19 = fn_82963A30(iVar15,0x50000003,6,1,0);
                if ((lVar19 < 0) || (lVar19 = fn_829632F0(iVar15,puVar8), lVar19 < 0))
                goto LAB_82998460;
                uVar17 = 0;
                uVar28 = 0;
                iVar14 = *(int *)(*(int *)(puVar8[2] + (int)lVar25) * 4 + *(int *)(param_1 + 0x14));
                uVar4 = *(uint *)(iVar14 + 0x10);
                do {
                  if ((uVar17 & 0xffffffff) == (ulonglong)uVar4) {
                    uVar21 = *(undefined4 *)(param_1 + 0x448);
                  }
                  else {
                    uVar21 = *(undefined4 *)(param_1 + 0x444);
                  }
                  uVar31 = *(undefined8 *)(iVar14 + 0x20);
                  uVar6 = *(undefined4 *)(iVar14 + 4);
                  *(undefined4 *)((int)auStack_140 + uVar28) = uVar21;
                  iVar16 = fn_82964628(uVar31,param_1,uVar6,0,uVar17);
                  *(int *)((int)aiStack_150 + uVar28) = iVar16;
                  if (iVar16 == -1) goto LAB_829984f4;
                  iVar18 = *(int *)(iVar16 * 4 + *(int *)(param_1 + 0x14));
                  fn_82963FA8(iVar18,iVar14);
                  iVar9 = *(int *)(puVar8[2] + (int)lVar25);
                  iVar16 = *(int *)(*(int *)(iVar9 * 4 + *(int *)(param_1 + 0x14)) + 0x38);
                  if (iVar16 == -1) {
                    *(int *)(iVar18 + 0x38) = iVar9;
                  }
                  else {
                    *(int *)(iVar18 + 0x38) = iVar16;
                  }
                  uVar28 = uVar28 + 4;
                  uVar17 = uVar17 + 1;
                } while (uVar28 < 0xc);
                puVar7 = *(undefined4 **)(iVar15 + 8);
                uVar17 = 0;
                *puVar7 = auStack_140[0];
                puVar7[1] = auStack_140[1];
                puVar7[2] = auStack_140[2];
                iVar14 = *(int *)(iVar15 + 8);
                *(int *)(iVar14 + 0xc) = aiStack_150[0];
                *(int *)(iVar14 + 0x10) = aiStack_150[1];
                *(int *)(iVar14 + 0x14) = aiStack_150[2];
                **(undefined4 **)(iVar15 + 0x10) = uStack_130;
                if ((uVar2 & 0xfffff) != 0) {
                  iVar14 = aiStack_150[uVar4];
                  do {
                    iVar9 = (int)((lVar26 + uVar17 & 0xffffffff) << 2);
                    iVar18 = *(int *)(iVar9 + puVar8[2]);
                    iVar16 = *(int *)(*(int *)(iVar14 * 4 + *(int *)(param_1 + 0x14)) + 0x38);
                    if ((iVar16 != iVar18) &&
                       ((iVar18 = *(int *)(*(int *)(iVar18 * 4 + *(int *)(param_1 + 0x14)) + 0x38),
                        iVar18 == -1 || (iVar16 != iVar18)))) {
                      fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x11b5
                                    ,0xffffffff82050e24);
                      lVar19 = -0x7fffbffb;
                      goto LAB_82998460;
                    }
                    uVar17 = uVar17 + 1;
                    *(undefined4 *)(iVar9 + puVar8[2]) = uStack_130;
                  } while ((uVar17 & 0xffffffff) < uVar12);
                }
                if (0x1ff < *(uint *)(param_1 + 0x228)) goto LAB_829984f4;
                *(int *)(*(uint *)(param_1 + 0x228) * 4 + *(int *)(param_1 + 0x234)) = iVar15;
                *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
                iVar14 = fn_829644B8(param_1,iVar15);
                if (iVar14 < 0) goto LAB_829984f4;
              }
            }
            else {
              uVar4 = *puVar8;
              iVar18 = 0;
              uVar28 = puVar8[2];
              iVar14 = *(int *)(param_1 + 0x14);
              iVar16 = *(int *)(param_1 + 0x10);
              uVar29 = uVar12;
              bVar13 = false;
              do {
                iVar9 = *(int *)(*(int *)((int)((lVar26 + uVar17 & 0xffffffff) << 2) + uVar28) * 4 +
                                iVar14);
                uVar20 = uVar17;
                if (((uVar4 & 0xfff00000) != 0x50000000) && (uVar12 == puVar8[3])) {
                  uVar20 = (ulonglong)
                           *(uint *)(*(int *)(*(int *)(puVar8[4] + iVar18) * 4 + iVar14) + 0x10);
                }
                iVar5 = *(int *)(iVar9 + 0x10);
                iVar10 = (int)((lVar24 + uVar20 & 0x3fffffff) << 2);
                if ((*(uint *)(*(int *)(*(int *)(iVar9 + 4) * 4 + iVar16) + 4) & 0x100) == 0) {
                  *(int *)((int)aiStack_120 + iVar10) = iVar5;
                }
                else {
                  *(int *)((int)aiStack_120 + iVar10) = (int)uVar20;
                }
                if ((uVar20 & 0xffffffff) == 3) {
                  bVar11 = true;
                }
                if (iVar5 == 3) {
                  bVar13 = true;
                }
                uVar17 = uVar17 + 1;
                iVar18 = iVar18 + 4;
                *(undefined4 *)((int)auStack_f0 + (int)((uVar20 & 0xffffffff) << 2)) = 0;
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
              if (((!bVar11) || (uVar12 != 1)) ||
                 (((uVar4 & 0xfff00000) == 0x50000000 && (puVar8[3] == 1)))) goto LAB_82998130;
              bVar11 = true;
              lVar19 = 0;
              iVar14 = 0;
              lVar30 = 4;
              do {
                if (*(int *)((int)aiStack_120 + (int)((lVar24 + lVar19 & 0xffffffffU) << 2)) !=
                    *(int *)(iVar14 + -0x7cea4180)) {
                  bVar11 = (bool)((ulonglong)*(uint *)((int)auStack_f0 + iVar14) ==
                                  0xffffffffffffffff & bVar11);
                }
                lVar19 = lVar19 + 1;
                iVar14 = iVar14 + 4;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              if (!bVar11) goto LAB_82998130;
            }
            uVar23 = uVar23 + 1;
            lVar24 = lVar24 + 4;
            piVar27 = piVar27 + 4;
            lVar26 = lVar26 + uVar12;
            lVar25 = ((ulonglong)uVar2 & 0xfffff) * 4 + lVar25;
          } while ((uVar23 & 0xffffffff) < uVar3 / uVar12);
        }
        iVar15 = 0;
        iVar14 = fn_82963998(0x74);
        if (iVar14 == 0) {
          iStack_170 = 0;
        }
        else {
          iStack_170 = fn_829632A0();
        }
        if ((iStack_170 != 0) && (iVar14 = fn_829644B8(param_1,iStack_170), -1 < iVar14)) {
          lVar19 = fn_82963D50(iStack_170,puVar8);
          if (lVar19 < 0) goto LAB_82998478;
          if (*(uint *)(param_1 + 0x228) < 0x200) {
            *(int *)(*(uint *)(param_1 + 0x228) * 4 + *(int *)(param_1 + 0x234)) = iStack_170;
            *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
            *puVar8 = 0;
            goto LAB_82998444;
          }
        }
LAB_829984f4:
        lVar19 = -0x7ff8fff2;
        goto LAB_82998460;
      }
LAB_82998444:
      uVar22 = uVar22 + 1;
      iStack_168 = iStack_168 + 4;
    } while (uVar22 < uVar1);
  }
  iStack_170 = 0;
  iVar15 = 0;
  lVar19 = 0;
LAB_82998460:
  if (iVar15 != 0) {
    fn_82BA02A8(iVar15);
    fn_829639F0(iVar15);
  }
LAB_82998478:
  if (iStack_170 != 0) {
    fn_82BA02A8(iStack_170);
    fn_829639F0(iStack_170);
  }
  return lVar19;
}

