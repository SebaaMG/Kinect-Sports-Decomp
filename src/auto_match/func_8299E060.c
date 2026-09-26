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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;


longlong fn_8299E060(int param_1,int *param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  int iVar8;
  longlong lVar7;
  int iVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  undefined8 uVar24;
  
  puVar23 = (uint *)0x0;
  uVar16 = 0;
  uVar12 = 0;
  piVar11 = param_2;
  if ((param_3 & 0xffffffff) == 0) {
LAB_8299e148:
    fn_82975B00(param_1,0,0x12d7,0xffffffff820514ac);
    return -0x7fffbffb;
  }
  do {
    puVar1 = (uint *)*piVar11;
    if ((((puVar1 != (uint *)0x0) && ((*puVar1 & 0xfff00000) != 0)) && ((*puVar1 & 0xfffff) != 0))
       && (uVar2 = puVar1[3], uVar2 != 0)) {
      iVar8 = *(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14));
      if ((((ulonglong)*(uint *)(iVar8 + 0xc) == (param_4 & 0xffffffff)) &&
          (*(int *)(iVar8 + 4) == *(int *)(param_1 + 0x88))) &&
         (uVar15 = 0, uVar16 = uVar12, puVar23 = puVar1, uVar2 != 0)) {
        iVar8 = 0;
        do {
          if (*(int *)(*(int *)(*(int *)(iVar8 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14)) + 0x10)
              == 2) {
            return 0;
          }
          uVar15 = uVar15 + 1;
          iVar8 = iVar8 + 4;
        } while (uVar15 < uVar2);
      }
    }
    uVar12 = uVar12 + 1;
    piVar11 = piVar11 + 1;
  } while ((uVar12 & 0xffffffff) < (param_3 & 0xffffffff));
  if (puVar23 == (uint *)0x0) goto LAB_8299e148;
  uVar2 = *puVar23;
  uVar12 = (ulonglong)uVar2 & 0xfffff;
  if ((uVar2 & 0xfff00000) == 0x50000000) {
    iVar8 = fn_82963998(0x74);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = fn_829632A0();
    }
    if (iVar8 == 0) {
      return -0x7ff8fff2;
    }
    lVar7 = fn_82963A30(iVar8,*puVar23,puVar23[1],(ulonglong)puVar23[3] + 1,0);
    if (lVar7 < 0) goto LAB_8299e48c;
    iVar5 = (int)((uVar16 & 0xffffffff) << 2);
    lVar7 = fn_829632F0(iVar8,*(undefined4 *)(iVar5 + (int)param_2));
    if (lVar7 < 0) goto LAB_8299e48c;
    iVar9 = fn_82964628(lbl_82005710,param_1,*(undefined4 *)(param_1 + 0x88),param_4,2);
    if (iVar9 == -1) {
LAB_8299e4b4:
      lVar7 = -0x7ff8fff2;
      goto LAB_8299e48c;
    }
    fn_82F68CC0(*(undefined4 *)(iVar8 + 8),puVar23[2],*(int *)(iVar8 + 4) << 2);
    fn_82F68CC0(*(undefined4 *)(iVar8 + 0x10),puVar23[4],puVar23[3] << 2);
    *(int *)(puVar23[3] * 4 + *(int *)(iVar8 + 0x10)) = iVar9;
    uVar3 = *(undefined4 *)(iVar5 + (int)param_2);
  }
  else {
    iVar8 = fn_82963998(0x74);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = fn_829632A0();
    }
    if (iVar8 == 0) {
      return -0x7ff8fff2;
    }
    uVar17 = puVar23[1] / uVar12;
    trapWord(6,uVar12,0);
    lVar7 = fn_82963A30(iVar8,(ulonglong)*puVar23 & 0xfff00000 |
                                    uVar12 + 1 & 0xffffffff000fffff,puVar23[1] + uVar17,
                              (ulonglong)puVar23[3] + 1,0);
    if (lVar7 < 0) goto LAB_8299e48c;
    iVar5 = (int)((uVar16 & 0xffffffff) << 2);
    lVar7 = fn_829632F0(iVar8,*(undefined4 *)(iVar5 + (int)param_2));
    if (lVar7 < 0) goto LAB_8299e48c;
    uVar18 = 0;
    if (uVar17 != 0) {
      lVar4 = ((ulonglong)uVar2 & 0xfffff) * 4;
      lVar19 = 0;
      lVar21 = 0;
      lVar22 = 0;
      lVar20 = lVar4;
      uVar24 = lbl_82005710;
      do {
        bVar6 = true;
        lVar7 = 1;
        if (1 < uVar12) {
          lVar14 = uVar12 - 1;
          bVar6 = true;
          do {
            uVar13 = lVar19 + lVar7;
            lVar7 = lVar7 + 1;
            bVar6 = (bool)(*(int *)(*(int *)(*(int *)(puVar23[2] + (int)lVar22) * 4 +
                                            *(int *)(param_1 + 0x14)) + 0x10) ==
                           *(int *)(*(int *)(*(int *)((int)((uVar13 & 0xffffffff) << 2) + puVar23[2]
                                                     ) * 4 + *(int *)(param_1 + 0x14)) + 0x10) &
                          bVar6);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        fn_82F68CC0(lVar21 + (ulonglong)*(uint *)(iVar8 + 8),(ulonglong)puVar23[2] + lVar22,lVar4);
        if (bVar6) {
          *(undefined4 *)((int)lVar20 + *(int *)(iVar8 + 8)) =
               *(undefined4 *)(puVar23[2] + (int)lVar22);
        }
        else {
          iVar9 = *(int *)(*(int *)((int)lVar21 + *(int *)(iVar8 + 8)) * 4 +
                          *(int *)(param_1 + 0x14));
          uVar3 = *(undefined4 *)(iVar9 + 0xc);
          iVar10 = fn_82964628(uVar24,param_1,*(undefined4 *)(iVar9 + 4),uVar3,2);
          if (iVar10 == -1) goto LAB_8299e4b4;
          *(int *)((int)lVar20 + *(int *)(iVar8 + 8)) = iVar10;
          if ((*(int *)(iVar9 + 4) == *(int *)(param_1 + 0x88)) &&
             (lVar7 = fn_8299E060(param_1,param_2,uVar16,uVar3), lVar7 < 0)) goto LAB_8299e48c;
        }
        iVar9 = fn_82964628(uVar24,param_1,*(undefined4 *)(param_1 + 0x88),param_4,2);
        if (iVar9 == -1) goto LAB_8299e4b4;
        fn_82F68CC0(*(undefined4 *)(iVar8 + 0x10),puVar23[4],puVar23[3] << 2);
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + uVar12;
        lVar22 = lVar4 + lVar22;
        lVar21 = lVar4 + 4 + lVar21;
        lVar20 = lVar4 + 4 + lVar20;
        *(int *)(puVar23[3] * 4 + *(int *)(iVar8 + 0x10)) = iVar9;
      } while ((uVar18 & 0xffffffff) < uVar17);
    }
    uVar3 = *(undefined4 *)(iVar5 + (int)param_2);
  }
  fn_82963D50(uVar3,iVar8);
  fn_82BA02A8(iVar8);
  fn_829639F0(iVar8);
  iVar8 = 0;
  lVar7 = 0;
LAB_8299e48c:
  if (iVar8 != 0) {
    fn_82BA02A8(iVar8);
    fn_829639F0(iVar8);
    return lVar7;
  }
  return lVar7;
}

