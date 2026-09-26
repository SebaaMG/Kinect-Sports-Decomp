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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern int fn_8294B7A8();
extern int fn_8294C090();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82964868();
extern int fn_82975B00();
extern int fn_82993A78();
extern int fn_82993BB0();
extern int fn_82993CE8();
extern int fn_82993EA8();
extern int fn_82BA02A8();
extern int fn_82F68CC0();


longlong fn_82995CA0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar12;
  longlong lVar11;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 auStack_c8 [6];
  undefined4 auStack_b0 [44];
  
  uVar2 = param_1[3];
  lVar13 = 0;
  uVar12 = 0;
  if (uVar2 != 0) {
    iVar10 = 0;
    do {
      param_1[0x40] = uVar12;
      param_1[0x41] = *(int *)(iVar10 + param_1[6]);
      fn_8294C090(param_1);
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar12 < (uint)param_1[3]);
  }
  uVar12 = 0;
  if (uVar2 != 0) {
    iVar10 = 0;
    do {
      param_1[0x40] = uVar12;
      puVar4 = *(uint **)(param_1[6] + iVar10);
      param_1[0x41] = (int)puVar4;
      uVar3 = *puVar4 & 0xfff00000;
      if (((((((uVar3 == 0x60500000) || (uVar3 == 0x60f00000)) || (uVar3 == 0x60a00000)) ||
            ((uVar3 == 0x60200000 || (uVar3 == 0x60700000)))) || (uVar3 == 0x60c00000)) ||
          (((uVar3 == 0x61100000 || (uVar3 == 0x60300000)) ||
           ((uVar3 == 0x60800000 ||
            (((uVar3 == 0x60d00000 || (uVar3 == 0x61200000)) || (uVar3 == 0x60000000)))))))) ||
         (uVar3 == 0x11000000)) {
        uVar3 = *puVar4;
        uVar14 = 0;
        uVar15 = (ulonglong)uVar3 & 0xfffff;
        uVar9 = -(ulonglong)((uVar3 & 0xfff00000) != 0x11000000) & uVar15;
        if ((uVar3 & 0xfffff) != 0) {
          lVar13 = uVar9 << 2;
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(param_1[0x41] + 8) + (int)lVar13) * 4 + param_1[5]);
            if ((*(uint *)(iVar6 + 0x10) != uVar14) || ((*(uint *)(iVar6 + 0x3c) & 0x1f0000) != 0))
            break;
            if (*(int *)(iVar6 + 4) == param_1[0x20]) {
              iVar6 = (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(iVar6 + 0x6c));
              bVar1 = iVar6 == 6;
            }
            else {
              bVar1 = *(int *)(iVar6 + 4) == param_1[0x22];
            }
            if (!bVar1) break;
            uVar14 = uVar14 + 1;
            lVar13 = lVar13 + 4;
          } while (uVar14 < uVar15);
        }
        if (((*(uint *)param_1[0x41] & 0xfff00000) == 0x60000000) && (uVar15 == 1)) {
          lVar13 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_c8 + 2,4,0,0);
          if (lVar13 < 0) {
            return lVar13;
          }
          iVar6 = fn_82963998(0x74);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = fn_829632A0();
          }
          if (iVar6 == 0) {
            return -0x7ff8fff2;
          }
          lVar13 = fn_82963A30(iVar6,0x10000002,2,2,0);
          if ((lVar13 < 0) || (lVar13 = fn_829632F0(iVar6,param_1[0x41]), lVar13 < 0))
          goto LAB_829966bc;
          **(undefined4 **)(iVar6 + 8) = *(undefined4 *)(*(int *)(param_1[0x41] + 8) + 4);
          *(undefined4 *)(*(int *)(iVar6 + 8) + 4) =
               *(undefined4 *)(*(int *)(param_1[0x41] + 8) + 4);
          **(undefined4 **)(iVar6 + 0x10) = auStack_c8[2];
          *(undefined4 *)(*(int *)(iVar6 + 0x10) + 4) = auStack_c8[3];
          lVar13 = fn_829644B8(param_1,iVar6);
          if (lVar13 < 0) goto LAB_829966bc;
          iVar6 = fn_82963998(0x74);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = fn_829632A0();
          }
          if (iVar6 == 0) {
            return -0x7ff8fff2;
          }
          lVar13 = fn_82963A30(iVar6,0x60500002,4,*(undefined4 *)(param_1[0x41] + 0xc),0);
          if ((lVar13 < 0) || (lVar13 = fn_829632F0(iVar6,param_1[0x41]), lVar13 < 0)) {
            fn_82BA02A8(iVar6);
            goto LAB_829966d0;
          }
          iVar7 = 8;
          lVar13 = 2;
          do {
            *(undefined4 *)(iVar7 + *(int *)(iVar6 + 8) + -8) = **(undefined4 **)(param_1[0x41] + 8)
            ;
            *(undefined4 *)(iVar7 + *(int *)(iVar6 + 8)) = *(undefined4 *)((int)auStack_c8 + iVar7);
            iVar7 = iVar7 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          fn_82F68CC0(*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(param_1[0x41] + 0x10),
                       *(int *)(param_1[0x41] + 0xc) << 2);
          iVar7 = param_1[0x41];
          if (iVar7 != 0) {
            fn_82BA02A8(iVar7);
            fn_829639F0(iVar7);
          }
          *(int *)(param_1[6] + iVar10) = iVar6;
          param_1[0x41] = iVar6;
        }
        else if (uVar14 != uVar15) {
          lVar13 = (**(code **)(*param_1 + 0x154))(param_1,param_1[0x40],auStack_b0,4,0,0);
          if (lVar13 < 0) {
            return lVar13;
          }
          iVar6 = fn_82963998(0x74);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = fn_829632A0();
          }
          if (iVar6 == 0) {
            return -0x7ff8fff2;
          }
          lVar13 = fn_82963A30(iVar6,uVar15 | 0x10000000,uVar15,uVar15,0);
          if ((lVar13 < 0) || (lVar13 = fn_829632F0(iVar6,param_1[0x41]), lVar13 < 0))
          goto LAB_829966bc;
          if ((uVar3 & 0xfffff) != 0) {
            iVar7 = 0;
            lVar13 = uVar9 << 2;
            do {
              *(undefined4 *)(iVar7 + *(int *)(iVar6 + 8)) =
                   *(undefined4 *)(*(int *)(param_1[0x41] + 8) + (int)lVar13);
              *(undefined4 *)(iVar7 + *(int *)(iVar6 + 0x10)) =
                   *(undefined4 *)((int)auStack_b0 + iVar7);
              puVar5 = (undefined4 *)(iVar7 + *(int *)(iVar6 + 0x10));
              iVar7 = iVar7 + 4;
              *(undefined4 *)(*(int *)(param_1[0x41] + 8) + (int)lVar13) = *puVar5;
              lVar13 = lVar13 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          lVar13 = fn_829644B8(param_1,iVar6);
          if (lVar13 < 0) goto LAB_829966bc;
        }
        puVar4 = (uint *)param_1[0x41];
      }
      lVar13 = fn_82964868(param_1,puVar4);
      if (lVar13 < 0) {
        return lVar13;
      }
      uVar12 = uVar12 + 1;
      iVar10 = iVar10 + 4;
      *(undefined4 *)param_1[0x41] = 0;
    } while (uVar12 < uVar2);
  }
  iVar6 = 0;
  fn_8294B7A8(param_1);
  uVar12 = 0;
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    return lVar13;
  }
  lVar11 = -0x7fffbfff;
  do {
    param_1[0x40] = uVar12;
    iVar10 = *(int *)(uVar12 * 4 + param_1[6]);
    param_1[0x41] = iVar10;
    iVar10 = *(int *)(iVar10 + 0x3c);
    if ((iVar10 != 0) && (*(int *)(iVar10 + 4) == 0xe)) {
      param_1[0x42] = iVar10 + 0x30;
    }
    puVar4 = (uint *)param_1[0x41];
    uVar3 = *puVar4;
    uVar14 = uVar3 & 0xfff00000;
    if ((((uVar3 & 0xfff00000) != 0) && (puVar4[1] != 0)) &&
       (*(int *)(*(int *)(*(int *)puVar4[2] * 4 + param_1[5]) + 8) != -1)) {
      fn_82975B00(param_1,puVar4[0xf],0x119f,0xffffffff8204fde4);
      return -0x7fffbffb;
    }
    if (uVar14 < 0x60500001) {
      if (uVar14 == 0x60500000) {
LAB_8299657c:
        pcVar8 = *(code **)(*param_1 + 0x108);
        goto LAB_82996298;
      }
      if (uVar14 < 0x20100001) {
        if (uVar14 == 0x20100000) {
LAB_82996678:
          lVar13 = fn_82993CE8(param_1);
          goto LAB_82996684;
        }
        if (uVar14 < 0x10600001) {
          if (uVar14 == 0x10600000) {
            pcVar8 = *(code **)(*param_1 + 0x90);
          }
          else {
            if ((uVar3 & 0xfff00000) == 0) goto LAB_82996684;
            if (uVar14 == 0x10000000) {
              pcVar8 = *(code **)(*param_1 + 0x7c);
            }
            else if (uVar14 == 0x10100000) {
              pcVar8 = *(code **)(*param_1 + 0x80);
            }
            else if (uVar14 == 0x10300000) {
              pcVar8 = *(code **)(*param_1 + 0x84);
            }
            else if (uVar14 == 0x10400000) {
              pcVar8 = *(code **)(*param_1 + 0x88);
            }
            else {
              lVar13 = lVar11;
              if (uVar14 != 0x10500000) goto LAB_829966a0;
              pcVar8 = *(code **)(*param_1 + 0x8c);
            }
          }
        }
        else if (uVar14 == 0x10700000) {
          pcVar8 = *(code **)(*param_1 + 0x98);
        }
        else if (uVar14 == 0x10d00000) {
          if ((param_1[0x1c] & 0x4000000U) == 0) {
LAB_82996398:
            lVar13 = -0x7fffbfff;
            goto LAB_82996684;
          }
          pcVar8 = *(code **)(*param_1 + 0xe0);
        }
        else if (uVar14 == 0x10e00000) {
          if ((param_1[0x1c] & 0x4000000U) == 0) goto LAB_82996398;
          pcVar8 = *(code **)(*param_1 + 0xe4);
        }
        else {
          if (uVar14 == 0x10f00000) goto LAB_82996660;
          if (uVar14 != 0x11000000) {
            lVar13 = lVar11;
            if (uVar14 != 0x20000000) goto LAB_829966a0;
            goto LAB_82996350;
          }
          pcVar8 = *(code **)(*param_1 + 0xdc);
        }
        goto LAB_82996298;
      }
      if (0x50000000 < uVar14) {
        if (uVar14 != 0x50300000) {
          if (uVar14 != 0x60000000) {
            if (uVar14 == 0x60100000) goto LAB_82996518;
            if (uVar14 == 0x60200000) goto LAB_82996570;
            if (uVar14 == 0x60300000) goto LAB_82996564;
            lVar13 = lVar11;
            if (uVar14 != 0x60400000) goto LAB_829966a0;
            goto LAB_82996498;
          }
          goto LAB_8299657c;
        }
        pcVar8 = *(code **)(*param_1 + 0xe8);
        goto LAB_82996298;
      }
      if (uVar14 == 0x50000000) {
        pcVar8 = *(code **)(*param_1 + 0xb4);
        goto LAB_82996298;
      }
      if (uVar14 == 0x20200000) {
        lVar13 = fn_82993BB0(param_1);
      }
      else {
        if (uVar14 != 0x20300000) {
          if (uVar14 == 0x20400000) {
            pcVar8 = *(code **)(*param_1 + 0xac);
          }
          else if (uVar14 == 0x20500000) {
            pcVar8 = *(code **)(*param_1 + 0xb0);
          }
          else if (uVar14 == 0x20700000) {
            pcVar8 = *(code **)(*param_1 + 0x104);
          }
          else {
            lVar13 = lVar11;
            if (uVar14 != 0x30000000) goto LAB_829966a0;
            pcVar8 = *(code **)(*param_1 + 0xbc);
          }
          goto LAB_82996298;
        }
        lVar13 = fn_82993A78(param_1);
      }
    }
    else {
      if (0x61300000 < uVar14) {
        if (uVar14 < 0x70b00001) {
          if (uVar14 == 0x70b00000) {
LAB_82996350:
            lVar13 = fn_82993EA8(param_1);
            goto LAB_82996684;
          }
          if (uVar14 == 0x70000000) {
            pcVar8 = *(code **)(*param_1 + 0xc4);
          }
          else if (uVar14 == 0x70100000) {
            pcVar8 = *(code **)(*param_1 + 200);
          }
          else if (uVar14 == 0x70200000) {
            pcVar8 = *(code **)(*param_1 + 0xcc);
          }
          else if ((uVar14 == 0x70300000) || (uVar14 == 0x70400000)) {
            pcVar8 = *(code **)(*param_1 + 0xd0);
          }
          else {
            lVar13 = lVar11;
            if (uVar14 != 0x70800000) goto LAB_829966a0;
            pcVar8 = *(code **)(*param_1 + 0x11c);
          }
        }
        else {
          if (uVar14 == 0x70c00000) goto LAB_82996678;
          if (uVar14 == 0x70d00000) {
            pcVar8 = *(code **)(*param_1 + 0x94);
          }
          else {
            if (((uVar14 != 0x73500000) && (uVar14 != 0x73600000)) &&
               ((uVar14 != 0x73700000 && (lVar13 = lVar11, uVar14 != 0x73800000))))
            goto LAB_829966a0;
LAB_82996660:
            pcVar8 = *(code **)(*param_1 + 0x100);
          }
        }
        goto LAB_82996298;
      }
      if (uVar14 == 0x61300000) {
LAB_82996498:
        if ((param_1[0x1c] & 0x2000000U) == 0) {
          fn_82975B00(param_1,puVar4[0xf],0x11b4,0xffffffff8204fdc0);
          return -0x7fffbfff;
        }
        pcVar8 = *(code **)(*param_1 + 0x114);
      }
      else if (uVar14 < 0x60c00001) {
        if (uVar14 == 0x60c00000) {
LAB_82996570:
          pcVar8 = *(code **)(*param_1 + 0x10c);
        }
        else {
          if (uVar14 != 0x60600000) {
            if (uVar14 == 0x60700000) goto LAB_82996570;
            if (uVar14 == 0x60800000) goto LAB_82996564;
            if (uVar14 == 0x60900000) goto LAB_82996498;
            if (uVar14 == 0x60a00000) goto LAB_8299657c;
            lVar13 = lVar11;
            if (uVar14 != 0x60b00000) goto LAB_829966a0;
          }
LAB_82996518:
          pcVar8 = *(code **)(*param_1 + 0x118);
        }
      }
      else {
        if (uVar14 != 0x60d00000) {
          if (uVar14 == 0x60e00000) goto LAB_82996498;
          if (uVar14 == 0x60f00000) goto LAB_8299657c;
          if (uVar14 == 0x61000000) goto LAB_82996518;
          if (uVar14 == 0x61100000) goto LAB_82996570;
          lVar13 = lVar11;
          if (uVar14 != 0x61200000) goto LAB_829966a0;
        }
LAB_82996564:
        pcVar8 = *(code **)(*param_1 + 0x110);
      }
LAB_82996298:
      lVar13 = (*pcVar8)(param_1);
    }
LAB_82996684:
    if ((int)lVar13 == -0x7fffbfff) {
LAB_829966a0:
      fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),0x11b4,0xffffffff82034330);
LAB_829966bc:
      if (iVar6 == 0) {
        return lVar13;
      }
      fn_82BA02A8(iVar6);
LAB_829966d0:
      fn_829639F0(iVar6);
      return lVar13;
    }
    uVar12 = uVar12 + 1;
    if (uVar2 <= uVar12) {
      return lVar13;
    }
  } while( true );
}

