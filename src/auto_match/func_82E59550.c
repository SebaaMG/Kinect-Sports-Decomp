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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82E46BE8();
extern int fn_82E59348();
extern int fn_82E59F28();
extern int fn_82E5A018();
extern int fn_82E5C778();
extern int fn_82E5C7D8();
extern int fn_82E5C818();
extern int fn_82E5C838();
extern int fn_82E626F0();
extern int fn_82E62730();
extern int fn_82EE0B00();
extern int fn_82EE17C8();
extern int fn_82EE62C0();
extern int fn_82EE6838();
extern int fn_82F6ADA8();
extern unsigned int iStack_104;
extern unsigned int iStack_ac;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82017EF8;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_820F8EE8;
extern unsigned int lbl_820F8EF8;
extern unsigned int lbl_82154D70;
extern unsigned int lbl_82154D78;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_11e;
extern unsigned int uStack_120;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82E59550(undefined4 *param_1,ushort param_2,int param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  double dVar18;
  double dVar19;
  ushort uStack_120;
  ushort uStack_11e;
  int *piStack_11c;
  int *piStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  byte abStack_f0 [4];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined2 uStack_a8;
  undefined1 *puStack_a4;
  undefined4 uStack_a0;
  uint *puStack_9c;
  
  if ((param_1 == (undefined4 *)0x0) || (param_4 == (uint *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_4 = 0;
  piStack_118 = (int *)0x0;
  piStack_11c = (int *)0x0;
  lVar5 = (**(code **)*param_1)(param_1,0xffffffff82154c18,&piStack_118);
  if (-1 < lVar5) {
    uStack_110 = 0;
    lVar5 = (**(code **)(*piStack_118 + 0xc))(piStack_118,0xffffffff820f8f08,&uStack_110);
    if (-1 < lVar5) {
      uVar14 = 0;
      if (uStack_110 != 0) {
        do {
          lVar5 = (**(code **)(*piStack_118 + 0x10))
                            (piStack_118,0xffffffff820f8f08,uVar14,&piStack_11c);
          piVar17 = piStack_11c;
          if (lVar5 < 0) goto LAB_82e59da4;
          uStack_120 = 0;
          lVar5 = fn_82E5A018(piStack_11c,&uStack_120);
          if (lVar5 < 0) goto LAB_82e59da4;
          if (uStack_120 == param_2) break;
          piVar17 = (int *)0x0;
          if (piStack_11c != (int *)0x0) {
            (**(code **)(*piStack_11c + 8))();
            piStack_11c = (int *)0x0;
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < (ulonglong)uStack_110);
        if (piVar17 != (int *)0x0) {
          if (param_3 == 0) {
            lVar5 = fn_82E46BE8(piVar17,param_4);
          }
          else {
            lVar5 = fn_82E59F28();
          }
          goto LAB_82e59da4;
        }
      }
      uStack_10c = 0;
      lVar5 = (**(code **)(*piStack_118 + 0xc))(piStack_118,0xffffffff82154b18,&uStack_10c);
      if (-1 < lVar5) {
        piVar17 = (int *)0x0;
        uVar11 = 0;
        uVar13 = 0;
        uVar10 = 0;
        uVar14 = 0;
        if (uStack_10c != 0) {
          uVar12 = uVar13;
          do {
            lVar5 = (**(code **)(*piStack_118 + 0x10))
                              (piStack_118,0xffffffff82154b18,uVar14,&piStack_11c);
            piVar16 = piStack_11c;
            if (lVar5 < 0) goto LAB_82e59da4;
            uStack_120 = 0;
            lVar5 = fn_82E5C7D8(piStack_11c,&uStack_120);
            if (lVar5 < 0) goto LAB_82e59da4;
            uStack_e0 = lbl_8202E618;
            uStack_dc = lbl_8202E61C;
            uStack_d8 = lbl_8202E620;
            uStack_d4 = lbl_8202E624;
            lVar5 = fn_82E5C778(piVar16,&uStack_e0);
            uVar13 = uStack_120;
            if (lVar5 < 0) goto LAB_82e59da4;
            pbVar9 = (byte *)&uStack_e0;
            pbVar8 = &lbl_820F8EE8;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar9;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar9 = pbVar9 + 1;
            } while (pbVar8 != (byte *)&lbl_820F8EF8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar11 = uStack_120;
            }
            pbVar9 = (byte *)&uStack_e0;
            pbVar8 = &lbl_820ED058;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar9;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar9 = pbVar9 + 1;
            } while (pbVar8 != &lbl_820ED068);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar6 = fn_82E5C838(piVar16);
              if (uVar6 < 0x12) {
                lVar5 = -0x3ff2c566;
                break;
              }
              iVar7 = fn_82E5C818(piVar16);
              uVar10 = *(int *)(iVar7 + 8) << 3;
              uVar12 = uVar13;
            }
            uVar13 = uVar12;
            if (uStack_120 == param_2) {
LAB_82e59864:
              piStack_11c = (int *)0x0;
              piVar17 = piVar16;
            }
            else if (piStack_11c != (int *)0x0) {
              (**(code **)(*piStack_11c + 8))();
              piVar16 = piVar17;
              goto LAB_82e59864;
            }
            uVar14 = uVar14 + 1;
            uVar12 = uVar13;
          } while ((uVar14 & 0xffffffff) < (ulonglong)uStack_10c);
        }
        uVar3 = lbl_8202E618;
        if (-1 < (int)lVar5) {
          if (piVar17 != (int *)0x0) {
            uStack_ec = lbl_8202E61C;
            uStack_e8 = lbl_8202E620;
            uStack_e4 = lbl_8202E624;
            lVar5 = fn_82E5C778(piVar17,abStack_f0);
            if (lVar5 < 0) goto LAB_82e59da4;
            (**(code **)(*piVar17 + 8))(piVar17);
            if (uVar13 == param_2) {
              *param_4 = uVar10;
              goto LAB_82e59da4;
            }
            if (param_3 == 0) {
              pbVar8 = abStack_f0;
              pbVar9 = &lbl_820F8EB8;
              do {
                bVar1 = *pbVar9;
                bVar2 = *pbVar8;
                if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
                pbVar9 = pbVar9 + 1;
                pbVar8 = pbVar8 + 1;
              } while (pbVar9 != &lbl_820F8EC8);
              if (((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
                   (iVar7 = (**(code **)(*piStack_118 + 0x10))
                                      (piStack_118,0xffffffff820ed078,0,&piStack_11c),
                   piVar17 = piStack_11c, -1 < iVar7)) &&
                  (iVar7 = fn_82EE0B00(piStack_11c,&uStack_120), -1 < iVar7)) &&
                 ((uStack_120 != 0 && (uVar13 = 0, uStack_120 != 0)))) {
                do {
                  puStack_a4 = auStack_d0;
                  uStack_a8 = 0x12;
                  puStack_9c = (uint *)&uStack_100;
                  uStack_a0 = 4;
                  iVar7 = fn_82EE17C8(piVar17,uVar13,auStack_b0);
                  if (((-1 < iVar7) && ((iStack_ac == 3 && (puStack_a4 != (undefined1 *)0x0)))) &&
                     (iVar7 = fn_82F6ADA8(puStack_a4,0xffffffff82154d58), iVar7 == 0)) {
                    *param_4 = *puStack_9c;
                    break;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uStack_120);
              }
            }
            iVar7 = (**(code **)(*piStack_118 + 0x10))
                              (piStack_118,0xffffffff82154aa8,0,&piStack_11c);
            piVar17 = piStack_11c;
            if (-1 < iVar7) {
              uStack_114 = 0;
              lVar5 = fn_82E62730(piStack_11c,&uStack_114);
              if (lVar5 < 0) goto LAB_82e59da4;
              if (uStack_114 != 0) {
                uStack_108 = 0;
                lVar5 = fn_82E626F0(piVar17,&uStack_108);
                if (lVar5 < 0) goto LAB_82e59da4;
                if (uStack_108 != 0) {
                  dVar19 = lbl_82005758 / (((double)uStack_108 * lbl_82017EF8) / (double)uStack_114)
                  ;
                  uVar14 = (ulonglong)(dVar19 * lbl_82154D78);
                  uStack_100 = ((((U64)(uStack_100)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar14)) & ((U64)0xFFFFFFFF)) << 32));
                  uVar6 = (((U64)(uStack_100) >> 32) & 0xFFFFFFFF);
                  dVar18 = lbl_82154D78;
                  uStack_100 = uVar14;
                  if (piStack_11c != (int *)0x0) {
                    (**(code **)(*piStack_11c + 8))();
                    piStack_11c = (int *)0x0;
                  }
                  iStack_104 = 0;
                  lVar5 = (**(code **)(*piStack_118 + 0xc))
                                    (piStack_118,0xffffffff82154b08,&iStack_104);
                  uVar4 = uStack_114;
                  if (lVar5 < 0) goto LAB_82e59da4;
                  if (iStack_104 == 0) {
                    uVar15 = 0;
                    if (uVar11 != 0) {
                      if (uStack_114 < 0x2af9) {
                        uVar15 = 0xa00;
                      }
                      else {
                        uVar15 = (-(uint)(24000 < uStack_114) & 0x400) + 0xc00;
                      }
                    }
                    if (param_2 == uVar11) {
                      uVar6 = -(uint)(uVar6 <= uVar15) & uVar6;
                    }
                    else {
                      uStack_100 = (ulonglong)(dVar19 * lbl_82154D70);
                      if (uStack_114 < (((U64)(uStack_100) >> 32) & 0xFFFFFFFF) + uVar10 + uVar15) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = (uStack_114 - ((((U64)(uStack_100) >> 32) & 0xFFFFFFFF) + uVar10)) - uVar15;
                      }
                      iVar7 = fn_82E59348(CONCAT44(uVar3,uStack_ec),CONCAT44(uStack_e8,uStack_e4))
                      ;
                      if (iVar7 != 0) {
                        uStack_100 = (ulonglong)
                                     (dVar18 / (double)(byte)((-(150000 < uVar4) & 0xfU) + 0xf) +
                                     (double)(uVar14 & 0xffffffff));
                        uVar6 = (((U64)(uStack_100) >> 32) & 0xFFFFFFFF) + uVar6;
                      }
                      if (uVar15 < uVar6) {
LAB_82e59da0:
                        *param_4 = 0;
                        goto LAB_82e59da4;
                      }
                      uVar6 = uVar15 - uVar6;
                    }
LAB_82e59d98:
                    *param_4 = uVar6;
                    goto LAB_82e59da4;
                  }
                  lVar5 = (**(code **)(*piStack_118 + 0x10))
                                    (piStack_118,0xffffffff82154b08,0,&piStack_11c);
                  piVar17 = piStack_11c;
                  if (lVar5 < 0) goto LAB_82e59da4;
                  uStack_120 = 0;
                  lVar5 = fn_82EE62C0(piStack_11c,&uStack_120);
                  if (lVar5 < 0) goto LAB_82e59da4;
                  uVar13 = 0;
                  uStack_100 = uStack_100 & 0xffffffff;
                  if (uStack_120 != 0) {
                    do {
                      uStack_11e = 0;
                      lVar5 = fn_82EE6838(piVar17,uVar13,&uStack_11e,&uStack_100);
                      if (lVar5 < 0) goto LAB_82e59da4;
                      if (uStack_11e == param_2) {
                        if (piStack_11c != (int *)0x0) {
                          (**(code **)(*piStack_11c + 8))();
                          piStack_11c = (int *)0x0;
                        }
                        if ((((U64)(uStack_100) >> 0) & 0xFFFFFFFF) < uVar6) {
                          *param_4 = 0;
                        }
                        else {
                          *param_4 = (((U64)(uStack_100) >> 0) & 0xFFFFFFFF) - uVar6;
                        }
                        iVar7 = fn_82E59348(CONCAT44(uVar3,uStack_ec),
                                              CONCAT44(uStack_e8,uStack_e4));
                        if (iVar7 == 0) goto LAB_82e59da4;
                        uStack_100 = (ulonglong)
                                     ((double)(byte)((-(150000 < uStack_114) & 0xfU) + 0xf) * dVar18
                                     + (double)(uVar14 & 0xffffffff));
                        if (*param_4 < (((U64)(uStack_100) >> 32) & 0xFFFFFFFF)) goto LAB_82e59da0;
                        uVar6 = *param_4 - (((U64)(uStack_100) >> 32) & 0xFFFFFFFF);
                        goto LAB_82e59d98;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uStack_120);
                  }
                }
              }
            }
          }
          lVar5 = -0x3ff2c566;
        }
      }
    }
  }
LAB_82e59da4:
  if (piStack_11c != (int *)0x0) {
    (**(code **)(*piStack_11c + 8))();
    piStack_11c = (int *)0x0;
  }
  if (piStack_118 != (int *)0x0) {
    (**(code **)(*piStack_118 + 8))();
  }
  return lVar5;
}

