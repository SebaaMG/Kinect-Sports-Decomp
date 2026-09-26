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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D2C3F8();
extern int fn_82D2C878();
extern int fn_82D2DA50();
extern int fn_82D2E9B8();
extern unsigned int uRam8323b6c8;
extern unsigned int uRam8323b6cc;
extern unsigned int uRam8323b6d0;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined4 *
fn_82D2ED90(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
             int param_6,char param_7,ulonglong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  longlong lVar11;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  undefined4 uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  bool bVar30;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  
  iVar12 = (int)param_3;
  iVar13 = (int)param_4;
  if ((iVar12 != param_5) || (iVar13 != param_6)) {
    fn_82D2C3F8(&uStack_a8,param_2,param_3,param_4);
    if (uStack_a8 != 2) {
      uVar15 = uRam8323b6d0 & 1;
      if ((uRam8323b6d0 & 1) == 0) {
        uRam8323b6d0 = uRam8323b6d0 | 1;
        uRam8323b6cc = 0;
        uRam8323b6c8 = uVar15;
      }
      *param_1 = 6;
      uVar15 = uRam8323b6c8;
      param_1[2] = uRam8323b6cc;
      param_1[1] = uVar15;
      return param_1;
    }
    uVar28 = (ulonglong)uStack_a0;
    iVar1 = *(int *)((int)((uVar28 + 2 & 0xffffffff) << 2) + uStack_a4);
    iVar2 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 & 0xffffffff) << 2) +
                    uStack_a4);
    lVar16 = (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar1 + 8)) *
             (longlong)(param_6 - *(int *)(iVar1 + 0xc)) -
             (longlong)(*(int *)(iVar2 + 0xc) - *(int *)(iVar1 + 0xc)) *
             (longlong)(param_5 - *(int *)(iVar1 + 8));
    uVar15 = uStack_a4;
    while (lVar16 < 0) {
      uVar15 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
      uVar28 = (ulonglong)uVar15 & 3;
      uVar15 = uVar15 & 0xfffffffc;
      uVar28 = -(ulonglong)(uVar28 != 2) & uVar28 + 1;
      iVar3 = *(int *)(((int)uVar28 + 2) * 4 + uVar15);
      iVar24 = *(int *)(((-(uint)(uVar28 != 2) & (int)uVar28 + 1U) + 2) * 4 + uVar15);
      iVar2 = *(int *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 8);
      lVar16 = (longlong)(*(int *)(iVar24 + 8) - iVar3) * (longlong)(param_6 - iVar2) -
               (longlong)(*(int *)(iVar24 + 0xc) - iVar2) * (longlong)(param_5 - iVar3);
    }
    do {
      if (uVar15 == 0) {
LAB_82d2f048:
        uVar15 = uRam8323b6d0 & 1;
        if ((uRam8323b6d0 & 1) == 0) {
          uRam8323b6d0 = uRam8323b6d0 | 1;
          uRam8323b6cc = 0;
          uRam8323b6c8 = uVar15;
        }
        *param_1 = 8;
        uVar15 = uRam8323b6c8;
        param_1[2] = uRam8323b6cc;
        param_1[1] = uVar15;
        return param_1;
      }
      lVar16 = 2;
      if (uVar28 != 0) {
        lVar16 = uVar28 - 1;
      }
      iVar3 = *(int *)((int)((lVar16 + 2U & 0xffffffff) << 2) + uVar15);
      iVar24 = *(int *)((int)(((-(ulonglong)(lVar16 != 2) & lVar16 + 1U) + 2 & 0xffffffff) << 2) +
                       uVar15);
      iVar2 = *(int *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 8);
      if (0 < (longlong)(*(int *)(iVar24 + 8) - iVar3) * (longlong)(param_6 - iVar2) -
              (longlong)(*(int *)(iVar24 + 0xc) - iVar2) * (longlong)(param_5 - iVar3)) {
        uVar27 = (uint)uVar28;
        if (uVar15 != 0) {
          uVar23 = uVar28 + 1;
          uVar19 = -(ulonglong)(uVar28 != 2) & uVar23;
          iVar2 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) +
                          uVar15);
          uStack_ac = uVar27;
          if ((*(int *)(iVar2 + 8) != param_5) || (*(int *)(iVar2 + 0xc) != param_6)) {
            if (param_5 == iVar12) {
              if (param_5 == 0) {
                if (param_6 < iVar13) goto LAB_82d2f5c8;
              }
              else if ((param_5 == 0x7fff) && (iVar13 < param_6)) goto LAB_82d2f5c8;
            }
            if (param_6 == iVar13) {
              if (param_6 == 0) {
                if (iVar12 < param_5) {
LAB_82d2f5c8:
                  uVar15 = uRam8323b6d0 & 1;
                  if ((uRam8323b6d0 & 1) == 0) {
                    uRam8323b6d0 = uRam8323b6d0 | 1;
                    uRam8323b6cc = 0;
                    uRam8323b6c8 = uVar15;
                  }
                  *param_1 = 8;
                  uVar15 = uRam8323b6c8;
                  param_1[2] = uRam8323b6cc;
                  param_1[1] = uVar15;
                  return param_1;
                }
              }
              else if ((param_6 == 0x7fff) && (param_5 < iVar12)) goto LAB_82d2f5c8;
            }
            uVar17 = uVar19 + 1;
            lVar16 = (uVar19 + 2 & 0x3fffffff) * 4;
            piVar14 = (int *)((int)lVar16 + uVar15);
            iVar3 = *(int *)((int)lVar16 + uVar15);
            iVar24 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar17) + 2 & 0xffffffff) << 2) +
                             uVar15);
            iVar2 = *(int *)(iVar3 + 0xc);
            iVar3 = *(int *)(iVar3 + 8);
            lVar11 = (longlong)(*(int *)(iVar24 + 8) - iVar3) * (longlong)(param_6 - iVar2) -
                     (longlong)(*(int *)(iVar24 + 0xc) - iVar2) * (longlong)(param_5 - iVar3);
            uVar27 = uVar15;
            goto joined_r0x82d2f560;
          }
          iVar2 = (int)((uVar28 + 2 & 0xffffffff) << 2);
          iVar13 = *(int *)(iVar2 + uVar15);
          iVar1 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) +
                          uVar15);
          iVar12 = *(int *)(iVar1 + 8);
          if ((*(int *)(iVar13 + 8) < iVar12) ||
             ((*(int *)(iVar13 + 8) <= iVar12 &&
              ((iVar12 = *(int *)(iVar1 + 0xc), *(int *)(iVar13 + 0xc) < iVar12 ||
               (*(int *)(iVar13 + 0xc) <= iVar12)))))) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if ((bVar29) ||
             (bVar29 = false,
             (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15) & 0xfffffffc) == 0)) {
            bVar29 = true;
          }
          uVar19 = uVar28;
          uVar25 = uVar15;
          if (!bVar29) {
            uVar25 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
            uVar19 = (ulonglong)uVar25 & 3;
            uVar25 = uVar25 & 0xfffffffc;
          }
          if (((uint)(*(ushort *)(uVar25 + 0x20) >> 0xd) & 1 << ((uint)uVar19 & 0x3f)) != 0) {
            *param_1 = 1;
            param_1[2] = uVar27;
            param_1[1] = uVar15;
            return param_1;
          }
          iVar1 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) +
                          uVar15);
          iVar12 = *(int *)(iVar1 + 8);
          if ((*(int *)(iVar13 + 8) < iVar12) ||
             ((*(int *)(iVar13 + 8) <= iVar12 &&
              ((iVar12 = *(int *)(iVar1 + 0xc), *(int *)(iVar13 + 0xc) < iVar12 ||
               (*(int *)(iVar13 + 0xc) <= iVar12)))))) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if ((bVar29) ||
             (bVar29 = false,
             (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15) & 0xfffffffc) == 0)) {
            bVar29 = true;
          }
          uVar25 = uVar27;
          uVar26 = uVar15;
          if (!bVar29) {
            uVar26 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
            uVar25 = uVar26 & 3;
            uVar26 = uVar26 & 0xfffffffc;
          }
          *(ushort *)(uVar26 + 0x20) =
               *(ushort *)(uVar26 + 0x20) & 0x1fff |
               (ushort)((1 << (uVar25 & 0x3f)) << 0xd) | *(ushort *)(uVar26 + 0x20) & 0xe000;
          uStack_b0 = uVar15;
          if ((param_8 & 0xffffffff) != 0) {
            fn_82D2E9B8(param_2,&uStack_b0,param_8);
          }
          if (param_7 != '\0') {
            uVar21 = *(undefined4 *)(iVar2 + uVar15);
            piVar14 = (int *)(param_2 + 0x40);
            uVar4 = *(undefined4 *)
                     ((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) + uVar15);
            iVar12 = fn_82CE5410();
            if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar14,8);
            }
            puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
            if (puVar20 != (uint *)0x0) {
              *puVar20 = uVar15;
              puVar20[1] = -(uint)(uVar28 != 2) & (uint)uVar23;
            }
            uVar25 = 2;
            *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
            if (uVar28 != 0) {
              uVar25 = uVar27 - 1;
            }
            iVar12 = fn_82CE5410();
            if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar14,8);
            }
            puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
            if (puVar20 != (uint *)0x0) {
              *puVar20 = uVar15;
              puVar20[1] = uVar25;
            }
            iVar12 = (int)((uVar28 + 5 & 0xffffffff) << 2);
            *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
            uVar25 = *(uint *)(iVar12 + uVar15);
            if ((uVar25 & 0xfffffffc) != 0) {
              iVar13 = fn_82CE5410();
              if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar13 + 0x10),piVar14,8);
              }
              puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
              if (puVar20 != (uint *)0x0) {
                *puVar20 = uVar25 & 0xfffffffc;
                puVar20[1] = -(uint)((uVar25 & 3) != 2) & (uVar25 & 3) + 1;
              }
              uVar26 = 2;
              *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
              uVar25 = *(uint *)(iVar12 + uVar15);
              if ((uVar25 & 3) != 0) {
                uVar26 = (uVar25 & 3) - 1;
              }
              iVar12 = fn_82CE5410();
              if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar14,8);
              }
              puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
              if (puVar20 != (uint *)0x0) {
                *puVar20 = uVar25 & 0xfffffffc;
                puVar20[1] = uVar26;
              }
              *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
            }
            fn_82D2DA50(param_2);
            uStack_b0 = uVar15;
            uStack_ac = uVar27;
            fn_82D2C878(&uStack_a8,param_2,&uStack_b0,uVar21,uVar4);
            uVar28 = (ulonglong)uStack_a4;
            uVar15 = uStack_a8;
          }
          goto LAB_82d308f4;
        }
        goto LAB_82d2f048;
      }
      lVar16 = 2;
      if (uVar28 != 0) {
        lVar16 = uVar28 - 1;
      }
      uVar27 = *(uint *)((int)((lVar16 + 5U & 0xffffffff) << 2) + uVar15);
      uVar15 = uVar27 & 0xfffffffc;
      uVar28 = (ulonglong)uVar27 & 3;
    } while( true );
  }
  goto LAB_82d2edcc;
joined_r0x82d2f560:
  uVar21 = (undefined4)uVar19;
  if (-1 < lVar11) goto LAB_82d2f7cc;
  iVar3 = *(int *)((int)lVar16 + uVar27);
  uVar17 = uVar19 + 1;
  iVar24 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar17) + 2 & 0xffffffff) << 2) + uVar27);
  iVar2 = *(int *)(iVar24 + 8);
  if ((*(int *)(iVar3 + 8) < iVar2) ||
     ((*(int *)(iVar3 + 8) <= iVar2 &&
      ((iVar2 = *(int *)(iVar24 + 0xc), *(int *)(iVar3 + 0xc) < iVar2 ||
       (*(int *)(iVar3 + 0xc) <= iVar2)))))) {
    bVar29 = true;
  }
  else {
    bVar29 = false;
  }
  if ((bVar29) ||
     (bVar29 = false, (*(uint *)((int)((uVar19 + 5 & 0xffffffff) << 2) + uVar27) & 0xfffffffc) == 0)
     ) {
    bVar29 = true;
  }
  uVar18 = uVar19;
  uVar25 = uVar27;
  if (!bVar29) {
    uVar25 = *(uint *)((int)((uVar19 + 5 & 0xffffffff) << 2) + uVar27);
    uVar18 = (ulonglong)uVar25 & 3;
    uVar25 = uVar25 & 0xfffffffc;
  }
  if (((uint)(*(ushort *)(uVar25 + 0x20) >> 0xd) & 1 << ((uint)uVar18 & 0x3f)) != 0) {
    if ((longlong)(iVar12 - *(int *)(iVar3 + 8)) * (longlong)(param_6 - *(int *)(iVar3 + 0xc)) -
        (longlong)(param_5 - *(int *)(iVar3 + 8)) * (longlong)(iVar13 - *(int *)(iVar3 + 0xc)) != 0)
    {
      iVar2 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar17) + 2 & 0xffffffff) << 2) + uVar27)
      ;
      iVar1 = *(int *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 0xc);
      if ((longlong)(iVar12 - iVar1) * (longlong)(param_6 - iVar2) -
          (longlong)(param_5 - iVar1) * (longlong)(iVar13 - iVar2) == 0) {
        *param_1 = 4;
        param_1[1] = uVar27;
        param_1[2] = -(uint)(uVar19 != 2) & (uint)uVar17;
        return param_1;
      }
      *param_1 = 3;
      param_1[1] = uVar27;
      param_1[2] = uVar21;
      return param_1;
    }
    goto LAB_82d2f8a0;
  }
  uVar25 = *(uint *)((int)((uVar19 + 5 & 0xffffffff) << 2) + uVar27);
  lVar16 = 2;
  uVar19 = (ulonglong)uVar25 & 3;
  uVar27 = uVar25 & 0xfffffffc;
  if ((uVar25 & 3) != 0) {
    lVar16 = uVar19 - 1;
  }
  iVar2 = *(int *)((int)((lVar16 + 2U & 0xffffffff) << 2) + uVar27);
  lVar16 = (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar1 + 8)) *
           (longlong)(param_6 - *(int *)(iVar1 + 0xc)) -
           (longlong)(*(int *)(iVar2 + 0xc) - *(int *)(iVar1 + 0xc)) *
           (longlong)(param_5 - *(int *)(iVar1 + 8));
  if (lVar16 < 0) {
    uVar19 = -(ulonglong)(uVar19 != 2) & uVar19 + 1;
  }
  else if ((int)lVar16 < 1) {
    lVar16 = 2;
    if ((uVar25 & 3) != 0) {
      lVar16 = uVar19 - 1;
    }
    iVar2 = *(int *)((int)((lVar16 + 2U & 0xffffffff) << 2) + uVar27);
    if ((*(int *)(iVar2 + 8) != param_5) || (*(int *)(iVar2 + 0xc) != param_6)) {
      if ((uVar25 & 3) == 0) {
        *param_1 = 4;
        param_1[1] = uVar27;
        param_1[2] = 2;
        return param_1;
      }
      *param_1 = 4;
      param_1[1] = uVar27;
      param_1[2] = (int)uVar19 + -1;
      return param_1;
    }
    if ((uVar25 & 3) != 0) goto LAB_82d2f764;
    uVar19 = 2;
  }
  else if ((uVar25 & 3) == 0) {
    uVar19 = 2;
  }
  else {
LAB_82d2f764:
    uVar19 = uVar19 - 1;
  }
  uVar17 = uVar19 + 1;
  lVar16 = (uVar19 + 2 & 0x3fffffff) * 4;
  piVar14 = (int *)((int)lVar16 + uVar27);
  iVar3 = *(int *)((int)lVar16 + uVar27);
  iVar24 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar17) + 2 & 0xffffffff) << 2) + uVar27);
  iVar2 = *(int *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 8);
  lVar11 = (longlong)(*(int *)(iVar24 + 8) - iVar3) * (longlong)(param_6 - iVar2) -
           (longlong)(*(int *)(iVar24 + 0xc) - iVar2) * (longlong)(param_5 - iVar3);
  goto joined_r0x82d2f560;
LAB_82d2f7cc:
  iVar12 = *piVar14;
  if (iVar1 != iVar12) {
    iVar13 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar17) + 2 & 0xffffffff) << 2) + uVar27);
    if ((longlong)(*(int *)(iVar13 + 8) - *(int *)(iVar12 + 8)) *
        (longlong)(param_6 - *(int *)(iVar12 + 0xc)) -
        (longlong)(*(int *)(iVar13 + 0xc) - *(int *)(iVar12 + 0xc)) *
        (longlong)(param_5 - *(int *)(iVar12 + 8)) != 0) {
      uVar15 = uRam8323b6d0 & 1;
      if ((uRam8323b6d0 & 1) == 0) {
        uRam8323b6d0 = uRam8323b6d0 | 1;
        uRam8323b6cc = 0;
        uRam8323b6c8 = uVar15;
      }
      *param_1 = 7;
      uVar21 = uRam8323b6cc;
      param_1[1] = uRam8323b6c8;
      param_1[2] = uVar21;
      return param_1;
    }
    iVar13 = *(int *)(iVar12 + 8);
    if ((iVar13 == param_5) && (iVar2 = *(int *)(iVar12 + 0xc), iVar2 == param_6)) {
      iVar3 = *(int *)(iVar1 + 8);
      if (((iVar3 == iVar13) && ((iVar3 == 0 || (iVar3 == 0x7fff)))) ||
         ((iVar3 = *(int *)(iVar1 + 0xc), iVar3 == iVar2 && ((iVar3 == 0 || (iVar3 == 0x7fff)))))) {
        *param_1 = 8;
        param_1[1] = uVar27;
        param_1[2] = uVar21;
        return param_1;
      }
      iVar3 = *(int *)((int)((uVar28 + 2 & 0xffffffff) << 2) + uVar15);
      iVar24 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) + uVar15
                       );
      if ((longlong)(*(int *)(iVar24 + 8) - *(int *)(iVar3 + 8)) *
          (longlong)(iVar2 - *(int *)(iVar3 + 0xc)) -
          (longlong)(*(int *)(iVar24 + 0xc) - *(int *)(iVar3 + 0xc)) *
          (longlong)(iVar13 - *(int *)(iVar3 + 8)) == 0) {
        *param_1 = 4;
        param_1[2] = -(uint)(uVar28 != 2) & (uint)uVar23;
        param_1[1] = uVar15;
        return param_1;
      }
      iVar24 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) + uVar15
                       );
      if (-1 < (longlong)(*(int *)(iVar24 + 8) - *(int *)(iVar3 + 8)) *
               (longlong)(iVar2 - *(int *)(iVar3 + 0xc)) -
               (longlong)(*(int *)(iVar24 + 0xc) - *(int *)(iVar3 + 0xc)) *
               (longlong)(iVar13 - *(int *)(iVar3 + 8))) {
        iVar13 = 0;
        uVar19 = uVar28;
        if (*(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) + uVar15)
            != iVar12) {
          do {
            iVar2 = *(int *)(iVar1 + 0xc);
            iVar3 = *(int *)(iVar1 + 8);
            uVar28 = -(ulonglong)(uVar19 != 2) & uVar19 + 1;
            iVar24 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 & 0xffffffff) << 2
                                   ) + uVar15);
            uVar27 = uVar15;
            if (0 < (longlong)(*(int *)(iVar24 + 0xc) - iVar2) *
                    (longlong)(*(int *)(iVar12 + 8) - iVar3) -
                    (longlong)(*(int *)(iVar24 + 8) - iVar3) *
                    (longlong)(*(int *)(iVar12 + 0xc) - iVar2)) {
              do {
                uVar27 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar27);
                uVar28 = (ulonglong)uVar27 & 3;
                uVar27 = uVar27 & 0xfffffffc;
                uVar28 = -(ulonglong)(uVar28 != 2) & uVar28 + 1;
                iVar24 = *(int *)(((-(uint)(uVar28 != 2) & (int)uVar28 + 1U) + 2) * 4 + uVar27);
              } while (0 < (longlong)(*(int *)(iVar24 + 0xc) - iVar2) *
                           (longlong)(*(int *)(iVar12 + 8) - iVar3) -
                           (longlong)(*(int *)(iVar24 + 8) - iVar3) *
                           (longlong)(*(int *)(iVar12 + 0xc) - iVar2));
            }
            iVar24 = *(int *)((int)((uVar28 + 2 & 0xffffffff) << 2) + uVar27);
            iVar3 = *(int *)((int)((uVar19 + 2 & 0xffffffff) << 2) + uVar15);
            iVar22 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 & 0xffffffff) << 2
                                   ) + uVar27);
            iVar2 = *(int *)(iVar3 + 8);
            iVar3 = *(int *)(iVar3 + 0xc);
            if ((longlong)(*(int *)(iVar24 + 8) - iVar2) *
                (longlong)(*(int *)(iVar22 + 0xc) - iVar3) -
                (longlong)(*(int *)(iVar24 + 0xc) - iVar3) *
                (longlong)(*(int *)(iVar22 + 8) - iVar2) < 1) {
              iVar13 = iVar13 + 1;
              uVar15 = uVar27;
            }
            else {
              uVar19 = -(ulonglong)(uVar19 != 2) & uVar19 + 1;
              iVar24 = 0;
              iVar2 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 & 0xffffffff) <<
                                    2) + uVar27);
              iVar3 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar19 + 1) + 2 & 0xffffffff) <<
                                    2) + uVar15);
              while (iVar3 != iVar2) {
                iVar3 = (int)((uVar19 + 5 & 0x3fffffff) << 2);
                uVar27 = *(uint *)(iVar3 + uVar15);
                if ((uVar27 & 0xfffffffc) == 0) {
LAB_82d304bc:
                  uVar15 = uVar27 & 0xfffffffc;
                  iVar24 = iVar24 + 1;
                  uVar19 = -(ulonglong)(((ulonglong)uVar27 & 3) != 2) & ((ulonglong)uVar27 & 3) + 1;
                }
                else {
                  iVar10 = (int)((uVar19 + 2 & 0xffffffff) << 2);
                  iVar5 = *(int *)(iVar10 + uVar15);
                  iVar6 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar19 + 1) + 2 & 0xffffffff)
                                        << 2) + uVar15);
                  iVar22 = *(int *)(iVar6 + 8);
                  if ((*(int *)(iVar5 + 8) < iVar22) ||
                     ((*(int *)(iVar5 + 8) <= iVar22 &&
                      ((iVar22 = *(int *)(iVar6 + 0xc), *(int *)(iVar5 + 0xc) < iVar22 ||
                       (*(int *)(iVar5 + 0xc) <= iVar22)))))) {
                    bVar29 = true;
                  }
                  else {
                    bVar29 = false;
                  }
                  uVar28 = uVar19;
                  uVar25 = uVar15;
                  if (!bVar29) {
                    uVar28 = (ulonglong)uVar27 & 3;
                    uVar25 = uVar27 & 0xfffffffc;
                  }
                  if (((uint)(*(ushort *)(uVar25 + 0x20) >> 0xd) & 1 << ((uint)uVar28 & 0x3f)) != 0)
                  goto LAB_82d304bc;
                  lVar16 = 2;
                  if ((uVar19 & 0xffffffff) != 0) {
                    lVar16 = uVar19 - 1;
                  }
                  iVar22 = 2;
                  if ((uVar27 & 3) != 0) {
                    iVar22 = (uVar27 & 3) - 1;
                  }
                  iVar7 = *(int *)((iVar22 + 2) * 4 + (uVar27 & 0xfffffffc));
                  iVar8 = *(int *)((int)((lVar16 + 2U & 0xffffffff) << 2) + uVar15);
                  iVar22 = *(int *)(iVar8 + 0xc);
                  iVar6 = *(int *)(iVar7 + 8);
                  if (((longlong)(*(int *)(iVar7 + 0xc) - iVar22) *
                       (longlong)(*(int *)(iVar5 + 8) - *(int *)(iVar8 + 8)) -
                       (longlong)(iVar6 - *(int *)(iVar8 + 8)) *
                       (longlong)(*(int *)(iVar5 + 0xc) - iVar22) < 1) ||
                     (iVar5 = *(int *)(((uVar27 & 3) + 2) * 4 + (uVar27 & 0xfffffffc)),
                     (longlong)(*(int *)(iVar5 + 8) - iVar6) *
                     (longlong)(iVar22 - *(int *)(iVar7 + 0xc)) -
                     (longlong)(*(int *)(iVar5 + 0xc) - *(int *)(iVar7 + 0xc)) *
                     (longlong)(*(int *)(iVar8 + 8) - iVar6) < 1)) goto LAB_82d304bc;
                  uVar28 = 2;
                  if ((uVar19 & 0xffffffff) != 0) {
                    uVar28 = uVar19 - 1;
                  }
                  iVar5 = *(int *)((int)((uVar28 + 2 & 0xffffffff) << 2) + uVar15);
                  iVar6 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 & 0xffffffff)
                                        << 2) + uVar15);
                  iVar22 = *(int *)(iVar6 + 8);
                  if ((*(int *)(iVar5 + 8) < iVar22) ||
                     ((*(int *)(iVar5 + 8) <= iVar22 &&
                      ((iVar22 = *(int *)(iVar6 + 0xc), *(int *)(iVar5 + 0xc) < iVar22 ||
                       (*(int *)(iVar5 + 0xc) <= iVar22)))))) {
                    bVar29 = true;
                  }
                  else {
                    bVar29 = false;
                  }
                  if ((bVar29) ||
                     (bVar29 = false,
                     (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15) & 0xfffffffc) == 0))
                  {
                    bVar29 = true;
                  }
                  uVar23 = uVar28;
                  uVar27 = uVar15;
                  if (!bVar29) {
                    uVar27 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
                    uVar23 = (ulonglong)uVar27 & 3;
                    uVar27 = uVar27 & 0xfffffffc;
                  }
                  bVar29 = ((uint)(*(ushort *)(uVar27 + 0x20) >> 0xd) & 1 << ((uint)uVar23 & 0x3f))
                           != 0;
                  if (bVar29) {
                    iVar6 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 &
                                           0xffffffff) << 2) + uVar15);
                    iVar22 = *(int *)(iVar6 + 8);
                    if ((*(int *)(iVar5 + 8) < iVar22) ||
                       ((*(int *)(iVar5 + 8) <= iVar22 &&
                        ((iVar22 = *(int *)(iVar6 + 0xc), *(int *)(iVar5 + 0xc) < iVar22 ||
                         (*(int *)(iVar5 + 0xc) <= iVar22)))))) {
                      bVar30 = true;
                    }
                    else {
                      bVar30 = false;
                    }
                    if ((bVar30) ||
                       (bVar30 = false,
                       (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15) & 0xfffffffc) == 0
                       )) {
                      bVar30 = true;
                    }
                    uVar27 = uVar15;
                    if (!bVar30) {
                      uVar27 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
                      uVar28 = (ulonglong)uVar27 & 3;
                      uVar27 = uVar27 & 0xfffffffc;
                    }
                    *(ushort *)(uVar27 + 0x20) =
                         ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar28 & 0x3f)) & 0xffffffff) <<
                                  0xd) | 0x1fff) & *(ushort *)(uVar27 + 0x20);
                  }
                  uVar27 = *(uint *)(iVar3 + uVar15);
                  uVar28 = 2;
                  uVar25 = uVar27 & 0xfffffffc;
                  if ((uVar27 & 3) != 0) {
                    uVar28 = ((ulonglong)uVar27 & 3) - 1;
                  }
                  iVar5 = *(int *)((int)((uVar28 + 2 & 0xffffffff) << 2) + uVar25);
                  iVar6 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 & 0xffffffff)
                                        << 2) + uVar25);
                  iVar22 = *(int *)(iVar6 + 8);
                  if ((*(int *)(iVar5 + 8) < iVar22) ||
                     ((*(int *)(iVar5 + 8) <= iVar22 &&
                      ((iVar22 = *(int *)(iVar6 + 0xc), *(int *)(iVar5 + 0xc) < iVar22 ||
                       (*(int *)(iVar5 + 0xc) <= iVar22)))))) {
                    bVar30 = true;
                  }
                  else {
                    bVar30 = false;
                  }
                  if ((bVar30) ||
                     (bVar30 = false,
                     (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar25) & 0xfffffffc) == 0))
                  {
                    bVar30 = true;
                  }
                  uVar23 = uVar28;
                  uVar27 = uVar25;
                  if (!bVar30) {
                    uVar27 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar25);
                    uVar23 = (ulonglong)uVar27 & 3;
                    uVar27 = uVar27 & 0xfffffffc;
                  }
                  bVar30 = ((uint)(*(ushort *)(uVar27 + 0x20) >> 0xd) & 1 << ((uint)uVar23 & 0x3f))
                           != 0;
                  if (bVar30) {
                    iVar6 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 &
                                           0xffffffff) << 2) + uVar25);
                    iVar22 = *(int *)(iVar6 + 8);
                    if ((*(int *)(iVar5 + 8) < iVar22) ||
                       ((*(int *)(iVar5 + 8) <= iVar22 &&
                        ((iVar22 = *(int *)(iVar6 + 0xc), *(int *)(iVar5 + 0xc) < iVar22 ||
                         (*(int *)(iVar5 + 0xc) <= iVar22)))))) {
                      bVar9 = true;
                    }
                    else {
                      bVar9 = false;
                    }
                    if ((bVar9) ||
                       (bVar9 = false,
                       (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar25) & 0xfffffffc) == 0
                       )) {
                      bVar9 = true;
                    }
                    if (!bVar9) {
                      uVar25 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar25);
                      uVar28 = (ulonglong)uVar25 & 3;
                      uVar25 = uVar25 & 0xfffffffc;
                    }
                    *(ushort *)(uVar25 + 0x20) =
                         ((ushort)((~(ulonglong)(uint)(1 << ((uint)uVar28 & 0x3f)) & 0xffffffff) <<
                                  0xd) | 0x1fff) & *(ushort *)(uVar25 + 0x20);
                  }
                  uVar27 = *(uint *)(iVar3 + uVar15);
                  lVar16 = 2;
                  uVar25 = uVar27 & 0xfffffffc;
                  if ((uVar19 & 0xffffffff) != 0) {
                    lVar16 = uVar19 - 1;
                  }
                  lVar11 = 2;
                  if ((uVar27 & 3) != 0) {
                    lVar11 = ((ulonglong)uVar27 & 3) - 1;
                  }
                  iVar5 = (int)((ulonglong)uVar27 & 3);
                  iVar22 = (int)((lVar16 + 5U & 0xffffffff) << 2);
                  *(undefined4 *)(iVar10 + uVar15) =
                       *(undefined4 *)((int)((lVar11 + 2U & 0xffffffff) << 2) + uVar25);
                  *(undefined4 *)((iVar5 + 2) * 4 + uVar25) =
                       *(undefined4 *)((int)((lVar16 + 2U & 0xffffffff) << 2) + uVar15);
                  uVar27 = *(uint *)(iVar22 + uVar15);
                  uVar26 = uVar27 & 0xfffffffc;
                  uVar27 = uVar27 & 3;
                  *(uint *)((iVar5 + 5) * 4 + uVar25) = uVar27 + uVar26;
                  if (uVar26 != 0) {
                    *(uint *)((uVar27 + 5) * 4 + uVar26) = iVar5 + uVar25;
                  }
                  iVar5 = (int)((lVar11 + 5U & 0xffffffff) << 2);
                  uVar27 = *(uint *)(iVar5 + uVar25);
                  uVar26 = uVar27 & 0xfffffffc;
                  uVar27 = uVar27 & 3;
                  *(uint *)(iVar3 + uVar15) = uVar27 + uVar26;
                  if (uVar26 != 0) {
                    *(uint *)((uVar27 + 5) * 4 + uVar26) = (int)uVar19 + uVar15;
                  }
                  *(uint *)(iVar22 + uVar15) = (int)lVar11 + uVar25;
                  if (uVar25 != 0) {
                    *(uint *)(iVar5 + uVar25) = (int)lVar16 + uVar15;
                  }
                  lVar16 = 2;
                  if ((uVar19 & 0xffffffff) != 0) {
                    lVar16 = uVar19 - 1;
                  }
                  if (bVar29) {
                    uVar27 = *(uint *)((int)((lVar16 + 5U & 0xffffffff) << 2) + uVar15);
                    uVar25 = uVar27 & 3;
                    uVar27 = uVar27 & 0xfffffffc;
                    uVar25 = -(uint)(uVar25 != 2) & uVar25 + 1;
                    iVar5 = *(int *)((uVar25 + 2) * 4 + uVar27);
                    iVar6 = *(int *)(((-(uint)(uVar25 != 2) & uVar25 + 1) + 2) * 4 + uVar27);
                    iVar3 = *(int *)(iVar5 + 8);
                    iVar22 = *(int *)(iVar6 + 8);
                    if ((iVar3 < iVar22) ||
                       ((iVar3 <= iVar22 &&
                        ((iVar3 = *(int *)(iVar5 + 0xc), iVar22 = *(int *)(iVar6 + 0xc),
                         iVar3 < iVar22 || (iVar3 <= iVar22)))))) {
                      bVar29 = true;
                    }
                    else {
                      bVar29 = false;
                    }
                    if ((bVar29) ||
                       (bVar29 = false, (*(uint *)((uVar25 + 5) * 4 + uVar27) & 0xfffffffc) == 0)) {
                      bVar29 = true;
                    }
                    if (!bVar29) {
                      uVar27 = *(uint *)((uVar25 + 5) * 4 + uVar27);
                      uVar25 = uVar27 & 3;
                      uVar27 = uVar27 & 0xfffffffc;
                    }
                    *(ushort *)(uVar27 + 0x20) =
                         *(ushort *)(uVar27 + 0x20) & 0x1fff |
                         (ushort)((1 << uVar25) << 0xd) | *(ushort *)(uVar27 + 0x20) & 0xe000;
                  }
                  if (bVar30) {
                    uVar28 = -(ulonglong)(lVar16 != 2) & lVar16 + 1U;
                    iVar5 = *(int *)((int)((uVar28 + 2 & 0xffffffff) << 2) + uVar15);
                    iVar6 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar28 + 1) + 2 &
                                           0xffffffff) << 2) + uVar15);
                    iVar3 = *(int *)(iVar5 + 8);
                    iVar22 = *(int *)(iVar6 + 8);
                    if ((iVar3 < iVar22) ||
                       ((iVar3 <= iVar22 &&
                        ((iVar3 = *(int *)(iVar5 + 0xc), iVar22 = *(int *)(iVar6 + 0xc),
                         iVar3 < iVar22 || (iVar3 <= iVar22)))))) {
                      bVar29 = true;
                    }
                    else {
                      bVar29 = false;
                    }
                    if ((bVar29) ||
                       (bVar29 = false,
                       (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15) & 0xfffffffc) == 0
                       )) {
                      bVar29 = true;
                    }
                    uVar27 = uVar15;
                    if (!bVar29) {
                      uVar27 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
                      uVar28 = (ulonglong)uVar27 & 3;
                      uVar27 = uVar27 & 0xfffffffc;
                    }
                    *(ushort *)(uVar27 + 0x20) =
                         *(ushort *)(uVar27 + 0x20) & 0x1fff |
                         (ushort)((1 << ((uint)uVar28 & 0x3f)) << 0xd) |
                         *(ushort *)(uVar27 + 0x20) & 0xe000;
                  }
                  uVar27 = *(uint *)((int)((lVar16 + 5U & 0xffffffff) << 2) + uVar15);
                  uVar19 = (ulonglong)uVar27 & 3;
                  if (iVar24 == 0) {
                    uVar15 = uVar27 & 0xfffffffc;
                    iVar24 = 0;
                    if ((uVar27 & 3) == 0) {
                      uVar19 = 2;
                    }
                    else {
                      uVar19 = uVar19 - 1;
                    }
                  }
                  else {
                    iVar24 = iVar24 + -1;
                    uVar15 = *(uint *)(((-(uint)(uVar19 != 2) & (int)uVar19 + 1U) + 5) * 4 +
                                      (uVar27 & 0xfffffffc));
                    uVar19 = (ulonglong)uVar15 & 3;
                    uVar15 = uVar15 & 0xfffffffc;
                  }
                }
                iVar3 = *(int *)((int)(((-(ulonglong)(uVar19 != 2) & uVar19 + 1) + 2 & 0xffffffff)
                                      << 2) + uVar15);
              }
              uVar15 = *(uint *)((int)(((-(ulonglong)(uVar19 != 2) & uVar19 + 1) + 5 & 0xffffffff)
                                      << 2) + uVar15);
              uVar28 = (ulonglong)uVar15 & 3;
              uVar15 = uVar15 & 0xfffffffc;
              if (iVar13 != 0) {
                while( true ) {
                  lVar16 = 2;
                  if (uVar28 != 0) {
                    lVar16 = uVar28 - 1;
                  }
                  iVar2 = *(int *)((int)((lVar16 + 2U & 0xffffffff) << 2) + uVar15);
                  if ((longlong)(*(int *)(iVar2 + 0xc) - *(int *)(iVar1 + 0xc)) *
                      (longlong)(*(int *)(iVar12 + 8) - *(int *)(iVar1 + 8)) -
                      (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar1 + 8)) *
                      (longlong)(*(int *)(iVar12 + 0xc) - *(int *)(iVar1 + 0xc)) < 1) break;
                  lVar16 = 2;
                  if (uVar28 != 0) {
                    lVar16 = uVar28 - 1;
                  }
                  uVar15 = *(uint *)((int)((lVar16 + 5U & 0xffffffff) << 2) + uVar15);
                  uVar28 = (ulonglong)uVar15 & 3;
                  uVar15 = uVar15 & 0xfffffffc;
                }
                if (uVar28 != 0) {
                  uVar28 = uVar28 - 1;
                  iVar13 = iVar13 + -1;
                }
                else {
                  uVar28 = 2;
                  iVar13 = iVar13 + -1;
                }
              }
            }
            uVar23 = uVar28 + 1;
            uVar19 = uVar28;
          } while (*(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) +
                           uVar15) != iVar12);
          uStack_ac = (uint)uVar28;
        }
        iVar3 = (int)((uVar28 + 2 & 0xffffffff) << 2);
        iVar1 = *(int *)(iVar3 + uVar15);
        iVar12 = *(int *)(iVar1 + 8);
        iVar2 = *(int *)((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) +
                        uVar15);
        iVar13 = *(int *)(iVar2 + 8);
        if ((iVar12 < iVar13) ||
           ((iVar12 <= iVar13 &&
            ((iVar12 = *(int *)(iVar1 + 0xc), iVar13 = *(int *)(iVar2 + 0xc), iVar12 < iVar13 ||
             (iVar12 <= iVar13)))))) {
          bVar29 = true;
        }
        else {
          bVar29 = false;
        }
        if ((bVar29) ||
           (bVar29 = false,
           (*(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15) & 0xfffffffc) == 0)) {
          bVar29 = true;
        }
        uVar26 = (uint)uVar28;
        uVar27 = uVar26;
        uVar25 = uVar15;
        if (!bVar29) {
          uVar25 = *(uint *)((int)((uVar28 + 5 & 0xffffffff) << 2) + uVar15);
          uVar27 = uVar25 & 3;
          uVar25 = uVar25 & 0xfffffffc;
        }
        *(ushort *)(uVar25 + 0x20) =
             *(ushort *)(uVar25 + 0x20) & 0x1fff |
             (ushort)((1 << (uVar27 & 0x3f)) << 0xd) | *(ushort *)(uVar25 + 0x20) & 0xe000;
        uStack_b0 = uVar15;
        if ((param_8 & 0xffffffff) != 0) {
          fn_82D2E9B8(param_2,&uStack_b0,param_8);
        }
        if (param_7 != '\0') {
          uVar21 = *(undefined4 *)(iVar3 + uVar15);
          piVar14 = (int *)(param_2 + 0x40);
          uVar4 = *(undefined4 *)
                   ((int)(((-(ulonglong)(uVar28 != 2) & uVar23) + 2 & 0xffffffff) << 2) + uVar15);
          iVar12 = fn_82CE5410();
          if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar14,8);
          }
          puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
          if (puVar20 != (uint *)0x0) {
            *puVar20 = uVar15;
            puVar20[1] = -(uint)(uVar28 != 2) & (uint)uVar23;
          }
          uVar27 = 2;
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
          if ((uVar28 & 0xffffffff) != 0) {
            uVar27 = uVar26 - 1;
          }
          iVar12 = fn_82CE5410();
          if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar14,8);
          }
          puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
          if (puVar20 != (uint *)0x0) {
            *puVar20 = uVar15;
            puVar20[1] = uVar27;
          }
          iVar12 = (int)((uVar28 + 5 & 0xffffffff) << 2);
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
          uVar27 = *(uint *)(iVar12 + uVar15);
          if ((uVar27 & 0xfffffffc) != 0) {
            iVar13 = fn_82CE5410();
            if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar13 + 0x10),piVar14,8);
            }
            puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
            if (puVar20 != (uint *)0x0) {
              *puVar20 = uVar27 & 0xfffffffc;
              puVar20[1] = -(uint)((uVar27 & 3) != 2) & (uVar27 & 3) + 1;
            }
            uVar25 = 2;
            *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
            uVar27 = *(uint *)(iVar12 + uVar15);
            if ((uVar27 & 3) != 0) {
              uVar25 = (uVar27 & 3) - 1;
            }
            iVar12 = fn_82CE5410();
            if (*(uint *)(param_2 + 0x44) == (*(uint *)(param_2 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar12 + 0x10),piVar14,8);
            }
            puVar20 = (uint *)(*(int *)(param_2 + 0x44) * 8 + *piVar14);
            if (puVar20 != (uint *)0x0) {
              *puVar20 = uVar27 & 0xfffffffc;
              puVar20[1] = uVar25;
            }
            *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
          }
          fn_82D2DA50(param_2);
          uStack_a8 = uVar15;
          uStack_a4 = uVar26;
          fn_82D2C878(&uStack_b0,param_2,&uStack_a8,uVar21,uVar4);
          uVar28 = (ulonglong)uStack_ac;
          uVar15 = uStack_b0;
        }
LAB_82d308f4:
        *(uint *)((((*(int *)(*(int *)(uVar15 + 8) + 0xc) + *(int *)(*(int *)(uVar15 + 0xc) + 0xc) +
                    *(int *)(*(int *)(uVar15 + 0x10) + 0xc)) / 3 >> 0xb) * 0x10 +
                   ((*(int *)(*(int *)(uVar15 + 8) + 8) + *(int *)(*(int *)(uVar15 + 0xc) + 8) +
                    *(int *)(*(int *)(uVar15 + 0x10) + 8)) / 3 >> 0xb) + 0x97) * 4 + param_2) =
             uVar15;
        *(ushort *)(uVar15 + 0x20) = *(ushort *)(uVar15 + 0x20) | 0x1000;
        *param_1 = 0;
        param_1[2] = (int)uVar28;
        param_1[1] = uVar15;
        return param_1;
      }
    }
LAB_82d2f8a0:
    *param_1 = 4;
    param_1[1] = uVar27;
    param_1[2] = uVar21;
    return param_1;
  }
LAB_82d2edcc:
  uVar15 = uRam8323b6d0 & 1;
  if ((uRam8323b6d0 & 1) == 0) {
    uRam8323b6d0 = uRam8323b6d0 | 1;
    uRam8323b6cc = 0;
    uRam8323b6c8 = uVar15;
  }
  *param_1 = 9;
  uVar15 = uRam8323b6c8;
  param_1[2] = uRam8323b6cc;
  param_1[1] = uVar15;
  return param_1;
}

