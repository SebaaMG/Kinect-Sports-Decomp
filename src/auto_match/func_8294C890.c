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
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x8294cec8) */

longlong fn_8294C890(int param_1,int *param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int aiStack_170 [4];
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [80];
  
  uVar19 = ZEXT48(&stack0x00000000);
  iVar22 = 0;
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar12 = (ulonglong)uVar1;
  uVar11 = uVar12 & 0xfffff;
  if ((uVar1 & 0xfff00000) != 0x30000000) {
    return 1;
  }
  bVar15 = false;
  bVar17 = false;
  bVar16 = false;
  bVar18 = false;
  lVar20 = 0;
  if ((uVar1 & 0xfffff) == 0) {
LAB_8294cb54:
    lVar20 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035ff0,uVar19 - 0xd0
                           ,uVar19 - 400,uVar19 - 0x170,uVar19 - 0x180,uVar11);
    if (lVar20 != 0) {
      return lVar20;
    }
    iVar21 = 0;
    bVar15 = false;
    uVar28 = 0;
    do {
      uVar27 = 0;
      do {
        uVar24 = 0;
        if ((uVar1 & 0xfffff) != 0) {
          iVar23 = *(int *)(param_1 + 0x14);
          iVar26 = iVar21;
          do {
            iVar3 = *(int *)((int)aiStack_160 +
                            (int)((uVar24 + (uVar28 & 0x3fffffff) * -4 & 0xffffffff) << 2));
            iVar4 = *(int *)((int)aiStack_140 + (int)((uVar24 - uVar27 & 0xffffffff) << 2));
            iVar5 = *(int *)((int)aiStack_170 +
                            (int)(((uVar28 & 0x3fffffff) * 4 + uVar24 & 0xffffffff) << 2));
            iVar6 = *(int *)(iVar3 * 4 + iVar23);
            iVar7 = *(int *)(iVar4 * 4 + iVar23);
            iVar8 = *(int *)((int)aiStack_150 + (int)((uVar27 + uVar24 & 0xffffffff) << 2));
            iVar9 = *(int *)(iVar5 * 4 + iVar23);
            iVar21 = *(int *)(iVar9 + 0x38);
            iVar10 = *(int *)(iVar8 * 4 + iVar23);
            if ((((iVar21 == iVar8) || (iVar2 = *(int *)(iVar10 + 0x38), iVar2 == iVar5)) ||
                ((iVar21 != -1 && (iVar21 == iVar2)))) &&
               (((*(uint *)(iVar9 + 0x3c) ^ 0x80000) == *(uint *)(iVar10 + 0x3c) && (iVar3 == iVar4)
                ))) {
              bVar15 = true;
LAB_8294ccfc:
              iVar21 = 0;
            }
            else {
              if ((iVar5 != iVar8) ||
                 (((((iVar21 = *(int *)(iVar6 + 0x38), iVar21 != iVar4 &&
                     (*(int *)(iVar7 + 0x38) != iVar3)) &&
                    ((iVar21 == -1 || (iVar21 != *(int *)(iVar7 + 0x38))))) ||
                   ((*(uint *)(iVar6 + 0x3c) ^ 0x80000) != *(uint *)(iVar7 + 0x3c))) &&
                  ((((*(uint *)(*(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                     0x100) == 0 ||
                    ((*(uint *)(*(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                     0x100) == 0)) || (*(double *)(iVar7 + 0x20) != -*(double *)(iVar6 + 0x20)))))))
              {
                bVar15 = false;
                goto LAB_8294ccfc;
              }
              bVar15 = true;
              iVar21 = 1;
            }
            if ((uVar24 & 0xffffffff) != 0) {
              bVar15 = (bool)(iVar21 == iVar26 & bVar15);
              iVar21 = iVar26;
            }
            if (!bVar15) goto LAB_8294cd3c;
            uVar24 = uVar24 + 1;
            iVar26 = iVar21;
          } while ((uVar24 & 0xffffffff) < uVar11);
        }
        if (bVar15) {
          iVar23 = fn_82963998(0x74);
          if (iVar23 != 0) {
            iVar22 = fn_829632A0();
          }
          if (iVar22 == 0) {
            return -0x7ff8fff2;
          }
          if (iVar21 == 0) {
            if ((uVar28 & 0xffffffff) == 0) goto LAB_8294cee8;
LAB_8294cf18:
            if ((uVar28 & 0xffffffff) == 1) goto LAB_8294cdc0;
          }
          else {
            if ((uVar28 & 0xffffffff) == 1) {
LAB_8294cee8:
              lVar20 = fn_82963A30(iVar22,uVar11 | 0x70b00000,(uVar12 & 0xfffff) << 1,uVar11,0
                                        );
              if (lVar20 < 0) goto LAB_8294cd58;
              if (iVar21 == 0) goto LAB_8294cf18;
            }
            if ((uVar28 & 0xffffffff) == 0) {
LAB_8294cdc0:
              lVar20 = fn_82963A30(iVar22,uVar11 | 0x70c00000,(uVar12 & 0xfffff) << 1,uVar11,0
                                        );
              if (lVar20 < 0) goto LAB_8294cd58;
            }
          }
          lVar20 = fn_829632F0(iVar22,*(undefined4 *)(param_1 + 0x104));
          if (lVar20 < 0) goto LAB_8294cd58;
          lVar13 = (uVar12 & 0xfffff) * 4;
          fn_82F68CC0(*(undefined4 *)(iVar22 + 0x10),
                       *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),lVar13);
          fn_82F68CC0(*(undefined4 *)(iVar22 + 8),(uVar28 & 0xfffffff) * 0x10 + (uVar19 - 0x170),
                       lVar13);
          fn_82F68CC0(lVar13 + (ulonglong)*(uint *)(iVar22 + 8),
                       (uVar19 - 0x160) + (uVar28 & 0xfffffff) * -0x10,lVar13);
          iVar21 = *(int *)(param_1 + 0x14);
          iVar23 = *(int *)(**(int **)(iVar22 + 8) * 4 + iVar21);
          iVar26 = *(int *)(**(int **)(iVar22 + 0x10) * 4 + iVar21);
          iVar21 = *(int *)(*(int *)((int)lVar13 + (int)*(int **)(iVar22 + 8)) * 4 + iVar21);
          if (((*(int *)(iVar26 + 4) == *(int *)(iVar23 + 4)) &&
              (*(int *)(iVar26 + 0xc) == *(int *)(iVar23 + 0xc))) ||
             ((*(int *)(iVar26 + 4) == *(int *)(iVar21 + 4) &&
              (*(int *)(iVar26 + 0xc) == *(int *)(iVar21 + 0xc))))) goto code_r0x8294cd54;
          if (param_2 != (int *)0x0) {
            *param_2 = iVar22;
            *param_4 = 0;
            return lVar20;
          }
          goto code_r0x8294cb34;
        }
LAB_8294cd3c:
        uVar27 = uVar27 + 4;
      } while ((uVar27 & 0xffffffff) < 8);
      uVar28 = uVar28 + 1;
    } while ((uVar28 & 0xffffffff) < 2);
code_r0x8294cd54:
    lVar20 = 1;
LAB_8294cd58:
    if (iVar22 != 0) {
      fn_82BA02A8(iVar22);
      fn_829639F0(iVar22);
    }
  }
  else {
    lVar13 = (uVar12 & 0xfffff) * 4;
    lVar14 = (uVar12 & 0xfffff) * 2;
    iVar21 = 0;
    lVar25 = lVar13;
    uVar28 = uVar11;
    do {
      iVar3 = (int)((lVar14 + lVar20 & 0xffffffffU) << 2);
      iVar23 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      iVar26 = *(int *)(*(int *)(iVar23 + (int)lVar25) * 4 + *(int *)(param_1 + 0x14));
      iVar23 = *(int *)(*(int *)(iVar3 + iVar23) * 4 + *(int *)(param_1 + 0x14));
      if (((((*(uint *)(*(int *)(*(int *)(iVar26 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
             == 0) || (*(double *)(iVar26 + 0x20) != lbl_82005710)) || (*(int *)(iVar26 + 8) != -1))
         || (iVar26 = *(int *)(*(int *)(param_1 + 0x104) + 8),
            *(int *)(iVar26 + iVar3) != *(int *)(iVar26 + iVar21))) {
        bVar16 = true;
      }
      else {
        bVar15 = true;
      }
      if ((((*(uint *)(*(int *)(*(int *)(iVar23 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
            == 0) || (*(double *)(iVar23 + 0x20) != lbl_82005710)) ||
         ((*(int *)(iVar23 + 8) != -1 ||
          (iVar23 = *(int *)(*(int *)(param_1 + 0x104) + 8),
          *(int *)(iVar23 + (int)lVar25) != *(int *)(iVar23 + iVar21))))) {
        bVar18 = true;
      }
      else {
        bVar17 = true;
      }
      lVar20 = lVar20 + 1;
      iVar21 = iVar21 + 4;
      lVar25 = lVar25 + 4;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    if ((!bVar15) || (bVar16)) {
      if ((!bVar17) || (bVar18)) goto LAB_8294cb54;
      if (param_2 != (int *)0x0) {
        return 1;
      }
      iVar21 = fn_82963998(0x74);
      if (iVar21 != 0) {
        iVar22 = fn_829632A0();
      }
      if (iVar22 != 0) {
        uVar19 = 0x70c0000070c00000;
        goto LAB_8294caa4;
      }
    }
    else {
      iVar21 = fn_82963998(0x74);
      if (iVar21 != 0) {
        iVar22 = fn_829632A0();
      }
      if (iVar22 != 0) {
        uVar19 = 0x70b0000070b00000;
LAB_8294caa4:
        lVar20 = fn_82963A30(iVar22,uVar19 & 0xfff00000 | uVar11,lVar14,uVar11,0);
        if ((-1 < lVar20) &&
           (lVar20 = fn_829632F0(iVar22,*(undefined4 *)(param_1 + 0x104)), -1 < lVar20)) {
          fn_82F68CC0(*(undefined4 *)(iVar22 + 0x10),
                       *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),lVar13);
          fn_82F68CC0(*(undefined4 *)(iVar22 + 8),*(undefined4 *)(*(int *)(param_1 + 0x104) + 8),
                       lVar13);
          if (bVar15) {
            lVar20 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x104) + 8) + lVar13;
          }
          else {
            lVar20 = (uVar12 & 0xfffff) * 8 + (ulonglong)*(uint *)(*(int *)(param_1 + 0x104) + 8);
          }
          fn_82F68CC0(lVar13 + (ulonglong)*(uint *)(iVar22 + 8),lVar20,lVar13);
code_r0x8294cb34:
          lVar20 = fn_82963D50(*(undefined4 *)
                                      (*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)),
                                     iVar22);
        }
        goto LAB_8294cd58;
      }
    }
    lVar20 = -0x7ff8fff2;
  }
  return lVar20;
}

