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
extern int fn_82902688();
extern int fn_82903908();
extern int fn_82903F58();
extern int fn_82903FD0();
extern int fn_82904258();
extern int fn_82904370();
extern int fn_82904F08();
extern int fn_82906DE8();
extern int fn_82907A18();
extern int fn_8290B320();
extern int fn_82911C90();
extern int fn_82913870();
extern int fn_829163D0();
extern int fn_82F68918();
extern int fn_82F68CC0();
extern int fn_82F6DFB0();
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_82005710;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_e4;


longlong fn_82914750(int param_1,int param_2,uint *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint **ppuVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  uint *puStack_f0;
  uint *puStack_ec;
  uint uStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  uint *puStack_d8;
  uint *puStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint *puStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint *puStack_a8;
  
  if (param_2 == 0) {
    if (param_3 != (uint *)0x0) {
      return -0x7fffbffb;
    }
    return 0;
  }
  if (*(int *)(param_2 + 4) != 0xe) {
    return -0x7fffbffb;
  }
  iVar6 = *(int *)(param_2 + 0x20);
  uVar4 = 0;
  lVar23 = 0;
  puStack_f0 = (uint *)0x0;
  puStack_ec = (uint *)0x0;
  uVar18 = *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x18);
  iVar5 = 0;
  if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 0xe)) {
    uVar4 = *(int *)(iVar6 + 0x18) * *(int *)(iVar6 + 0x14);
    iVar5 = iVar6;
  }
  iVar6 = *(int *)(param_2 + 0x24);
  iVar21 = 0;
  if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 0xe)) {
    lVar23 = (longlong)*(int *)(iVar6 + 0x18) * (longlong)*(int *)(iVar6 + 0x14);
    iVar21 = iVar6;
  }
  if (((iVar5 != 0) &&
      (puStack_f0 = (uint *)fn_82903FD0(param_1,uVar4), puStack_f0 == (uint *)0x0)) ||
     ((iVar21 != 0 &&
      (puStack_ec = (uint *)fn_82903FD0(param_1,lVar23), puStack_ec == (uint *)0x0)))) {
LAB_82915ecc:
    fn_82904258(param_1,param_2,0,0xffffffff820295b0);
    lVar23 = -0x7ff8fff2;
    goto LAB_8291633c;
  }
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar22 = 0;
  if (-1 < iVar6) {
    if (iVar6 < 4) {
LAB_82914884:
      uVar22 = param_4;
    }
    else if (0x19 < iVar6) {
      if (iVar6 < 0x1c) {
        uVar22 = 1;
      }
      else if (iVar6 < 0x1e) goto LAB_82914884;
    }
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    if ((iVar21 != 0) && (lVar23 = fn_82914750(param_1,iVar21,puStack_ec,0), lVar23 < 0))
    goto LAB_8291633c;
    iVar6 = iVar5;
    puVar3 = puStack_f0;
    if (iVar5 != 0) {
LAB_82914910:
      lVar23 = fn_82914750(param_1,iVar6,puVar3,uVar22);
      if (lVar23 < 0) goto LAB_8291633c;
    }
  }
  else {
    if ((iVar5 != 0) && (lVar23 = fn_82914750(param_1,iVar5,puStack_f0,uVar22), lVar23 < 0))
    goto LAB_8291633c;
    if (iVar21 != 0) {
      uVar22 = 0;
      iVar6 = iVar21;
      puVar3 = puStack_ec;
      goto LAB_82914910;
    }
  }
  dVar28 = lbl_82005710;
  puVar3 = puStack_f0;
  puVar12 = puStack_f0;
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 0:
  case 1:
    if (iVar5 == 0) {
      lVar23 = fn_829163D0(param_1,*(undefined4 *)(param_2 + 0x20),param_3,uVar18);
      goto code_r0x82915ba8;
    }
    if (param_3 != (uint *)0x0) {
      if (uVar4 == 1) {
        if (uVar18 != 0) {
          puVar3 = param_3 + -1;
          uVar4 = uVar18;
          do {
            puVar3 = puVar3 + 1;
            *puVar3 = *puStack_f0;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      else {
        if ((uVar18 == uVar4) ||
           ((uVar16 = *(uint *)(param_2 + 0x14), uVar16 == 1 && (uVar18 < uVar4))))
        goto code_r0x82914b2c;
        if ((*(uint *)(iVar5 + 0x14) < uVar16) ||
           (*(uint *)(iVar5 + 0x18) < *(uint *)(param_2 + 0x18))) break;
        uVar4 = 0;
        if (uVar16 != 0) {
          do {
            fn_82F68CC0(param_3 + *(int *)(param_2 + 0x18) * uVar4,
                         puStack_f0 + *(int *)(iVar5 + 0x18) * uVar4,*(int *)(param_2 + 0x18) << 2);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_2 + 0x14));
        }
      }
      goto code_r0x8291499c;
    }
    goto code_r0x82916314;
  case 2:
    if (iVar5 != 0) {
      iVar6 = fn_82903F58(param_1,uVar18);
      if (iVar6 == 0) goto LAB_82915ecc;
      if (uVar18 != 0) {
        puVar13 = (undefined4 *)(iVar6 + -4);
        uVar4 = uVar18;
        do {
          puVar13 = puVar13 + 1;
          *puVar13 = *(undefined4 *)(param_1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
code_r0x82914bd8:
      uVar4 = uVar18 & 0xfffff | 0x20400000;
code_r0x82914b04:
      lVar23 = fn_82904370(param_1,param_2,uVar4,puStack_f0,puVar12,iVar6,0);
      if (lVar23 < 0) goto LAB_8291633c;
code_r0x82914b20:
      if (param_3 != (uint *)0x0) {
code_r0x82914b2c:
        fn_82F68CC0(param_3,puVar3,uVar18 & 0x3fffffff);
        goto code_r0x8291499c;
      }
      goto code_r0x82916314;
    }
    break;
  case 3:
    if (iVar5 != 0) {
      iVar6 = fn_82903F58(param_1,uVar18);
      if (iVar6 != 0) {
        if (uVar18 != 0) {
          puVar13 = (undefined4 *)(iVar6 + -4);
          uVar4 = uVar18;
          do {
            puVar13 = puVar13 + 1;
            *puVar13 = *(undefined4 *)(param_1 + 0x28);
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        goto code_r0x82914bd8;
      }
      goto LAB_82915ecc;
    }
    break;
  case 4:
    if (iVar5 != 0) {
      if (param_3 != (uint *)0x0) {
        uVar4 = fn_82903F58(param_1,uVar18 & 0x7fffffff);
        puVar12 = puStack_dc;
        puVar3 = puStack_e0;
        if (uVar4 == 0) goto LAB_82915ecc;
        puVar7 = &uStack_e4;
        lVar23 = 2;
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = uVar4;
          uVar4 = uVar18 * 4 + uVar4;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        if (uVar18 != 0) {
          puVar7 = puStack_e0 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0xffffffff;
          }
        }
        if (uVar18 != 0) {
          puVar7 = puStack_dc + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0xffffffff;
          }
          if (uVar18 != 0) {
            puVar7 = param_3 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar7 = puVar7 + 1;
              *puVar7 = 0xffffffff;
            }
          }
        }
        lVar23 = fn_82907A18(param_1,param_2,puStack_e0,puStack_dc,puStack_f0,uVar18);
        if (lVar23 < 0) goto LAB_8291633c;
        uVar22 = 0x17;
        uVar4 = uVar18 & 0xfffff | 0x20300000;
        goto code_r0x829158dc;
      }
      goto code_r0x82916314;
    }
    break;
  case 5:
    if (iVar5 != 0) {
      if (param_3 != (uint *)0x0) {
        if (uVar18 != 0) {
          puVar3 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar3 = puVar3 + 1;
            *puVar3 = 0xffffffff;
          }
        }
        uVar4 = uVar18 & 0xfffff | 0x10100000;
code_r0x82914d58:
        puVar3 = (uint *)0x0;
code_r0x82914d5c:
        uVar22 = 0;
        goto code_r0x829158dc;
      }
      goto code_r0x82916314;
    }
    break;
  case 6:
    if (iVar5 != 0) {
      if (param_3 != (uint *)0x0) {
        if (uVar18 != 0) {
          puVar3 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar3 = puVar3 + 1;
            *puVar3 = 0xffffffff;
          }
        }
        uVar4 = uVar18 & 0xfffff | 0x10000000;
        goto code_r0x82914d58;
      }
      goto code_r0x82916314;
    }
    break;
  default:
    uVar22 = 0xffffffff8202e050;
code_r0x82916324:
    param_2 = 0;
    goto code_r0x82916328;
  case 8:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        if (uVar18 != 0) {
          puVar3 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar3 = puVar3 + 1;
            *puVar3 = 0xffffffff;
          }
        }
        iVar6 = 0x205;
        uVar22 = 0;
        puVar3 = puStack_ec;
code_r0x82914f8c:
        uVar4 = iVar6 << 0x14 | uVar18 & 0xfffff;
        goto code_r0x829158dc;
      }
      goto code_r0x82916314;
    }
    break;
  case 9:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar3 = (uint *)fn_82903F58(param_1,uVar18);
        if (puVar3 != (uint *)0x0) {
          if (uVar18 != 0) {
            puVar7 = puVar3 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar7 = puVar7 + 1;
              *puVar7 = 0xffffffff;
            }
            if (uVar18 != 0) {
              puVar7 = param_3 + -1;
              for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
                puVar7 = puVar7 + 1;
                *puVar7 = 0xffffffff;
              }
            }
          }
          lVar23 = fn_82904370(param_1,param_2,uVar18 & 0xfffff | 0x10300000,puVar3,puStack_ec,0,0
                                );
          if (lVar23 < 0) goto LAB_8291633c;
          uVar4 = uVar18 & 0xfffff | 0x20500000;
code_r0x829158d4:
          uVar22 = 0;
          goto code_r0x829158dc;
        }
        goto LAB_82915ecc;
      }
      goto code_r0x82916314;
    }
    break;
  case 10:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar3 = (uint *)fn_82903F58(param_1,uVar18 & 0x1fffffff);
        iVar6 = iStack_d0;
        if (puVar3 != (uint *)0x0) {
          ppuVar9 = &puStack_d4;
          lVar23 = 8;
          do {
            ppuVar9 = ppuVar9 + 1;
            *ppuVar9 = puVar3;
            puVar3 = puVar3 + uVar18;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          piVar10 = &iStack_d0;
          lVar23 = 8;
          do {
            if (uVar18 != 0) {
              puVar13 = (undefined4 *)(*piVar10 + -4);
              for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
                puVar13 = puVar13 + 1;
                *puVar13 = 0xffffffff;
              }
            }
            lVar23 = lVar23 + -1;
            piVar10 = piVar10 + 1;
          } while (lVar23 != 0);
          if (uVar18 != 0) {
            puVar3 = param_3 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar3 = puVar3 + 1;
              *puVar3 = 0xffffffff;
            }
          }
          uVar16 = uVar18 & 0xfffff;
          uVar4 = uVar16 | 0x20500000;
          lVar23 = fn_82904370(param_1,param_2,uVar4,iStack_d0,puStack_f0,puStack_ec,0);
          iVar5 = iStack_cc;
          if (lVar23 < 0) goto LAB_8291633c;
          lVar23 = fn_82904370(param_1,param_2,uVar16 | 0x10100000,iStack_cc,iVar6,0,0);
          uVar14 = uStack_c8;
          if ((((lVar23 < 0) ||
               (lVar23 = fn_82904370(param_1,param_2,uVar16 | 0x20300000,uStack_c8,iVar6,iVar5,
                                       0x17), uVar2 = uStack_c4, lVar23 < 0)) ||
              (lVar23 = fn_82904370(param_1,param_2,uVar16 | 0x10100000,uStack_c4,puStack_ec,0,0),
              puVar12 = puStack_c0, lVar23 < 0)) ||
             (((lVar23 = fn_82906DE8(param_1,param_2,puStack_c0,uVar2,puStack_ec,uVar14,uVar18),
               uVar14 = uStack_bc, lVar23 < 0 ||
               (lVar23 = fn_82904370(param_1,param_2,uVar16 | 0x10300000,uStack_bc,puVar12,0,0x40)
               , uVar2 = uStack_b8, lVar23 < 0)) ||
              ((lVar23 = fn_82904370(param_1,param_2,uVar4,uStack_b8,puStack_f0,uVar14,0),
               puVar3 = puStack_b4, lVar23 < 0 ||
               (lVar23 = fn_82904370(param_1,param_2,uVar16 | 0x10400000,puStack_b4,uVar2,0,4),
               lVar23 < 0)))))) goto LAB_8291633c;
          goto code_r0x829158d4;
        }
        goto LAB_82915ecc;
      }
      goto code_r0x82916314;
    }
    break;
  case 0xb:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        if (uVar18 != 0) {
          puVar3 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar3 = puVar3 + 1;
            *puVar3 = 0xffffffff;
          }
        }
        uVar4 = uVar18 & 0xfffff | 0x20400000;
        puVar3 = puStack_ec;
        goto code_r0x82914d5c;
      }
      goto code_r0x82916314;
    }
    break;
  case 0xc:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar3 = (uint *)fn_82903F58(param_1,uVar18);
        if (puVar3 != (uint *)0x0) {
          if (uVar18 != 0) {
            puVar7 = puVar3 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar7 = puVar7 + 1;
              *puVar7 = 0xffffffff;
            }
            if (uVar18 != 0) {
              puVar7 = param_3 + -1;
              for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
                puVar7 = puVar7 + 1;
                *puVar7 = 0xffffffff;
              }
            }
          }
          lVar23 = fn_82904370(param_1,param_2,uVar18 & 0xfffff | 0x10100000,puVar3,puStack_ec,0,0
                                );
          if (lVar23 < 0) goto LAB_8291633c;
          uVar4 = uVar18 & 0xfffff | 0x20400000;
          goto code_r0x829158d4;
        }
        goto LAB_82915ecc;
      }
      goto code_r0x82916314;
    }
    break;
  case 0xf:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar3 = puStack_ec;
        if (uVar18 != 0) {
          puVar7 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0xffffffff;
          }
        }
code_r0x82914ee8:
        uVar22 = 0x17;
        uVar4 = uVar18 & 0xfffff | 0x20200000;
        goto code_r0x829158dc;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x10:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar12 = puStack_ec;
        if (uVar18 != 0) {
          puVar7 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0xffffffff;
          }
        }
        goto code_r0x82914ee8;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x11:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar12 = puStack_ec;
        if (uVar18 != 0) {
          puVar7 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0xffffffff;
          }
        }
code_r0x82914f84:
        iVar6 = 0x203;
        uVar22 = 0x17;
        goto code_r0x82914f8c;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x12:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        puVar3 = puStack_ec;
        if (uVar18 != 0) {
          puVar7 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0xffffffff;
          }
        }
        goto code_r0x82914f84;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x13:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        uVar16 = uVar18 * 4;
        uVar4 = fn_82903F58(param_1,uVar16);
        puVar3 = puStack_e0;
        if (uVar4 != 0) {
          puVar12 = &uStack_e4;
          lVar23 = 4;
          uVar17 = uVar4;
          do {
            puVar12 = puVar12 + 1;
            *puVar12 = uVar17;
            uVar17 = uVar16 + uVar17;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          uVar17 = 0;
          if ((uVar18 & 0x3fffffff) != 0) {
            puVar13 = (undefined4 *)(uVar4 - 4);
            do {
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 1;
              *puVar13 = 0xffffffff;
            } while (uVar17 < uVar16);
          }
          if (uVar18 != 0) {
            puVar12 = param_3 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar12 = puVar12 + 1;
              *puVar12 = 0xffffffff;
            }
          }
          uVar4 = uVar18 & 0xfffff;
          lVar23 = fn_82904370(param_1,param_2,uVar4 | 0x10100000,puStack_e0,puStack_ec,0,0);
          puVar7 = puStack_dc;
          if (((lVar23 < 0) ||
              (lVar23 = fn_82904370(param_1,param_2,uVar4 | 0x20400000,puStack_dc,puStack_f0,
                                      puVar3,0), puVar12 = puStack_d4, puVar3 = puStack_d8,
              lVar23 < 0)) ||
             (lVar23 = fn_82907A18(param_1,param_2,puStack_d8,puStack_d4,puVar7,uVar18),
             lVar23 < 0)) goto LAB_8291633c;
          uVar22 = 0x17;
          uVar4 = uVar4 | 0x20300000;
          goto code_r0x829158dc;
        }
        goto LAB_82915ecc;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x14:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        uVar16 = uVar18 * 4;
        uVar4 = fn_82903F58(param_1,uVar16);
        puVar3 = puStack_e0;
        if (uVar4 != 0) {
          puVar12 = &uStack_e4;
          lVar23 = 4;
          uVar17 = uVar4;
          do {
            puVar12 = puVar12 + 1;
            *puVar12 = uVar17;
            uVar17 = uVar16 + uVar17;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          uVar17 = 0;
          if ((uVar18 & 0x3fffffff) != 0) {
            puVar13 = (undefined4 *)(uVar4 - 4);
            do {
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 1;
              *puVar13 = 0xffffffff;
            } while (uVar17 < uVar16);
          }
          if (uVar18 != 0) {
            puVar12 = param_3 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar12 = puVar12 + 1;
              *puVar12 = 0xffffffff;
            }
          }
          lVar23 = fn_82904370(param_1,param_2,uVar18 & 0xfffff | 0x10100000,puStack_e0,puStack_ec
                                 ,0,0);
          puVar7 = puStack_dc;
          if ((lVar23 < 0) ||
             (lVar23 = fn_82904370(param_1,param_2,uVar18 & 0xfffff | 0x20400000,puStack_dc,
                                     puStack_f0,puVar3,0), puVar12 = puStack_d4, puVar3 = puStack_d8
             , lVar23 < 0)) goto LAB_8291633c;
          lVar23 = fn_82907A18(param_1,param_2,puStack_d8,puStack_d4,puVar7,uVar18);
joined_r0x829153f0:
          if (lVar23 < 0) goto LAB_8291633c;
          uVar22 = 0x17;
          uVar4 = uVar18 & 0xfffff | 0x20200000;
          goto code_r0x829158dc;
        }
        goto LAB_82915ecc;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x18:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        uVar4 = 0;
        if (uVar18 != 0) {
          iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x14);
          puVar3 = puStack_ec;
code_r0x82915274:
          if (((**(uint **)(*(int *)((int)puStack_f0 + ((int)puVar3 - (int)puStack_ec)) * 4 + iVar6)
               & 1) != 0) && ((**(uint **)(*puVar3 * 4 + iVar6) & 1) != 0)) goto code_r0x829152a4;
          uVar4 = fn_82903F58(param_1,uVar18 * 3);
          puVar12 = puStack_d8;
          puVar3 = puStack_dc;
          puVar7 = puStack_e0;
          if (uVar4 != 0) {
            puVar8 = &uStack_e4;
            lVar23 = 3;
            do {
              puVar8 = puVar8 + 1;
              *puVar8 = uVar4;
              uVar4 = uVar4 + uVar18 * 4;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            puVar8 = puStack_e0 + -1;
            for (uVar4 = uVar18 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar8 = puVar8 + 1;
              *puVar8 = 0xffffffff;
            }
            puVar8 = puStack_dc + -1;
            for (uVar4 = uVar18 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar8 = puVar8 + 1;
              *puVar8 = 0xffffffff;
            }
            puVar8 = puStack_d8 + -1;
            for (uVar4 = uVar18 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar8 = puVar8 + 1;
              *puVar8 = 0xffffffff;
            }
            puVar8 = param_3 + -1;
            for (uVar4 = uVar18 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar8 = puVar8 + 1;
              *puVar8 = 0xffffffff;
            }
            lVar23 = fn_82904370(param_1,param_2,uVar18 & 0xfffff | 0x20500000,puStack_e0,
                                   puStack_f0,puStack_ec,0);
            if (lVar23 < 0) goto LAB_8291633c;
            lVar23 = fn_82907A18(param_1,param_2,puVar3,puVar12,puVar7,uVar18);
            goto joined_r0x829153f0;
          }
          goto LAB_82915ecc;
        }
        goto code_r0x829152d8;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x19:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 != (uint *)0x0) {
        uVar4 = fn_82903F58(param_1,uVar18 * 4);
        puVar12 = puStack_d4;
        puVar3 = puStack_d8;
        puVar8 = puStack_dc;
        puVar7 = puStack_e0;
        if (uVar4 != 0) {
          puVar11 = &uStack_e4;
          lVar23 = 4;
          do {
            puVar11 = puVar11 + 1;
            *puVar11 = uVar4;
            uVar4 = uVar18 * 4 + uVar4;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          if (uVar18 != 0) {
            puVar11 = puStack_e0 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar11 = puVar11 + 1;
              *puVar11 = 0xffffffff;
            }
          }
          if (uVar18 != 0) {
            puVar11 = puStack_dc + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar11 = puVar11 + 1;
              *puVar11 = 0xffffffff;
            }
          }
          if (uVar18 != 0) {
            puVar11 = puStack_d8 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar11 = puVar11 + 1;
              *puVar11 = 0xffffffff;
            }
          }
          if (uVar18 != 0) {
            puVar11 = puStack_d4 + -1;
            for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
              puVar11 = puVar11 + 1;
              *puVar11 = 0xffffffff;
            }
            if (uVar18 != 0) {
              puVar11 = param_3 + -1;
              for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
                puVar11 = puVar11 + 1;
                *puVar11 = 0xffffffff;
              }
            }
          }
          lVar23 = fn_82907A18(param_1,param_2,puStack_e0,0,puStack_f0,uVar18);
          if ((lVar23 < 0) ||
             (lVar23 = fn_82907A18(param_1,param_2,puVar8,0,puStack_ec,uVar18), lVar23 < 0))
          goto LAB_8291633c;
          uVar4 = uVar18 & 0xfffff;
          lVar23 = fn_82904370(param_1,param_2,uVar4 | 0x20400000,puVar3,puVar7,puVar8,4);
          if ((lVar23 < 0) ||
             (lVar23 = fn_82904370(param_1,param_2,uVar4 | 0x10100000,puVar12,puVar3,0,8),
             lVar23 < 0)) goto LAB_8291633c;
          uVar22 = 0x17;
          uVar4 = uVar4 | 0x20200000;
          goto code_r0x829158dc;
        }
        goto LAB_82915ecc;
      }
      goto code_r0x82916314;
    }
    break;
  case 0x1a:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (uVar18 != 0) {
        iVar6 = *(int *)(param_1 + 8);
        if (*puStack_f0 < *(uint *)(iVar6 + 8)) {
          iVar5 = *(int *)(*puStack_f0 * 4 + *(int *)(iVar6 + 0x14));
        }
        else {
          iVar5 = 0;
        }
        if ((iVar5 != 0) && (*(int *)(iVar6 + 0x74) == *(int *)(iVar5 + 4))) {
          uVar4 = 0;
          if (uVar18 != 0) {
            do {
              if (*(int *)(*(int *)(*puVar12 * 4 + *(int *)(iVar6 + 0x14)) + 0x30) == -1)
              goto code_r0x82914b3c;
              uVar4 = uVar4 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar4 < uVar18);
          }
          goto code_r0x82914af4;
        }
        goto code_r0x82914b20;
      }
      goto code_r0x8291499c;
    }
    break;
  case 0x1b:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (uVar18 != 0) {
        uVar4 = 0;
        do {
          if (*(int *)(*(int *)(*puVar12 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) + 0x30) == -1
             ) goto code_r0x82914b3c;
          uVar4 = uVar4 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar4 < uVar18);
code_r0x82914af4:
        iVar6 = 0;
        uVar4 = uVar18 & 0xfffff | 0x10000000;
        puVar12 = puStack_ec;
        goto code_r0x82914b04;
      }
      goto code_r0x8291499c;
    }
    break;
  case 0x1c:
    if (iVar21 != 0) {
      lVar23 = fn_82911C90(param_1,param_2,param_3,uVar18,puStack_f0,uVar4,
                             *(undefined4 *)(iVar5 + 0x10),puStack_ec);
      goto code_r0x82915ba8;
    }
    break;
  case 0x1d:
    if ((iVar5 != 0) && (iVar6 = *(int *)(param_2 + 0x24), iVar6 != 0)) {
      if (*(int *)(iVar6 + 4) == 0xf) {
        if (*(int *)(iVar6 + 0x10) != 2) break;
        if (param_3 != (uint *)0x0) {
          puVar3 = puStack_f0 + *(int *)(iVar6 + 0x18);
          goto code_r0x82914b2c;
        }
      }
      else {
        if (*(int *)(iVar6 + 4) != 1) break;
        if (param_3 != (uint *)0x0) {
          if (uVar18 != 0) {
            puVar3 = param_3 + -1;
            uVar4 = uVar18;
            do {
              puVar3 = puVar3 + 1;
              *puVar3 = puStack_f0[*(int *)(*(int *)(iVar6 + 8) + 0x18)];
              iVar6 = *(int *)(iVar6 + 0xc);
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          goto code_r0x8291499c;
        }
      }
      goto code_r0x82916314;
    }
    break;
  case 0x1e:
    if ((iVar5 != 0) && (iVar21 != 0)) {
      if (param_3 == (uint *)0x0) goto code_r0x82916314;
      uVar4 = fn_82903F58(param_1,uVar18 * 3);
      puVar12 = puStack_e0;
      if (uVar4 == 0) goto LAB_82915ecc;
      puVar3 = &uStack_e4;
      lVar23 = 3;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = uVar4;
        uVar4 = uVar18 * 4 + uVar4;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      uVar4 = 0;
      if (uVar18 != 0) {
        puVar7 = puStack_ec + uVar18;
        iVar6 = (int)puStack_ec - (int)puStack_e0;
        puVar3 = puStack_e0;
        while( true ) {
          puVar8 = (uint *)(iVar6 + (int)puVar3);
          iVar5 = fn_82902688(param_1,*(undefined4 *)
                                         (((int)puStack_f0 - (int)puStack_ec) + (int)puVar8),
                                &iStack_d0);
          if (iVar5 < 0) break;
          if ((dVar28 < (double)CONCAT44(iStack_d0,iStack_cc)) ||
             ((double)CONCAT44(uStack_c8,uStack_c4) < dVar28)) {
            uVar16 = *puVar8;
          }
          else {
            if (((double)CONCAT44(iStack_d0,iStack_cc) != dVar28) ||
               ((double)CONCAT44(uStack_c8,uStack_c4) != dVar28)) break;
            uVar16 = *puVar7;
          }
          uVar4 = uVar4 + 1;
          *puVar3 = uVar16;
          puVar7 = puVar7 + 1;
          puVar3 = puVar3 + 1;
          if (uVar18 <= uVar4) break;
        }
      }
      puVar7 = puStack_d8;
      puVar3 = puStack_dc;
      if (uVar4 == uVar18) {
        if (uVar18 != 0) {
          puVar3 = param_3 + -1;
          for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
            puVar3 = puVar3 + 1;
            *puVar3 = 0xffffffff;
          }
        }
        uVar4 = uVar18 & 0xfffff | 0x10000000;
        goto code_r0x82914d58;
      }
      if (uVar18 != 0) {
        puVar8 = puVar12 + -1;
        for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar8 = puVar8 + 1;
          *puVar8 = 0xffffffff;
        }
      }
      if (uVar18 != 0) {
        puVar8 = puStack_dc + -1;
        for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar8 = puVar8 + 1;
          *puVar8 = 0xffffffff;
        }
      }
      if (uVar18 != 0) {
        puVar8 = puStack_d8 + -1;
        for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
          puVar8 = puVar8 + 1;
          *puVar8 = 0xffffffff;
        }
      }
      lVar23 = fn_82907A18(param_1,param_2,puVar12,puStack_dc,puStack_f0,uVar18);
      if ((lVar23 < 0) ||
         (lVar23 = fn_82904370(param_1,param_2,uVar18 & 0xfffff | 0x20200000,puVar7,puVar3,puVar12
                                 ,0x17), lVar23 < 0)) goto LAB_8291633c;
      lVar23 = fn_82906DE8(param_1,param_2,param_3,puStack_ec + uVar18,puStack_ec,puVar7,uVar18);
      goto code_r0x82915ba8;
    }
    break;
  case 0x1f:
    lVar23 = fn_82903908(param_1,*(undefined4 *)(param_2 + 0x20),&puStack_e0);
    if (lVar23 != 0) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      lVar23 = fn_82913870(param_1,puStack_e0,lVar23,*(undefined4 *)(param_2 + 0x24),param_3,0,0);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      goto code_r0x82915ba8;
    }
    fn_82904258(param_1,param_2,0xdb6,0xffffffff8202e078,*(undefined4 *)(param_2 + 0x38));
    break;
  case 0x20:
    lVar23 = fn_8290B320(param_1,param_2,param_3);
code_r0x82915ba8:
    if (lVar23 < 0) goto LAB_8291633c;
code_r0x8291499c:
    if (param_3 != (uint *)0x0) {
      uVar4 = *(uint *)(param_1 + 0xa4);
      if (uVar4 < uVar18) {
        uVar16 = uVar4 << 1;
        if (uVar4 == 0) {
          uVar16 = 0x10;
        }
        for (; uVar16 < uVar18; uVar16 = uVar16 << 1) {
        }
        lVar23 = fn_8265C940(uVar16 & 0x1fffffff,0x24810000);
        if (lVar23 == 0) goto LAB_82915ecc;
        fn_8265C990(*(undefined4 *)(param_1 + 0xa0),0x24810000);
        *(int *)(param_1 + 0xa0) = (int)lVar23;
        *(uint *)(param_1 + 0xa4) = uVar16;
      }
      puVar13 = *(undefined4 **)(param_1 + 0xa0);
      puVar3 = puVar13 + uVar18;
      fn_82904F08(param_1,*(undefined4 *)(param_2 + 0x10),puVar3);
      uVar20 = 0;
      uVar19 = 0;
      uVar4 = 0;
      if (uVar18 != 0) {
        puVar15 = puVar13;
        do {
          iVar6 = *(int *)(param_1 + 8);
          puVar12 = (uint *)(((int)puVar3 - (int)puVar13) + (int)puVar15);
          uVar16 = *(uint *)((int)puVar12 + ((int)param_3 - (int)puVar3));
          if (uVar16 < *(uint *)(iVar6 + 8)) {
            puVar7 = *(uint **)(uVar16 * 4 + *(int *)(iVar6 + 0x14));
          }
          else {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 == (uint *)0x0) {
            uVar22 = 0xffffffff8202dad0;
            goto code_r0x82916324;
          }
          if (*(uint *)(iVar6 + 0x74) == puVar7[1]) {
code_r0x82915d38:
            uVar14 = 0;
code_r0x82915d3c:
            *puVar15 = uVar14;
          }
          else {
            if (((*puVar12 & 1) == 0) || ((*puVar7 & 1) != 0)) {
              if ((*(uint *)(iVar6 + 0x74) == puVar7[1]) ||
                 (((*puVar12 & 2) == 0 || ((*puVar7 & 2) != 0)))) goto code_r0x82915d38;
              uVar14 = 2;
              uVar19 = uVar19 + 1;
              goto code_r0x82915d3c;
            }
            uVar20 = uVar20 + 1;
            *puVar15 = 1;
          }
          uVar4 = uVar4 + 1;
          puVar15 = puVar15 + 1;
        } while (uVar4 < uVar18);
        if ((uVar20 & 0xffffffff) != 0) {
          lVar24 = (uVar20 & 0x3fffffff) * 4;
          lVar23 = fn_82903F58(param_1,lVar24);
          if (lVar23 == 0) goto LAB_82915ecc;
          puVar12 = &uStack_e4;
          lVar25 = 4;
          do {
            puVar12 = puVar12 + 1;
            *puVar12 = (uint)lVar23;
            lVar23 = lVar23 + lVar24;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          if ((uVar20 & 0xffffffff) != 0) {
            puVar12 = puStack_dc + -1;
            uVar26 = uVar20;
            uVar1 = uVar20 & 0xffffffff;
            while (uVar1 != 0) {
              puVar12 = puVar12 + 1;
              *puVar12 = 0xffffffff;
              uVar26 = uVar26 - 1;
              uVar1 = uVar26;
            }
          }
          if ((uVar20 & 0xffffffff) != 0) {
            puVar12 = puStack_d8 + -1;
            uVar26 = uVar20;
            uVar1 = uVar20 & 0xffffffff;
            while (uVar1 != 0) {
              puVar12 = puVar12 + 1;
              *puVar12 = 0xffffffff;
              uVar26 = uVar26 - 1;
              uVar1 = uVar26;
            }
          }
          puVar12 = puStack_d4;
          puVar7 = param_3;
          uVar4 = uVar18;
          do {
            if (*(int *)(((int)puVar13 - (int)param_3) + (int)puVar7) == 1) {
              *(uint *)(((int)puStack_e0 - (int)puStack_d4) + (int)puVar12) = *puVar7;
              if (*(int *)(param_2 + 0x1c) == 0) {
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = *puVar7;
              }
              *puVar12 = uVar16;
              puVar12 = puVar12 + 1;
            }
            puVar7 = puVar7 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          lVar23 = fn_82907A18(param_1,param_2,puStack_dc,puStack_d8,puStack_e0,uVar20);
          if ((lVar23 < 0) ||
             (lVar23 = fn_82904370(param_1,param_2,uVar20 & 0xffffffff000fffff | 0x20200000,
                                     puStack_d4,puStack_d8,puStack_dc,0x17), lVar23 < 0))
          goto LAB_8291633c;
          puStack_d4 = puStack_d4 + -1;
          puVar12 = param_3;
          uVar4 = uVar18;
          do {
            if (*(int *)((int)puVar12 + ((int)puVar13 - (int)param_3)) == 1) {
              puStack_d4 = puStack_d4 + 1;
              *puVar12 = *puStack_d4;
            }
            puVar12 = puVar12 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if ((uVar19 & 0xffffffff) != 0) {
          lVar23 = fn_82903F58(param_1,uVar19 * 0xb);
          if (lVar23 == 0) goto LAB_82915ecc;
          ppuVar9 = &puStack_d4;
          lVar24 = 0xb;
          do {
            ppuVar9 = ppuVar9 + 1;
            *ppuVar9 = (uint *)lVar23;
            lVar23 = (uVar19 & 0x3fffffff) * 4 + lVar23;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          puVar12 = puStack_a8;
          puVar7 = param_3;
          uVar4 = uVar18;
          do {
            if (*(int *)((int)puVar7 + ((int)puVar13 - (int)param_3)) == 2) {
              *(uint *)((iStack_d0 - (int)puStack_a8) + (int)puVar12) = *puVar7;
              if (*(int *)(param_2 + 0x1c) == 0) {
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = *puVar7;
              }
              *puVar12 = uVar16;
              puVar12 = puVar12 + 1;
            }
            puVar7 = puVar7 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          piVar10 = &iStack_cc;
          lVar23 = 9;
          do {
            if ((uVar19 & 0xffffffff) != 0) {
              puVar15 = (undefined4 *)(*piVar10 + -4);
              uVar20 = uVar19;
              uVar26 = uVar19 & 0xffffffff;
              while (uVar26 != 0) {
                puVar15 = puVar15 + 1;
                *puVar15 = 0xffffffff;
                uVar20 = uVar20 - 1;
                uVar26 = uVar20;
              }
            }
            lVar23 = lVar23 + -1;
            piVar10 = piVar10 + 1;
          } while (lVar23 != 0);
          uVar19 = uVar19 & 0xfffff;
          lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x10200000,iStack_cc,iStack_d0,0,0);
          if ((lVar23 < 0) ||
             (lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x10400000,uStack_c8,iStack_cc,0,0x14)
             , lVar23 < 0)) goto LAB_8291633c;
          uVar20 = uVar19 | 0x10100000;
          lVar23 = fn_82904370(param_1,param_2,uVar20,uStack_c4,uStack_c8,0,0x18);
          if (lVar23 < 0) goto LAB_8291633c;
          lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x20400000,puStack_c0,uStack_c4,iStack_cc,
                                 2);
          if ((lVar23 < 0) ||
             (lVar23 = fn_82904370(param_1,param_2,uVar20,uStack_bc,iStack_d0,0,0), lVar23 < 0))
          goto LAB_8291633c;
          lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x20200000,uStack_b8,iStack_d0,uStack_bc,
                                 0x17);
          if ((lVar23 < 0) ||
             ((((lVar23 = fn_82904370(param_1,param_2,uVar20,puStack_b4,uStack_c8,0,0), lVar23 < 0
                || (lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x20200000,uStack_b0,puStack_b4,
                                           uStack_c8,0x17), lVar23 < 0)) ||
               (lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x20500000,uStack_ac,uStack_b8,
                                       uStack_b0,0x17), lVar23 < 0)) ||
              (lVar23 = fn_82904370(param_1,param_2,uVar19 | 0x20400000,puStack_a8,puStack_c0,
                                      uStack_ac,2), puVar12 = puStack_a8, puVar7 = param_3,
              uVar4 = uVar18, lVar23 < 0)))) goto LAB_8291633c;
          do {
            if (*(int *)(((int)puVar13 - (int)param_3) + (int)puVar7) == 2) {
              iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x14);
              puVar8 = *(uint **)(*(int *)((iStack_d0 - (int)puStack_a8) + (int)puVar12) * 4 + iVar6
                                 );
              puVar11 = *(uint **)(*puVar12 * 4 + iVar6);
              if ((*puVar8 & 0x80) != 0) {
                *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar8 + 8);
                *puVar8 = *puVar8 | 0x100;
              }
              if ((*puVar8 & 0x100) != 0) {
                iVar6 = fn_82F6DFB0(*(undefined8 *)(puVar8 + 8));
                dVar27 = *(double *)(puVar8 + 8);
                if (iVar6 == 0) {
code_r0x82916200:
                  *(double *)(puVar11 + 8) = dVar27;
                }
                else {
                  if (dVar27 < dVar28) {
                    dVar27 = (double)fn_82F68918(*(double *)(param_1 + 0xb8) - dVar27);
                    dVar27 = -dVar27;
                    goto code_r0x82916200;
                  }
                  uVar22 = fn_82F68918(*(double *)(param_1 + 0xb8) + dVar27);
                  *(undefined8 *)(puVar11 + 8) = uVar22;
                }
                iVar6 = fn_82F6DFB0(*(undefined8 *)(puVar8 + 10));
                dVar27 = *(double *)(puVar8 + 10);
                if (iVar6 == 0) {
code_r0x82916240:
                  *(double *)(puVar11 + 10) = dVar27;
                }
                else {
                  if (dVar27 < dVar28) {
                    dVar27 = (double)fn_82F68918(*(double *)(param_1 + 0xb8) - dVar27);
                    dVar27 = -dVar27;
                    goto code_r0x82916240;
                  }
                  uVar22 = fn_82F68918(*(double *)(param_1 + 0xb8) + dVar27);
                  *(undefined8 *)(puVar11 + 10) = uVar22;
                }
                uVar16 = *puVar11;
                *puVar11 = uVar16 | 0x100;
                if (*(double *)(puVar11 + 8) == *(double *)(puVar11 + 10)) {
                  uVar16 = uVar16 | 0x180;
                }
                else {
                  uVar16 = uVar16 & 0xffffff7f | 0x100;
                }
                *puVar11 = uVar16;
              }
              uVar16 = *puVar12;
              puVar12 = puVar12 + 1;
              *puVar7 = uVar16;
            }
            uVar4 = uVar4 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar4 != 0);
        }
        if (uVar18 != 0) {
          puVar12 = puVar3;
          do {
            puVar7 = *(uint **)(*(int *)((int)param_3 + ((int)puVar12 - (int)puVar3)) * 4 +
                               *(int *)(*(int *)(param_1 + 8) + 0x14));
            uVar4 = *puVar7;
            *puVar7 = *puVar12 & 0xf1ffffff | uVar4;
            uVar16 = *puVar12 & 0xe000000;
            uVar17 = uVar4 & 0xe000000;
            if ((uVar4 & 0xe000000) == 0) {
              uVar17 = uVar16;
            }
            if (puVar7[0x17] == 0) {
              if (uVar16 <= uVar17) {
code_r0x829162f8:
                uVar17 = uVar16;
              }
            }
            else if (uVar17 <= uVar16) goto code_r0x829162f8;
            puVar12 = puVar12 + 1;
            *puVar7 = *puVar7 & 0xf1ffffff | uVar17;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
    }
code_r0x82916314:
    lVar23 = 0;
    goto LAB_8291633c;
  }
code_r0x82916334:
  lVar23 = -0x7fffbffb;
LAB_8291633c:
  if (puStack_ec != (uint *)0x0) {
    *(uint *)(param_1 + 0x90) = puStack_ec[-2];
    uVar18 = puStack_ec[-1];
    if ((int)uVar18 < 1) {
      *(uint *)(param_1 + 0x94) = -uVar18;
      fn_8265C990(puStack_ec + -2,0x24810000);
    }
    else {
      *(uint *)(param_1 + 0x94) = uVar18;
    }
  }
  if (puStack_f0 != (uint *)0x0) {
    *(uint *)(param_1 + 0x90) = puStack_f0[-2];
    uVar18 = puStack_f0[-1];
    if ((int)uVar18 < 1) {
      *(uint *)(param_1 + 0x94) = -uVar18;
      fn_8265C990(puStack_f0 + -2,0x24810000);
    }
    else {
      *(uint *)(param_1 + 0x94) = uVar18;
    }
  }
  return lVar23;
code_r0x82914b3c:
  uVar22 = 0xffffffff8202e0a0;
code_r0x82916328:
  fn_82904258(param_1,param_2,0,uVar22);
  goto code_r0x82916334;
code_r0x829152a4:
  uVar4 = uVar4 + 1;
  puVar3 = puVar3 + 1;
  if (uVar18 <= uVar4) goto code_r0x829152b4;
  goto code_r0x82915274;
code_r0x829152b4:
  if (uVar18 != 0) {
    puVar3 = param_3 + -1;
    for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = 0xffffffff;
    }
  }
code_r0x829152d8:
  uVar22 = 0x17;
  uVar4 = uVar18 & 0xfffff | 0x20500000;
  puVar3 = puStack_ec;
code_r0x829158dc:
  lVar23 = fn_82904370(param_1,param_2,uVar4,param_3,puVar12,puVar3,uVar22);
  goto code_r0x82915ba8;
}

