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
extern unsigned int *auStack_6e;
extern int fn_82E3C590();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82EE32F8();
extern int fn_82EE3730();
extern int fn_82EE39D8();
extern int fn_82EE3F30();
extern unsigned int uStack_70;


longlong fn_82EE4180(int *param_1,uint *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort uStack_70;
  undefined2 auStack_6e [55];
  
  if (param_1[3] == 0) {
    lVar2 = -0x3ff2c94a;
  }
  else if (param_2 == (uint *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar6 = param_1[0x10];
    if (uVar6 < 0x2a) {
      uVar6 = 0x2a;
LAB_82ee41d8:
      *param_2 = uVar6;
      lVar2 = -0x3ff2c94f;
    }
    else {
      fn_82EE3F30(param_1);
      piVar7 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar7);
      fn_82E576A8(param_1 + 8,piVar7);
      lVar2 = fn_82E57620(param_1 + 0x5d,piVar7);
      if ((-1 < lVar2) &&
         (lVar3 = fn_82E57738(&uStack_70,piVar7), uVar1 = uStack_70, lVar2 = lVar3, -1 < lVar3
         )) {
        uVar9 = 0;
        uVar8 = 0;
        if (uStack_70 != 0) {
          lVar2 = -0x7ff8fff2;
          do {
            if ((uint)param_1[0x10] < 2) {
              uVar6 = (uVar6 - param_1[0x10]) + 2;
              goto LAB_82ee41d8;
            }
            iVar4 = fn_82E50BE8(0x104,0,0,0,0);
            if (iVar4 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = fn_82EE39D8();
            }
            if ((uVar9 & 0xffffffff) == 0) goto LAB_82ee43ac;
            lVar3 = fn_82E57738(&uStack_70,piVar7);
            if (lVar3 < 0) goto LAB_82ee438c;
            uVar5 = (uint)uStack_70;
            if ((uint)param_1[0x10] < uVar5 << 1) {
              lVar3 = -0x3ff2c94f;
              *param_2 = (uint)uStack_70 * 2 + (uVar6 - param_1[0x10]);
              goto LAB_82ee438c;
            }
            uVar10 = 0;
            if (uVar5 != 0) {
              do {
                lVar3 = fn_82E57738(auStack_6e,piVar7);
                if (lVar3 < 0) goto LAB_82ee438c;
                iVar4 = fn_82E3C590(uVar9,auStack_6e[0],0);
                if (iVar4 == 0) {
                  lVar3 = -0x7ff8fff2;
                  break;
                }
                uVar10 = uVar10 + 1 & 0xffff;
              } while (uVar10 < uVar5);
            }
            if ((int)lVar3 < 0) goto LAB_82ee438c;
            iVar4 = fn_82EE32F8(param_1 + 0x12,uVar9,0);
            if (iVar4 == 0) {
              lVar3 = -0x7ff8fff2;
              break;
            }
            uVar9 = 0;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar1);
        }
        lVar2 = lVar3;
        if ((int)lVar3 < 0) {
LAB_82ee438c:
          lVar2 = lVar3;
          if ((uVar9 & 0xffffffff) != 0) {
            fn_82EE3730(uVar9);
            fn_82E4FE40(uVar9);
          }
        }
      }
      if ((int)lVar2 != -0x3ff2c94f) {
LAB_82ee43ac:
        *param_2 = uVar6 - param_1[0x10];
        if ((-1 < (int)lVar2) &&
           (uVar9 = (**(code **)(*param_1 + 0x2c))(param_1), uVar9 != *param_2)) {
          lVar2 = -0x3ff2c566;
        }
      }
    }
  }
  return lVar2;
}

