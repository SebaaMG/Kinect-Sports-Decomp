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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E57AA0();
extern int fn_82EE5E28();
extern int fn_82EE5F60();


longlong fn_82E57D08(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  byte abStack_70 [2];
  ushort auStack_6e [55];
  
  iVar3 = 0;
  if (param_1[3] == 0) {
    lVar9 = -0x3ff2c94a;
  }
  else if (param_2 == (uint *)0x0) {
    lVar9 = -0x7ff8ffa9;
  }
  else {
    *param_2 = 0;
    uVar6 = param_1[0x10];
    if (uVar6 < 0x1a) {
      uVar5 = 0x1a;
    }
    else {
      piVar8 = param_1 + 10;
      auStack_6e[0] = 0;
      fn_82E57620(param_1 + 4,piVar8);
      fn_82E576A8(param_1 + 8,piVar8);
      lVar9 = fn_82E57738(auStack_6e,piVar8);
      if (lVar9 < 0) {
        return lVar9;
      }
      uVar7 = (uint)auStack_6e[0];
      uVar5 = uVar7 * 3 + 0x1a;
      if (uVar5 <= uVar6) {
        uVar5 = 0;
        if (uVar7 != 0) {
          do {
            if ((uint)param_1[0x10] < 3) {
              uVar6 = (uVar6 - param_1[0x10]) - 3;
LAB_82e57eb4:
              *param_2 = uVar6;
              return -0x3ff2c94f;
            }
            abStack_70[0] = 0;
            lVar9 = fn_82EE5F60(piVar8,abStack_70,1);
            if (-1 < (int)lVar9) {
              lVar9 = fn_82EE5E28(piVar8,1);
            }
            if ((int)lVar9 < 0) {
              return lVar9;
            }
            if ((abStack_70[0] & 1) != 0) {
              return -0x3ff2c566;
            }
            if ((uint)param_1[0x10] < (uint)abStack_70[0]) {
              uVar6 = ((uint)abStack_70[0] - param_1[0x10]) + uVar6;
              goto LAB_82e57eb4;
            }
            uVar1 = (uint)(abStack_70[0] >> 1);
            iVar3 = fn_82E50BE8(uVar1 * 2,0,0,0,0);
            if (iVar3 == 0) {
              return -0x7ff8fff2;
            }
            lVar9 = fn_82E577A0(iVar3,piVar8,uVar1);
            if (lVar9 < 0) goto LAB_82e57f2c;
            if (uVar1 != 0) {
              *(undefined2 *)(uVar1 * 2 + iVar3 + -2) = 0;
            }
            iVar4 = fn_82E57AA0(param_1 + 0x12,iVar3,0);
            if (iVar4 == 0) {
              lVar9 = -0x7ff8fff2;
              break;
            }
            iVar3 = 0;
            uVar5 = uVar5 + 1 & 0xffff;
          } while (uVar5 < uVar7);
        }
        if (-1 < (int)lVar9) {
          *param_2 = uVar6 - param_1[0x10];
          uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
          if (uVar2 != *param_2) {
            lVar9 = -0x3ff2c566;
          }
        }
LAB_82e57f2c:
        if (iVar3 == 0) {
          return lVar9;
        }
        fn_82E4FE40(iVar3);
        return lVar9;
      }
    }
    *param_2 = uVar5;
    lVar9 = -0x3ff2c94f;
  }
  return lVar9;
}

