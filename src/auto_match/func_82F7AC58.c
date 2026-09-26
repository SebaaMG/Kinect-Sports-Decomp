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
extern int fn_82A2B528();
extern int fn_82F63BA0();
extern int fn_82F641F8();
extern int fn_82F66FA8();
extern int fn_82F68240();
extern int fn_82F68BF0();
extern int fn_82F6AB08();
extern int fn_82F6E8A0();
extern int fn_82F70238();
extern int fn_82F7AB20();
extern int fn_82F7AB88();
extern int fn_82F85C08();
extern unsigned int iStack_8b4;
extern unsigned int lbl_82169558;
extern unsigned int lbl_8216955C;
extern unsigned int lbl_8216A390;
extern unsigned int lbl_8216A3B0;
extern unsigned int lbl_831BBCA8;
extern unsigned int lbl_831BBFC0;
extern unsigned int lbl_831BBFC8;
extern unsigned int lbl_831BBFCC;
extern unsigned int stack0x00000000;
extern unsigned int uStack_8b0;
extern unsigned int uStack_8b8;
extern unsigned int uStack_8c0;
extern unsigned int uStack_8c4;
extern unsigned int uStack_8d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fn_82F7AC58(ulonglong param_1,ushort *param_2,undefined8 param_3,ulonglong *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  bool bVar4;
  ulonglong *puVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  undefined4 *puVar18;
  longlong lVar17;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  char *pcVar22;
  ulonglong uVar23;
  longlong lVar24;
  ushort *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uStack_8d0;
  undefined2 uStack_8c4;
  uint uStack_8c0;
  uint uStack_8b8;
  int iStack_8b4;
  uint uStack_8b0;
  
  uVar16 = ZEXT48(&stack0x00000000);
  uStack_8b0 = 0;
  bVar15 = false;
  uVar29 = 0;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  uVar23 = 0;
  uVar27 = 0;
  lVar24 = 0;
  bVar4 = false;
  if (((param_1 & 0xffffffff) != 0) && (param_2 != (ushort *)0x0)) {
    lVar17 = fn_82F6AB08();
    if (((param_1 & 0xffffffff) == (lVar17 + 0x20U & 0xffffffff)) ||
       (lVar17 = fn_82F6AB08(), (param_1 & 0xffffffff) == (lVar17 + 0x40U & 0xffffffff))) {
      uVar29 = fn_82F70238(uVar16 - 0x4a0,0x200,param_2,param_4);
      if ((int)uVar29 == -1) {
        uVar29 = 0x1ff;
      }
      fn_82A2B528(uVar16 - 0x4a0);
      return uVar29;
    }
    uVar33 = (ulonglong)*param_2;
    uVar26 = 0;
    uVar30 = 0;
    uStack_8c0 = 0;
    uStack_8d0 = 0;
    iStack_8b4 = 0;
    if (uVar33 == 0) {
      return 0;
    }
    uVar31 = (ulonglong)uStack_8b8;
LAB_82f7ad1c:
    puVar25 = param_2 + 1;
    if (-1 < (int)uVar26) {
      iVar19 = (int)uVar33;
      if ((uVar33 < 0x20) || (0x78 < uVar33)) {
        uVar21 = 0;
      }
      else {
        uVar21 = (byte)(&lbl_8216A390)[iVar19] & 0xf;
      }
      bVar6 = (byte)(&lbl_8216A3B0)[uVar21 * 9 + uStack_8c0] >> 4;
      uStack_8c0 = (uint)bVar6;
      if (uStack_8c0 == 8) goto LAB_82f7ac98;
      if (7 < bVar6) goto LAB_82f7b65c;
      if (uStack_8c0 == 0) {
LAB_82f7af58:
        bVar4 = true;
        fn_82F7AB20(uVar33,param_1,uVar16 - 0x8d0);
        uVar26 = (ulonglong)uStack_8d0;
        goto LAB_82f7b65c;
      }
      if (bVar6 == 1) {
        bVar4 = false;
        uVar27 = 0xffffffffffffffff;
        uStack_8b8 = 0;
        bVar15 = false;
        uVar23 = 0;
        lVar24 = 0;
        uVar29 = 0;
        bVar14 = false;
        bVar13 = false;
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        bVar7 = false;
        goto LAB_82f7b65c;
      }
      if (bVar6 == 2) {
        if (iVar19 == 0x20) {
          bVar14 = true;
        }
        else if (iVar19 == 0x23) {
          bVar7 = true;
        }
        else if (iVar19 == 0x2b) {
          bVar13 = true;
        }
        else if (iVar19 == 0x2d) {
          uVar29 = uVar29 | 4;
        }
        else if (iVar19 == 0x30) {
          uVar29 = uVar29 | 8;
        }
        goto LAB_82f7b65c;
      }
      if (bVar6 == 3) {
        if (uVar33 == 0x2a) {
          uVar21 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (ulonglong *)(uVar21 + 8);
          uVar21 = *(uint *)(uVar21 + 4);
          uVar23 = (ulonglong)uVar21;
          if ((int)uVar21 < 0) {
            uVar29 = uVar29 | 4;
            uVar23 = -uVar23;
          }
        }
        else {
          uVar23 = (uVar23 * 10 + uVar33) - 0x30;
        }
        goto LAB_82f7b65c;
      }
      if (bVar6 == 4) {
        uVar27 = 0;
        goto LAB_82f7b65c;
      }
      if (bVar6 == 5) {
        if (uVar33 == 0x2a) {
          uVar21 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (ulonglong *)(uVar21 + 8);
          uVar21 = *(uint *)(uVar21 + 4);
          uVar27 = (ulonglong)uVar21;
          if ((int)uVar21 < 0) {
            uVar27 = 0xffffffffffffffff;
          }
        }
        else {
          uVar27 = (uVar27 * 10 + uVar33) - 0x30;
        }
        goto LAB_82f7b65c;
      }
      if (bVar6 == 6) {
        if (iVar19 == 0x49) {
          uVar1 = *puVar25;
          if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
            bVar8 = true;
            puVar25 = param_2 + 3;
          }
          else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
            bVar8 = false;
            puVar25 = param_2 + 3;
          }
          else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                   ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
            uStack_8c0 = 0;
            goto LAB_82f7af58;
          }
        }
        else if (iVar19 == 0x68) {
          uVar29 = uVar29 | 0x20;
        }
        else if (iVar19 == 0x6c) {
          if (*puVar25 == 0x6c) {
            bVar9 = true;
            puVar25 = param_2 + 2;
          }
          else {
            uVar29 = uVar29 | 0x10;
          }
        }
        else if (iVar19 == 0x77) {
          uVar29 = uVar29 | 0x800;
        }
        goto LAB_82f7b65c;
      }
      iVar28 = (int)uVar27;
      switch(iVar19 + -0x41) {
      case 0:
      case 4:
      case 6:
        uStack_8b8 = 1;
        uVar33 = uVar33 + 0x20 & 0xffff;
        goto code_r0x82f7b1c4;
      default:
        goto LAB_82f7b49c;
      case 2:
        if ((uVar29 & 0x830) == 0) {
          uVar29 = uVar29 | 0x20;
        }
      case 0x22:
        uVar30 = 1;
        uVar21 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (ulonglong *)(uVar21 + 8);
        bVar4 = true;
        uStack_8c4 = (undefined2)*(undefined4 *)(uVar21 + 4);
        if (((uVar29 & 0x20) != 0) &&
           (iVar19 = fn_82F85C08(uVar16 - 0x8a0,uVar16 - 0x8cc,
                                  *(undefined4 *)(lbl_831BBCA8 + 0xac),0xffffffff831bbca8),
           iVar19 < 0)) {
          bVar15 = true;
        }
        uVar31 = uVar16 - 0x8a0;
        goto LAB_82f7b49c;
      case 0x12:
        if ((uVar29 & 0x830) == 0) {
          uVar29 = uVar29 | 0x20;
        }
      case 0x32:
        uVar33 = uVar27;
        if (iVar28 == -1) {
          uVar33 = 0x7fffffff;
        }
        uVar21 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (ulonglong *)(uVar21 + 8);
        uVar31 = (ulonglong)*(uint *)(uVar21 + 4);
        if ((uVar29 & 0x20) == 0) {
          if (uVar31 == 0) {
            uVar31 = (ulonglong)lbl_8216955C;
          }
          bVar4 = true;
          for (uVar30 = uVar31; ((int)uVar33 != 0 && (uVar33 = uVar33 - 1, *(short *)uVar30 != 0));
              uVar30 = uVar30 + 2) {
          }
          uVar30 = (ulonglong)((int)(short *)uVar30 - (int)uVar31 >> 1);
        }
        else {
          if (uVar31 == 0) {
            uVar31 = (ulonglong)lbl_82169558;
          }
          uVar30 = 0;
          uVar20 = uVar31;
          if (0 < (int)uVar33) {
            do {
              if (*(char *)uVar20 == '\0') break;
              iVar19 = fn_82F66FA8(*(char *)uVar20,0xffffffff831bbca8);
              if (iVar19 != 0) {
                uVar20 = uVar20 + 1;
              }
              uVar30 = uVar30 + 1;
              uVar20 = uVar20 + 1;
            } while ((int)uVar30 < (int)uVar33);
          }
        }
        goto LAB_82f7b49c;
      case 0x17:
        goto code_r0x82f7b2fc;
      case 0x19:
        uVar21 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (ulonglong *)(uVar21 + 8);
        puVar2 = *(ushort **)(uVar21 + 4);
        if ((puVar2 != (ushort *)0x0) && (uVar31 = (ulonglong)*(uint *)(puVar2 + 2), uVar31 != 0)) {
          if ((uVar29 & 0x800) == 0) {
            uVar30 = (ulonglong)(short)*puVar2;
            bVar4 = false;
          }
          else {
            uVar1 = *puVar2;
            bVar4 = true;
            uVar30 = (longlong)((int)(short)uVar1 >> 1) +
                     (ulonglong)((short)uVar1 < 0 && (uVar1 & 1) != 0);
          }
          goto LAB_82f7b49c;
        }
        uVar31 = (ulonglong)lbl_82169558;
        uVar30 = uVar31;
        do {
          pcVar22 = (char *)uVar30;
          uVar30 = uVar30 + 1;
        } while (*pcVar22 != '\0');
        lVar17 = uVar30 - uVar31;
        goto code_r0x82f7b098;
      case 0x20:
      case 0x24:
      case 0x25:
      case 0x26:
        goto code_r0x82f7b1c4;
      case 0x23:
      case 0x28:
        bVar10 = true;
      case 0x34:
        iVar19 = 10;
        goto code_r0x82f7b340;
      case 0x2d:
        uVar21 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (ulonglong *)(uVar21 + 8);
        piVar3 = *(int **)(uVar21 + 4);
        iVar19 = fn_82F6E8A0();
        if (iVar19 != 0) {
          if ((uVar29 & 0x20) == 0) {
            *piVar3 = (int)uVar26;
          }
          else {
            *(short *)piVar3 = (short)uVar26;
          }
          bVar15 = true;
          goto LAB_82f7b644;
        }
        goto LAB_82f7ac98;
      case 0x2e:
        iVar19 = 8;
        if (bVar7) {
          bVar11 = true;
        }
        goto code_r0x82f7b340;
      case 0x2f:
        uVar27 = 8;
        goto code_r0x82f7b2fc;
      case 0x37:
        uStack_8b0 = 0x27;
        goto code_r0x82f7b308;
      }
    }
    goto LAB_82f7b674;
  }
LAB_82f7ac98:
  puVar18 = (undefined4 *)fn_82F68240();
  *puVar18 = 0x16;
  fn_82F63BA0();
  return 0xffffffffffffffff;
code_r0x82f7b2fc:
  uStack_8b0 = 7;
code_r0x82f7b308:
  iVar19 = 0x10;
  if (bVar7) {
    lVar24 = 2;
  }
code_r0x82f7b340:
  if ((bVar8) || (bVar9)) {
    puVar5 = (ulonglong *)((int)param_4 + 7U & 0xfffffff8);
    param_4 = puVar5 + 1;
    uVar30 = *puVar5;
  }
  else if ((uVar29 & 0x20) == 0) {
    uVar21 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (ulonglong *)(uVar21 + 8);
    if (bVar10) {
      uVar30 = (ulonglong)*(int *)(uVar21 + 4);
    }
    else {
      uVar30 = (ulonglong)*(uint *)(uVar21 + 4);
    }
  }
  else {
    uVar21 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (ulonglong *)(uVar21 + 8);
    uVar21 = *(uint *)(uVar21 + 4);
    if (bVar10) {
      uVar30 = (ulonglong)(short)uVar21;
    }
    else {
      uVar30 = (ulonglong)uVar21 & 0xffff;
    }
  }
  if ((bVar10) && ((longlong)uVar30 < 0)) {
    uVar30 = -uVar30;
    bVar12 = true;
  }
  if ((!bVar8) && (!bVar9)) {
    uVar30 = uVar30 & 0xffffffff;
  }
  if ((int)uVar27 < 0) {
    uVar27 = 1;
  }
  else {
    uVar29 = uVar29 & 0xfffffff7;
    if (0x200 < (int)uVar27) {
      uVar27 = 0x200;
    }
  }
  if (uVar30 == 0) {
    lVar24 = 0;
  }
  uVar33 = uVar16 - 0x6a1;
  while( true ) {
    iVar28 = (int)uVar27;
    uVar27 = uVar27 - 1;
    if ((iVar28 < 1) && (uVar30 == 0)) break;
    uVar20 = (ulonglong)iVar19;
    trapDoubleWordImmediate(6,uVar20,0);
    uVar31 = uVar30 - (uVar30 / uVar20) * uVar20;
    uVar30 = uVar30 / uVar20;
    trapDoubleWordImmediate(6,uVar20,0);
    lVar17 = (uVar31 & 0xffffffff) + 0x30;
    if (0x39 < (int)lVar17) {
      lVar17 = lVar17 + (ulonglong)uStack_8b0;
    }
    *(undefined1 *)uVar33 = (char)lVar17;
    uVar33 = uVar33 - 1;
  }
  uVar30 = (uVar16 - 0x6a1) - uVar33;
  uVar31 = uVar33 + 1;
  if ((bVar11) && (((int)uVar30 == 0 || (*(char *)uVar31 != '0')))) {
    uVar30 = uVar30 + 1;
    *(undefined1 *)uVar33 = 0x30;
    uVar31 = uVar33;
  }
  goto LAB_82f7b49c;
code_r0x82f7b1c4:
  uVar30 = uVar16 - 0x8a0;
  lVar32 = 0x200;
  uVar31 = uVar30;
  lVar17 = lVar32;
  if (iVar28 < 0) {
    uVar27 = 6;
  }
  else if (iVar28 == 0) {
    if (uVar33 == 0x67) {
      uVar27 = 1;
    }
  }
  else {
    if (0x200 < iVar28) {
      uVar27 = 0x200;
    }
    if (0xa3 < (int)uVar27) {
      lVar17 = uVar27 + 0x15d;
      uVar31 = fn_82F68BF0(lVar17);
      iStack_8b4 = (int)uVar31;
      if ((uVar31 & 0xffffffff) == 0) {
        uVar27 = 0xa3;
        uVar31 = uVar30;
        lVar17 = lVar32;
      }
    }
  }
  param_4 = (ulonglong *)(((int)param_4 + 7U & 0xfffffff8) + 8);
  (*(code *)lbl_831BBFC0)
            (uVar16 - 0x8a8,uVar31,lVar17,(char)uVar33,uVar27,uStack_8b8,0xffffffff831bbca8);
  if ((bVar7) && ((int)uVar27 == 0)) {
    (*(code *)lbl_831BBFCC)(uVar31,0xffffffff831bbca8);
  }
  if ((uVar33 == 0x67) && (!bVar7)) {
    (*(code *)lbl_831BBFC8)(uVar31,0xffffffff831bbca8);
  }
  if (*(char *)uVar31 == '-') {
    bVar12 = true;
    uVar31 = uVar31 + 1;
  }
  bVar10 = true;
  uVar30 = uVar31;
  do {
    pcVar22 = (char *)uVar30;
    uVar30 = uVar30 + 1;
  } while (*pcVar22 != '\0');
  lVar17 = uVar30 - uVar31;
code_r0x82f7b098:
  uVar30 = lVar17 - 1U & 0xffffffff;
LAB_82f7b49c:
  if (!bVar15) {
    if ((bVar10) && (((bVar12 || (bVar13)) || (bVar14)))) {
      lVar24 = 1;
    }
    lVar32 = (uVar23 - uVar30) - lVar24;
    iVar28 = (int)lVar32;
    lVar17 = lVar32;
    iVar19 = iVar28;
    if ((uVar29 & 0xc) == 0) {
      while (0 < iVar19) {
        lVar17 = lVar17 + -1;
        fn_82F7AB20(0x20,param_1,uVar16 - 0x8d0);
        if (uStack_8d0 == 0xffffffff) break;
        iVar19 = (int)lVar17;
      }
    }
    fn_82F7AB88(uVar16 - 0x8c8,lVar24,param_1,uVar16 - 0x8d0);
    if (((uVar29 & 8) != 0) && (lVar17 = lVar32, iVar19 = iVar28, (uVar29 & 4) == 0)) {
      while (0 < iVar19) {
        lVar17 = lVar17 + -1;
        fn_82F7AB20(0x30,param_1,uVar16 - 0x8d0);
        if (uStack_8d0 == 0xffffffff) break;
        iVar19 = (int)lVar17;
      }
    }
    if ((bVar4) || (uVar33 = uVar31, uVar26 = uVar30, (int)uVar30 < 1)) {
      fn_82F7AB88(uVar31,uVar30,param_1,uVar16 - 0x8d0);
    }
    else {
      do {
        uVar26 = uVar26 - 1;
        lVar17 = fn_82F85C08(uVar16 - 0x8c4,uVar33,*(undefined4 *)(lbl_831BBCA8 + 0xac),
                              0xffffffff831bbca8);
        if (lVar17 < 1) {
          uVar26 = 0xffffffffffffffff;
          uStack_8d0 = 0xffffffff;
          goto LAB_82f7b600;
        }
        fn_82F7AB20(uStack_8c4,param_1,uVar16 - 0x8d0);
        uVar33 = lVar17 + uVar33;
      } while (0 < (int)uVar26);
    }
    uVar26 = (ulonglong)uStack_8d0;
LAB_82f7b600:
    if ((-1 < (int)uVar26) && ((uVar29 & 4) != 0)) {
      while (0 < iVar28) {
        lVar32 = lVar32 + -1;
        fn_82F7AB20(0x20,param_1,uVar16 - 0x8d0);
        uVar26 = (ulonglong)uStack_8d0;
        if (uStack_8d0 == 0xffffffff) break;
        iVar28 = (int)lVar32;
      }
    }
  }
LAB_82f7b644:
  if (iStack_8b4 != 0) {
    fn_82F641F8();
    iStack_8b4 = 0;
  }
LAB_82f7b65c:
  param_2 = puVar25;
  uVar33 = (ulonglong)*param_2;
  if (uVar33 == 0) goto LAB_82f7b674;
  goto LAB_82f7ad1c;
LAB_82f7b674:
  if (uStack_8c0 == 0) {
    return uVar26;
  }
  if (uStack_8c0 == 7) {
    return uVar26;
  }
  goto LAB_82f7ac98;
}

