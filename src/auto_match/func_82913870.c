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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F6FA8();
extern int fn_829020B8();
extern int fn_82903390();
extern int fn_82904258();
extern int fn_82904370();
extern int fn_82907D40();
extern int fn_829080F8();
extern int fn_82913308();
extern int fn_82914750();
extern int fn_829301D0();
extern int fn_82964628();
extern int fn_82965280();
extern int fn_82968EF8();
extern int fn_82F68CC0();
extern unsigned int iStack0000003c;
extern unsigned int iStack00000044;
extern unsigned int iStack_a8;
extern unsigned int lbl_82005710;
extern unsigned int uStack0000001c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


longlong fn_82913870(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                      int param_6,int param_7)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  int *piVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined4 uStack0000001c;
  int iStack0000003c;
  int iStack00000044;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  uStack0000001c = (undefined4)param_2;
  uStack_ac = 0;
  iStack_a8 = 0;
  uStack_b0 = 0;
  puVar12 = (undefined4 *)0x0;
  piVar8 = (int *)0x0;
  uVar22 = 0;
  if ((param_3 == 0) || (*(int *)(param_3 + 4) != 10)) {
    return -0x7fffbffb;
  }
  iStack0000003c = param_6;
  iStack00000044 = param_7;
  if (*(int *)(param_3 + 0x48) != 0) {
    fn_82904258(param_1,param_3,0xbe2,0xffffffff8202e020,param_2);
    return -0x7fffbfff;
  }
  if ((param_6 != 0) && (lVar6 = fn_82968EF8(param_1[2]), lVar6 < 0)) goto LAB_8291454c;
  if (param_4 == 0) {
    iVar11 = 0;
    iVar25 = 0;
  }
  else {
    iVar11 = *(int *)(param_4 + 8);
    iVar25 = *(int *)(param_4 + 0xc);
  }
  iVar20 = *(int *)(param_3 + 0x2c);
  uVar17 = 0;
  while (iVar20 != 0) {
    piVar18 = (int *)(iVar20 + 8);
    iVar20 = *(int *)(iVar20 + 0xc);
    if (((iVar20 != 0) && (*(int *)(iVar20 + 8) != 0)) &&
       (*(int *)(*(int *)(iVar20 + 8) + 4) == 0xc)) {
      iVar20 = *(int *)(iVar20 + 0xc);
    }
    uVar17 = *(uint *)(*(int *)(*piVar18 + 0x18) + 0x14) + uVar17;
  }
  lVar6 = (uVar17 & 0x3fffffff) << 2;
  lVar7 = fn_8265C940(lVar6,0x24810000);
  uStack_ac = (undefined4)lVar7;
  if ((lVar7 == 0) ||
     ((param_6 != 0 && (piVar8 = (int *)fn_8265C940(lVar6,0x24810000), piVar8 == (int *)0x0)))
     ) {
LAB_829145b4:
    lVar6 = -0x7ff8fff2;
  }
  else {
    iVar20 = *(int *)(param_3 + 0x2c);
    uVar27 = lbl_82005710;
    iVar10 = iStack0000003c;
    while (iStack0000003c = iVar10, iVar20 != 0) {
      iVar14 = *(int *)(iVar20 + 8);
      iVar13 = 0;
      iVar20 = *(int *)(iVar20 + 0xc);
      if (((iVar20 != 0) && (iVar23 = *(int *)(iVar20 + 8), iVar23 != 0)) &&
         (*(int *)(iVar23 + 4) == 0xc)) {
        iVar20 = *(int *)(iVar20 + 0xc);
        iVar13 = iVar23;
      }
      iVar23 = *(int *)(iVar14 + 0x18);
      if ((iVar10 == 0) || ((iStack00000044 != 0 && ((*(uint *)(iVar23 + 0x2c) & 0x40) != 0)))) {
        lVar6 = fn_82913308(param_1,iVar14,0);
        if (lVar6 < 0) goto LAB_8291454c;
        if (iVar11 == 0) {
          lVar6 = fn_82913308(param_1,iVar13,0);
          goto LAB_82913cf0;
        }
        iVar10 = *(int *)(iVar11 + 8);
        if (((iVar10 != 0) && (lVar6 = fn_82914750(param_1,iVar10,lVar7,0), lVar6 < 0)) ||
           (((*(uint *)(iVar23 + 0x2c) & 0x10) != 0 &&
            (lVar6 = fn_82904370(param_1,iVar10,*(uint *)(iVar23 + 0x14) & 0xfffff | 0x10000000,
                                   ((ulonglong)*(uint *)(iVar23 + 0x10) & 0x3fffffff) * 4 +
                                   (ulonglong)(uint)param_1[6],lVar7,0,0), lVar6 < 0))))
        goto LAB_8291454c;
        iVar11 = *(int *)(iVar11 + 0xc);
      }
      else {
        iVar10 = param_1[2];
        iVar13 = *(int *)(iVar10 + 0x74);
        if ((*(uint *)(iVar23 + 0x2c) & 0x40) == 0) {
          if ((*(uint *)(iVar23 + 0x2c) & 0x10) != 0) {
            iVar13 = *(int *)(iVar10 + 0x80);
          }
        }
        else {
          iVar13 = *(int *)(iVar10 + 0x7c);
        }
        uVar26 = 0;
        if (*(int *)(iVar23 + 0x14) != 0) {
          do {
            iVar10 = uVar26 + *(int *)(iVar23 + 0x10);
            uVar9 = fn_82964628(uVar27,param_1[2],iVar13,0,0);
            if (uVar9 < *(uint *)(param_1[2] + 8)) {
              iVar21 = *(int *)(*(int *)(param_1[2] + 0x14) + uVar9 * 4);
            }
            else {
              iVar21 = 0;
            }
            if (iVar21 != 0) {
              *(int *)(iVar21 + 0x30) = iVar10;
              *(int *)(iVar21 + 0x60) = iVar14;
              *(uint *)(iVar21 + 100) = uVar26;
            }
            uVar26 = uVar26 + 1;
            *(uint *)(iVar10 * 4 + param_1[6]) = uVar9;
          } while (uVar26 < *(uint *)(iVar23 + 0x14));
        }
        if ((*(int *)(param_1[2] + 0x74) != iVar13) &&
           (lVar6 = fn_82907D40(param_1,*(undefined4 *)(iVar23 + 0x30),
                                  ((ulonglong)*(uint *)(iVar23 + 0x10) & 0x3fffffff) * 4 +
                                  (ulonglong)(uint)param_1[6]), lVar6 < 0)) goto LAB_8291454c;
        if (*(int *)(param_1[2] + 0x7c) == iVar13) {
          lVar6 = fn_829080F8(param_1,*(undefined4 *)(iVar23 + 0x30),
                                ((ulonglong)*(uint *)(iVar23 + 0x10) & 0x3fffffff) * 4 +
                                (ulonglong)(uint)param_1[6],iVar13,1,0,0,
                                *(undefined4 *)(iVar23 + 0x40));
          if (lVar6 < 0) goto LAB_8291454c;
          lVar6 = fn_829020B8(param_1,iVar23);
LAB_82913cf0:
          if (lVar6 < 0) goto LAB_8291454c;
        }
        else if (*(int *)(param_1[2] + 0x80) == iVar13) {
          lVar6 = fn_829080F8(param_1,*(undefined4 *)(iVar23 + 0x30),
                                ((ulonglong)*(uint *)(iVar23 + 0x10) & 0x3fffffff) * 4 +
                                (ulonglong)(uint)param_1[6],iVar13,0,0,
                                *(undefined4 *)(iVar23 + 0x3c),*(undefined4 *)(iVar23 + 0x40));
          if (lVar6 < 0) goto LAB_8291454c;
          uVar17 = (ulonglong)*(uint *)(iVar23 + 0x14);
          iVar10 = fn_82903390(param_1,((ulonglong)*(uint *)(iVar23 + 0x10) & 0x3fffffff) * 4 +
                                         (ulonglong)(uint)param_1[6]);
          if (iVar10 == 0) {
            fn_82904258(param_1,iVar23,0xdae,0xffffffff8202dff0,uStack0000001c,
                          *(undefined4 *)(*(int *)(iVar14 + 0x14) + 0x18));
          }
          else {
            uVar26 = 0;
            if ((uVar17 & 0xffffffff) != 0) {
              piVar18 = piVar8 + (uVar22 - 1);
              do {
                uVar22 = uVar22 + 1;
                iVar10 = uVar26 + *(int *)(iVar23 + 0x10);
                uVar26 = uVar26 + 1;
                piVar18 = piVar18 + 1;
                *piVar18 = iVar10;
              } while (uVar26 < *(uint *)(iVar23 + 0x14));
            }
          }
        }
      }
      lVar7 = ((ulonglong)*(uint *)(iVar23 + 0x14) & 0x3fffffff) * 4 + lVar7;
      iVar10 = iStack0000003c;
    }
    lVar7 = 0;
    if (iVar10 != 0) {
      uVar26 = 0;
      piVar18 = piVar8;
      if (uVar22 != 0) {
        do {
          piVar16 = (int *)param_1[2];
          iVar11 = (**(code **)(*piVar16 + 4))
                             (piVar16,*(undefined4 *)
                                       (*(int *)(*piVar18 * 4 + param_1[6]) * 4 + piVar16[5]),1);
          if (iVar11 < 0) goto LAB_82913ff0;
          uVar26 = uVar26 + 1;
          piVar18 = piVar18 + 1;
        } while (uVar26 < uVar22);
      }
      fn_82965280(0xffffffff82903c78,piVar8,uVar22,param_1);
      uVar17 = 0;
      if (uVar22 != 0) {
        piVar18 = *(int **)(*(int *)(*piVar8 * 4 + param_1[6]) * 4 + *(int *)(param_1[2] + 0x14));
        if (1 < uVar22) {
          iVar20 = uVar22 - 1;
          piVar15 = piVar8 + 1;
          piVar16 = piVar15;
          iVar11 = iVar20;
          do {
            piVar4 = *(int **)(*(int *)(*piVar16 * 4 + param_1[6]) * 4 + *(int *)(param_1[2] + 0x14)
                              );
            if (((piVar18[0x1b] == piVar4[0x1b]) && (piVar18[4] == piVar4[4])) &&
               (*piVar18 == *piVar4)) {
              uVar17 = uVar17 + 1;
              piVar4 = piVar18;
            }
            piVar18 = piVar4;
            piVar16 = piVar16 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          if ((uVar17 & 0xffffffff) != 0) {
            lVar6 = (uVar17 & 0x3fffffff) << 2;
            iStack_a8 = fn_8265C940(lVar6,0x24810000);
            if ((iStack_a8 == 0) ||
               (puVar12 = (undefined4 *)fn_8265C940(lVar6,0x24810000),
               puVar12 == (undefined4 *)0x0)) goto LAB_829145b4;
            iVar11 = *piVar8;
            uVar17 = 0;
            iVar14 = *(int *)(*(int *)(iVar11 * 4 + param_1[6]) * 4 + *(int *)(param_1[2] + 0x14));
            puVar19 = puVar12;
            do {
              iVar13 = *piVar15;
              iVar23 = *(int *)(iVar13 * 4 + param_1[6]);
              iVar21 = *(int *)(iVar23 * 4 + *(int *)(param_1[2] + 0x14));
              if ((*(int *)(iVar14 + 0x6c) == *(int *)(iVar21 + 0x6c)) &&
                 (*(int *)(iVar14 + 0x10) == *(int *)(iVar21 + 0x10))) {
                *(int *)((iStack_a8 - (int)puVar12) + (int)puVar19) = iVar23;
                uVar17 = uVar17 + 1;
                *puVar19 = *(undefined4 *)(iVar11 * 4 + param_1[6]);
                puVar19 = puVar19 + 1;
                iVar21 = iVar14;
                iVar13 = iVar11;
              }
              iVar11 = iVar13;
              iVar14 = iVar21;
              piVar15 = piVar15 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
            lVar6 = fn_82904370(param_1,param_3,uVar17 & 0xffffffff000fffff | 0x10000000,iStack_a8
                                  ,puVar12,0,0);
            if (lVar6 < 0) goto LAB_8291454c;
          }
        }
      }
    }
    if (iVar10 != 0) {
      iVar11 = *(int *)(param_1[1] + 0x1c) << 2;
      lVar7 = fn_8265C940(iVar11,0x24810000);
      uStack_b0 = (undefined4)lVar7;
      if (lVar7 == 0) goto LAB_829145b4;
      fn_82F68CC0(lVar7,param_1[6],iVar11);
    }
    uVar2 = param_1[0x14];
    param_1[0x14] = 0;
    *(undefined4 *)(param_3 + 0x48) = 1;
    lVar6 = fn_82913308(param_1,*(undefined4 *)(param_3 + 0x30),lVar7);
    if ((param_1[0x14] != 0) || (bVar5 = false, param_1[0x15] != 0)) {
      bVar5 = true;
    }
    param_1[0x14] = uVar2;
    *(undefined4 *)(param_3 + 0x48) = 0;
    if (-1 < (int)lVar6) {
      if ((bVar5) || (*(int *)(param_3 + 0x14) == 0)) {
        if (iVar10 == 0) {
          if (param_5 != 0) {
            if (param_1[0x15] == 0) {
              fn_82F68CC0(param_5,((ulonglong)*(uint *)(param_3 + 0x10) & 0x3fffffff) * 4 +
                                   (ulonglong)(uint)param_1[6],*(int *)(param_3 + 0x14) << 2);
            }
            else {
              uVar22 = 0;
              if (*(int *)(param_3 + 0x14) != 0) {
                puVar19 = (undefined4 *)(param_5 + -4);
                do {
                  uVar22 = uVar22 + 1;
                  puVar19 = puVar19 + 1;
                  *puVar19 = param_1[9];
                } while (uVar22 < *(uint *)(param_3 + 0x14));
              }
            }
          }
        }
        else if (*(int *)(param_3 + 0x14) != 0) {
          if ((param_1[0x15] != 0) && (uVar22 = 0, *(int *)(param_3 + 0x14) != 0)) {
            do {
              iVar11 = *(int *)(param_3 + 0x10) + uVar22;
              uVar22 = uVar22 + 1;
              *(undefined4 *)(iVar11 * 4 + param_1[6]) = param_1[9];
            } while (uVar22 < *(uint *)(param_3 + 0x14));
          }
          lVar6 = ((ulonglong)*(uint *)(param_3 + 0x10) & 0x3fffffff) * 4 +
                  (ulonglong)(uint)param_1[6];
          lVar6 = fn_82904370(param_1,param_3,*(uint *)(param_3 + 0x14) & 0xfffff | 0x10000000,
                                lVar6,lVar6,0,0);
          if (((lVar6 < 0) ||
              (lVar6 = fn_82907D40(param_1,*(undefined4 *)(param_3 + 0x28),
                                     ((ulonglong)*(uint *)(param_3 + 0x10) & 0x3fffffff) * 4 +
                                     (ulonglong)(uint)param_1[6],*(undefined4 *)(param_3 + 0x14)),
              lVar6 < 0)) ||
             (lVar6 = fn_829080F8(param_1,*(undefined4 *)(param_3 + 0x28),
                                    ((ulonglong)*(uint *)(param_3 + 0x10) & 0x3fffffff) * 4 +
                                    (ulonglong)(uint)param_1[6],*(undefined4 *)(param_1[2] + 0x84),0
                                    ,1,*(undefined4 *)(param_3 + 0x38),0), lVar6 < 0))
          goto LAB_8291454c;
          uVar17 = (ulonglong)*(uint *)(param_3 + 0x14);
          iVar11 = fn_82903390(param_1,((ulonglong)*(uint *)(param_3 + 0x10) & 0x3fffffff) * 4 +
                                         (ulonglong)(uint)param_1[6]);
          if (iVar11 == 0) {
            fn_82904258(param_1,param_3,0xdaf,0xffffffff8202df9c,uStack0000001c);
          }
          else {
            uVar22 = 0;
            if ((uVar17 & 0xffffffff) != 0) {
              do {
                piVar18 = (int *)param_1[2];
                iVar11 = (**(code **)(*piVar18 + 4))
                                   (piVar18,*(undefined4 *)
                                             (*(int *)((*(int *)(param_3 + 0x10) + uVar22) * 4 +
                                                      param_1[6]) * 4 + piVar18[5]),1);
                if (iVar11 < 0) {
                  param_1[0x13] = 1;
                  break;
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 < *(uint *)(param_3 + 0x14));
            }
          }
        }
        iVar11 = *(int *)(param_3 + 0x2c);
joined_r0x82914208:
        if (iVar11 == 0) {
          lVar6 = 0;
        }
        else {
          iVar20 = *(int *)(iVar11 + 8);
          iVar11 = *(int *)(iVar11 + 0xc);
          if (((iVar11 != 0) && (*(int *)(iVar11 + 8) != 0)) &&
             (*(int *)(*(int *)(iVar11 + 8) + 4) == 0xc)) {
            iVar11 = *(int *)(iVar11 + 0xc);
          }
          iVar10 = *(int *)(iVar20 + 0x18);
          if ((*(uint *)(iVar10 + 0x2c) & 0x20) == 0) goto LAB_82914488;
          iVar14 = *(int *)(iVar20 + 0x14);
          uVar22 = *(uint *)(iVar10 + 0x14);
          if (param_1[0x15] == 0) {
            uVar26 = 0;
            if (uVar22 != 0) {
              iVar13 = param_1[2];
              do {
                uVar9 = *(uint *)((*(int *)(iVar10 + 0x10) + uVar26) * 4 + param_1[6]);
                if (uVar9 < *(uint *)(iVar13 + 8)) {
                  iVar23 = *(int *)(*(int *)(iVar13 + 0x14) + uVar9 * 4);
                }
                else {
                  iVar23 = 0;
                }
                if ((iVar23 != 0) && (*(int *)(iVar13 + 0x74) == *(int *)(iVar23 + 4))) {
                  fn_82904258(param_1,*(undefined4 *)(iVar23 + 0x60),0xdb4,0xffffffff8202df34,
                                uStack0000001c,*(undefined4 *)(iVar14 + 0x18));
                  goto LAB_8291454c;
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 < uVar22);
            }
          }
          else {
            uVar26 = 0;
            if (uVar22 != 0) {
              do {
                iVar13 = uVar26 + *(int *)(iVar10 + 0x10);
                uVar26 = uVar26 + 1;
                *(undefined4 *)(iVar13 * 4 + param_1[6]) = param_1[9];
                uVar22 = *(uint *)(iVar10 + 0x14);
              } while (uVar26 < uVar22);
            }
          }
          if (iStack0000003c == 0) goto LAB_8291445c;
          lVar6 = ((ulonglong)*(uint *)(iVar10 + 0x10) & 0x3fffffff) * 4 +
                  (ulonglong)(uint)param_1[6];
          lVar6 = fn_82904370(param_1,iVar10,uVar22 & 0xfffff | 0x10000000,lVar6,lVar6,0,0);
          if (((-1 < lVar6) &&
              (lVar6 = fn_82907D40(param_1,*(undefined4 *)(iVar10 + 0x30),
                                     ((ulonglong)*(uint *)(iVar10 + 0x10) & 0x3fffffff) * 4 +
                                     (ulonglong)(uint)param_1[6],*(undefined4 *)(iVar10 + 0x14)),
              -1 < lVar6)) &&
             (lVar6 = fn_829080F8(param_1,*(undefined4 *)(iVar10 + 0x30),
                                    ((ulonglong)*(uint *)(iVar10 + 0x10) & 0x3fffffff) * 4 +
                                    (ulonglong)(uint)param_1[6],*(undefined4 *)(param_1[2] + 0x84),0
                                    ,1,*(undefined4 *)(iVar10 + 0x3c),0), -1 < lVar6)) {
            uVar17 = (ulonglong)*(uint *)(iVar10 + 0x14);
            iVar13 = fn_82903390(param_1,((ulonglong)*(uint *)(iVar10 + 0x10) & 0x3fffffff) * 4 +
                                           (ulonglong)(uint)param_1[6]);
            if (iVar13 == 0) {
              fn_82904258(param_1,iVar10,0xdaf,0xffffffff8202df68,uStack0000001c,
                            *(undefined4 *)(iVar14 + 0x18));
            }
            else {
              uVar22 = 0;
              if ((uVar17 & 0xffffffff) != 0) {
                do {
                  piVar18 = (int *)param_1[2];
                  iVar14 = (**(code **)(*piVar18 + 4))
                                     (piVar18,*(undefined4 *)
                                               (*(int *)((uVar22 + *(int *)(iVar10 + 0x10)) * 4 +
                                                        param_1[6]) * 4 + piVar18[5]),1);
                  if (iVar14 < 0) {
                    param_1[0x13] = 1;
                    break;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < *(uint *)(iVar10 + 0x14));
              }
            }
            goto LAB_82914488;
          }
        }
        goto LAB_8291454c;
      }
      fn_82904258(param_1,param_3,0xdb3,0xffffffff8202dfcc,uStack0000001c);
LAB_82913ff0:
      lVar6 = -0x7fffbffb;
    }
  }
LAB_8291454c:
  fn_8265C990(uStack_b0,0x24810000);
  fn_8265C990(uStack_ac,0x24810000);
  fn_8265C990(piVar8,0x24810000);
  fn_8265C990(iStack_a8,0x24810000);
  fn_8265C990(puVar12,0x24810000);
  return lVar6;
LAB_8291445c:
  if (iVar25 != 0) {
    if (*(int *)(iVar25 + 8) != 0) {
      lVar6 = fn_82914750(param_1,*(int *)(iVar25 + 8),0,0);
      if (lVar6 < 0) goto LAB_8291454c;
LAB_82914488:
      if ((iStack0000003c != 0) &&
         ((iStack00000044 == 0 || ((*(uint *)(iVar10 + 0x2c) & 0x40) == 0)))) {
        if (((*(uint *)(iVar10 + 0x2c) & 0x40) != 0) &&
           (pcVar3 = *(char **)(*(int *)(iVar20 + 0x14) + 0x18), pcVar24 = pcVar3, *pcVar3 != '$'))
        {
          do {
            cVar1 = *pcVar24;
            pcVar24 = pcVar24 + 1;
          } while (cVar1 != '\0');
          lVar7 = fn_829301D0(*param_1,pcVar24 + (1 - (int)pcVar3),1);
          if (lVar7 == 0) goto LAB_829145b4;
          fn_828F6FA8(lVar7,pcVar24 + (1 - (int)pcVar3),0xffffffff8202df98,pcVar3);
          *(int *)(*(int *)(iVar20 + 0x14) + 0x18) = (int)lVar7;
        }
        goto joined_r0x82914208;
      }
    }
    if (iVar25 != 0) {
      iVar25 = *(int *)(iVar25 + 0xc);
    }
  }
  goto joined_r0x82914208;
}

