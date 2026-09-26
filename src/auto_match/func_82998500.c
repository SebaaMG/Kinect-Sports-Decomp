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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8200E890;


longlong fn_82998500(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar8;
  longlong lVar6;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar7;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar16 = 0;
  uVar17 = 0;
  if (param_1[2] != 0) {
    iVar14 = 0;
    do {
      if (param_1[0x22] == *(int *)(*(int *)(param_1[5] + iVar14) + 4)) {
        uVar1 = *(uint *)(*(int *)(param_1[5] + iVar14) + 0xc);
        if ((uVar1 != 0xffffffff) && ((uVar16 & 0xffffffff) <= (ulonglong)uVar1)) {
          uVar16 = (ulonglong)uVar1 + 1;
        }
      }
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + 4;
    } while (uVar17 < (uint)param_1[2]);
  }
  uVar15 = (ulonglong)(uint)param_1[0x8a];
  uVar17 = param_1[0x13];
  if (uVar17 < uVar15) {
    iVar14 = uVar17 << 2;
    uVar20 = lbl_82005730;
    uVar21 = lbl_8200E890;
    uVar22 = lbl_82005710;
    do {
      puVar3 = *(uint **)(param_1[0x8d] + iVar14);
      if ((puVar3 != (uint *)0x0) && (uVar1 = *puVar3, uVar1 != 0)) {
        uVar5 = (ulonglong)uVar1;
        uVar7 = uVar5 & 0xfffff;
        if ((uVar1 & 0xfff00000) == 0x70100000) {
          piVar2 = (int *)puVar3[2];
          iVar8 = param_1[5];
          iVar19 = param_1[4];
          if ((((*(uint *)(*(int *)(*(int *)(*(int *)(*piVar2 * 4 + iVar8) + 4) * 4 + iVar19) + 4) &
                0x200) != 0) &&
              ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)((int)(uVar7 << 2) + (int)piVar2) * 4 +
                                                    iVar8) + 4) * 4 + iVar19) + 4) & 0x200) != 0))
             && ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)((int)((uVar5 & 0xfffff) << 3) +
                                                               (int)piVar2) * 4 + iVar8) + 4) * 4 +
                                    iVar19) + 4) & 0x200) != 0)) {
            iVar8 = fn_82963998(0x74);
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = fn_829632A0();
            }
            if (iVar8 == 0) {
              return -0x7ff8fff2;
            }
            lVar6 = fn_82963A30(iVar8,uVar7 | 0x10000000,uVar7,uVar7,0);
            if (lVar6 < 0) {
              return lVar6;
            }
            lVar6 = fn_829632F0(iVar8,puVar3);
            if (lVar6 < 0) {
              return lVar6;
            }
            uVar18 = 0;
            if ((uVar1 & 0xfffff) != 0) {
              iVar19 = 0;
              do {
                iVar4 = *(int *)(*(int *)(iVar19 + puVar3[4]) * 4 + param_1[5]);
                *(undefined4 *)(*(int *)(iVar8 + 8) + iVar19) = *(undefined4 *)(puVar3[2] + iVar19);
                uVar9 = fn_82964628(uVar22,param_1,param_1[0x22],uVar16,
                                          *(undefined4 *)(iVar4 + 0x10));
                *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar19) = uVar9;
                *(undefined4 *)(puVar3[2] + iVar19) = uVar9;
                if (*(int *)(*(int *)(iVar8 + 0x10) + iVar19) == -1) {
                  return -0x7ff8fff2;
                }
                uVar18 = uVar18 + 1;
                iVar19 = iVar19 + 4;
              } while ((uVar18 & 0xffffffff) < uVar7);
            }
            uVar16 = uVar16 + 1;
            if (0x1ff < (uint)param_1[0x8a]) {
              return -0x7ff8fff2;
            }
            lVar6 = fn_829644B8(param_1,iVar8);
            if (lVar6 < 0) {
              return lVar6;
            }
            *(int *)(param_1[0x8a] * 4 + param_1[0x8d]) = iVar8;
            param_1[0x8a] = param_1[0x8a] + 1;
          }
        }
        if (((*puVar3 & 0xfff00000) == 0x30000000) && ((param_1[0x32] & 0xffffU) != 0x104)) {
          uVar18 = 1;
          if (1 < uVar7) {
            iVar8 = 4;
            do {
              if (*(int *)puVar3[2] != *(int *)((int)puVar3[2] + iVar8)) {
                fn_82975B00(param_1,puVar3[0xf],0x11ca,0xffffffff82050e44,param_1[0x32] & 0xff);
                return -0x7fffbffb;
              }
              uVar18 = uVar18 + 1;
              iVar8 = iVar8 + 4;
            } while ((uVar18 & 0xffffffff) < uVar7);
          }
          iVar8 = fn_82963998(0x74);
          if (iVar8 == 0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = (undefined4 *)fn_829632A0();
          }
          if (puVar10 == (undefined4 *)0x0) {
            return -0x7ff8fff2;
          }
          lVar6 = fn_829644B8(param_1,puVar10);
          if (lVar6 < 0) {
            fn_82BA02A8(puVar10);
LAB_82998ba0:
            fn_829639F0(puVar10);
            return lVar6;
          }
          lVar6 = fn_82963A30(puVar10,0x70300001,3,1,0);
          if (lVar6 < 0) {
            return lVar6;
          }
          lVar6 = fn_829632F0(puVar10,puVar3);
          if (lVar6 < 0) {
            return lVar6;
          }
          *(undefined4 *)puVar10[2] = *(undefined4 *)puVar3[2];
          uVar9 = fn_82964628(uVar21,param_1,param_1[0x1e],0,0);
          *(undefined4 *)(puVar10[2] + 4) = uVar9;
          uVar9 = fn_82964628(uVar20,param_1,param_1[0x1e],0,0);
          *(undefined4 *)(puVar10[2] + 8) = uVar9;
          if (*(int *)(puVar10[2] + 4) == -1) {
            return -0x7ff8fff2;
          }
          if (*(int *)(puVar10[2] + 8) == -1) {
            return -0x7ff8fff2;
          }
          uVar9 = fn_82964628(uVar22,param_1,param_1[0x22],uVar16,3);
          *(undefined4 *)puVar10[4] = uVar9;
          if (*(int *)puVar10[4] == -1) {
            return -0x7ff8fff2;
          }
          lVar6 = 0;
          if ((uVar1 & 0xfffff) != 0) {
            iVar8 = 0;
            lVar13 = (uVar5 & 0xfffff) << 2;
            uVar18 = uVar7;
            do {
              uVar12 = (uVar5 & 0xfffff) * 2 + lVar6;
              lVar6 = lVar6 + 1;
              iVar19 = (int)((uVar12 & 0xffffffff) << 2);
              *(undefined4 *)(puVar3[2] + iVar8) = *(undefined4 *)puVar10[4];
              iVar8 = iVar8 + 4;
              uVar1 = puVar3[2];
              uVar9 = *(undefined4 *)(uVar1 + (int)lVar13);
              *(undefined4 *)(uVar1 + (int)lVar13) = *(undefined4 *)(iVar19 + uVar1);
              lVar13 = lVar13 + 4;
              *(undefined4 *)(iVar19 + puVar3[2]) = uVar9;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          uVar16 = uVar16 + 1;
          if (0x1ff < (uint)param_1[0x8a]) {
            return -0x7ff8fff2;
          }
          *(undefined4 **)(param_1[0x8a] * 4 + param_1[0x8d]) = puVar10;
          param_1[0x8a] = param_1[0x8a] + 1;
          iVar8 = (**(code **)(*param_1 + 0x20))(param_1,puVar10,0);
          if (iVar8 != 0) {
            iVar8 = fn_82963998(0x74);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              puVar11 = (undefined4 *)fn_829632A0();
            }
            lVar6 = fn_829644B8(param_1,puVar11);
            if (lVar6 < 0) {
              if (puVar11 == (undefined4 *)0x0) {
                return lVar6;
              }
              fn_82BA02A8(puVar11);
              puVar10 = puVar11;
              goto LAB_82998ba0;
            }
            if (puVar11 == (undefined4 *)0x0) {
              return -0x7ff8fff2;
            }
            lVar6 = fn_82963A30(puVar11,0x20400001,2,1,0);
            if (lVar6 < 0) {
              return lVar6;
            }
            lVar6 = fn_829632F0(puVar11,puVar3);
            if (lVar6 < 0) {
              return lVar6;
            }
            *(undefined4 *)puVar11[4] = *(undefined4 *)puVar10[4];
            *(undefined4 *)puVar11[2] = *(undefined4 *)(puVar10[2] + 8);
            uVar9 = fn_82964628(uVar22,param_1,param_1[0x22],0,3);
            *(undefined4 *)puVar10[4] = uVar9;
            *(undefined4 *)(puVar11[2] + 4) = uVar9;
            puVar10[1] = 2;
            *puVar10 = 0x20500001;
            if (0x1ff < (uint)param_1[0x8a]) {
              return -0x7ff8fff2;
            }
            *(undefined4 **)(param_1[0x8a] * 4 + param_1[0x8d]) = puVar11;
            param_1[0x8a] = param_1[0x8a] + 1;
          }
          param_1[0x114] = 1;
          *puVar3 = (uint)uVar7 | 0x70f00000;
        }
        iVar8 = fn_82963998(0x74);
        if (iVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = fn_829632A0();
        }
        if ((uVar7 & 0xffffffff) == 0) {
          return -0x7ff8fff2;
        }
        lVar6 = fn_82963D50(uVar7,puVar3);
        if (lVar6 < 0) {
          return lVar6;
        }
        if (0x1ff < (uint)param_1[0x8a]) {
          return -0x7ff8fff2;
        }
        lVar6 = fn_829644B8(param_1,uVar7);
        if (lVar6 < 0) {
          return lVar6;
        }
        *(int *)(param_1[0x8a] * 4 + param_1[0x8d]) = (int)uVar7;
        param_1[0x8a] = param_1[0x8a] + 1;
      }
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + 4;
    } while (uVar17 < uVar15);
  }
  uVar17 = param_1[0x13];
  if (uVar17 < uVar15) {
    lVar6 = uVar15 - uVar17;
    iVar14 = uVar17 << 2;
    do {
      puVar10 = (undefined4 *)(param_1[0x8d] + iVar14);
      iVar14 = iVar14 + 4;
      *(undefined4 *)*puVar10 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return 0;
}

