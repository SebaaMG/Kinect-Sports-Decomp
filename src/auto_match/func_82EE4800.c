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
extern unsigned int *auStack_50;
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


longlong fn_82EE4800(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort auStack_50 [40];
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  if (uVar1 < 0x2a) {
    uVar3 = 0x2a;
LAB_82ee4858:
    *param_2 = uVar3;
    lVar7 = -0x3ff2c94f;
  }
  else {
    fn_82EE3F30(param_1);
    piVar4 = param_1 + 10;
    fn_82E57620(param_1 + 4,piVar4);
    fn_82E576A8(param_1 + 8,piVar4);
    lVar7 = fn_82E57620(param_1 + 0x5d,piVar4);
    if ((-1 < lVar7) && (lVar7 = fn_82E57738(auStack_50,piVar4), -1 < lVar7)) {
      uVar5 = (uint)auStack_50[0];
      uVar3 = (uVar5 + 0x15) * 2;
      if (uVar1 < uVar3) goto LAB_82ee4858;
      uVar6 = 0;
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          iVar2 = fn_82E50BE8(0x104,0,0,0,0);
          if (iVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = fn_82EE39D8();
          }
          if ((uVar6 & 0xffffffff) == 0) {
            lVar7 = -0x7ff8fff2;
            goto LAB_82ee49bc;
          }
          lVar7 = fn_82E57738(auStack_50,piVar4);
          if (lVar7 < 0) goto LAB_82ee4994;
          iVar2 = fn_82E3C590(uVar6,auStack_50[0],0);
          if (iVar2 == 0) {
            lVar7 = -0x7ff8fff2;
            goto LAB_82ee4994;
          }
          iVar2 = fn_82EE32F8(param_1 + 0x12,uVar6,0);
          if (iVar2 == 0) {
            lVar7 = -0x7ff8fff2;
            break;
          }
          uVar3 = uVar3 + 1 & 0xffff;
        } while (uVar3 < uVar5);
      }
      if ((int)lVar7 < 0) {
LAB_82ee4994:
        if ((uVar6 & 0xffffffff) != 0) {
          fn_82EE3730(uVar6);
          fn_82E4FE40(uVar6);
        }
      }
    }
    if ((int)lVar7 != -0x3ff2c94f) {
LAB_82ee49bc:
      *param_2 = uVar1 - param_1[0x10];
      if ((-1 < (int)lVar7) && (uVar6 = (**(code **)(*param_1 + 0x2c))(param_1), uVar6 != *param_2))
      {
        lVar7 = -0x3ff2c566;
      }
    }
  }
  return lVar7;
}

