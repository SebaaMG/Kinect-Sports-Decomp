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
extern unsigned int *auStack_54;
extern int fn_827DC988();
extern int fn_827E0700();
extern int fn_82F622A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;


void fn_827E0760(int *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piStack00000014;
  int iStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_54 [84];
  
  uStack00000024 = (undefined4)param_3;
  iVar6 = (int)param_2;
  if ((param_3 & 0xffffffff) != 0) {
    uVar1 = param_1[1];
    uVar10 = (ulonglong)uVar1;
    lVar9 = (longlong)((int)(uVar1 - *param_1) >> 2);
    piStack00000014 = param_1;
    iStack0000001c = iVar6;
    if ((0x3fffffffU - lVar9 & 0xffffffff) < (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar7 = lVar9 + param_3;
    uVar4 = param_1[2] - *param_1 >> 2;
    if ((ulonglong)uVar4 < (uVar7 & 0xffffffff)) {
      uVar10 = 0;
      if ((ulonglong)uVar4 <= (0x3fffffff - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
        uVar10 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
      }
      if ((uVar10 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        uVar10 = uVar7;
      }
      lVar9 = (**(code **)(*(int *)param_1[3] + 0xc))
                        ((int *)param_1[3],(uVar10 & 0x3fffffff) << 2,param_1 + 4);
      iVar5 = (int)lVar9;
      uVar1 = iVar6 - *param_1 >> 2;
      fn_827E0700(param_1,((ulonglong)uVar1 & 0x3fffffff) * 4 + lVar9,param_3,param_4);
      fn_827DC988(*param_1,param_2,lVar9,param_1 + 3,0);
      fn_827DC988(param_2,param_1[1],((longlong)(int)uVar1 + param_3 & 0x3fffffff) * 4 + lVar9,
                      param_1 + 3,0);
      iVar6 = *param_1;
      iVar2 = param_1[1];
      iVar8 = iVar2 - iVar6;
      if (iVar6 != 0) {
        for (; iVar6 != iVar2; iVar6 = iVar6 + 4) {
          iVar2 = param_1[1];
        }
        (**(code **)(*(int *)param_1[3] + 0x18))((int *)param_1[3],*param_1,param_1 + 4);
      }
      *param_1 = iVar5;
      param_1[2] = (int)((uVar10 & 0xffffffff) << 2) + iVar5;
      param_1[1] = (int)(((longlong)(iVar8 >> 2) + param_3 & 0xffffffff) << 2) + iVar5;
    }
    else if ((ulonglong)(uint)((int)(uVar1 - iVar6) >> 2) < (param_3 & 0xffffffff)) {
      lVar9 = (param_3 & 0x3fffffff) * 4;
      uVar3 = *param_4;
      fn_827DC988(param_2,uVar10,lVar9 + param_2,param_1 + 3,0);
      fn_827E0700(param_1,param_1[1],param_3 - (longlong)(param_1[1] - iVar6 >> 2),auStack_54);
      lVar9 = lVar9 + (ulonglong)(uint)param_1[1];
      uVar10 = lVar9 + (param_3 & 0x3fffffff) * -4;
      param_1[1] = (int)lVar9;
      if ((param_2 & 0xffffffff) != (uVar10 & 0xffffffff)) {
        do {
          *(undefined4 *)param_2 = uVar3;
          param_2 = param_2 + 4;
        } while ((param_2 & 0xffffffff) != (uVar10 & 0xffffffff));
      }
    }
    else {
      uVar3 = *param_4;
      uVar7 = uVar10 + (param_3 & 0x3fffffff) * -4;
      iVar6 = fn_827DC988(uVar7,uVar10,uVar10,param_1 + 3,0);
      param_1[1] = iVar6;
      if ((param_2 & 0xffffffff) != (uVar7 & 0xffffffff)) {
        iVar6 = (int)uVar7;
        do {
          uVar7 = uVar7 - 4;
          *(undefined4 *)((int)(undefined4 *)uVar7 + (uVar1 - iVar6)) = *(undefined4 *)uVar7;
        } while ((uVar7 & 0xffffffff) != (param_2 & 0xffffffff));
      }
      uVar10 = (param_3 & 0x3fffffff) * 4 + param_2;
      if ((param_2 & 0xffffffff) != (uVar10 & 0xffffffff)) {
        do {
          *(undefined4 *)param_2 = uVar3;
          param_2 = param_2 + 4;
        } while ((param_2 & 0xffffffff) != (uVar10 & 0xffffffff));
      }
    }
  }
  return;
}

