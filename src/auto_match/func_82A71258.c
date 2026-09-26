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
extern int fn_82A70960();
extern int fn_82A709E0();
extern int fn_82A70BF8();
extern int fn_82A70FB8();
extern int fn_82A711F8();
extern int fn_82C2B580();
extern int fn_82C2B590();
extern int fn_82C37A98();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_8208DDA0;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82A71258(int param_1,int param_2,int *param_3,int *param_4)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar7;
  longlong lVar6;
  ulonglong uVar8;
  uint uVar10;
  longlong lVar9;
  uint uVar13;
  undefined4 uVar14;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar19;
  ulonglong uVar18;
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
      uVar19 = param_3[10];
      uVar10 = param_3[8];
    }
    else {
      if (param_3[6] == 1) {
        return 0xffffffff80070057;
      }
      iVar16 = *(int *)(param_2 + 4);
      uVar19 = (uint)*(ushort *)(param_2 + 0x12);
      uVar10 = (uint)*(ushort *)(param_2 + 2);
    }
    if (iVar16 < 1) {
      return 0xffffffff80070057;
    }
    uVar13 = 0x18 - uVar19;
    *(uint *)(param_1 + 0x7c) = uVar13;
    if ((int)uVar13 < 0) {
      uStack_a0 = (ulonglong)(1 << (-uVar13 & 0x3f));
      *(float *)(param_1 + 0x80) = lbl_82002AE0 / (float)(longlong)uStack_a0;
    }
    else {
      uStack_a0 = (ulonglong)(1 << (uVar13 & 0x3f));
      *(float *)(param_1 + 0x80) = (float)(longlong)uStack_a0;
    }
    iVar2 = param_3[0xb];
    *(uint *)(param_1 + 0x78) = uVar10;
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
        uVar10 = *(uint *)(param_1 + 0x34);
        if ((int)uVar10 < 2) {
          return 0xffffffff80070057;
        }
        if (*pdVar1 != lbl_8208DDA0) {
          return 0xffffffff80070057;
        }
        if (pdVar1[uVar10 * 2 + -2] != lbl_82005710) {
          return 0xffffffff80070057;
        }
        dVar21 = lbl_82005710;
        iVar2 = fn_82C2B580(((ulonglong)uVar10 + ((ulonglong)uVar10 & 0x7fffffff) * 2 & 0x1fffffff)
                             << 3);
        *(int *)(param_1 + 0x30) = iVar2;
        if (iVar2 == 0) {
          return 0xffffffff8007000e;
        }
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x34) << 1) {
          iVar4 = 0;
          iVar3 = 0;
          do {
            *(undefined8 *)(*(int *)(param_1 + 0x30) + iVar3) =
                 *(undefined8 *)(iVar4 + param_4[0xc]);
            *(undefined8 *)(*(int *)(param_1 + 0x30) + iVar3 + 8) =
                 *(undefined8 *)(iVar4 + param_4[0xc] + 8);
            if (iVar2 == *(int *)(param_1 + 0x34) * 2 + -2) {
              *(double *)(*(int *)(param_1 + 0x30) + iVar3 + 0x10) = dVar21;
            }
            else {
              iVar15 = param_4[0xc];
              iVar7 = iVar4 + 0x10;
              *(double *)(*(int *)(param_1 + 0x30) + iVar3 + 0x10) =
                   (*(double *)(iVar7 + iVar15 + 8) - *(double *)(iVar4 + iVar15 + 8)) /
                   (*(double *)(iVar7 + iVar15) - *(double *)(iVar4 + iVar15));
              if (*(double *)(iVar7 + param_4[0xc]) < *(double *)(iVar4 + param_4[0xc])) {
                return 0xffffffff80070057;
              }
            }
            iVar2 = iVar2 + 2;
            iVar3 = iVar3 + 0x18;
            iVar4 = iVar4 + 0x10;
          } while (iVar2 < *(int *)(param_1 + 0x34) << 1);
        }
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
        *(undefined4 *)(param_1 + 0x3c) = 100;
        *(undefined4 *)(param_1 + 0x40) = 500;
      }
      if (((param_4[9] != 0) || (param_4[10] != 0)) || (uVar14 = 0, param_4[0xb] != 0)) {
        uVar14 = 1;
      }
      *(undefined4 *)(param_1 + 0x24) = uVar14;
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
            iVar2 = fn_82A70960(0xffffffff82090f94,(*(int *)(param_1 + 0x3c) * iVar16) / 1000);
            *(int *)(param_1 + 0xb0) = 0x40000000 - iVar2;
          }
          iVar2 = *(int *)(param_1 + 0xb0);
          *(int *)(param_1 + 0xb8) = 0x40000000 - iVar2;
          if (*(int *)(param_1 + 0x40) == 0) {
            *(undefined4 *)(param_1 + 0xb4) = 0x40000000;
          }
          else {
            iVar3 = fn_82A70960(0xffffffff82090f94,(*(int *)(param_1 + 0x40) * iVar16) / 1000);
            *(int *)(param_1 + 0xb4) = 0x40000000 - iVar3;
          }
          iVar3 = *(int *)(param_1 + 0xb4);
          *(int *)(param_1 + 0xbc) = 0x40000000 - iVar3;
          if (*(int *)(param_1 + 0x50) == 0) {
            *(undefined4 *)(param_1 + 0x94) = 0x40000000;
          }
          else {
            iVar4 = fn_82A70960(0xffffffff82090f94,(*(int *)(param_1 + 0x50) * iVar16) / 1000);
            *(int *)(param_1 + 0x94) = 0x40000000 - iVar4;
          }
          *(int *)(param_1 + 0x9c) = 0x40000000 - *(int *)(param_1 + 0x94);
          if (*(int *)(param_1 + 0x54) == 0) {
            *(undefined4 *)(param_1 + 0x98) = 0x40000000;
          }
          else {
            iVar4 = fn_82A70960(0xffffffff82090f94,(*(int *)(param_1 + 0x54) * iVar16) / 1000);
            *(int *)(param_1 + 0x98) = 0x40000000 - iVar4;
          }
          *(int *)(param_1 + 0xa4) = 0x40000000 / iVar2;
          *(int *)(param_1 + 0xa8) = 0x40000000 / iVar3;
          *(int *)(param_1 + 0xa0) = 0x40000000 - *(int *)(param_1 + 0x98);
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
            uVar18 = (ulonglong)uStack_b0;
            uVar20 = (ulonglong)uStack_ac;
            uVar11 = uStack_a0 >> 0x20;
            uVar8 = (ulonglong)auStack_a8[0];
          }
          else {
            uVar17 = fn_82A709E0(&uStack_b0,*(undefined8 *)(param_3 + 4),param_3[1],uVar19);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar17 = fn_82A709E0(&uStack_ac,*(undefined8 *)(param_3 + 2),*param_3,uVar19);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar17 = fn_82A709E0(&uStack_a0,*(undefined8 *)(param_4 + 4),param_4[1],uVar19);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar17 = fn_82A709E0(auStack_a8,*(undefined8 *)(param_4 + 6),*param_4);
            if ((int)uVar17 < 0) {
              return uVar17;
            }
            uVar20 = (ulonglong)uStack_ac;
            uVar18 = (ulonglong)uStack_b0;
            uVar11 = (ulonglong)(((U64)(uStack_a0) >> 0) & 0xFFFFFFFF);
            uVar8 = (ulonglong)auStack_a8[0];
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
            if (((int)uVar18 == (int)uVar11) && (iVar2 == (int)uVar8)) {
              uVar8 = uVar18 + 0xc00000;
              uVar8 = -(ulonglong)!CARRY8(-uVar8,uVar8 ^ 0x80000000) & uVar8;
            }
            lVar6 = (longlong)((int)uVar8 - (int)uVar11 >> 1) + uVar11;
            lVar9 = ((uVar11 - uVar8) - uVar18) + uVar20;
            uVar19 = (uint)lVar9;
            *(undefined4 *)(param_1 + 0x100) = 2;
            lVar9 = (longlong)
                    ((int)((-1 - ((int)uVar19 >> 0x1f)) + (uint)(lVar9 == 0) & uVar19) >> 3);
            uVar12 = lVar9 + uVar11;
            uVar8 = lVar9 + uVar8;
            lVar9 = ((uVar11 - lVar6) - uVar18) + uVar20;
            uVar19 = (uint)lVar9;
            auStack_a8[0] = -(uint)!CARRY8(-uVar8,uVar8 ^ 0x80000000) & (uint)uVar8;
            lVar9 = (longlong)
                    ((int)((-1 - ((int)uVar19 >> 0x1f)) + (uint)(lVar9 == 0) & uVar19) >> 3);
            uVar11 = lVar9 + uVar11;
            uVar8 = lVar9 + lVar6;
            uStack_a0 = CONCAT44(-(uint)!CARRY8(-uVar12,uVar12 ^ 0x80000000) & (uint)uVar12,
                                 -(uint)!CARRY8(-uVar11,uVar11 ^ 0x80000000) & (uint)uVar11);
            auStack_a8[1] =
                 (int)-uVar11 + ((uint)uVar11 - (uint)!CARRY8(-uVar8,uVar8 ^ 0x80000000)) &
                 (uint)uVar8;
          }
          if (*(int *)(param_1 + 0x100) < 1) {
            if ((*(int *)(param_1 + 0x6c) == 0) ||
               ((*(int *)(param_1 + 0x2c) != 0 &&
                ((*(int *)(param_1 + 8) == 0 || (*(int *)(param_1 + 0x68) == 0)))))) {
              if ((1 < *(int *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x6c) == 0)) {
                return 0xffffffff80040000;
              }
              uVar14 = 0;
              lVar6 = 0;
              if (0 < *(int *)(param_1 + 0x100)) {
                iVar3 = 0;
                uVar14 = 0;
                do {
                  *(undefined4 *)(param_1 + 200) = 0;
                  *(undefined4 *)(param_1 + 0xd0) = 0;
                  *(undefined4 *)(param_1 + 0xcc) = 0;
                  *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc4)) = 0;
                  if (*(int *)(param_1 + 8) != 0) {
                    uVar11 = (longlong)((int)*(uint *)((int)&uStack_a0 + iVar3) >> 0x1f) &
                             (ulonglong)*(uint *)((int)&uStack_a0 + iVar3);
                    uVar19 = (int)*(uint *)((int)auStack_a8 + iVar3) >> 0x1f &
                             *(uint *)((int)auStack_a8 + iVar3);
                    lVar9 = uVar11 - uVar18;
                    *(int *)((int)&uStack_a0 + iVar3) = (int)uVar11;
                    *(uint *)((int)auStack_a8 + iVar3) = uVar19;
                    iVar4 = (int)lVar9;
                    *(int *)(param_1 + 200) = iVar4;
                    if (iVar4 < -0x4000000) {
                      lVar9 = -0x4000000;
                    }
                    else if (0x3ffffff < iVar4) {
                      lVar9 = 0x3ffffff;
                    }
                    uVar5 = fn_82A70960(0xffffffff82090e6c,lVar9);
                    *(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar3) = uVar5;
                    iVar4 = *(int *)(param_1 + 200);
                    if (((iVar4 < -0x28f4) || (0x28f4 < iVar4)) || ((int)(uVar19 - iVar2) < -0x28f4)
                       ) {
                      uVar14 = 1;
                    }
                    if ((int)uVar19 <= iVar4 + iVar2) {
                      iVar15 = (uVar19 - iVar4) + *(int *)(param_1 + 0x20);
                      iVar4 = iVar15 >> 10;
                      *(int *)(param_1 + 0xd0) = iVar15;
                      if (iVar4 == 0) {
                        iVar4 = 0;
                      }
                      else {
                        iVar4 = *(int *)(param_1 + 0x20) / iVar4 << 10;
                      }
                      *(int *)(param_1 + 0xcc) = iVar4;
                      *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc4)) =
                           *(undefined4 *)(param_1 + 0x68);
                    }
                  }
                  if (((*(int *)(param_1 + 0x2c) == 0) ||
                      (*(int *)(iVar3 + *(int *)(param_1 + 0xc4)) != 0)) &&
                     (uVar17 = fn_82A70FB8(param_1,lVar6), (int)uVar17 < 0)) {
                    return uVar17;
                  }
                  lVar6 = lVar6 + 1;
                  iVar3 = iVar3 + 4;
                } while ((int)lVar6 < *(int *)(param_1 + 0x100));
              }
              *(undefined4 *)(param_1 + 8) = uVar14;
              iVar2 = 0;
              *(undefined4 *)(param_1 + 0x114) = 0x7ffffe;
              if (0 < *(int *)(param_1 + 0x100)) {
                iVar3 = 0;
                do {
                  *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x118)) = 0x7ffffe;
                  if (*(int *)(param_1 + 8) != 0) {
                    uVar19 = *(uint *)((int)auStack_a8 + iVar3);
                    if ((int)uVar19 < -0x4000000) {
                      uVar11 = 0xfffffffffc000000;
                    }
                    else {
                      uVar11 = (ulonglong)uVar19;
                      if (0x3ffffff < (int)uVar19) {
                        uVar11 = 0x3ffffff;
                      }
                    }
                    iVar4 = fn_82A70960(0xffffffff82090e6c,uVar11);
                    *(int *)(iVar3 + *(int *)(param_1 + 0x118)) =
                         (int)((longlong)iVar4 * 0x7ffffe >> 0x14);
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = iVar3 + 4;
                } while (iVar2 < *(int *)(param_1 + 0x100));
              }
              if (*(int *)(param_1 + 0x2c) != 0) {
                if ((*(int *)(param_1 + 0x24) != 0) &&
                   (uVar17 = fn_82A711F8(param_1), (int)uVar17 < 0)) {
                  return uVar17;
                }
                if ((*(int *)(param_1 + 8) == 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x100))) {
                  iVar3 = 0;
                  do {
                    iVar2 = iVar2 + 1;
                    *(undefined4 *)(iVar3 + *(int *)(param_1 + 0xc0)) = 0x100000;
                    iVar3 = iVar3 + 4;
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
                uVar19 = *(int *)(param_1 + 0xd4) + 1;
                if (*(int *)(param_1 + 100) != 0) {
                  uVar19 = ((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0);
                  *(uint *)(param_1 + 0xe4) =
                       ((int)uVar19 >> 1) + (uint)((int)uVar19 < 0 && (uVar19 & 1) != 0);
                }
                *(uint *)(param_1 + 0xe0) = uVar19;
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
            uVar11 = fn_82C2B580(*(int *)(param_1 + 0x100) << 2);
            *(int *)(param_1 + 0x104) = (int)uVar11;
            if ((uVar11 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(uVar11,0,*(int *)(param_1 + 0x100) << 2);
            }
          }
          else {
            uVar11 = fn_82C2B580(*(int *)(param_1 + 0x100) << 2);
            *(int *)(param_1 + 0xc0) = (int)uVar11;
            if ((uVar11 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(uVar11,0,*(int *)(param_1 + 0x100) << 2);
            }
          }
        }
      }
      return 0xffffffff8007000e;
    }
  }
  return 0xffffffff80070057;
}

