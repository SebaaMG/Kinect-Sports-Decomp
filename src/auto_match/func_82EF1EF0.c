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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EF1CC8();
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82EF1EF0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar7;
  int iVar8;
  longlong lVar6;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  ushort auStack_b0 [2];
  uint auStack_ac [3];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  if (uVar1 < 0x30) {
    uVar10 = 0x30;
LAB_82ef1f48:
    *param_2 = uVar10;
    return -0x3ff2c94f;
  }
  piVar12 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar12);
  fn_82E576A8(param_1 + 8,piVar12);
  lVar4 = fn_82EE5E28(piVar12,0x10);
  lVar11 = -0x3ff2c566;
  lVar6 = lVar11;
  if (-1 < lVar4) {
    auStack_ac[0] = 0;
    lVar4 = fn_82E59EC8(auStack_ac,piVar12);
    if ((-1 < lVar4) && (lVar4 = fn_82EE5E28(piVar12,2), -1 < lVar4)) {
      auStack_b0[0] = 0;
      lVar4 = fn_82E57738(auStack_b0,piVar12);
      uVar3 = auStack_ac[0];
      if (-1 < lVar4) {
        uVar9 = (uint)auStack_b0[0];
        uVar13 = (uint)(auStack_b0[0] >> 1);
        if (((auStack_b0[0] & 1) == 0) && (uVar13 < 0x1401)) {
          uVar10 = auStack_ac[0] * 0x1e + uVar9 + 0x30;
          if (uVar1 < uVar10) goto LAB_82ef1f48;
          if (((uVar9 + 0x30 < uVar9) || (uVar10 < auStack_ac[0] * 0x1e)) ||
             (uVar10 < auStack_ac[0])) goto LAB_82ef22b4;
          if (param_1[0x12] != 0) {
            fn_82E4FE40();
          }
          param_1[0x12] = 0;
          if (uVar13 != 0) {
            uVar5 = fn_82E50BE8(uVar13 * 2,0,0,0,0);
            param_1[0x12] = (int)uVar5;
            if ((uVar5 & 0xffffffff) == 0) {
LAB_82ef2074:
              lVar6 = -0x7ff8fff2;
              goto LAB_82ef22b4;
            }
            lVar4 = fn_82E577A0(uVar5,piVar12,uVar13);
            if (lVar4 < 0) goto LAB_82ef22ac;
            *(undefined2 *)(uVar13 * 2 + param_1[0x12] + -2) = 0;
          }
          uVar10 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          if (uVar3 != 0) {
            do {
              if ((uint)param_1[0x10] < 0x1e) {
                uVar10 = (uVar1 - param_1[0x10]) + 0x1e;
LAB_82ef2260:
                lVar4 = -0x3ff2c94f;
                *param_2 = uVar10;
                goto LAB_82ef228c;
              }
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              lVar4 = fn_82E576A8(auStack_a0,piVar12);
              if ((lVar4 < 0) || (lVar4 = fn_82E576A8(&uStack_98,piVar12), lVar4 < 0))
              goto LAB_82ef228c;
              auStack_b0[0] = 0;
              lVar4 = fn_82E57738(auStack_b0,piVar12);
              if (lVar4 < 0) goto LAB_82ef228c;
              uVar13 = (uint)auStack_b0[0];
              if (uVar13 < 0xc) goto LAB_82ef226c;
              if ((uint)param_1[0x10] < uVar13) {
                uVar10 = (uint)auStack_b0[0] + (uVar1 - param_1[0x10]);
                goto LAB_82ef2260;
              }
              lVar4 = fn_82E59EC8(&uStack_90,piVar12);
              if (((lVar4 < 0) || (lVar4 = fn_82E59EC8((int)&uStack_90 + 4,piVar12), lVar4 < 0))
                 || (lVar4 = fn_82E59EC8((int)&uStack_88 + 4,piVar12), lVar4 < 0))
              goto LAB_82ef228c;
              uVar9 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF);
              if (0x1400 < (((U64)(uStack_88) >> 32) & 0xFFFFFFFF)) {
LAB_82ef226c:
                lVar4 = -0x3ff2c566;
                goto LAB_82ef228c;
              }
              uVar2 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF) & 0x7fffffff;
              uVar14 = (((U64)(uStack_88) >> 32) & 0xFFFFFFFF) * 2;
              if (uVar13 - 0xc < uVar14) goto LAB_82ef226c;
              if ((((U64)(uStack_88) >> 32) & 0xFFFFFFFF) != 0) {
                uVar7 = uVar14;
                if (0x7fffffff < (((U64)(uStack_88) >> 32) & 0xFFFFFFFF)) {
                  uVar7 = 0xffffffff;
                }
                iVar8 = fn_82E50BE8(uVar7,0,0,0,0);
                uStack_88 = CONCAT44(iVar8,(((U64)(uStack_88) >> 32) & 0xFFFFFFFF));
                if (iVar8 == 0) goto LAB_82ef2074;
                lVar4 = fn_82E577A0(iVar8,piVar12,uVar9);
                if (lVar4 < 0) goto LAB_82ef228c;
                *(undefined2 *)(uVar14 + iVar8 + -2) = 0;
              }
              iVar8 = uVar13 + uVar2 * -2 + -0xc;
              uStack_80 = CONCAT44(iVar8,(((U64)(uStack_80) >> 32) & 0xFFFFFFFF));
              if ((iVar8 != 0) && (lVar4 = fn_82EE5E28(piVar12), lVar4 < 0)) goto LAB_82ef228c;
              iVar8 = fn_82EF1CC8(param_1 + 0x14,0,uStack_98,uStack_90,uStack_88,uStack_80,0);
              if (iVar8 == 0) {
                lVar4 = -0x7ff8fff2;
                break;
              }
              uVar10 = uVar10 + 1;
              uStack_88 = uStack_88 & 0xffffffff;
            } while (uVar10 < uVar3);
          }
          if ((int)lVar4 < 0) {
LAB_82ef228c:
            if ((((U64)(uStack_88) >> 0) & 0xFFFFFFFF) != 0) {
              fn_82E4FE40();
            }
          }
        }
        else {
          lVar4 = -0x3ff2c566;
        }
      }
    }
  }
LAB_82ef22ac:
  lVar6 = lVar4;
  if ((int)lVar4 == -0x3ff2c94f) {
    return lVar4;
  }
LAB_82ef22b4:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar6) && (uVar5 = (**(code **)(*param_1 + 0x2c))(param_1), uVar5 != *param_2)) {
    lVar6 = lVar11;
  }
  return lVar6;
}

