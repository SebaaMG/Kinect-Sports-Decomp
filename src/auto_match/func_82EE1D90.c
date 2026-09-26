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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82EE0FD0();
extern int fn_82EE1940();
extern unsigned int uStack_60;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82EE1D90(int *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar4;
  ulonglong uVar3;
  ushort uVar5;
  int *piVar6;
  longlong lVar7;
  ushort auStack_80 [2];
  int aiStack_7c [3];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  if (uVar1 < 0x1a) {
    *param_2 = 0x1a;
    lVar7 = -0x3ff2c94f;
  }
  else {
    piVar6 = param_1 + 10;
    fn_82E57620(param_1 + 4,piVar6);
    fn_82E576A8(param_1 + 8,piVar6);
    auStack_80[0] = 0;
    lVar7 = fn_82E57738(auStack_80,piVar6);
    if ((-1 < lVar7) && (lVar7 = fn_82EE1940(param_1), uVar2 = auStack_80[0], -1 < lVar7)) {
      uVar5 = 0;
      aiStack_7c[0] = 0;
      if (auStack_80[0] != 0) {
        do {
          iVar4 = param_1[0x10];
          uStack_68 = 0;
          uStack_60 = 0;
          lVar7 = (**(code **)(*param_1 + 0x34))(param_1,auStack_70,piVar6,aiStack_7c);
          if (lVar7 < 0) {
            if ((int)lVar7 != -0x3ff2c94f) goto LAB_82ee1f20;
            *param_2 = (uVar1 - iVar4) + aiStack_7c[0];
            goto LAB_82ee1f64;
          }
          lVar7 = (**(code **)(*param_1 + 0x40))(param_1,auStack_70);
          if (lVar7 < 0) break;
          iVar4 = fn_82EE0FD0(param_1 + 0x12,0,uStack_68,uStack_60,0);
          if (iVar4 == 0) {
            lVar7 = -0x7fffbffb;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
    }
    if ((int)lVar7 != -0x3ff2c94f) {
LAB_82ee1f20:
      *param_2 = uVar1 - param_1[0x10];
      if ((int)lVar7 < 0) goto LAB_82ee1f64;
      uVar3 = (**(code **)(*param_1 + 0x2c))(param_1);
      if (uVar3 != *param_2) {
        lVar7 = -0x3ff2c566;
      }
    }
    if (-1 < (int)lVar7) {
      return lVar7;
    }
  }
LAB_82ee1f64:
  fn_82EE1940(param_1);
  return lVar7;
}

