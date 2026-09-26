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
extern unsigned int *auStack_c8;
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963FA8();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_8299F910();
extern int fn_8299FA58();
extern int fn_82BA02A8();
extern unsigned int iStack_d0;
extern unsigned int lbl_82005710;
extern unsigned int uStack00000024;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;


longlong fn_8299FC30(int param_1,int *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  int iVar10;
  longlong lVar8;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  bool bVar24;
  uint uVar23;
  int *piStack0000001c;
  uint uStack00000024;
  int iStack_d0;
  uint uStack_cc;
  undefined1 auStack_c8 [4];
  uint uStack_c4;
  int aiStack_c0 [2];
  int aiStack_b8 [46];
  
  uStack_c4 = 0;
  uVar13 = lbl_82005710;
  piVar18 = param_2;
  piStack0000001c = param_2;
  uStack00000024 = param_3;
  if (param_3 != 0) {
    do {
      uVar19 = uStack_c4;
      puVar1 = (uint *)*param_2;
      iVar9 = 0;
      iVar10 = 0;
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        uVar7 = uVar2 & 0xfffff;
        fn_8299FA58(param_1,param_4,4,puVar1,&uStack_cc,auStack_c8,&iStack_d0,1);
        if (iStack_d0 == 0) {
          if (uVar7 == 2) {
            iVar9 = fn_8299F910(param_1,*(undefined4 *)(param_1 + 0x230),
                                  *(undefined4 *)(param_1 + 0x224),(ulonglong)puVar1[2] + 8,1,0);
            iVar10 = fn_8299F910(param_1);
            if ((((iVar9 != 0) && (iVar10 != 0)) &&
                (fn_8299FA58(param_1,param_4,4,iVar9,&uStack_cc,auStack_c8,aiStack_c0,1),
                iVar4 = aiStack_c0[0], aiStack_c0[0] != 0)) &&
               (fn_8299FA58(param_1), iVar4 == iStack_d0)) goto LAB_8299fd90;
          }
        }
        else if (uVar7 != 2) {
LAB_8299fd90:
          iVar4 = iStack_d0;
          if (iStack_d0 != 0) {
            if (uVar7 == 3) {
              if (((uVar2 & 0xfff00000) == 0x60f00000) || ((uVar2 & 0xfff00000) == 0x60a00000)) {
                bVar15 = true;
                uVar14 = 0;
                uVar16 = 0xc;
                do {
                  iVar10 = *(int *)(*(int *)(uVar16 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
                  iVar9 = *(int *)(iVar10 + 0x3c);
                  bVar15 = (bool)(uVar14 == *(uint *)(iVar10 + 0x10) & bVar15);
                  if ((iVar9 != 0) && (iVar9 != 0x60000)) {
                    uVar13 = 0xffffffff820515b0;
                    goto LAB_829a01b8;
                  }
                  uVar16 = uVar16 + 4;
                  uVar14 = uVar14 + 1;
                } while (uVar16 < 0x18);
                if (bVar15) {
                  if ((*(uint *)(param_1 + 200) & 0xffff) < 0x102) {
                    fn_82975B00(param_1,*(undefined4 *)(piVar18[uVar19] + 0x3c),0x11b8,
                                  0xffffffff82051558,*(uint *)(param_1 + 200) & 0xff);
                    return -0x7fffbffb;
                  }
                  iVar9 = fn_82963998(0x74);
                  if (iVar9 == 0) {
                    iVar9 = 0;
                  }
                  else {
                    iVar9 = fn_829632A0();
                  }
                  if (iVar9 != 0) {
                    uVar12 = 6;
                    uVar14 = 0x72600003;
                    goto LAB_8299ff6c;
                  }
LAB_829a0210:
                  lVar8 = -0x7ff8fff2;
                  goto LAB_829a0188;
                }
              }
            }
            else if ((uVar7 == 2) && ((uVar2 & 0xfff00000) == 0x60500000)) {
              aiStack_b8[1] = 0;
              aiStack_b8[2] = 1;
              aiStack_b8[3] = 2;
              bVar15 = true;
              aiStack_b8[0] = 3;
              bVar24 = true;
              uVar16 = 0;
              do {
                if (uVar16 == 0) {
                  piVar17 = *(int **)(iVar9 + 8);
                }
                else {
                  piVar17 = *(int **)(iVar10 + 8);
                }
                iVar22 = *(int *)(*piVar17 * 4 + *(int *)(param_1 + 0x14));
                iVar21 = *(int *)(iVar22 + 0x10);
                bVar15 = (bool)(aiStack_b8[uVar16] == iVar21 & bVar15);
                bVar24 = (bool)(aiStack_b8[uVar16 + 2] == iVar21 & bVar24);
                if (*(int *)(iVar22 + 0x3c) != 0) {
                  uVar13 = 0xffffffff82051500;
LAB_829a01b8:
                  fn_82975B00(param_1,*(undefined4 *)(piVar18[uVar19] + 0x3c),0x11b7,uVar13);
                  return -0x7fffbffb;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < 2);
              if ((bVar15) || (bVar24)) {
                iVar9 = fn_82963998(0x74);
                if (iVar9 == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = fn_829632A0();
                }
                if (iVar9 == 0) goto LAB_829a0210;
                uVar14 = 0x72800000;
                if (!bVar24) {
                  uVar14 = 0x72700000;
                }
                uVar14 = uVar14 | 2;
                uVar12 = 4;
LAB_8299ff6c:
                lVar8 = fn_82963A30(iVar9,uVar14,uVar12,4,0);
                uVar16 = uStack_cc;
                if (lVar8 < 0) goto LAB_829a0188;
                iVar10 = 0;
                lVar8 = 4;
                do {
                  *(undefined4 *)(*(int *)(iVar9 + 0x10) + iVar10) =
                       *(undefined4 *)(*(int *)(*param_2 + 0x10) + iVar10);
                  iVar10 = iVar10 + 4;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
                uVar14 = (ulonglong)uStack_cc;
                uVar3 = *(undefined4 *)
                         (*(int *)(*(int *)(iVar4 + 8) + 0xc) * 4 + *(int *)(param_1 + 0x14));
                iVar10 = *(int *)(**(int **)(*param_2 + 8) * 4 + *(int *)(param_1 + 0x14));
                if ((*(uint *)(*(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                    0x800) == 0) {
                  uVar20 = uVar14;
                  if (uVar14 < 4) {
                    piVar17 = (int *)(uStack_cc * 4 + param_4);
                    do {
                      if (*piVar17 == 0) break;
                      uVar20 = uVar20 + 1;
                      piVar17 = piVar17 + 1;
                    } while ((uVar20 & 0xffffffff) < 4);
                  }
                  if ((uVar20 & 0xffffffff) == 4) goto LAB_829a0010;
                  *(int *)(iVar10 + 0xc) = (int)uVar20;
                }
                else {
                  uVar20 = (ulonglong)*(uint *)(iVar10 + 0xc);
                  if ((3 < uVar20) || (*(int *)(*(uint *)(iVar10 + 0xc) * 4 + param_4) != 0)) {
LAB_829a0010:
                    lVar8 = -0x7fffbffb;
                    goto LAB_829a0188;
                  }
                }
                iVar10 = fn_82964628(uVar13,param_1,*(undefined4 *)(param_1 + 0x80),uVar20,0);
                if (iVar10 == -1) goto LAB_829a0210;
                iVar4 = *(int *)(iVar10 * 4 + *(int *)(param_1 + 0x14));
                fn_82963FA8(iVar4,uVar3);
                *(int *)(iVar4 + 0xc) = (int)uVar20;
                uVar23 = 0;
                *(uint *)(iVar4 + 0x6c) = (uint)((uVar20 & 0xffffffff) << 8) | 3;
                if ((uVar2 & 0xfffff) != 0) {
                  iVar4 = (uVar2 & 0xfffff) * 4;
                  iVar22 = 0;
                  iVar21 = iVar4;
                  do {
                    iVar11 = fn_82964628(uVar13,param_1,*(undefined4 *)(param_1 + 0x80),uVar14
                                               ,uVar23);
                    if (iVar11 == -1) goto LAB_829a0210;
                    iVar5 = *(int *)(iVar11 * 4 + *(int *)(param_1 + 0x14));
                    iVar6 = *(int *)(*(int *)(*(int *)(*param_2 + 8) + iVar4) * 4 +
                                    *(int *)(param_1 + 0x14));
                    fn_82963FA8(iVar5,uVar3);
                    *(uint *)(iVar5 + 0x10) = uVar23;
                    uVar23 = uVar23 + 1;
                    *(uint *)(iVar5 + 0xc) = uVar16;
                    *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar6 + 0x3c);
                    *(int *)(*(int *)(iVar9 + 8) + iVar22) = iVar10;
                    iVar22 = iVar22 + 4;
                    *(int *)(*(int *)(iVar9 + 8) + iVar21) = iVar11;
                    iVar21 = iVar21 + 4;
                    uVar19 = uStack_c4;
                    piVar18 = piStack0000001c;
                  } while (uVar23 < uVar7);
                }
                *(int *)((int)((uVar20 & 0xffffffff) << 2) + param_4) = iVar9;
                lVar8 = fn_829644B8(param_1,iVar9);
                if (lVar8 < 0) goto LAB_829a0188;
                *param_2 = 0;
                param_3 = uStack00000024;
              }
            }
          }
        }
      }
      uStack_c4 = uVar19 + 1;
      param_2 = param_2 + 1;
    } while (uStack_c4 < param_3);
  }
  iVar9 = 0;
  lVar8 = 0;
LAB_829a0188:
  if (iVar9 != 0) {
    fn_82BA02A8(iVar9);
    fn_829639F0(iVar9);
  }
  return lVar8;
}

