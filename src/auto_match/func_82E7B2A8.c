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
extern unsigned int *auStack_c4;
extern int fn_82E77F88();
extern int fn_82E78690();
extern int fn_82E79690();
extern int fn_82E7AC38();
extern int fn_82E7AE00();
extern unsigned int iStack_bc;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


longlong fn_82E7B2A8(int param_1,int param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined1 auStack_c4 [4];
  int *piStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [176];
  
  if ((param_2 == 0) || (param_3 == (int *)0x0)) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 0x148) == 0) {
    return -0x3ff2c94a;
  }
  if (0x3e < *(ushort *)(param_1 + 0x146)) {
    return -0x3ff2c561;
  }
  piStack_d0 = (int *)0x0;
  lVar10 = 9;
  puVar1 = &uStack_b8;
  do {
    puVar4 = puVar1;
    puVar1 = puVar4 + 1;
    *puVar1 = 0;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = *param_3;
  *(undefined4 *)(puVar4 + 2) = 0;
  lVar10 = (**(code **)(iVar8 + 0xb4))(param_3,auStack_c4);
  if (lVar10 < 0) goto LAB_82e7b5c0;
  uVar7 = *(uint *)(param_2 + 0x1b);
  if (*(int *)(param_2 + 7) + uVar7 <= *(uint *)(param_2 + 0xb)) {
    uVar3 = *(uint *)(param_2 + 0xb);
    if (param_4 == 0) {
      uVar3 = uVar7;
    }
    if (uVar7 <= uVar3) {
      lVar10 = fn_82E79690(param_1,auStack_b0);
      if (-1 < lVar10) {
        lVar10 = fn_82E7AE00(param_1,param_2,param_3,0);
        if ((int)lVar10 == -0x3ff2c566) {
          lVar10 = fn_82E7AC38(param_1,auStack_b0);
          if (-1 < lVar10) {
            lVar10 = -0x3ff2c566;
          }
        }
        else if (-1 < (int)lVar10) {
          if ((ulonglong)*(ushort *)(param_1 + 0x146) != 0) {
            lVar10 = fn_82E78690(param_1 + 0x178,(ulonglong)*(ushort *)(param_1 + 0x146) - 1,
                                   &uStack_cc);
            uVar7 = -(uint)(lVar10 != 0) & uStack_cc;
            if (uVar7 != 0) {
              *(undefined4 *)(uVar7 + 0x144) = 0;
              *(undefined4 *)(uVar7 + 0x140) = 0;
              lVar10 = (**(code **)(*param_3 + 0x9c))(param_3,&uStack_c8);
              if (-1 < lVar10) {
                uVar3 = 0;
                if (param_4 == 0) {
                  uVar3 = *(uint *)(uVar7 + 7);
                }
                uVar6 = 0;
                uVar5 = 0;
                if (uStack_c8 != 0) {
                  do {
                    if (*(uint *)(uVar7 + 0x1b) <= uVar6) break;
                    uStack_cc = 0;
                    lVar10 = (**(code **)(*param_3 + 0xa0))(param_3,uVar5,&piStack_d0);
                    if ((lVar10 < 0) ||
                       (lVar10 = (**(code **)(*piStack_d0 + 0x14))(piStack_d0,&uStack_cc),
                       lVar10 < 0)) break;
                    iVar8 = 0;
                    uVar9 = *(uint *)(uVar7 + 7);
                    if (uVar9 < uStack_cc + uVar3) {
                      if (uVar3 < uVar9) {
                        iVar8 = uVar9 - uVar3;
                        uStack_cc = uStack_cc - iVar8;
                      }
                      else {
                        iVar8 = 0;
                      }
                      uVar9 = *(int *)(uVar7 + 0x1b) - uVar6;
                      if (uStack_cc <= uVar9) {
                        uVar9 = uStack_cc;
                      }
                      (**(code **)(*piStack_d0 + 4))();
                      piStack_c0 = piStack_d0;
                      iStack_bc = iVar8;
                      iVar2 = fn_82E77F88(param_1 + 0x244,CONCAT44(piStack_d0,iVar8),
                                            (ulonglong)uVar9 << 0x20,0);
                      if (iVar2 == 0) {
                        lVar10 = -0x7ff8fff2;
                        (**(code **)(*piStack_d0 + 8))();
                        break;
                      }
                      uVar6 = uVar9 + uVar6;
                      if (*(int *)(uVar7 + 0x144) == 0) {
                        *(int *)(uVar7 + 0x140) = *(int *)(param_1 + 0x354) + -1;
                      }
                      *(int *)(uVar7 + 0x144) = *(int *)(uVar7 + 0x144) + 1;
                    }
                    uVar3 = iVar8 + uStack_cc + uVar3;
                    if (piStack_d0 != (int *)0x0) {
                      (**(code **)(*piStack_d0 + 8))();
                      piStack_d0 = (int *)0x0;
                    }
                    uVar5 = uVar5 + 1;
                  } while ((uVar5 & 0xffffffff) < (ulonglong)uStack_c8);
                }
              }
              goto LAB_82e7b5c0;
            }
          }
          lVar10 = -0x7fff0001;
        }
      }
      goto LAB_82e7b5c0;
    }
  }
  lVar10 = -0x7ff8ffa9;
LAB_82e7b5c0:
  if (piStack_d0 != (int *)0x0) {
    (**(code **)(*piStack_d0 + 8))();
  }
  return lVar10;
}

