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
#define CARRY8(a,b) ((((U64)(a)) + ((U64)(b))) < ((U64)(a)))
extern unsigned int *auStack_a8;
extern int fn_82A70BF8();
extern int fn_82C2B580();
extern int fn_82C2B590();
extern int fn_82C37940();
extern int fn_82C379D0();
extern int fn_82C37A98();
extern int fn_82C37D00();
extern int fn_82C37F48();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_8208DDA0;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82C37FA8(int param_1,int param_2,int *param_3,int *param_4)

{
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar6;
  longlong lVar5;
  int iVar8;
  ulonglong uVar7;
  int iVar9;
  uint uVar11;
  longlong lVar10;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  uint uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [2];
  undefined8 uStack_a0;
  
  uVar17 = 0;
  fn_82A70BF8();
  if (param_3 != (int *)0x0) {
    if (param_2 == 0) {
      if (param_3[6] == 0) {
        return 0xffffffff80070057;
      }
      iVar16 = param_3[7];
      uVar18 = param_3[10];
      uVar11 = param_3[8];
    }
    else {
      if (param_3[6] == 1) {
        return 0xffffffff80070057;
      }
      iVar16 = *(int *)(param_2 + 4);
      uVar18 = (uint)*(ushort *)(param_2 + 0x12);
      uVar11 = (uint)*(ushort *)(param_2 + 2);
    }
    if (iVar16 < 1) {
      return 0xffffffff80070057;
    }
    uVar14 = 0x18 - uVar18;
    *(uint *)(param_1 + 0x7c) = uVar14;
    if ((int)uVar14 < 0) {
      uStack_a0 = (ulonglong)(1 << (-uVar14 & 0x3f));
      *(float *)(param_1 + 0x80) = lbl_82002AE0 / (float)(longlong)uStack_a0;
    }
    else {
      uStack_a0 = (ulonglong)(1 << (uVar14 & 0x3f));
      *(float *)(param_1 + 0x80) = (float)(longlong)uStack_a0;
    }
    iVar2 = param_3[0xb];
    *(uint *)(param_1 + 0x78) = uVar11;
    *(int *)(param_1 + 0x11c) = iVar2;
    if (param_4 == (int *)0x0) {
      fn_82C37A98(param_1);
    }
    else {
      if (param_4[0xf] < 0) {
        return 0xffffffff80070057;
      }
      if (param_4[0x10] < 0) {
        return 0xffffffff80070057;
      }
      if (param_4[0x14] < 0) {
        return 0xffffffff80070057;
      }
      if (param_4[0x15] < 0) {
        return 0xffffffff80070057;
      }
      if (param_4[0x17] < 0) {
        return 0xffffffff80070057;
      }
      fn_82F68CC0(param_1,param_4,0x78);
      *(undefined4 *)(param_1 + 0x30) = 0;
      if ((*(int *)(param_1 + 0x24) != 0) || (*(int *)(param_1 + 0x28) != 0)) {
        pdVar1 = (double *)param_4[0xc];
        if (pdVar1 == (double *)0x0) {
          return 0xffffffff80070057;
        }
        uVar11 = *(uint *)(param_1 + 0x34);
        if ((int)uVar11 < 2) {
          return 0xffffffff80070057;
        }
        if (*pdVar1 != lbl_8208DDA0) {
          return 0xffffffff80070057;
        }
        if (pdVar1[uVar11 * 2 + -2] != lbl_82005710) {
          return 0xffffffff80070057;
        }
        dVar21 = lbl_82005710;
        iVar2 = fn_82C2B580(((ulonglong)uVar11 + ((ulonglong)uVar11 & 0x7fffffff) * 2 & 0x1fffffff
                              ) << 3);
        *(int *)(param_1 + 0x30) = iVar2;
        if (iVar2 == 0) {
          return 0xffffffff8007000e;
        }
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x34) << 1) {
          iVar4 = 0;
          iVar8 = 0;
          do {
            *(undefined8 *)(*(int *)(param_1 + 0x30) + iVar8) =
                 *(undefined8 *)(iVar4 + param_4[0xc]);
            *(undefined8 *)(*(int *)(param_1 + 0x30) + iVar8 + 8) =
                 *(undefined8 *)(iVar4 + param_4[0xc] + 8);
            if (iVar2 == *(int *)(param_1 + 0x34) * 2 + -2) {
              *(double *)(*(int *)(param_1 + 0x30) + iVar8 + 0x10) = dVar21;
            }
            else {
              iVar9 = param_4[0xc];
              iVar6 = iVar4 + 0x10;
              *(double *)(*(int *)(param_1 + 0x30) + iVar8 + 0x10) =
                   (*(double *)(iVar6 + iVar9 + 8) - *(double *)(iVar4 + iVar9 + 8)) /
                   (*(double *)(iVar6 + iVar9) - *(double *)(iVar4 + iVar9));
              if (*(double *)(iVar6 + param_4[0xc]) < *(double *)(iVar4 + param_4[0xc])) {
                return 0xffffffff80070057;
              }
            }
            iVar2 = iVar2 + 2;
            iVar8 = iVar8 + 0x18;
            iVar4 = iVar4 + 0x10;
          } while (iVar2 < *(int *)(param_1 + 0x34) << 1);
        }
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
        *(undefined4 *)(param_1 + 0x3c) = 100;
        *(undefined4 *)(param_1 + 0x40) = 500;
      }
      if (((param_4[9] != 0) || (param_4[10] != 0)) || (uVar15 = 0, param_4[0xb] != 0)) {
        uVar15 = 1;
      }
      *(undefined4 *)(param_1 + 0x24) = uVar15;
      if (*(int *)(param_1 + 100) != 0) {
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
      if (*(int *)(param_1 + 0x68) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    if ((((*(int *)(param_1 + 0x44) == 0) || (iVar2 = *(int *)(param_1 + 0x78), iVar2 == 1)) ||
        ((iVar2 == 2 || (iVar2 == 6)))) &&
       ((*(int *)(param_1 + 0x48) == 0 || (*(int *)(param_1 + 0x4c) == 0)))) {
      iVar2 = fn_82C2B580(*(int *)(param_1 + 0x78) << 2);
      *(int *)(param_1 + 0x120) = iVar2;
      if (iVar2 != 0) {
        iVar2 = fn_82C2B580(*(int *)(param_1 + 0x78) << 2);
        *(int *)(param_1 + 0x124) = iVar2;
        if (iVar2 != 0) {
          if (*(int *)(param_1 + 0x3c) == 0) {
            *(undefined4 *)(param_1 + 0xb0) = 0x40000000;
          }
          else {
            iVar2 = fn_82C37940(0xffffffff820ef554,(*(int *)(param_1 + 0x3c) * iVar16) / 1000);
            *(int *)(param_1 + 0xb0) = 0x40000000 - iVar2;
          }
          uVar11 = *(uint *)(param_1 + 0xb0);
          *(uint *)(param_1 + 0xb8) = 0x40000000 - uVar11;
          if (*(int *)(param_1 + 0x40) == 0) {
            *(undefined4 *)(param_1 + 0xb4) = 0x40000000;
          }
          else {
            iVar2 = fn_82C37940(0xffffffff820ef554,(*(int *)(param_1 + 0x40) * iVar16) / 1000);
            *(int *)(param_1 + 0xb4) = 0x40000000 - iVar2;
          }
          uVar14 = *(uint *)(param_1 + 0xb4);
          *(uint *)(param_1 + 0xbc) = 0x40000000 - uVar14;
          if (*(int *)(param_1 + 0x50) == 0) {
            *(undefined4 *)(param_1 + 0x94) = 0x40000000;
          }
          else {
            iVar2 = fn_82C37940(0xffffffff820ef554,(*(int *)(param_1 + 0x50) * iVar16) / 1000);
            *(int *)(param_1 + 0x94) = 0x40000000 - iVar2;
          }
          *(int *)(param_1 + 0x9c) = 0x40000000 - *(int *)(param_1 + 0x94);
          if (*(int *)(param_1 + 0x54) == 0) {
            *(undefined4 *)(param_1 + 0x98) = 0x40000000;
          }
          else {
            iVar2 = fn_82C37940(0xffffffff820ef554,(*(int *)(param_1 + 0x54) * iVar16) / 1000);
            *(int *)(param_1 + 0x98) = 0x40000000 - iVar2;
          }
          *(int *)(param_1 + 0xa4) = 0x40000000 / (int)uVar11;
          *(int *)(param_1 + 0xa8) = 0x40000000 / (int)uVar14;
          trapWord(6,(ulonglong)uVar11,0);
          *(int *)(param_1 + 0xa0) = 0x40000000 - *(int *)(param_1 + 0x98);
          trapWord(6,(ulonglong)uVar14,0);
          if ((param_3[1] == 3) && (param_3[4] < 1)) {
            *(undefined4 *)(param_1 + 8) = 0;
          }
          if ((*param_3 == 3) && (param_3[2] < 1)) {
            *param_3 = 1;
            param_3[2] = 0;
          }
          if ((param_4[1] == 3) && (param_4[4] < 1)) {
            param_4[1] = param_3[1];
            *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_3 + 4);
          }
          if ((*param_4 == 3) && (param_4[6] < 1)) {
            *param_4 = *param_3;
            *(undefined8 *)(param_4 + 6) = *(undefined8 *)(param_3 + 2);
          }
          if (*(int *)(param_1 + 8) == 0) {
            uVar19 = (ulonglong)uStack_b0;
            uVar20 = (ulonglong)uStack_ac;
            uVar12 = uStack_a0 >> 0x20;
            uVar7 = (ulonglong)auStack_a8[0];
          }
          else {
            uVar17 = fn_82C379D0(&uStack_b0,*(undefined8 *)(param_3 + 4),param_3[1],uVar18);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar17 = fn_82C379D0(&uStack_ac,*(undefined8 *)(param_3 + 2),*param_3,uVar18);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar17 = fn_82C379D0(&uStack_a0,*(undefined8 *)(param_4 + 4),param_4[1],uVar18);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar17 = fn_82C379D0(auStack_a8,*(undefined8 *)(param_4 + 6),*param_4);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar20 = (ulonglong)uStack_ac;
            uVar19 = (ulonglong)uStack_b0;
            uVar12 = (ulonglong)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF);
            uVar7 = (ulonglong)auStack_a8[0];
            if (((int)uStack_ac < (int)uStack_b0) || ((int)auStack_a8[0] < (int)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF))) {
              *(undefined4 *)(param_1 + 8) = 0;
            }
          }
          if ((*(int *)(param_1 + 0x2c) == 0) ||
             ((*(int *)(param_1 + 8) != 0 && (*(int *)(param_1 + 0x68) != 0)))) {
            *(undefined4 *)(param_1 + 0x100) = 1;
          }
          iVar2 = (int)uVar20;
          if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x70) != 0)) {
            if (((int)uVar19 == (int)uVar12) && (iVar2 == (int)uVar7)) {
              uVar7 = uVar19 + 0xc00000;
              uVar7 = -(ulonglong)!CARRY8(-uVar7,uVar7 ^ 0x80000000) & uVar7;
            }
            lVar5 = (longlong)((int)uVar7 - (int)uVar12 >> 1) + uVar12;
            lVar10 = ((uVar12 - uVar7) - uVar19) + uVar20;
            uVar18 = (uint)lVar10;
            *(undefined4 *)(param_1 + 0x100) = 2;
            lVar10 = (longlong)
                     ((int)((-1 - ((int)uVar18 >> 0x1f)) + (uint)(lVar10 == 0) & uVar18) >> 3);
            uVar13 = lVar10 + uVar12;
            uVar7 = lVar10 + uVar7;
            lVar10 = ((uVar12 - lVar5) - uVar19) + uVar20;
            uVar18 = (uint)lVar10;
            auStack_a8[0] = -(uint)!CARRY8(-uVar7,uVar7 ^ 0x80000000) & (uint)uVar7;
            lVar10 = (longlong)
                     ((int)((-1 - ((int)uVar18 >> 0x1f)) + (uint)(lVar10 == 0) & uVar18) >> 3);
            uVar12 = lVar10 + uVar12;
            uVar7 = lVar10 + lVar5;
            uStack_a0 = CONCAT44(-(uint)!CARRY8(-uVar13,uVar13 ^ 0x80000000) & (uint)uVar13,
                                 -(uint)!CARRY8(-uVar12,uVar12 ^ 0x80000000) & (uint)uVar12);
            auStack_a8[1] =
                 (int)-uVar12 + ((uint)uVar12 - (uint)!CARRY8(-uVar7,uVar7 ^ 0x80000000)) &
                 (uint)uVar7;
          }
          if (*(int *)(param_1 + 0x100) < 1) {
            if ((*(int *)(param_1 + 0x6c) == 0) ||
               ((*(int *)(param_1 + 0x2c) != 0 &&
                ((*(int *)(param_1 + 8) == 0 || (*(int *)(param_1 + 0x68) == 0)))))) {
              if ((1 < *(int *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x6c) == 0)) {
                return 0xffffffff80040000;
              }
              uVar15 = 0;
              lVar5 = 0;
              if (0 < *(int *)(param_1 + 0x100)) {
                iVar8 = 0;
                uVar15 = 0;
                do {
                  *(undefined4 *)(param_1 + 200) = 0;
                  *(undefined4 *)(param_1 + 0xd0) = 0;
                  *(undefined4 *)(param_1 + 0xcc) = 0;
                  *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xc4)) = 0;
                  if (*(int *)(param_1 + 8) != 0) {
                    uVar12 = (longlong)((int)*(uint *)((int)&uStack_a0 + iVar8) >> 0x1f) &
                             (ulonglong)*(uint *)((int)&uStack_a0 + iVar8);
                    uVar18 = (int)*(uint *)((int)auStack_a8 + iVar8) >> 0x1f &
                             *(uint *)((int)auStack_a8 + iVar8);
                    lVar10 = uVar12 - uVar19;
                    *(int *)((int)&uStack_a0 + iVar8) = (int)uVar12;
                    *(uint *)((int)auStack_a8 + iVar8) = uVar18;
                    iVar4 = (int)lVar10;
                    *(int *)(param_1 + 200) = iVar4;
                    if (iVar4 < -0x4000000) {
                      lVar10 = -0x4000000;
                    }
                    else if (0x3ffffff < iVar4) {
                      lVar10 = 0x3ffffff;
                    }
                    uVar3 = fn_82C37940(0xffffffff820ef42c,lVar10);
                    *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar8) = uVar3;
                    iVar4 = *(int *)(param_1 + 200);
                    if (((iVar4 < -0x28f4) || (0x28f4 < iVar4)) || ((int)(uVar18 - iVar2) < -0x28f4)
                       ) {
                      uVar15 = 1;
                    }
                    if ((int)uVar18 <= iVar4 + iVar2) {
                      uVar11 = *(uint *)(param_1 + 0x20);
                      iVar9 = (uVar18 - iVar4) + uVar11;
                      iVar4 = iVar9 >> 10;
                      uVar12 = (ulonglong)iVar4;
                      *(int *)(param_1 + 0xd0) = iVar9;
                      if (uVar12 == 0) {
                        iVar4 = 0;
                      }
                      else {
                        trapWord(6,uVar12,0);
                        iVar4 = (int)uVar11 / iVar4 << 10;
                        trapWord(5,uVar12 & ~((((ulonglong)uVar11 & 0x7fffffff) << 1 |
                                              (ulonglong)(uVar11 >> 0x1f)) - 1),0xffff);
                      }
                      *(int *)(param_1 + 0xcc) = iVar4;
                      *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xc4)) =
                           *(undefined4 *)(param_1 + 0x68);
                    }
                  }
                  if (((*(int *)(param_1 + 0x2c) == 0) ||
                      (*(int *)(iVar8 + *(int *)(param_1 + 0xc4)) != 0)) &&
                     (uVar17 = fn_82C37D00(param_1,lVar5), (int)uVar17 < 0)) {
                    return uVar17;
                  }
                  lVar5 = lVar5 + 1;
                  iVar8 = iVar8 + 4;
                } while ((int)lVar5 < *(int *)(param_1 + 0x100));
              }
              *(undefined4 *)(param_1 + 8) = uVar15;
              iVar2 = 0;
              *(undefined4 *)(param_1 + 0x114) = 0x7ffffe;
              if (0 < *(int *)(param_1 + 0x100)) {
                iVar8 = 0;
                do {
                  *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x118)) = 0x7ffffe;
                  if (*(int *)(param_1 + 8) != 0) {
                    uVar18 = *(uint *)((int)auStack_a8 + iVar8);
                    if ((int)uVar18 < -0x4000000) {
                      uVar12 = 0xfffffffffc000000;
                    }
                    else {
                      uVar12 = (ulonglong)uVar18;
                      if (0x3ffffff < (int)uVar18) {
                        uVar12 = 0x3ffffff;
                      }
                    }
                    iVar4 = fn_82C37940(0xffffffff820ef42c,uVar12);
                    *(int *)(iVar8 + *(int *)(param_1 + 0x118)) =
                         (int)((longlong)iVar4 * 0x7ffffe >> 0x14);
                  }
                  iVar2 = iVar2 + 1;
                  iVar8 = iVar8 + 4;
                } while (iVar2 < *(int *)(param_1 + 0x100));
              }
              if (*(int *)(param_1 + 0x2c) != 0) {
                if ((*(int *)(param_1 + 0x24) != 0) &&
                   (uVar17 = fn_82C37F48(param_1), (int)uVar17 < 0)) {
                  return uVar17;
                }
                if ((*(int *)(param_1 + 8) == 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x100))) {
                  iVar8 = 0;
                  do {
                    iVar2 = iVar2 + 1;
                    *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xc0)) = 0x100000;
                    iVar8 = iVar8 + 4;
                  } while (iVar2 < *(int *)(param_1 + 0x100));
                }
              }
              if (*(int *)(param_1 + 0x6c) != 0) {
                if (*(int *)(param_1 + 0x30) != 0) {
                  fn_82C2B590();
                }
                *(undefined4 *)(param_1 + 0x30) = 0;
                *(undefined4 *)(param_1 + 0x34) = 0;
              }
              *(undefined4 *)(param_1 + 0x90) = 0;
              *(undefined4 *)(param_1 + 0xac) = 0x100000;
              *(undefined4 *)(param_1 + 0xd8) = 0;
              if (*(int *)(param_1 + 0x58) == 0) {
                *(undefined4 *)(param_1 + 0xd4) = 0;
              }
              else {
                *(int *)(param_1 + 0xd4) = (*(int *)(param_1 + 0x5c) * iVar16) / 1000;
              }
              if (*(int *)(param_1 + 0x60) != 0) {
                uVar18 = *(int *)(param_1 + 0xd4) + 1;
                if (*(int *)(param_1 + 100) != 0) {
                  uVar18 = ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0);
                  *(uint *)(param_1 + 0xe4) =
                       ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0);
                }
                *(uint *)(param_1 + 0xe0) = uVar18;
                *(undefined4 *)(param_1 + 0xdc) = 0;
                *(undefined4 *)(param_1 + 0xec) = 0;
                *(undefined4 *)(param_1 + 0xe8) = 0;
                if (*(int *)(param_1 + 100) != 0) {
                  *(undefined4 *)(param_1 + 0xf0) = 0x100000;
                  *(undefined4 *)(param_1 + 0xf4) = 0x100000;
                  *(undefined4 *)(param_1 + 0xf8) = 0;
                  *(undefined4 *)(param_1 + 0xfc) = 0;
                  return uVar17;
                }
                return uVar17;
              }
              return uVar17;
            }
            uVar12 = fn_82C2B580(*(int *)(param_1 + 0x100) << 2);
            *(int *)(param_1 + 0x104) = (int)uVar12;
            if ((uVar12 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(uVar12,0,*(int *)(param_1 + 0x100) << 2);
            }
          }
          else {
            uVar12 = fn_82C2B580(*(int *)(param_1 + 0x100) << 2);
            *(int *)(param_1 + 0xc0) = (int)uVar12;
            if ((uVar12 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(uVar12,0,*(int *)(param_1 + 0x100) << 2);
            }
          }
        }
      }
      return 0xffffffff8007000e;
    }
  }
  return 0xffffffff80070057;
}

