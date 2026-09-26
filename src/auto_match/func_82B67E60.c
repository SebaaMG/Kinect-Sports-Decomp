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
extern int fn_82F68CC0();
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_820D8D6C;
extern unsigned int uStack_90;


longlong fn_82B67E60(undefined8 param_1,byte *param_2,int param_3,longlong param_4,int param_5,
                      int param_6)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  uint uVar11;
  longlong lVar10;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  int iStack_8c;
  
  fn_82F68CC0(&iStack_a0,param_1,0x24);
  param_6 = param_6 + 1;
  lVar19 = 0;
  uVar16 = 0;
  uVar3 = 0;
  if (param_6 < 3) {
    uVar5 = 1;
    uVar9 = 2;
  }
  else {
    uVar5 = 0;
    uVar9 = 0;
    for (; 1 < param_6; param_6 = param_6 >> 1) {
      uVar9 = uVar9 + 1;
    }
  }
  uVar18 = uVar5 << 3;
  uStack_90 = (uint)uVar9;
  lVar17 = (uVar9 & 0x1fffffff) << 3;
  iStack_a0 = 0;
  iStack_98 = (int)uVar5;
  iStack_94 = (int)uVar18;
  uVar9 = 0;
  iStack_8c = (int)lVar17;
  if (param_5 < 1) {
LAB_82b684ac:
    fn_82F68CC0(param_1,&iStack_a0,0x24);
    return lVar19;
  }
LAB_82b67f0c:
  uVar12 = (uint)uVar5;
  uVar2 = (int)lVar17 >> 3;
  if (uVar12 == 0) {
    lVar14 = (longlong)(int)uVar2;
    uVar5 = 0;
    if (lVar14 == 0) {
      do {
        if ((int)uVar16 == 0) {
          uVar16 = 8;
          if ((int)lVar19 < param_3) {
            uVar3 = (ulonglong)*param_2;
            param_2 = param_2 + 1;
            lVar19 = lVar19 + 1;
            goto LAB_82b68044;
          }
        }
        else {
LAB_82b68044:
          uVar16 = uVar16 - 1;
          iVar8 = (int)uVar3;
          uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
          uVar7 = uVar5;
          if (iVar8 >> ((uint)uVar16 & 0x3f) == 0) goto LAB_82b68068;
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
    do {
      uVar7 = uVar16;
      if ((int)uVar16 == 0) {
        uVar16 = 8;
        if ((int)lVar19 < param_3) {
          uVar3 = (ulonglong)*param_2;
          param_2 = param_2 + 1;
          lVar19 = lVar19 + 1;
          uVar7 = uVar16;
          goto LAB_82b67f44;
        }
      }
      else {
LAB_82b67f44:
        uVar16 = uVar7 - 1;
        uVar12 = (uint)uVar16;
        iVar8 = (int)uVar3;
        uVar6 = (ulonglong)*(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2));
        uVar3 = uVar6 & uVar3;
        if (iVar8 >> (uVar12 & 0x3f) == 0) goto LAB_82b67f64;
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
  iStack_9c = 1 << (uVar12 & 0x3f);
  if ((int)uVar16 == 0) {
    uVar16 = 8;
    if ((int)lVar19 < param_3) {
      uVar3 = (ulonglong)*param_2;
      param_2 = param_2 + 1;
      lVar19 = lVar19 + 1;
      goto LAB_82b6812c;
    }
LAB_82b681a0:
    uVar7 = 0;
    uVar11 = (uint)uVar16;
    if (7 < (int)uVar12) {
      uVar6 = (uVar5 & 0xffffffff) >> 3;
      uVar5 = uVar5 - (uVar5 & 0xfffffff8);
      do {
        if ((int)lVar19 < param_3) {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar4 = (ulonglong)(uint)((int)uVar3 << (8 - uVar11 & 0x3f)) |
                  (longlong)((int)(uint)bVar1 >> (uVar11 & 0x3f));
          uVar3 = (ulonglong)*(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) &
                  (ulonglong)bVar1;
          lVar19 = lVar19 + 1;
        }
        else {
          uVar4 = 0xffffffffffffffff;
        }
        uVar7 = (uVar7 & 0xffffff) << 8 | uVar4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar12 = (uint)uVar5;
    if (uVar12 != 0) {
      if ((int)uVar11 < (int)uVar12) {
        if (param_3 <= (int)lVar19) {
          uVar7 = 0xffffffffffffffff;
          goto LAB_82b6825c;
        }
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar3 = (uVar3 & 0xffffff) << 8 | (ulonglong)bVar1;
        uVar16 = uVar16 + 8;
        lVar19 = lVar19 + 1;
      }
      uVar16 = uVar16 - uVar5;
      uVar7 = (longlong)((int)uVar3 >> ((uint)uVar16 & 0x3f)) |
              (ulonglong)(uint)((int)uVar7 << (uVar12 & 0x3f));
      uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
    }
LAB_82b6825c:
    iStack_a0 = (int)uVar7;
    if ((int)uVar16 == 0) {
      uVar16 = 8;
      if (param_3 <= (int)lVar19) {
        iVar8 = -1;
        goto LAB_82b6829c;
      }
      uVar3 = (ulonglong)*param_2;
      param_2 = param_2 + 1;
      lVar19 = lVar19 + 1;
    }
    uVar16 = uVar16 - 1;
    iVar8 = (int)uVar3 >> ((uint)uVar16 & 0x3f);
    uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
LAB_82b6829c:
    lVar10 = (longlong)(int)uVar2;
    lVar14 = 0;
    if (lVar10 == 0) {
      do {
        if ((int)uVar16 == 0) {
          uVar16 = 8;
          if ((int)lVar19 < param_3) {
            uVar3 = (ulonglong)*param_2;
            param_2 = param_2 + 1;
            lVar19 = lVar19 + 1;
            goto LAB_82b683cc;
          }
        }
        else {
LAB_82b683cc:
          uVar16 = uVar16 - 1;
          iVar13 = (int)uVar3;
          uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
          lVar10 = lVar14;
          if (iVar13 >> ((uint)uVar16 & 0x3f) == 0) goto LAB_82b683f0;
        }
        lVar14 = lVar14 + 1;
      } while( true );
    }
    do {
      uVar5 = uVar16;
      if ((int)uVar16 == 0) {
        uVar16 = 8;
        if ((int)lVar19 < param_3) {
          uVar3 = (ulonglong)*param_2;
          param_2 = param_2 + 1;
          lVar19 = lVar19 + 1;
          uVar5 = uVar16;
          goto LAB_82b682cc;
        }
      }
      else {
LAB_82b682cc:
        uVar16 = uVar5 - 1;
        uVar12 = (uint)uVar16;
        iVar13 = (int)uVar3;
        uVar6 = (ulonglong)*(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2));
        uVar3 = uVar6 & uVar3;
        if (iVar13 >> (uVar12 & 0x3f) == 0) goto LAB_82b682ec;
      }
      lVar14 = lVar14 + 1;
    } while( true );
  }
LAB_82b6812c:
  uVar16 = uVar16 - 1;
  iVar8 = (int)uVar3;
  uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
  if (iVar8 >> ((uint)uVar16 & 0x3f) != 0) goto LAB_82b681a0;
  lVar14 = 0;
  if (0 < iStack_9c) {
    lVar10 = (uVar9 & 0x3fffffff) * 4 + param_4 + -4;
    do {
      if (param_5 <= (int)lVar14 + (int)uVar9) break;
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 4;
      *(undefined4 *)lVar10 = 0;
    } while ((int)lVar14 < iStack_9c);
  }
  uVar9 = (lVar14 + uVar9) - 1;
  if ((int)uVar9 < param_5) {
    uVar18 = uVar18 + 4;
    iStack_94 = (int)uVar18;
    if (0x78 < iStack_94) {
      uVar18 = 0x78;
      goto LAB_82b6848c;
    }
    goto LAB_82b68490;
  }
  goto LAB_82b684ac;
LAB_82b67f64:
  uVar4 = 0;
  if (7 < (int)uVar2) {
    uVar20 = (ulonglong)(uVar2 >> 3);
    lVar14 = lVar14 - ((ulonglong)uVar2 & 0xfffffff8);
    do {
      if ((int)lVar19 < param_3) {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar15 = (ulonglong)(uint)((int)uVar3 << (8 - uVar12 & 0x3f)) |
                 (longlong)((int)(uint)bVar1 >> (uVar12 & 0x3f));
        uVar3 = uVar6 & bVar1;
        lVar19 = lVar19 + 1;
      }
      else {
        uVar15 = 0xffffffffffffffff;
      }
      uVar4 = (uVar4 & 0xffffff) << 8 | uVar15;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  uVar11 = (uint)lVar14;
  if (uVar11 != 0) {
    if ((int)uVar12 < (int)uVar11) {
      if (param_3 <= (int)lVar19) {
        uVar4 = 0xffffffffffffffff;
        goto LAB_82b6801c;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (uVar3 & 0xffffff) << 8 | (ulonglong)bVar1;
      uVar16 = uVar7 + 7;
      lVar19 = lVar19 + 1;
    }
    uVar16 = uVar16 - lVar14;
    uVar4 = (longlong)((int)uVar3 >> ((uint)uVar16 & 0x3f)) |
            (ulonglong)(uint)((int)uVar4 << (uVar11 & 0x3f));
    uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
  }
LAB_82b6801c:
  uVar7 = uVar4 + (uint)((int)uVar5 << (uVar2 & 0x3f));
LAB_82b68068:
  if ((int)uVar5 != 1) {
    if ((int)uVar5 == 0) {
      lVar17 = lVar17 + -2;
      iStack_8c = (int)lVar17;
      if (lVar17 < 0) {
        lVar17 = 0;
LAB_82b680a0:
        iStack_8c = (int)lVar17;
      }
    }
    else {
      lVar17 = uVar5 + lVar17;
      iStack_8c = (int)lVar17;
      if (0x78 < iStack_8c) {
        lVar17 = 0x78;
        goto LAB_82b680a0;
      }
    }
  }
  iVar8 = (int)uVar7 + 1 >> 1;
  if (iVar8 == 0) {
    uVar18 = uVar18 + 3;
    iStack_94 = (int)uVar18;
    if (0x78 < iStack_94) {
      uVar18 = 0x78;
      goto LAB_82b680dc;
    }
  }
  else {
    uVar18 = ((uVar18 - 3 & 0xffffffff) >> 0x1f) - 1 & uVar18 - 3;
LAB_82b680dc:
    iStack_94 = (int)uVar18;
  }
  iStack_98 = (int)uVar18;
  if ((uVar7 & 1) != 0) {
    iVar8 = -iVar8;
  }
  *(int *)((int)((uVar9 & 0xffffffff) << 2) + (int)param_4) = iVar8;
  uStack_90 = uVar2;
LAB_82b68498:
  iStack_98 = iStack_98 >> 3;
  uVar5 = (ulonglong)iStack_98;
  if ((param_3 <= (int)lVar19) || (uVar9 = uVar9 + 1, param_5 <= (int)uVar9)) goto LAB_82b684ac;
  goto LAB_82b67f0c;
LAB_82b682ec:
  uVar4 = 0;
  if (7 < (int)uVar2) {
    uVar20 = (ulonglong)(uVar2 >> 3);
    lVar10 = lVar10 - ((ulonglong)uVar2 & 0xfffffff8);
    do {
      if ((int)lVar19 < param_3) {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar15 = (ulonglong)(uint)((int)uVar3 << (8 - uVar12 & 0x3f)) |
                 (longlong)((int)(uint)bVar1 >> (uVar12 & 0x3f));
        uVar3 = uVar6 & bVar1;
        lVar19 = lVar19 + 1;
      }
      else {
        uVar15 = 0xffffffffffffffff;
      }
      uVar4 = (uVar4 & 0xffffff) << 8 | uVar15;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  uVar11 = (uint)lVar10;
  if (uVar11 != 0) {
    if ((int)uVar12 < (int)uVar11) {
      if (param_3 <= (int)lVar19) {
        uVar4 = 0xffffffffffffffff;
        goto LAB_82b683a4;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (uVar3 & 0xffffff) << 8 | (ulonglong)bVar1;
      uVar16 = uVar5 + 7;
      lVar19 = lVar19 + 1;
    }
    uVar16 = uVar16 - lVar10;
    uVar4 = (longlong)((int)uVar3 >> ((uint)uVar16 & 0x3f)) |
            (ulonglong)(uint)((int)uVar4 << (uVar11 & 0x3f));
    uVar3 = *(uint *)((int)&lbl_820D8D6C + (int)((uVar16 & 0xffffffff) << 2)) & uVar3;
  }
LAB_82b683a4:
  lVar10 = uVar4 + (uint)((int)lVar14 << (uVar2 & 0x3f));
LAB_82b683f0:
  if ((int)lVar14 != 1) {
    if ((int)lVar14 == 0) {
      lVar17 = lVar17 + -2;
      iStack_8c = (int)lVar17;
      if (lVar17 < 0) {
        lVar17 = 0;
LAB_82b68428:
        iStack_8c = (int)lVar17;
      }
    }
    else {
      lVar17 = lVar14 + lVar17;
      iStack_8c = (int)lVar17;
      if (0x78 < iStack_8c) {
        lVar17 = 0x78;
        goto LAB_82b68428;
      }
    }
  }
  iVar13 = (int)lVar10 + 1;
  if (0 < iStack_a0) {
    lVar14 = (uVar9 & 0x3fffffff) * 4 + param_4 + -4;
    do {
      uStack_90 = uVar2;
      if (param_5 <= (int)uVar9) goto LAB_82b684ac;
      uVar7 = uVar7 - 1;
      lVar14 = lVar14 + 4;
      *(undefined4 *)lVar14 = 0;
      uVar9 = uVar9 + 1;
      iStack_a0 = (int)uVar7;
    } while (0 < (longlong)uVar7);
  }
  uStack_90 = uVar2;
  if (param_5 <= (int)uVar9) goto LAB_82b684ac;
  if (iVar8 != 0) {
    iVar13 = -iVar13;
  }
  *(int *)((int)((uVar9 & 0xffffffff) << 2) + (int)param_4) = iVar13;
  uVar18 = ((uVar18 - 6 & 0xffffffff) >> 0x1f) - 1 & uVar18 - 6;
LAB_82b6848c:
  iStack_94 = (int)uVar18;
LAB_82b68490:
  iStack_98 = (int)uVar18;
  goto LAB_82b68498;
}

