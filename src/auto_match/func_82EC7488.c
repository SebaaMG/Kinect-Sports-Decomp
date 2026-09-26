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
extern int fn_82E85CF0();
extern int fn_82E8D8E0();
extern int fn_82E9B280();
extern int fn_82EC7228();
extern int fn_82F07788();
extern int fn_82F0F9A0();
extern int fn_82F26618();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8215F7F0;
extern unsigned int lbl_8215F878;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_82EC7488(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar9;
  ulonglong uVar8;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  longlong lStack_80;
  
  *(undefined4 *)(param_1 + 0x1e94) = 4;
  *(undefined4 *)(param_1 + 0x904) = 1;
  lVar10 = (ulonglong)*(uint *)(param_1 + 0x1db0) - 1;
  *(int *)(param_1 + 0x4b1c) = *(int *)(param_1 + 0x588) << 4;
  fn_82EC7228(param_1,-(uint)(lVar10 != 0) & *(uint *)(param_1 + 0x1fa8),
                *(uint *)(param_1 + 0x1fa8),param_4,-lVar10);
  fn_82E8D8E0(param_1);
  if (*(int *)(param_1 + 0xaf0) == 1) {
    uVar11 = *(undefined4 *)(param_1 + 0x5158);
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x515c);
  }
  *(undefined4 *)(param_1 + 0x5154) = uVar11;
  if (*(int *)(param_1 + 0x6d74) == 0) {
    *(int *)(param_1 + 0x4b20) = *(int *)(param_1 + 0x588) << 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x4b20) = *(undefined4 *)(param_1 + 0x6f14);
  }
  fn_82F0F9A0(param_1,6);
  fn_82F07788(param_1,((ulonglong)*(uint *)(param_1 + 0x2d0) + 4 & 0x3fffffff) << 2);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    if ((*(int *)(param_1 + 0x89c) == 0) || (*(int *)(param_1 + 0x89c) == 1)) {
      *(undefined4 *)(param_1 + 0x89c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x89c) = 3;
    }
  }
  uVar11 = *(undefined4 *)(param_1 + 0x7b2c);
  if (*(int *)(param_1 + 0x6d74) != 0) {
    *(undefined4 *)(param_1 + 0x7b2c) = 0;
    if (*(int *)(param_1 + 0x594) == 0) {
      uVar12 = *(undefined4 *)(param_1 + 0x201c);
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + 0x2020);
    }
    *(undefined4 *)(param_1 + 0x2010) = uVar12;
  }
  fn_82F0F9A0(param_1,9);
  *(uint *)(param_1 + 0x4c00) = *(uint *)(param_1 + 0x4c00) >> 2;
  if (*(int *)(param_1 + 0x6d74) != 0) {
    *(undefined4 *)(param_1 + 0x7b2c) = uVar11;
    if (*(int *)(param_1 + 0x594) == 0) {
      uVar11 = *(undefined4 *)(param_1 + 0x2014);
    }
    else {
      uVar11 = *(undefined4 *)(param_1 + 0x2018);
    }
    *(undefined4 *)(param_1 + 0x2010) = uVar11;
  }
  uVar9 = 0;
  dVar21 = lbl_82005710;
  dVar22 = lbl_82005710;
  if (*(int *)(param_1 + 0xaf0) != 1) {
    if (*(uint *)(param_1 + 0x658) != 0) {
      pdVar13 = (double *)(param_1 + 0x7e8);
      do {
        pdVar2 = pdVar13 + 0x7a;
        uVar9 = uVar9 + 1;
        pdVar13 = pdVar13 + 0x79;
        dVar21 = *pdVar2 + dVar21;
        dVar22 = *pdVar13 + dVar22;
      } while (uVar9 < *(uint *)(param_1 + 0x658));
    }
    goto LAB_82ec77f4;
  }
  uVar1 = *(uint *)(param_1 + 0x658);
  dVar19 = lbl_82005710;
  dVar23 = lbl_82005710;
  if (*(int *)(param_1 + 0x6d5c) == 0) {
    if (uVar1 != 0) {
      pdVar13 = (double *)(param_1 + 0x7f0);
      do {
        uVar9 = uVar9 + 1;
        dVar22 = pdVar13[0x75] + dVar22;
        pdVar2 = pdVar13 + 0x77;
        dVar23 = pdVar13[0x76] + dVar23;
        pdVar13 = pdVar13 + 0x79;
        dVar19 = *pdVar2 + dVar19;
        dVar21 = *pdVar13 + dVar21;
      } while (uVar9 < *(uint *)(param_1 + 0x658));
    }
    uVar9 = *(uint *)(param_1 + 0x68c);
    if ((uVar9 & 1) == 0) {
      dVar22 = lbl_8215F7F0;
    }
    if ((uVar9 & 2) == 0) {
      dVar23 = lbl_8215F7F0;
    }
    if ((uVar9 & 4) == 0) {
      dVar19 = lbl_8215F7F0;
    }
LAB_82ec7784:
    if (dVar23 <= dVar22) {
LAB_82ec77a0:
      if (dVar23 < dVar19) {
        *(undefined4 *)(param_1 + 0x89c) = 2;
        dVar22 = dVar23;
        goto LAB_82ec77f4;
      }
    }
    else if (dVar22 < dVar19) {
      *(undefined4 *)(param_1 + 0x89c) = 1;
      goto LAB_82ec77f4;
    }
  }
  else {
    dVar20 = lbl_82005710;
    if (uVar1 != 0) {
      pdVar13 = (double *)(param_1 + 0x7f0);
      do {
        uVar9 = uVar9 + 1;
        dVar20 = pdVar13[0x74] + dVar20;
        dVar22 = pdVar13[0x75] + dVar22;
        pdVar2 = pdVar13 + 0x77;
        dVar23 = pdVar13[0x76] + dVar23;
        pdVar13 = pdVar13 + 0x79;
        dVar19 = *pdVar2 + dVar19;
        dVar21 = *pdVar13 + dVar21;
      } while (uVar9 < uVar1);
    }
    uVar9 = *(uint *)(param_1 + 0x68c);
    if ((uVar9 & 1) == 0) {
      dVar22 = lbl_8215F7F0;
    }
    if ((uVar9 & 2) == 0) {
      dVar23 = lbl_8215F7F0;
    }
    if ((uVar9 & 4) == 0) {
      dVar19 = lbl_8215F7F0;
    }
    if (*(int *)(param_1 + 0x6d74) == 0) {
      iVar5 = fn_82E9B280(param_1);
      iVar5 = iVar5 * *(int *)(param_1 + 0x588) * 2;
    }
    else {
      iVar5 = fn_82E9B280(param_1);
      iVar5 = iVar5 * *(int *)(param_1 + 0x6f14);
    }
    lStack_80 = (longlong)iVar5;
    dVar20 = (double)lStack_80 + dVar20;
    if (dVar22 <= dVar20) goto LAB_82ec7784;
    if (dVar23 <= dVar20) goto LAB_82ec77a0;
    if (dVar20 < dVar19) {
      *(undefined4 *)(param_1 + 0x89c) = 0;
      dVar22 = dVar20;
      goto LAB_82ec77f4;
    }
  }
  *(undefined4 *)(param_1 + 0x89c) = 3;
  dVar22 = dVar19;
LAB_82ec77f4:
  if (*(int *)(param_1 + 0x6d74) == 0) {
    dVar22 = dVar22 * lbl_8215F878;
  }
  if ((*(int *)(param_1 + 0x1f78) != 0) || (dVar22 <= dVar21)) {
    if (*(int *)(param_1 + 0xaf0) != 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x1a88),0,*(undefined4 *)(param_1 + 0x2d8));
    }
    iVar5 = *(int *)(param_1 + 0x89c);
    if (iVar5 == 0) {
      iVar5 = (((U64)(lStack_80) >> 0) & 0xFFFFFFFF);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c00) = 0;
      if (iVar5 == 1) {
        lStack_80 = ((((U64)(lStack_80)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(*(int *)(param_1 + 0x1d6c))) & ((U64)0xFFFFFFFF)) << 0));
        iVar5 = *(int *)(param_1 + 0x1d70);
      }
      else if (iVar5 == 2) {
        lStack_80 = ((((U64)(lStack_80)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(*(int *)(param_1 + 0x1d7c))) & ((U64)0xFFFFFFFF)) << 0));
        iVar5 = *(int *)(param_1 + 0x1d80);
      }
      else {
        lStack_80 = ((((U64)(lStack_80)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(*(int *)(param_1 + 0x1d74))) & ((U64)0xFFFFFFFF)) << 0));
        iVar5 = *(int *)(param_1 + 0x1d78);
      }
    }
    lVar10 = 0;
    uVar17 = 0;
    if (0 < *(int *)(param_1 + 0x2d4)) {
      do {
        lVar16 = 0;
        if (0 < *(int *)(param_1 + 0x2d0)) {
          lVar14 = uVar17 * 0x114;
          lVar15 = (uVar17 & 0x1fffffff) << 3;
          lVar18 = (uVar17 & 0x7fffffff) << 1;
          do {
            uVar8 = (((longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)lVar10 & 0x7fffffffU) * 2
                     + lVar16 & 0x7fffffff) * 2;
            if (*(int *)(param_1 + 0x89c) == 0) {
              uVar6 = 1;
              if (*(char *)(*(int *)(param_1 + 0x1a88) + (int)uVar17) != '\0') {
                uVar6 = 0;
              }
LAB_82ec7a5c:
              fn_82F26618(param_1,lVar16,lVar10,uVar6);
            }
            else {
              iVar3 = (int)lVar18;
              *(undefined1 *)(*(int *)(param_1 + 0x1a88) + (int)uVar17) = 0;
              iVar4 = (int)((uVar8 & 0x7fffffff) << 1);
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x9f0)) =
                   *(undefined2 *)((((U64)(lStack_80) >> 0) & 0xFFFFFFFF) + iVar3);
              *(undefined2 *)
               ((int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar8 & 0xffffffff
                      ) << 1) + *(int *)(param_1 + 0x9f0)) =
                   *(undefined2 *)(*(int *)(param_1 + 0x9f0) + iVar4);
              puVar7 = (undefined2 *)
                       ((int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar8 &
                              0xffffffff) << 1) + *(int *)(param_1 + 0x9f0));
              puVar7[1] = *puVar7;
              *(undefined2 *)(*(int *)(param_1 + 0x9f0) + iVar4 + 2) =
                   *(undefined2 *)
                    ((int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar8 + 1 &
                           0xffffffff) << 1) + *(int *)(param_1 + 0x9f0));
              *(undefined2 *)(iVar4 + *(int *)(param_1 + 0x9f4)) = *(undefined2 *)(iVar3 + iVar5);
              *(undefined2 *)
               ((int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar8 & 0xffffffff
                      ) << 1) + *(int *)(param_1 + 0x9f4)) =
                   *(undefined2 *)(*(int *)(param_1 + 0x9f4) + iVar4);
              puVar7 = (undefined2 *)
                       ((int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar8 &
                              0xffffffff) << 1) + *(int *)(param_1 + 0x9f4));
              puVar7[1] = *puVar7;
              *(undefined2 *)(*(int *)(param_1 + 0x9f4) + iVar4 + 2) =
                   *(undefined2 *)
                    ((int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar8 + 1 &
                           0xffffffff) << 1) + *(int *)(param_1 + 0x9f4));
              if (*(short *)(iVar4 + *(int *)(param_1 + 0x9f0)) != 0x4000) {
                uVar6 = 1;
                goto LAB_82ec7a5c;
              }
              *(undefined2 *)(*(int *)(param_1 + 0x9f8) + iVar3) = 0x4000;
              *(undefined2 *)(*(int *)(param_1 + 0x9fc) + iVar3) = 0x4000;
              if ((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) == 1)) {
                *(undefined2 *)((int)lVar15 + *(int *)(param_1 + 0xaec)) = 0;
                *(undefined2 *)((int)lVar15 + *(int *)(param_1 + 0xaec) + 2) = 0;
                *(undefined4 *)(*(int *)(param_1 + 0x1e6c) + (int)lVar14 + 0x54) = 3;
                fn_82F26618(param_1,lVar16,lVar10,1);
              }
              *(int *)(param_1 + 0x4c00) = *(int *)(param_1 + 0x4c00) + 1;
            }
            lVar16 = lVar16 + 1;
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 2;
            lVar15 = lVar15 + 8;
            lVar14 = lVar14 + 0x114;
          } while ((int)lVar16 < *(int *)(param_1 + 0x2d0));
        }
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)(param_1 + 0x2d4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1be4) = 1;
  }
  if (*(int *)(param_1 + 0x6d90) != 0) {
    if (*(int *)(param_1 + 0x6d8c) == 0) {
      *(double *)(param_1 + 0x6db0) = dVar22;
    }
    else {
      *(double *)(param_1 + 0x6da8) = dVar22;
    }
  }
  if ((*(int *)(param_1 + 0xaf0) == 1) && (*(int *)(param_1 + 0x1be4) == 0)) {
    fn_82E85CF0(param_1,param_1 + 0x7618);
  }
  return *(undefined4 *)(param_1 + 0x4c00);
}

