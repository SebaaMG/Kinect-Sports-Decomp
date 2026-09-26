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
extern int fn_8248F890();
extern int fn_8248F8E8();
extern int fn_82F622A8();


void fn_824974E8(uint *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  if ((param_3 & 0xffffffff) != 0) {
    uVar10 = param_1[1];
    uVar8 = (ulonglong)uVar10;
    lVar4 = (longlong)((int)(uVar10 - *param_1) >> 2);
    if ((0x3fffffffU - lVar4 & 0xffffffff) < (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = lVar4 + param_3;
    uVar6 = (int)(param_1[2] - *param_1) >> 2;
    iVar7 = (int)param_2;
    if ((ulonglong)uVar6 < (uVar5 & 0xffffffff)) {
      if ((0x3fffffff - (ulonglong)(uVar6 >> 1) & 0xffffffff) < (ulonglong)uVar6) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulonglong)(uVar6 >> 1) + (longlong)(int)uVar6;
      }
      if ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar8 = uVar5;
      }
      lVar4 = (uVar8 & 0x3fffffff) << 2;
      uVar2 = fn_8248F890(lVar4);
      uVar10 = (int)(iVar7 - *param_1) >> 2;
      uVar8 = ((ulonglong)uVar10 & 0x3fffffff) * 4 + uVar2;
      uVar5 = param_3;
      uVar3 = param_3 & 0xffffffff;
      while (uVar3 != 0) {
        if ((uVar8 & 0xffffffff) != 0) {
          *(undefined4 *)uVar8 = *param_4;
        }
        uVar8 = uVar8 + 4;
        uVar5 = uVar5 - 1;
        uVar3 = uVar5;
      }
      uVar8 = uVar2;
      for (uVar5 = (ulonglong)*param_1; (uVar5 & 0xffffffff) != (param_2 & 0xffffffff);
          uVar5 = uVar5 + 4) {
        if ((uVar8 & 0xffffffff) != 0) {
          *(undefined4 *)uVar8 = *(undefined4 *)uVar5;
        }
        uVar8 = uVar8 + 4;
      }
      uVar6 = param_1[1];
      uVar8 = (longlong)(int)uVar10 + param_3 & 0x3fffffff;
      uVar5 = uVar8 * 4 + uVar2;
      if ((param_2 & 0xffffffff) != (ulonglong)uVar6) {
        param_2 = ((uVar5 + uVar8 * -4) - uVar2) + param_2;
        do {
          if ((uVar5 & 0xffffffff) != 0) {
            *(undefined4 *)uVar5 = *(undefined4 *)param_2;
          }
          param_2 = param_2 + 4;
          uVar5 = uVar5 + 4;
        } while ((param_2 & 0xffffffff) != (ulonglong)uVar6);
      }
      uVar10 = *param_1;
      iVar7 = param_1[1] - uVar10;
      if (uVar10 != 0) {
        for (; uVar10 != param_1[1]; uVar10 = uVar10 + 4) {
        }
        fn_8248F8E8();
      }
      uVar10 = (uint)uVar2;
      *param_1 = uVar10;
      param_1[2] = (int)lVar4 + uVar10;
      param_1[1] = (int)(((longlong)(iVar7 >> 2) + param_3 & 0xffffffff) << 2) + uVar10;
    }
    else if ((ulonglong)(uint)((int)(uVar10 - iVar7) >> 2) < (param_3 & 0xffffffff)) {
      uVar8 = param_3 & 0x3fffffff;
      uVar1 = *param_4;
      uVar5 = uVar8 * 4 + param_2;
      if ((param_2 & 0xffffffff) != (ulonglong)uVar10) {
        uVar3 = uVar5 + uVar8 * -4;
        do {
          if ((uVar5 & 0xffffffff) != 0) {
            *(undefined4 *)uVar5 = *(undefined4 *)uVar3;
          }
          uVar3 = uVar3 + 4;
          uVar5 = uVar5 + 4;
        } while ((uVar3 & 0xffffffff) != (ulonglong)uVar10);
      }
      puVar9 = (undefined4 *)param_1[1];
      for (lVar4 = param_3 - (longlong)((int)puVar9 - iVar7 >> 2); lVar4 != 0; lVar4 = lVar4 + -1) {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uVar1;
        }
        puVar9 = puVar9 + 1;
      }
      lVar4 = uVar8 * 4 + (ulonglong)param_1[1];
      uVar8 = lVar4 + uVar8 * -4;
      param_1[1] = (uint)lVar4;
      if ((param_2 & 0xffffffff) != (uVar8 & 0xffffffff)) {
        do {
          *(undefined4 *)param_2 = uVar1;
          param_2 = param_2 + 4;
        } while ((param_2 & 0xffffffff) != (uVar8 & 0xffffffff));
      }
    }
    else {
      uVar1 = *param_4;
      uVar5 = uVar8 + (param_3 & 0x3fffffff) * -4;
      uVar3 = uVar5;
      uVar6 = uVar10;
      if ((uVar5 & 0xffffffff) != (ulonglong)uVar10) {
        do {
          if ((uVar8 & 0xffffffff) != 0) {
            *(undefined4 *)uVar8 = *(undefined4 *)uVar3;
          }
          uVar3 = uVar3 + 4;
          uVar8 = uVar8 + 4;
          uVar6 = (uint)uVar8;
        } while ((uVar3 & 0xffffffff) != (ulonglong)uVar10);
      }
      param_1[1] = uVar6;
      if ((param_2 & 0xffffffff) != (uVar5 & 0xffffffff)) {
        iVar7 = (int)uVar5;
        do {
          uVar5 = uVar5 - 4;
          *(undefined4 *)((int)(undefined4 *)uVar5 + (uVar10 - iVar7)) = *(undefined4 *)uVar5;
        } while ((uVar5 & 0xffffffff) != (param_2 & 0xffffffff));
      }
      uVar8 = (param_3 & 0x3fffffff) * 4 + param_2;
      if ((param_2 & 0xffffffff) != (uVar8 & 0xffffffff)) {
        do {
          *(undefined4 *)param_2 = uVar1;
          param_2 = param_2 + 4;
        } while ((param_2 & 0xffffffff) != (uVar8 & 0xffffffff));
      }
    }
  }
  return;
}

