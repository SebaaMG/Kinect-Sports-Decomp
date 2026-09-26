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
extern unsigned int *auStack_88;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E59158();
extern int fn_82E59EC8();
extern int fn_82E5A570();
extern int fn_82EE5E28();
extern int fn_82F691F0();
extern unsigned int uStack_90;


/* WARNING: Removing unreachable block (ram,0x82e5acf0) */
/* WARNING: Removing unreachable block (ram,0x82e5acfc) */
/* WARNING: Removing unreachable block (ram,0x82e5ad00) */

longlong fn_82E5A838(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar5;
  int iVar6;
  ulonglong uVar4;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int *piVar11;
  uint uStack_90;
  int *piStack_8c;
  undefined4 auStack_88 [34];
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  lVar9 = -0x3ff2c94f;
  if (uVar1 < 0x58) {
    *param_2 = 0x58;
  }
  else {
    piVar11 = param_1 + 10;
    fn_82E57620(param_1 + 4,piVar11);
    puVar10 = (ulonglong *)(param_1 + 8);
    fn_82E576A8(puVar10,piVar11);
    lVar9 = fn_82E576A8(param_1 + 0x12,piVar11);
    if ((((((-1 < lVar9) && (lVar9 = fn_82E576A8(param_1 + 0x14,piVar11), -1 < lVar9)) &&
          (lVar9 = fn_82E59EC8(param_1 + 0x16,piVar11), -1 < lVar9)) &&
         (((lVar9 = fn_82E59EC8(param_1 + 0x17,piVar11), -1 < lVar9 &&
           (lVar9 = fn_82E59EC8(param_1 + 0x18,piVar11), -1 < lVar9)) &&
          ((lVar9 = fn_82E59EC8(param_1 + 0x19,piVar11), -1 < lVar9 &&
           ((lVar9 = fn_82E59EC8(param_1 + 0x1a,piVar11), -1 < lVar9 &&
            (lVar9 = fn_82E59EC8(param_1 + 0x1b,piVar11), -1 < lVar9)))))))) &&
        (lVar9 = fn_82E59EC8(param_1 + 0x1c,piVar11), -1 < lVar9)) &&
       ((((lVar9 = fn_82E59EC8(param_1 + 0x1d,piVar11), -1 < lVar9 &&
          (lVar9 = fn_82E57738(param_1 + 0x1e,piVar11), -1 < lVar9)) &&
         (lVar9 = fn_82E57738((int)param_1 + 0x7a,piVar11), -1 < lVar9)) &&
        (lVar9 = fn_82E576A8(param_1 + 0x20,piVar11), -1 < lVar9)))) {
      piStack_8c = (int *)((uint)piStack_8c & 0xffff);
      lVar9 = fn_82E57738(&piStack_8c,piVar11);
      if (-1 < lVar9) {
        uStack_90 = uStack_90 & 0xffff;
        lVar9 = fn_82E57738(&uStack_90,piVar11);
        if (-1 < lVar9) {
          uVar8 = (uint)piStack_8c >> 0x10;
          uVar3 = uStack_90 >> 0x10;
          uVar7 = uVar3 * 0x16 + uVar8 * 4 + 0x58;
          if (uVar1 < uVar7) {
            *param_2 = uVar7;
            lVar9 = -0x3ff2c94f;
          }
          else {
            piVar5 = (int *)0x0;
            uVar7 = 0;
            if (uVar8 != 0) {
              do {
                if ((uint)param_1[0x10] < 4) {
                  uVar8 = (uVar1 - param_1[0x10]) + 4;
LAB_82e5ab48:
                  lVar9 = -0x3ff2c94f;
                  *param_2 = uVar8;
                  goto LAB_82e5ab90;
                }
                piVar5 = (int *)fn_82E50BE8(8,0,0,0,0);
                if (piVar5 == (int *)0x0) {
                  lVar9 = -0x7ff8fff2;
                  goto LAB_82e5ae54;
                }
                lVar9 = fn_82E57738(piVar5 + 1,piVar11);
                if (lVar9 < 0) goto LAB_82e5ab90;
                piStack_8c = (int *)((uint)piStack_8c & 0xffff);
                lVar9 = fn_82E57738(&piStack_8c,piVar11);
                if (lVar9 < 0) goto LAB_82e5ab90;
                if (((uint)piStack_8c & 0x10000) != 0) {
                  lVar9 = -0x3ff2c566;
                  goto LAB_82e5ab90;
                }
                *(ushort *)((int)piVar5 + 6) = (((U64)(piStack_8c) >> 0) & 0xFFFF);
                if ((uint)param_1[0x10] < (uint)(((U64)(piStack_8c) >> 0) & 0xFFFF)) {
                  uVar8 = ((uint)(((U64)(piStack_8c) >> 0) & 0xFFFF) - param_1[0x10]) + uVar1;
                  goto LAB_82e5ab48;
                }
                uVar2 = (uint)((((U64)(piStack_8c) >> 0) & 0xFFFF) >> 1);
                uVar4 = fn_82E50BE8(uVar2 * 2,0,0,0,0);
                *piVar5 = (int)uVar4;
                if ((uVar4 & 0xffffffff) == 0) {
                  lVar9 = -0x7ff8fff2;
                  goto LAB_82e5ab90;
                }
                lVar9 = fn_82E577A0(uVar4,piVar11,uVar2);
                if (lVar9 < 0) goto LAB_82e5ab90;
                if (uVar2 != 0) {
                  *(undefined2 *)(uVar2 * 2 + *piVar5 + -2) = 0;
                }
                iVar6 = fn_82E5A570(param_1 + 0x3e,piVar5,0);
                if (iVar6 == 0) {
                  lVar9 = -0x7ff8fff2;
                  break;
                }
                uVar7 = uVar7 + 1 & 0xffff;
              } while (uVar7 < uVar8);
            }
            if ((int)lVar9 < 0) {
LAB_82e5ab90:
              if (piVar5 != (int *)0x0) {
                fn_82E4FE40(piVar5);
              }
            }
            else {
              if (uVar3 != 0) {
                lVar9 = fn_82E50BE8(0x1c,0,0,0,0);
                if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82F691F0(lVar9,0,0x1c);
                }
                lVar9 = -0x7ff8fff2;
                goto LAB_82e5ae54;
              }
              if ((-1 < (int)lVar9) && ((ulonglong)(uVar1 - param_1[0x10]) < *puVar10)) {
                uStack_90 = 0;
                lVar9 = (**(code **)(*(int *)param_1[3] + 0x1c))
                                  ((int *)param_1[3],0xffffffff82154b18,&uStack_90);
                if (lVar9 < 0) goto LAB_82e5ae54;
                piStack_8c = (int *)0x0;
                param_1[0x22] = uStack_90;
                if ((ulonglong)(uVar1 - param_1[0x10]) < *puVar10) {
                  do {
                    if (*piVar11 == 0) {
                      piVar5 = (int *)0x0;
                      iVar6 = 0;
                    }
                    else {
                      piVar5 = *(int **)(param_1[0xb] + 8);
                      iVar6 = *(int *)(param_1[0xb] + 0xc);
                    }
                    if (iVar6 == 0) {
                      piStack_8c = piVar5;
                      (**(code **)(*piVar5 + 4))();
                    }
                    else {
                      lVar9 = fn_82E59158(piVar5,iVar6,&piStack_8c);
                      if (lVar9 < 0) goto LAB_82e5ae54;
                    }
                    auStack_88[0] = 0;
                    lVar9 = (**(code **)(*(int *)param_1[0x22] + 0x18))
                                      ((int *)param_1[0x22],piStack_8c,auStack_88);
                    if ((lVar9 < 0) || (lVar9 = fn_82EE5E28(piVar11,auStack_88[0]), lVar9 < 0)
                       ) goto LAB_82e5ae54;
                    if (piStack_8c != (int *)0x0) {
                      (**(code **)(*piStack_8c + 8))();
                      piStack_8c = (int *)0x0;
                    }
                  } while ((ulonglong)(uVar1 - param_1[0x10]) < *puVar10);
                }
              }
            }
            if (-1 < (int)lVar9) goto LAB_82e5ae74;
          }
        }
      }
    }
  }
LAB_82e5ae54:
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 8))();
    param_1[0x22] = 0;
  }
LAB_82e5ae74:
  if ((((int)lVar9 != -0x3ff2c94f) && (*param_2 = uVar1 - param_1[0x10], -1 < (int)lVar9)) &&
     (uVar4 = (**(code **)(*param_1 + 0x2c))(param_1), uVar4 != *param_2)) {
    lVar9 = -0x3ff2c566;
  }
  return lVar9;
}

