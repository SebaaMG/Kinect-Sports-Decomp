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
extern unsigned int *auStack_c0;
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963FA8();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_8299A410();
extern int fn_8299A5E0();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


undefined8
fn_8299AA08(int param_1,int *param_2,uint *param_3,int *param_4,uint param_5,int param_6,
             int param_7)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  int *piVar20;
  uint *puStack00000024;
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  uint auStack_c0 [48];
  
  auStack_c0[2] = 0;
  auStack_c0[3] = 0;
  auStack_c0[4] = 0;
  auStack_c0[5] = 0;
  uVar14 = 0;
  if (param_5 + param_7 != 0) {
    piVar15 = (int *)(param_6 + (param_5 & 0x3fffffff) * -4);
    piVar20 = param_4;
    do {
      if (uVar14 < param_5) {
        puVar16 = (uint *)*piVar20;
      }
      else {
        puVar16 = (uint *)*piVar15;
      }
      if ((((puVar16 != (uint *)0x0) &&
           (uVar8 = *puVar16 & 0xfff00000, (*puVar16 & 0xfff00000) != 0)) && (puVar16[9] != 1)) &&
         ((((((uVar8 != 0x60000000 && (uVar8 != 0x60500000)) &&
             ((uVar8 != 0x60a00000 && ((uVar8 != 0x60f00000 && (uVar8 != 0x11000000)))))) &&
            (uVar8 != 0x72c00000)) && (uVar8 != 0x72d00000)) || (param_5 <= uVar14)))) {
        uVar8 = puVar16[1];
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar13 = puVar16[2];
          iVar6 = 0;
          iVar5 = *(int *)(param_1 + 0x14);
          iVar19 = *(int *)(param_1 + 0x80);
          do {
            iVar3 = *(int *)(*(int *)(iVar6 + uVar13) * 4 + iVar5);
            if (*(int *)(iVar3 + 4) == iVar19) {
              bVar1 = *(byte *)(iVar3 + 0x6e);
              if (5 < bVar1) break;
              if (*(char *)(iVar3 + 0x6f) == '\x03') {
                if (uVar14 < param_5) {
                  uVar10 = *(int *)(iVar3 + 0x10) + 1;
                  if (auStack_c0[bVar1] < uVar10) {
                    auStack_c0[bVar1] = uVar10;
                  }
                }
                else {
                  uVar10 = *(int *)(iVar3 + 0x10) + 1;
                  if ((auStack_c0[bVar1] < uVar10) && (*(int *)(iVar3 + 0x3c) != 0)) {
                    auStack_c0[bVar1] = uVar10;
                  }
                }
              }
            }
            uVar12 = uVar12 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar12 < uVar8);
        }
      }
      uVar14 = uVar14 + 1;
      piVar20 = piVar20 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar14 < param_5 + param_7);
  }
  uVar17 = 0;
  puStack00000024 = param_3;
  if (*(int *)(param_1 + 0x3c) != 0) {
    puVar16 = auStack_c0;
    uVar7 = lbl_82005710;
    do {
      uVar14 = *puVar16;
      if (uVar14 != 0) {
        iVar5 = fn_82963998(0x74);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_829632A0();
        }
        if (iVar5 == 0) {
          return 0xffffffff8007000e;
        }
        uVar4 = fn_82963A30(iVar5,uVar14 & 0xfffff | 0x72100000,uVar14,uVar14,0);
        if ((int)uVar4 < 0) goto LAB_8299adf8;
        uVar18 = 0;
        if (uVar14 != 0) {
          iVar19 = 0;
          do {
            iVar6 = fn_82964628(uVar7,param_1,*(undefined4 *)(param_1 + 0x88),uVar17,uVar18);
            *(int *)((int)aiStack_e0 + iVar19) = iVar6;
            if (iVar6 == -1) goto LAB_8299ae10;
            uVar8 = *puVar16;
            uVar18 = uVar18 + 1;
            *(int *)(*(int *)(iVar5 + 0x10) + iVar19) = iVar6;
            iVar19 = iVar19 + 4;
            iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14));
            *(uint *)(iVar6 + 0x6c) = (uint)((uVar17 & 0xffffffff) << 8) | 3;
            *(undefined4 *)(iVar6 + 0x3c) = 0;
            *(undefined4 *)(iVar6 + 0x38) = 0xffffffff;
          } while ((uVar18 & 0xffffffff) < (ulonglong)uVar8);
        }
        uVar4 = fn_8299A410(param_1,param_4,param_5,3,uVar17,uVar14,aiStack_e0);
        if (((int)uVar4 < 0) ||
           (uVar4 = fn_8299A5E0(param_1,param_6,param_7,3,uVar17,uVar14,aiStack_e0),
           (int)uVar4 < 0)) goto LAB_8299adf8;
        uVar18 = 0;
        if (uVar14 != 0) {
          iVar19 = 0;
          do {
            iVar6 = fn_82964628(uVar7,param_1,*(undefined4 *)(param_1 + 0x80),uVar17,uVar18);
            *(int *)((int)aiStack_d0 + iVar19) = iVar6;
            if (iVar6 == -1) goto LAB_8299ae10;
            uVar14 = *puVar16;
            uVar18 = uVar18 + 1;
            iVar3 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14));
            *(uint *)(iVar3 + 0x6c) = (uint)((uVar17 & 0xffffffff) << 8) | 3;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            *(int *)(*(int *)(iVar5 + 8) + iVar19) = iVar6;
            iVar19 = iVar19 + 4;
          } while ((uVar18 & 0xffffffff) < (ulonglong)uVar14);
        }
        if (*(int *)(((int)param_2 - (int)auStack_c0) + (int)puVar16) != 0) {
          fn_82975B00(param_1,0,0x11a4,0xffffffff82051270,*(undefined1 *)(param_1 + 0xcb));
          uVar4 = 0xffffffff80004005;
          goto LAB_8299adf8;
        }
        uVar4 = fn_829644B8(param_1,iVar5);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        *(int *)(((int)param_2 - (int)auStack_c0) + (int)puVar16) = iVar5;
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 1;
    } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x3c));
  }
  uVar14 = 1;
  do {
    uVar8 = 0;
    if (param_5 != 0) {
      piVar15 = param_4 + -(param_5 & 0x3fffffff);
      piVar20 = param_4;
      do {
        if (0x1ff < uVar8) {
          uVar7 = 0x11a2;
          uVar4 = 0xffffffff82051180;
          goto LAB_8299b29c;
        }
        if (uVar8 < param_5) {
          puVar16 = (uint *)*piVar20;
        }
        else {
          puVar16 = (uint *)*piVar15;
        }
        if ((puVar16 != (uint *)0x0) && (puVar16[9] != 1)) {
          uVar12 = *puVar16 & 0xfff00000;
          if ((((uVar12 == 0x60000000) ||
               (((uVar12 == 0x60500000 || (uVar12 == 0x60a00000)) || (uVar12 == 0x60f00000)))) ||
              (((uVar12 == 0x72e00000 || (uVar12 == 0x60700000)) || (uVar12 == 0x11000000)))) ||
             ((uVar12 == 0x72c00000 || (uVar12 == 0x72d00000)))) {
            piVar2 = (int *)puVar16[2];
            uVar12 = -(uint)(uVar12 != 0x11000000) & *puVar16 & 0xfffff;
            iVar5 = *(int *)(piVar2[uVar12] * 4 + *(int *)(param_1 + 0x14));
            if (uVar12 == 0) {
              iVar19 = 0;
            }
            else {
              iVar19 = *(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14));
            }
            iVar6 = *(int *)(iVar5 + 4);
            if (((iVar6 == *(int *)(param_1 + 0x80)) &&
                ((*(uint *)(param_1 + 200) & 0xffff) != 0x104)) && (uVar14 == 1)) {
              bVar1 = *(byte *)(iVar5 + 0x6e);
              if (5 < bVar1) break;
              if (iVar19 != 0) {
                uVar12 = *(uint *)(*(int *)(*(int *)(iVar19 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4
                                  );
                if ((uVar12 & 0x840) == 0) {
                  *(uint *)(iVar19 + 0xc) = (uint)bVar1;
                }
                else if ((uint)bVar1 != *(uint *)(iVar19 + 0xc)) {
                  uVar14 = puVar16[0xf];
                  uVar8 = *(uint *)(param_1 + 200) & 0xff;
                  uVar7 = 0x11a3;
                  if ((uVar12 & 0x800) == 0) {
                    uVar4 = 0xffffffff82051110;
                  }
                  else {
                    uVar4 = 0xffffffff820511f8;
                  }
                  goto LAB_8299b2b4;
                }
              }
              iVar5 = (bVar1 + 0x10a) * 4;
              if ((*(int *)(iVar5 + param_1) != -1) || (param_2[bVar1] != 0)) {
                uVar14 = puVar16[0xf];
                uVar7 = 0x11a4;
                uVar4 = 0xffffffff820510b8;
LAB_8299b2cc:
                uVar8 = (uint)*(byte *)(param_1 + 0xcb);
LAB_8299b2b4:
                fn_82975B00(param_1,uVar14,uVar7,uVar4,uVar8);
                return 0xffffffff80004005;
              }
              if (iVar19 != 0) {
                *(undefined4 *)((bVar1 + 0x104) * 4 + param_1) = *(undefined4 *)(iVar19 + 4);
                *(undefined4 *)(iVar5 + param_1) = *(undefined4 *)puVar16[2];
                iVar5 = fn_82964628(*(undefined8 *)(iVar19 + 0x20),param_1,
                                          *(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 0xc),
                                          *(undefined4 *)(iVar19 + 0x10));
                uVar12 = 0;
                if ((*puVar16 & 0xfffff) != 0) {
                  iVar6 = 0;
                  do {
                    uVar12 = uVar12 + 1;
                    *(int *)(iVar6 + puVar16[2]) = iVar5;
                    iVar6 = iVar6 + 4;
                  } while (uVar12 < (*puVar16 & 0xfffff));
                }
                iVar5 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14));
                fn_82963FA8(iVar5,iVar19);
                *(uint *)(iVar5 + 0xc) = (uint)bVar1;
                *(undefined4 *)(iVar19 + 0x40) = 1;
                *(undefined4 *)(iVar5 + 0x40) = 0;
                param_3 = puStack00000024;
              }
              param_2[bVar1] = (int)puVar16;
            }
            else {
              if (uVar14 != 2) goto LAB_8299b230;
              if (iVar19 == 0) {
LAB_8299b114:
                uVar13 = *(uint *)(param_1 + 0x4c);
                uVar12 = 0;
                if (uVar13 != 0) {
                  piVar11 = (int *)(param_1 + 0x428);
                  piVar9 = param_2;
                  do {
                    if ((*piVar9 == 0) && ((*piVar11 == *piVar2 || (*piVar11 == -1)))) break;
                    uVar12 = uVar12 + 1;
                    piVar9 = piVar9 + 1;
                    piVar11 = piVar11 + 1;
                  } while (uVar12 < uVar13);
                }
                if (uVar12 == uVar13) {
                  uVar7 = 0x11a7;
                  uVar4 = 0xffffffff82050fd8;
LAB_8299b29c:
                  fn_82975B00(param_1,0,uVar7,uVar4);
                  return 0xffffffff80004005;
                }
                if (iVar19 != 0) {
                  if ((*(short *)(param_1 + 0xca) == 0x104) || (iVar6 == *(int *)(param_1 + 0x80)))
                  {
                    *(undefined4 *)((uVar12 + 0x104) * 4 + param_1) = *(undefined4 *)(iVar19 + 4);
                    *(undefined4 *)((uVar12 + 0x10a) * 4 + param_1) = *(undefined4 *)puVar16[2];
                  }
                  iVar5 = fn_82964628(*(undefined8 *)(iVar19 + 0x20),param_1,
                                            *(undefined4 *)(iVar19 + 4),
                                            *(undefined4 *)(iVar19 + 0xc),
                                            *(undefined4 *)(iVar19 + 0x10));
                  uVar13 = 0;
                  if ((*puVar16 & 0xfffff) != 0) {
                    iVar6 = 0;
                    do {
                      uVar13 = uVar13 + 1;
                      *(int *)(iVar6 + puVar16[2]) = iVar5;
                      iVar6 = iVar6 + 4;
                    } while (uVar13 < (*puVar16 & 0xfffff));
                  }
                  iVar5 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14));
                  fn_82963FA8(iVar5,iVar19);
                  *(uint *)(iVar5 + 0xc) = uVar12;
                  *(undefined4 *)(iVar19 + 0x40) = 1;
                  *(undefined4 *)(iVar5 + 0x40) = 0;
                }
              }
              else {
                uVar12 = *(uint *)(iVar19 + 0xc);
                if (5 < uVar12) break;
                uVar13 = *(uint *)(*(int *)(*(int *)(iVar19 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4
                                  );
                if ((uVar13 & 0x840) == 0) goto LAB_8299b114;
                iVar6 = (uVar12 + 0x10a) * 4;
                iVar5 = *(int *)(iVar6 + param_1);
                if ((iVar5 == -1) && (param_2[uVar12] == 0)) {
                  *(int *)((uVar12 + 0x104) * 4 + param_1) = *(int *)(iVar19 + 4);
                  *(undefined4 *)(iVar6 + param_1) = *(undefined4 *)puVar16[2];
                }
                else {
                  if (iVar5 != *piVar2) {
                    uVar7 = 0x11a5;
                    if ((uVar13 & 0x800) == 0) {
                      uVar4 = 0xffffffff82051008;
                    }
                    else {
                      uVar4 = 0xffffffff82051030;
                    }
                    goto LAB_8299b29c;
                  }
                  if (param_2[uVar12] != 0) {
                    uVar7 = 0x11a6;
                    uVar4 = 0xffffffff82051190;
                    uVar14 = 0;
                    goto LAB_8299b2cc;
                  }
                }
              }
              param_2[uVar12] = (int)puVar16;
            }
            *(undefined4 *)(*piVar20 + 0x24) = 1;
          }
        }
LAB_8299b230:
        uVar8 = uVar8 + 1;
        piVar15 = piVar15 + 1;
        piVar20 = piVar20 + 1;
      } while (uVar8 < param_5);
    }
    uVar14 = uVar14 + 1;
    if (2 < uVar14) {
      uVar8 = 0;
      uVar14 = 0;
      piVar20 = param_2;
      if (*(int *)(param_1 + 0x3c) != 0) {
        do {
          if (*piVar20 == 0) {
            iVar5 = fn_82963998(0x74);
            if (iVar5 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = fn_829632A0();
            }
            *piVar20 = (int)uVar17;
            if ((uVar17 & 0xffffffff) == 0) {
              return 0xffffffff8007000e;
            }
            fn_82963A30(uVar17,0,0,0,0);
            fn_829644B8(param_1,*piVar20);
          }
          uVar14 = *(uint *)(param_1 + 0x3c);
          uVar8 = uVar8 + 1;
          piVar20 = piVar20 + 1;
        } while (uVar8 < uVar14);
      }
      *param_3 = uVar14;
      for (; param_5 != 0; param_5 = param_5 - 1) {
        piVar20 = (int *)*param_4;
        if (((piVar20 != (int *)0x0) && (piVar20[9] != 1)) && (*piVar20 != 0)) {
          param_2[*param_3] = *param_4;
          *param_3 = *param_3 + 1;
          *(undefined4 *)(*param_4 + 0x24) = 1;
        }
        param_4 = param_4 + 1;
      }
      return 0;
    }
  } while( true );
LAB_8299ae10:
  uVar4 = 0xffffffff8007000e;
LAB_8299adf8:
  fn_82BA02A8(iVar5);
  fn_829639F0(iVar5);
  return uVar4;
}

