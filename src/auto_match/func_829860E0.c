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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8297FA50();
extern int fn_8297FBF0();
extern int fn_82980150();
extern int fn_82980328();
extern int fn_829803A8();
extern int fn_82980C18();
extern int fn_82981DF8();
extern int fn_82F6A7A0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


longlong fn_829860E0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uStack_80;
  undefined4 uStack_7c;
  
  if (((param_2 & 0xffffffff) == 0) || (iVar7 = (int)param_2, *(int *)(iVar7 + 4) != 0xe)) {
    return -0x7fffbffb;
  }
  uVar13 = *(int *)(iVar7 + 0x18) * *(int *)(iVar7 + 0x14);
  uVar4 = fn_8297FA50(param_1,*(undefined4 *)(iVar7 + 0x10));
  if (uVar13 != uVar4) {
    return -0x7fffbffb;
  }
  iVar1 = *(int *)(iVar7 + 0x1c);
  if (1 < iVar1) {
    if (iVar1 < 4) {
      return -0x7fffbffb;
    }
    if (0x19 < iVar1) {
      if (iVar1 < 0x1c) {
        return -0x7fffbffb;
      }
      if (iVar1 == 0x1f) {
        return -0x7fffbffb;
      }
      if (iVar1 == 0x20) {
        lVar18 = fn_82981DF8(param_1,param_2,param_3);
        return lVar18;
      }
      if (iVar1 == 0x22) {
        return -0x7fffbffb;
      }
    }
  }
  iVar1 = *(int *)(iVar7 + 0x20);
  uVar12 = 0;
  uVar11 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar17 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xe)) {
    uVar14 = (longlong)*(int *)(iVar1 + 0x18) * (longlong)*(int *)(iVar1 + 0x14);
    uVar12 = fn_8265C940((uVar14 & 0xfffffff) << 4,0x24810000);
    iVar17 = iVar1;
    if (uVar12 != 0) goto LAB_829861c0;
LAB_829861fc:
    lVar18 = -0x7ff8fff2;
    goto LAB_829866a0;
  }
LAB_829861c0:
  iVar1 = *(int *)(iVar7 + 0x24);
  iVar16 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xe)) {
    uVar15 = (longlong)*(int *)(iVar1 + 0x18) * (longlong)*(int *)(iVar1 + 0x14);
    uVar11 = fn_8265C940((uVar15 & 0xfffffff) << 4,0x24810000);
    iVar16 = iVar1;
    if (uVar11 == 0) goto LAB_829861fc;
  }
  if (*(int *)(iVar7 + 0x28) == 0) {
    uVar9 = uVar12;
    iVar1 = iVar17;
    if (iVar16 != 0) {
      lVar18 = fn_829860E0(param_1,iVar16,uVar11);
      goto joined_r0x82986278;
    }
  }
  else {
    uVar9 = uVar11;
    iVar1 = iVar16;
    if (iVar17 != 0) {
      lVar18 = fn_829860E0(param_1,iVar17,uVar12);
joined_r0x82986278:
      if (lVar18 < 0) goto LAB_829866a0;
    }
  }
  if ((iVar1 != 0) && (lVar18 = fn_829860E0(param_1,iVar1,uVar9), lVar18 < 0)) goto LAB_829866a0;
  uVar4 = *(uint *)(iVar7 + 0x1c);
  if (uVar4 < 2) {
    if (iVar17 == 0) {
      iVar7 = *(int *)(iVar7 + 0x20);
      if (iVar7 == 0) {
LAB_82986698:
        lVar18 = -0x7fffbffb;
        goto LAB_829866a0;
      }
      if (*(int *)(iVar7 + 4) == 0xf) {
        if ((*(int *)(iVar7 + 0x10) == 6) || (*(int *)(iVar7 + 0x10) == 7)) goto LAB_82986698;
        lVar18 = fn_82980150(param_1,param_3,iVar7 + 0x10,param_2 + 0x30);
        if (lVar18 < 0) goto LAB_829866a0;
      }
      else {
        if ((iVar7 == 0) || (*(int *)(iVar7 + 4) != 1)) goto LAB_82986698;
        do {
          iVar1 = *(int *)(iVar7 + 8);
          if (iVar1 != 0) {
            if (*(int *)(iVar1 + 4) == 0xf) {
              if ((*(int *)(iVar1 + 0x10) == 6) || (*(int *)(iVar1 + 0x10) == 7)) goto LAB_82986698;
              lVar18 = fn_82980150(param_1,param_3,iVar1 + 0x10,param_2 + 0x30);
              if (lVar18 < 0) goto LAB_829866a0;
              param_3 = param_3 + 0x10;
            }
            else if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xe)) {
              lVar18 = fn_829860E0(param_1,iVar1,param_3);
              if (lVar18 < 0) goto LAB_829866a0;
              param_3 = ((longlong)*(int *)(*(int *)(iVar7 + 8) + 0x18) *
                         (longlong)*(int *)(*(int *)(iVar7 + 8) + 0x14) & 0xfffffffU) * 0x10 +
                        param_3;
            }
          }
          iVar7 = *(int *)(iVar7 + 0xc);
        } while (iVar7 != 0);
      }
    }
    else if ((uVar14 & 0xffffffff) == 1) {
      uVar14 = 0;
      if (uVar13 != 0) {
        do {
          lVar18 = fn_82980150(param_1,param_3,uVar12);
          if (lVar18 < 0) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
    else if ((((ulonglong)uVar13 == (uVar14 & 0xffffffff)) ||
             (*(uint *)(iVar17 + 0x14) < *(uint *)(iVar7 + 0x14))) ||
            (uVar4 = *(uint *)(iVar7 + 0x18), *(uint *)(iVar17 + 0x18) < uVar4)) {
      uVar14 = 0;
      if (uVar13 != 0) {
        lVar6 = uVar12 - param_3;
        do {
          lVar18 = fn_82980150(param_1,param_3,lVar6 + param_3);
          if (lVar18 < 0) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
    else {
      uVar14 = 0;
      if (*(uint *)(iVar7 + 0x14) != 0) {
        do {
          uVar15 = 0;
          if (uVar4 != 0) {
            do {
              lVar18 = fn_82980150(param_1,((longlong)(int)uVar4 * (longlong)(int)uVar14 + uVar15
                                             & 0xfffffff) * 0x10 + param_3,
                                     ((longlong)*(int *)(iVar17 + 0x18) * (longlong)(int)uVar14 +
                                      uVar15 & 0xfffffff) * 0x10 + uVar12);
              if (lVar18 < 0) goto LAB_829866a0;
              uVar4 = *(uint *)(iVar7 + 0x18);
              uVar15 = uVar15 + 1;
            } while ((uVar15 & 0xffffffff) < (ulonglong)uVar4);
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < (ulonglong)*(uint *)(iVar7 + 0x14));
      }
    }
  }
  else if (uVar4 == 0x1c) {
    lVar6 = param_2 + 0x30;
    lVar18 = fn_82980328(param_1,&uStack_80,uVar11,lVar6);
    if (lVar18 < 0) goto LAB_829866a0;
    uVar15 = (longlong)(int)uStack_80 * (longlong)(int)uVar13;
    if ((uVar14 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
      fn_82980C18(param_1,lVar6,0xbd6,0xffffffff8202dee8);
      goto LAB_82986698;
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      do {
        lVar18 = fn_82980150(param_1,param_3,(uVar15 + uVar14 & 0xfffffff) * 0x10 + uVar12,lVar6);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar14 = uVar14 + 1;
        param_3 = param_3 + 0x10;
      } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
    }
  }
  else if (uVar4 == 0x1d) {
    iVar7 = *(int *)(iVar7 + 0x24);
    if (*(int *)(iVar7 + 4) == 0xf) {
      lVar18 = fn_82980328(param_1,&uStack_80,iVar7 + 0x10,param_2 + 0x30);
      if (lVar18 < 0) goto LAB_829866a0;
      uVar14 = 0;
      if (uVar13 != 0) {
        lVar6 = ((ulonglong)uStack_80 & 0xfffffff) * 0x10 + uVar12;
        do {
          lVar18 = fn_82980150(param_1,param_3,lVar6);
          if (lVar18 < 0) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          lVar6 = lVar6 + 0x10;
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
    else {
      if (*(int *)(iVar7 + 4) != 1) goto LAB_82986698;
      uVar14 = 0;
      if (uVar13 != 0) {
        do {
          lVar18 = fn_82980328(param_1,&uStack_80,(ulonglong)*(uint *)(iVar7 + 8) + 0x10);
          if ((lVar18 < 0) ||
             (lVar18 = fn_82980150(param_1,param_3,
                                     ((ulonglong)uStack_80 & 0xfffffff) * 0x10 + uVar12), lVar18 < 0
             )) goto LAB_829866a0;
          uVar14 = uVar14 + 1;
          iVar7 = *(int *)(iVar7 + 0xc);
          param_3 = param_3 + 0x10;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
      }
    }
  }
  else if (uVar4 == 0x1e) {
    uVar15 = 0;
    if ((uVar14 & 0xffffffff) != 0) {
      uVar10 = ((ulonglong)uVar13 & 0xfffffff) * 0x10 + uVar11;
      param_3 = param_3 - uVar11;
      uVar9 = uVar11;
      dVar22 = lbl_82005710;
      do {
        lVar18 = fn_8297FBF0(param_1,&uStack_80,uVar9 + (uVar12 - uVar11));
        if (lVar18 < 0) goto LAB_829866a0;
        uVar5 = uVar9;
        if ((double)CONCAT44(uStack_80,uStack_7c) == dVar22) {
          uVar5 = uVar10;
        }
        lVar18 = fn_82980150(param_1,uVar9 + param_3,uVar5);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar15 = uVar15 + 1;
        uVar9 = uVar9 + 0x10;
        uVar10 = uVar10 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
  }
  else {
    uVar10 = 0;
    uVar8 = 3;
    uVar9 = uVar12;
    if ((uVar14 & 0xffffffff) != 0) {
      do {
        lVar18 = fn_8297FBF0(param_1,uVar9 + 8);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar10 = uVar10 + 1;
        *(undefined4 *)uVar9 = (int)uVar8;
        uVar9 = uVar9 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
    uVar10 = 0;
    uVar9 = uVar11;
    if ((uVar15 & 0xffffffff) != 0) {
      do {
        lVar18 = fn_8297FBF0(param_1,uVar9 + 8);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar10 = uVar10 + 1;
        *(undefined4 *)uVar9 = (int)uVar8;
        uVar9 = uVar9 + 0x10;
      } while ((uVar10 & 0xffffffff) < (uVar15 & 0xffffffff));
    }
    if (((iVar17 != 0) && ((uVar14 & 0xffffffff) != (ulonglong)uVar13)) ||
       ((iVar16 != 0 && ((uVar15 & 0xffffffff) != (ulonglong)uVar13)))) goto LAB_82986698;
    uVar4 = 0;
    if (uVar13 != 0) {
      lVar18 = uVar11 + 8;
      dVar22 = lbl_82005758;
      dVar23 = lbl_82005710;
      do {
        pdVar2 = (double *)lVar18;
        dVar19 = dVar23;
        if ((uVar12 & 0xffffffff) != 0) {
          dVar19 = *(double *)(((int)uVar12 - (int)uVar11) + (int)pdVar2);
        }
        dVar21 = dVar23;
        if ((uVar11 & 0xffffffff) != 0) {
          dVar21 = *pdVar2;
        }
        dVar20 = dVar19;
        dVar3 = dVar23;
        switch(*(undefined4 *)(iVar7 + 0x1c)) {
        case 4:
          dVar21 = dVar23;
          goto code_r0x829863e8;
        case 5:
          dVar20 = -dVar19;
          break;
        case 6:
          break;
        default:
          goto LAB_82986698;
        case 8:
          dVar20 = dVar21 * dVar19;
          break;
        case 9:
          if (dVar21 == dVar23) goto LAB_82986698;
          dVar20 = dVar19 / dVar21;
          break;
        case 10:
          if (dVar21 == dVar23) goto LAB_82986698;
          dVar20 = (double)fn_82F6A7A0();
          break;
        case 0xb:
          dVar20 = dVar21 + dVar19;
          break;
        case 0xc:
          dVar20 = dVar19 - dVar21;
          break;
        case 0xf:
          dVar20 = dVar22;
          if (dVar19 < dVar21) break;
          goto code_r0x829864e0;
        case 0x10:
          dVar20 = dVar22;
          if (dVar19 <= dVar21) goto code_r0x829864e0;
          break;
        case 0x11:
          dVar20 = dVar22;
          if (dVar21 < dVar19) goto code_r0x829864e0;
          break;
        case 0x12:
          dVar20 = dVar22;
          if (dVar19 < dVar21) goto code_r0x829864e0;
          break;
        case 0x13:
code_r0x829863e8:
          dVar20 = dVar22;
          if (dVar19 != dVar21) {
code_r0x829864e0:
            dVar20 = dVar23;
          }
          break;
        case 0x14:
          dVar3 = dVar19;
          goto code_r0x829864dc;
        case 0x18:
          if (dVar19 == dVar23) goto code_r0x829864e0;
code_r0x829864dc:
          dVar20 = dVar22;
          if (dVar21 != dVar3) break;
          goto code_r0x829864e0;
        case 0x19:
          dVar20 = dVar22;
          if (dVar19 == dVar23) goto code_r0x829864dc;
        }
        uVar4 = uVar4 + 1;
        *(double *)(((int)param_3 - (int)uVar11) + (int)pdVar2) = dVar20;
        lVar18 = lVar18 + 0x10;
      } while (uVar4 < uVar13);
    }
    uVar14 = 0;
    if (uVar13 != 0) {
      do {
        lVar18 = fn_829803A8(*(undefined8 *)((int)param_3 + 8),param_1);
        if (lVar18 < 0) goto LAB_829866a0;
        uVar14 = uVar14 + 1;
        param_3 = param_3 + 0x10;
      } while ((uVar14 & 0xffffffff) < (ulonglong)uVar13);
    }
  }
  lVar18 = 0;
LAB_829866a0:
  fn_8265C990(uVar11,0x24810000);
  fn_8265C990(uVar12,0x24810000);
  return lVar18;
}

