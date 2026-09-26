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
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_be;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EEFB28();
extern int fn_82EEFB98();
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82EEFE30(int *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ushort uStack_c0;
  ushort auStack_be [3];
  ulonglong uStack_b8;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined8 uStack_a8;
  
  if (param_1[3] == 0) {
    lVar3 = -0x3ff2c94a;
  }
  else if (param_2 == (uint *)0x0) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    uStack_a8 = 0;
    iVar5 = 0;
    if (uVar1 < 0x2c) {
      uVar8 = 0x2c;
LAB_82eefea8:
      *param_2 = uVar8;
      lVar3 = -0x3ff2c94f;
    }
    else {
      piVar10 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar10);
      fn_82E576A8(param_1 + 8,piVar10);
      lVar3 = fn_82EE5E28(piVar10,0x10);
      if (-1 < lVar3) {
        uStack_c0 = 0;
        lVar3 = fn_82E57738(&uStack_c0,piVar10);
        if (-1 < lVar3) {
          auStack_be[0] = 0;
          lVar3 = fn_82E57738(auStack_be,piVar10);
          if (-1 < lVar3) {
            uVar7 = (uint)uStack_c0;
            uVar9 = (uint)auStack_be[0];
            uVar11 = (uVar7 * 4 + uVar9 + 0x16) * 2;
            if (uVar1 < uVar11) {
              *param_2 = uVar11;
              lVar3 = -0x3ff2c94f;
            }
            else {
              uVar11 = 0;
              if (uVar9 != 0) {
                do {
                  uStack_b8 = 0;
                  if ((uint)param_1[0x10] < 2) {
                    uVar8 = (uVar1 - param_1[0x10]) + 2;
                    goto LAB_82eefea8;
                  }
                  auStack_be[0] = 0;
                  lVar3 = fn_82E57738(auStack_be,piVar10);
                  uVar2 = auStack_be[0];
                  if (lVar3 < 0) goto LAB_82ef01e0;
                  uVar12 = (uint)auStack_be[0];
                  if (0x400 < uVar12) {
                    lVar3 = -0x3ff2c566;
                    goto LAB_82ef01e0;
                  }
                  uVar8 = uVar12 * 2;
                  if ((uint)param_1[0x10] < uVar8) {
                    uVar8 = uVar8 + (uVar1 - param_1[0x10]);
                    goto LAB_82eefea8;
                  }
                  if (uVar12 == 0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = (uVar12 + 1) * 2;
                    if (0x7fffffff < uVar12 + 1) {
                      iVar5 = -1;
                    }
                    iVar5 = fn_82E50BE8(iVar5,0,0,0,0);
                    if (iVar5 == 0) {
                      lVar3 = -0x7ff8fff2;
                      goto LAB_82ef01e0;
                    }
                    lVar3 = fn_82E577A0(iVar5,piVar10,uVar12);
                    if (lVar3 < 0) goto LAB_82ef01d0;
                    *(undefined2 *)(uVar8 + iVar5) = 0;
                  }
                  uStack_b8 = (ulonglong)CONCAT24(uVar2,iVar5);
                  iVar6 = fn_82EEFB98(param_1 + 0x6c,uStack_b8,0);
                  if (iVar6 == 0) {
                    lVar3 = -0x7ff8fff2;
                    break;
                  }
                  iVar5 = 0;
                  uVar11 = uVar11 + 1 & 0xffff;
                } while (uVar11 < uVar9);
              }
              if ((-1 < (int)lVar3) && (uVar11 = 0, uVar7 != 0)) {
                while( true ) {
                  uStack_a8 = 0;
                  if ((uint)param_1[0x10] < 8) break;
                  lVar3 = fn_82E59EC8(auStack_b0,piVar10);
                  if ((lVar3 < 0) || (lVar3 = fn_82E57738(auStack_ac,piVar10), lVar3 < 0))
                  goto LAB_82ef01d0;
                  if (uVar9 == 0) {
LAB_82ef01bc:
                    lVar3 = -0x3ff2c566;
                    goto LAB_82ef01d0;
                  }
                  auStack_be[0] = 0;
                  lVar3 = fn_82E57738(auStack_be,piVar10);
                  if (lVar3 < 0) goto LAB_82ef01d0;
                  uVar12 = (uint)auStack_be[0];
                  if (0x2800 < uVar12) goto LAB_82ef01bc;
                  uVar8 = uVar12 * 2;
                  uStack_a8 = (ulonglong)CONCAT24(auStack_be[0],(((U64)(uStack_a8) >> 32) & 0xFFFFFFFF));
                  if ((uint)param_1[0x10] < uVar8) {
                    uVar8 = uVar8 + (uVar1 - param_1[0x10]);
                    goto LAB_82ef01b0;
                  }
                  if (auStack_be[0] != 0) {
                    iVar6 = (uVar12 + 1) * 2;
                    if (0x7fffffff < uVar12 + 1) {
                      iVar6 = -1;
                    }
                    iVar6 = fn_82E50BE8(iVar6,0,0,0,0);
                    uStack_a8 = CONCAT44((((U64)(uStack_a8) >> 0) & 0xFFFFFFFF),iVar6);
                    if (iVar6 == 0) {
LAB_82ef01cc:
                      lVar3 = -0x7ff8fff2;
                    }
                    else {
                      lVar3 = fn_82E577A0(iVar6,piVar10,uVar12);
                      if (-1 < lVar3) {
                        *(undefined2 *)(uVar8 + iVar6) = 0;
                        goto LAB_82ef0174;
                      }
                    }
                    goto LAB_82ef01d0;
                  }
                  uStack_a8 = 0;
LAB_82ef0174:
                  iVar6 = fn_82EEFB28(param_1 + 0x12,0,uStack_a8,0);
                  if (iVar6 == 0) goto LAB_82ef01cc;
                  uStack_a8 = uStack_a8 & 0xffffffff00000000;
                  uVar11 = uVar11 + 1 & 0xffff;
                  if (uVar7 <= uVar11) goto LAB_82ef01d0;
                }
                uVar8 = (uVar1 - param_1[0x10]) + 8;
LAB_82ef01b0:
                lVar3 = -0x3ff2c94f;
                *param_2 = uVar8;
              }
LAB_82ef01d0:
              if (iVar5 != 0) {
                fn_82E4FE40(iVar5);
              }
            }
          }
        }
      }
    }
LAB_82ef01e0:
    if ((((U64)(uStack_a8) >> 32) & 0xFFFFFFFF) != 0) {
      fn_82E4FE40();
    }
    if ((((int)lVar3 != -0x3ff2c94f) && (*param_2 = uVar1 - param_1[0x10], -1 < (int)lVar3)) &&
       (uVar4 = (**(code **)(*param_1 + 0x2c))(param_1), uVar4 != *param_2)) {
      lVar3 = -0x3ff2c566;
    }
  }
  return lVar3;
}

