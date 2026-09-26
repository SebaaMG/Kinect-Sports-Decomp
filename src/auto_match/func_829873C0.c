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
extern int fn_82930318();
extern int fn_82931D88();
extern int fn_8297F4D8();
extern int fn_82980C18();
extern int fn_82986F98();
extern int fn_829871B0();
extern int fn_82F65AC0();
extern unsigned int lbl_8202F488;
extern unsigned int lbl_8202F4E0;
extern unsigned int lbl_8204E1F8;
extern unsigned int lbl_8204E200;


/* WARNING: Removing unreachable block (ram,0x82987834) */
/* WARNING: Removing unreachable block (ram,0x82987838) */
/* WARNING: Removing unreachable block (ram,0x82987858) */
/* WARNING: Removing unreachable block (ram,0x82987878) */
/* WARNING: Removing unreachable block (ram,0x8298788c) */
/* WARNING: Removing unreachable block (ram,0x82987814) */
/* WARNING: Removing unreachable block (ram,0x82987820) */
/* WARNING: Removing unreachable block (ram,0x82987898) */
/* WARNING: Removing unreachable block (ram,0x829878b4) */
/* WARNING: Removing unreachable block (ram,0x829878b8) */
/* WARNING: Removing unreachable block (ram,0x829878c0) */
/* WARNING: Removing unreachable block (ram,0x829878c8) */
/* WARNING: Removing unreachable block (ram,0x829878e4) */
/* WARNING: Removing unreachable block (ram,0x829878f0) */
/* WARNING: Removing unreachable block (ram,0x82987900) */
/* WARNING: Removing unreachable block (ram,0x82987908) */
/* WARNING: Removing unreachable block (ram,0x82987920) */
/* WARNING: Removing unreachable block (ram,0x8298792c) */
/* WARNING: Removing unreachable block (ram,0x82987950) */
/* WARNING: Removing unreachable block (ram,0x8298793c) */
/* WARNING: Removing unreachable block (ram,0x82987954) */
/* WARNING: Removing unreachable block (ram,0x82987960) */
/* WARNING: Removing unreachable block (ram,0x82987988) */
/* WARNING: Removing unreachable block (ram,0x82987970) */
/* WARNING: Removing unreachable block (ram,0x8298798c) */
/* WARNING: Removing unreachable block (ram,0x8298799c) */
/* WARNING: Removing unreachable block (ram,0x829879b8) */

undefined8
fn_829873C0(uint *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
             int param_6,ulonglong param_7,int *param_8)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 *in_stack_00000054;
  
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  if (in_stack_00000054 != (undefined4 *)0x0) {
    *in_stack_00000054 = 0;
  }
  pbVar10 = *(byte **)(param_3 + 8);
  pbVar16 = pbVar10;
  do {
    bVar1 = *pbVar16;
    pbVar16 = pbVar16 + 1;
  } while (bVar1 != 0);
  iVar5 = (int)pbVar16 - (int)pbVar10;
  if ((param_7 & 0x20) == 0) {
    if ((param_7 & 0xc0) != 0) {
      if (iVar5 - 1U < 5) {
LAB_82987694:
        fn_82980C18(param_1,param_3,0xc0d,0xffffffff8204e56c,
                      (-(ulonglong)((param_7 & 0x80) != 0) & 0xfffffffe) + 0x75);
        return 1;
      }
      pcVar13 = "float";
      pbVar16 = pbVar10;
      do {
        bVar1 = *pbVar16;
        bVar2 = *pcVar13;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar16 = pbVar16 + 1;
        pcVar13 = pcVar13 + 1;
      } while (pbVar16 != pbVar10 + 5);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82987694;
      pbVar16 = pbVar10 + 5;
      if (iVar5 == 7) {
        if (((char)*pbVar16 < '1') || ('4' < (char)*pbVar16)) goto LAB_82987694;
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) != 0) {
          uVar7 = (~param_7 & 0xffffffff) >> 5 & 4 | 0x10;
          goto LAB_829874bc;
        }
      }
      else {
        if (((((iVar5 != 9) || ((char)*pbVar16 < '1')) || ('4' < (char)*pbVar16)) ||
            ((pbVar10[6] != 0x78 || ((char)pbVar10[7] < '1')))) || ('4' < (char)pbVar10[7]))
        goto LAB_82987694;
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) != 0) {
          uVar7 = (~param_7 & 0xffffffff) >> 5 & 4 | 0x10;
          goto LAB_8298755c;
        }
      }
      goto LAB_829874e0;
    }
    bVar3 = false;
    iVar5 = 0;
    bVar1 = *pbVar10;
    do {
      if (bVar1 == 0) goto joined_r0x8298770c;
      iVar5 = iVar5 + 1;
      bVar1 = pbVar10[iVar5];
    } while (bVar1 != 0x3a);
    bVar3 = true;
joined_r0x8298770c:
    for (; param_6 != 0; param_6 = *(int *)(param_6 + 0x20)) {
      if (bVar3) {
        if (((*(int *)(param_6 + 0x18) != 0) && (*(int *)(param_6 + 0x20) == 0)) &&
           (uVar6 = fn_829871B0(param_1,*(int *)(param_6 + 0x18),param_2,param_3,param_4,param_5,
                                  param_7,0xffffffff82196582), (int)uVar6 < 0)) {
LAB_829878d4:
          if (param_8 != (int *)0x0) {
            *param_8 = 0;
            return uVar6;
          }
          return uVar6;
        }
      }
      else {
        for (iVar5 = fn_8297F4D8(param_1,param_3,param_6); iVar5 != 0;
            iVar5 = *(int *)(iVar5 + 0xc)) {
          uVar6 = fn_82986F98(param_1,iVar5,param_2,param_3,param_4,param_5,param_6,param_7);
          if ((int)uVar6 < 0) goto LAB_829878d4;
        }
      }
    }
    if ((((param_7 & 2) != 0) || (in_stack_00000054 != (undefined4 *)0x0)) || ((int)param_2 != 0))
    goto LAB_82987e18;
    iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff8204e544);
    if (iVar5 == 0) {
      uVar7 = 9;
LAB_82987a20:
      if (param_8 == (int *)0x0) {
        return 0;
      }
      uVar4 = fn_82930318(0x28);
      if ((uVar4 & 0xffffffff) != 0) {
        lVar11 = 1;
        uVar6 = 0;
        goto LAB_829874cc;
      }
    }
    else {
      pcVar13 = "float";
      iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff821c8054);
      if (iVar5 == 0) {
        uVar7 = 0xc;
        goto LAB_82987a20;
      }
      iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff8202f4b8);
      if (iVar5 == 0) {
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) == 0) goto LAB_829874e0;
        lVar11 = 4;
        uVar7 = 0xc;
        goto LAB_829874c8;
      }
      iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff820123e0);
      if (iVar5 == 0) {
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) != 0) {
          lVar11 = 4;
          lVar9 = 4;
          uVar7 = 0xc;
          goto LAB_82987574;
        }
        goto LAB_829874e0;
      }
      if ((param_1[0x15] != 0) && ((*param_1 & 0x800) == 0)) {
        iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff82001424);
        if (iVar5 == 0) {
          uVar7 = 0x2a;
        }
        else {
          iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff82001414);
          if (iVar5 == 0) {
            uVar7 = 0x2b;
          }
          else {
            iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff821c4554);
            if ((iVar5 != 0) &&
               (iVar5 = fn_82F65AC0(*(undefined4 *)(param_3 + 8),0xffffffff8200ed9c), iVar5 != 0))
            goto LAB_82987b78;
            uVar7 = 0x18;
          }
        }
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) == 0) goto LAB_829874e0;
        lVar11 = 1;
        uVar6 = 3;
        goto LAB_829874cc;
      }
LAB_82987b78:
      pbVar10 = *(byte **)(param_3 + 8);
      pbVar14 = pbVar10;
      do {
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar1 != 0);
      pbVar16 = pbVar14 + (-1 - (int)pbVar10);
      if ((byte *)0x3 < pbVar16) {
        pbVar12 = &lbl_8202F4E0;
        pbVar15 = pbVar10;
        do {
          bVar1 = *pbVar15;
          bVar2 = *pbVar12;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar15 = pbVar15 + 1;
          pbVar12 = pbVar12 + 1;
        } while (pbVar15 != pbVar10 + 4);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82987bec;
        uVar7 = 0;
        goto LAB_82987be0;
      }
LAB_82987bec:
      if (pbVar16 < (byte *)0x3) {
LAB_82987c3c:
        if ((byte *)0x3 < pbVar16) {
          pbVar12 = &lbl_8204E200;
          pbVar15 = pbVar10;
          do {
            bVar1 = *pbVar15;
            bVar2 = *pbVar12;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar15 = pbVar15 + 1;
            pbVar12 = pbVar12 + 1;
          } while (pbVar15 != pbVar10 + 4);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar7 = 9;
          }
          else {
            pbVar12 = &lbl_8204E1F8;
            pbVar15 = pbVar10;
            do {
              bVar1 = *pbVar15;
              bVar2 = *pbVar12;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar15 = pbVar15 + 1;
              pbVar12 = pbVar12 + 1;
            } while (pbVar15 != pbVar10 + 4);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82987cc4;
            uVar7 = 0xb;
          }
LAB_82987be0:
          pbVar16 = pbVar10 + 4;
          pbVar14 = pbVar14 + (-5 - (int)pbVar10);
          goto LAB_82987d5c;
        }
LAB_82987cc4:
        if ((byte *)0x4 < pbVar16) {
          pbVar15 = pbVar10;
          do {
            bVar1 = *pbVar15;
            bVar2 = *pcVar13;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar15 = pbVar15 + 1;
            pcVar13 = pcVar13 + 1;
          } while (pbVar15 != pbVar10 + 5);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            pbVar16 = pbVar10 + 5;
            uVar7 = 0xc;
            pbVar14 = pbVar14 + (-6 - (int)pbVar10);
            goto LAB_82987d5c;
          }
        }
        if ((byte *)0x5 < pbVar16) {
          pcVar13 = "double";
          pbVar16 = pbVar10;
          do {
            bVar1 = *pbVar16;
            bVar2 = *pcVar13;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar16 = pbVar16 + 1;
            pcVar13 = pcVar13 + 1;
          } while (pbVar16 != pbVar10 + 6);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            pbVar16 = pbVar10 + 6;
            uVar7 = 0xd;
            pbVar14 = pbVar14 + (-7 - (int)pbVar10);
            goto LAB_82987d5c;
          }
        }
LAB_82987e18:
        if ((param_7 & 1) == 0) {
          return 1;
        }
        pbVar10 = *(byte **)(param_3 + 8);
        uVar6 = 0xbbc;
        uVar8 = 0xffffffff8204e528;
        goto LAB_82987e30;
      }
      pbVar12 = &lbl_8202F488;
      pbVar15 = pbVar10;
      do {
        bVar1 = *pbVar15;
        bVar2 = *pbVar12;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar15 = pbVar15 + 1;
        pbVar12 = pbVar12 + 1;
      } while (pbVar15 != pbVar10 + 3);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82987c3c;
      pbVar16 = pbVar10 + 3;
      uVar7 = 5;
      pbVar14 = pbVar14 + (-4 - (int)pbVar10);
LAB_82987d5c:
      if (pbVar14 == (byte *)0x1) {
        if (('0' < (char)*pbVar16) && ((char)*pbVar16 < '5')) {
          if (param_8 == (int *)0x0) {
            return 0;
          }
          uVar4 = fn_82930318(0x28);
          if ((uVar4 & 0xffffffff) != 0) goto LAB_829874bc;
          goto LAB_829874e0;
        }
        goto LAB_82987e18;
      }
      if ((((pbVar14 != (byte *)0x3) || ((char)*pbVar16 < '1')) || ('4' < (char)*pbVar16)) ||
         (((pbVar16[1] != 0x78 || ((char)pbVar16[2] < '1')) || ('4' < (char)pbVar16[2]))))
      goto LAB_82987e18;
      if (param_8 == (int *)0x0) {
        return 0;
      }
      uVar4 = fn_82930318(0x28);
      if ((uVar4 & 0xffffffff) != 0) {
        lVar11 = (longlong)(char)pbVar16[2] + -0x30;
        lVar9 = (longlong)(char)*pbVar16 + -0x30;
        goto LAB_82987574;
      }
    }
LAB_829874e0:
    iVar5 = 0;
LAB_829874e4:
    *param_8 = iVar5;
    if (iVar5 != 0) {
      return 0;
    }
    return 0xffffffff8007000e;
  }
  if (2 < iVar5 - 1U) {
    pbVar14 = &lbl_8202F488;
    pbVar16 = pbVar10;
    do {
      bVar1 = *pbVar16;
      bVar2 = *pbVar14;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar16 = pbVar16 + 1;
      pbVar14 = pbVar14 + 1;
    } while (pbVar16 != pbVar10 + 3);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      pbVar16 = pbVar10 + 3;
      if (iVar5 == 5) {
        if (((char)*pbVar16 < '1') || ('4' < (char)*pbVar16)) goto LAB_8298757c;
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) == 0) goto LAB_829874e0;
        uVar7 = 9;
LAB_829874bc:
        lVar11 = (longlong)(char)*pbVar16 + -0x30;
LAB_829874c8:
        uVar6 = 1;
LAB_829874cc:
        lVar9 = 1;
      }
      else {
        if ((((iVar5 != 7) || ((char)*pbVar16 < '1')) || ('4' < (char)*pbVar16)) ||
           (((pbVar10[4] != 0x78 || ((char)pbVar10[5] < '1')) || ('4' < (char)pbVar10[5]))))
        goto LAB_8298757c;
        if (param_8 == (int *)0x0) {
          return 0;
        }
        uVar4 = fn_82930318(0x28);
        if ((uVar4 & 0xffffffff) == 0) goto LAB_829874e0;
        uVar7 = 9;
LAB_8298755c:
        lVar9 = (longlong)(char)*pbVar16 + -0x30;
        lVar11 = (longlong)(char)pbVar16[2] + -0x30;
LAB_82987574:
        uVar6 = 2;
      }
      iVar5 = fn_82931D88(uVar4,uVar6,uVar7,0,lVar9,lVar11,0);
      goto LAB_829874e4;
    }
  }
LAB_8298757c:
  uVar8 = 0xffffffff8204e590;
  uVar6 = 0xc0d;
LAB_82987e30:
  fn_82980C18(param_1,param_3,uVar6,uVar8,pbVar10);
  return 1;
}

