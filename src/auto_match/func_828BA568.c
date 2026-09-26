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
extern int fn_8265CA60();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern int fn_828EA0D0();
extern int fn_828EA180();
extern int fn_82F6B030();
extern unsigned int lbl_82025404;
extern unsigned int lbl_8321404C;


undefined4 * fn_828BA568(undefined4 *param_1,undefined8 param_2)

{
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = &lbl_82025404;
  iVar7 = lbl_8321404C;
  iVar4 = fn_828E9DA8(param_2);
  iVar5 = fn_828E9D90(param_2);
  if (iVar4 - iVar5 < iVar7) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_828E9FF8(param_2,iVar7);
  }
  param_1[6] = uVar6;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar7 = param_1[6];
  if (iVar7 - 1U < 7) {
    if (iVar7 == 2) {
      iVar7 = fn_828E9DA8(param_2);
      iVar4 = fn_828E9D90(param_2);
      if (iVar7 - iVar4 < 0x40) {
        *(undefined8 *)(param_1 + 4) = 0;
      }
      else {
        uVar3 = fn_828EA0D0(param_2,0x40);
        *(undefined8 *)(param_1 + 4) = uVar3;
      }
    }
    else if (iVar7 == 3) {
      iVar7 = fn_828E9DA8(param_2);
      iVar4 = fn_828E9D90(param_2);
      if (iVar7 - iVar4 < 0x40) {
        uVar3 = fn_82F6B030(0);
        *(undefined8 *)(param_1 + 4) = uVar3;
      }
      else {
        fn_828EA0D0(param_2,0x40);
        uVar3 = fn_82F6B030();
        *(undefined8 *)(param_1 + 4) = uVar3;
      }
    }
    else {
      if (iVar7 == 4) {
        iVar7 = fn_828E9DA8(param_2);
        iVar4 = fn_828E9D90(param_2);
        if (iVar7 - iVar4 < 5) {
          lVar2 = 0;
        }
        else {
          lVar2 = fn_828E9FF8(param_2,5);
        }
        iVar7 = fn_828E9DA8(param_2);
        iVar4 = fn_828E9D90(param_2);
        if (iVar7 - iVar4 < (int)(lVar2 + 1)) {
          uVar1 = 0;
        }
        else {
          uVar1 = fn_828E9FF8(param_2,lVar2 + 1);
        }
        param_1[4] = (int)uVar1;
        if ((uVar1 & 0xffffffff) != 0) {
          lVar2 = (uVar1 & 0x7fffffff) << 1;
          if (0x7fffffff < (uVar1 & 0xffffffff)) {
            lVar2 = -1;
          }
          uVar3 = fn_8265CA60(lVar2);
          uVar8 = param_1[4];
          param_1[5] = (int)uVar3;
          iVar7 = fn_828E9DA8(param_2);
          iVar4 = fn_828E9D90(param_2);
          if ((int)(((ulonglong)uVar8 & 0x7fffffff) << 4) <= iVar7 - iVar4) {
            fn_828EA180(param_2,uVar3,((ulonglong)uVar8 & 0x7fffffff) << 1);
          }
          *(undefined2 *)(param_1[4] * 2 + param_1[5] + -2) = 0;
          return param_1;
        }
      }
      else {
        if (iVar7 == 5) {
          iVar7 = fn_828E9DA8(param_2);
          iVar4 = fn_828E9D90(param_2);
          if (iVar7 - iVar4 < 0x20) {
            uVar8 = 0;
          }
          else {
            uVar8 = fn_828E9FF8(param_2,0x20);
          }
          param_1[4] = (float)uVar8;
          return param_1;
        }
        if (iVar7 != 6) {
          if (iVar7 == 1) {
            iVar7 = fn_828E9DA8(param_2);
            iVar4 = fn_828E9D90(param_2);
            if (0x1f < iVar7 - iVar4) {
              uVar6 = fn_828E9FF8(param_2,0x20);
              param_1[4] = uVar6;
              return param_1;
            }
            param_1[4] = 0;
            return param_1;
          }
          iVar7 = fn_828E9DA8(param_2);
          iVar4 = fn_828E9D90(param_2);
          if (iVar7 - iVar4 < 0x40) {
            return param_1;
          }
          fn_828EA180(param_2,param_1 + 4,8);
          return param_1;
        }
        iVar7 = fn_828E9DA8(param_2);
        iVar4 = fn_828E9D90(param_2);
        if (iVar7 - iVar4 < 5) {
          lVar2 = 0;
        }
        else {
          lVar2 = fn_828E9FF8(param_2,5);
        }
        iVar7 = fn_828E9DA8(param_2);
        iVar4 = fn_828E9D90(param_2);
        if (iVar7 - iVar4 < (int)(lVar2 + 1)) {
          iVar7 = 0;
        }
        else {
          iVar7 = fn_828E9FF8(param_2,lVar2 + 1);
        }
        param_1[4] = iVar7;
        if (iVar7 != 0) {
          uVar3 = fn_8265CA60();
          iVar7 = param_1[4];
          param_1[5] = (int)uVar3;
          iVar4 = fn_828E9DA8(param_2);
          iVar5 = fn_828E9D90(param_2);
          if (iVar4 - iVar5 < iVar7 << 3) {
            return param_1;
          }
          fn_828EA180(param_2,uVar3,iVar7);
          return param_1;
        }
      }
      param_1[5] = 0;
    }
  }
  return param_1;
}

