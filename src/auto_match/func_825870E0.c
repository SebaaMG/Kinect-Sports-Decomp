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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


void fn_825870E0(uint *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if ((param_3 & 0xffffffff) != 0) {
    uVar10 = param_1[1];
    uVar7 = (ulonglong)uVar10;
    lVar3 = (longlong)((int)(uVar10 - *param_1) >> 2);
    if ((0x3fffffffU - lVar3 & 0xffffffff) < (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar4 = lVar3 + param_3;
    uVar5 = (int)(param_1[2] - *param_1) >> 2;
    iVar6 = (int)param_2;
    if ((ulonglong)uVar5 < (uVar4 & 0xffffffff)) {
      uVar7 = 0;
      if ((ulonglong)uVar5 <= (0x3fffffff - (ulonglong)(uVar5 >> 1) & 0xffffffff)) {
        uVar7 = (ulonglong)(uVar5 >> 1) + (longlong)(int)uVar5;
      }
      if ((uVar7 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        uVar7 = uVar4;
      }
      uVar4 = 0;
      if (((uVar7 & 0xffffffff) != 0) &&
         ((0x3fffffff < (uVar7 & 0xffffffff) ||
          (uVar4 = fn_8265C9E0((uVar7 & 0x3fffffff) << 2), uVar4 == 0)))) {
        uStack_3c = 0;
        ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
      uVar10 = (int)(iVar6 - *param_1) >> 2;
      uVar8 = ((ulonglong)uVar10 & 0x3fffffff) * 4 + uVar4;
      uVar11 = param_3;
      uVar2 = param_3 & 0xffffffff;
      while (uVar2 != 0) {
        if ((uVar8 & 0xffffffff) != 0) {
          *(undefined4 *)uVar8 = *param_4;
        }
        uVar8 = uVar8 + 4;
        uVar11 = uVar11 - 1;
        uVar2 = uVar11;
      }
      uVar8 = uVar4;
      for (uVar11 = (ulonglong)*param_1; (uVar11 & 0xffffffff) != (param_2 & 0xffffffff);
          uVar11 = uVar11 + 4) {
        if ((uVar8 & 0xffffffff) != 0) {
          *(undefined4 *)uVar8 = *(undefined4 *)uVar11;
        }
        uVar8 = uVar8 + 4;
      }
      uVar5 = param_1[1];
      uVar8 = (longlong)(int)uVar10 + param_3 & 0x3fffffff;
      uVar11 = uVar8 * 4 + uVar4;
      if ((param_2 & 0xffffffff) != (ulonglong)uVar5) {
        param_2 = ((uVar11 + uVar8 * -4) - uVar4) + param_2;
        do {
          if ((uVar11 & 0xffffffff) != 0) {
            *(undefined4 *)uVar11 = *(undefined4 *)param_2;
          }
          param_2 = param_2 + 4;
          uVar11 = uVar11 + 4;
        } while ((param_2 & 0xffffffff) != (ulonglong)uVar5);
      }
      uVar10 = *param_1;
      iVar6 = param_1[1] - uVar10;
      if (uVar10 != 0) {
        for (; uVar10 != param_1[1]; uVar10 = uVar10 + 4) {
        }
        fn_8265CA20();
      }
      uVar10 = (uint)uVar4;
      *param_1 = uVar10;
      param_1[2] = (int)((uVar7 & 0xffffffff) << 2) + uVar10;
      param_1[1] = (int)(((longlong)(iVar6 >> 2) + param_3 & 0xffffffff) << 2) + uVar10;
    }
    else if ((ulonglong)(uint)((int)(uVar10 - iVar6) >> 2) < (param_3 & 0xffffffff)) {
      uVar7 = param_3 & 0x3fffffff;
      uVar1 = *param_4;
      uVar4 = uVar7 * 4 + param_2;
      if ((param_2 & 0xffffffff) != (ulonglong)uVar10) {
        uVar8 = uVar4 + uVar7 * -4;
        do {
          if ((uVar4 & 0xffffffff) != 0) {
            *(undefined4 *)uVar4 = *(undefined4 *)uVar8;
          }
          uVar8 = uVar8 + 4;
          uVar4 = uVar4 + 4;
        } while ((uVar8 & 0xffffffff) != (ulonglong)uVar10);
      }
      puVar9 = (undefined4 *)param_1[1];
      for (lVar3 = param_3 - (longlong)((int)puVar9 - iVar6 >> 2); lVar3 != 0; lVar3 = lVar3 + -1) {
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uVar1;
        }
        puVar9 = puVar9 + 1;
      }
      lVar3 = uVar7 * 4 + (ulonglong)param_1[1];
      uVar7 = lVar3 + uVar7 * -4;
      param_1[1] = (uint)lVar3;
      if ((param_2 & 0xffffffff) != (uVar7 & 0xffffffff)) {
        do {
          *(undefined4 *)param_2 = uVar1;
          param_2 = param_2 + 4;
        } while ((param_2 & 0xffffffff) != (uVar7 & 0xffffffff));
      }
    }
    else {
      uVar1 = *param_4;
      uVar4 = uVar7 + (param_3 & 0x3fffffff) * -4;
      uVar8 = uVar4;
      uVar5 = uVar10;
      if ((uVar4 & 0xffffffff) != (ulonglong)uVar10) {
        do {
          if ((uVar7 & 0xffffffff) != 0) {
            *(undefined4 *)uVar7 = *(undefined4 *)uVar8;
          }
          uVar8 = uVar8 + 4;
          uVar7 = uVar7 + 4;
          uVar5 = (uint)uVar7;
        } while ((uVar8 & 0xffffffff) != (ulonglong)uVar10);
      }
      param_1[1] = uVar5;
      if ((param_2 & 0xffffffff) != (uVar4 & 0xffffffff)) {
        iVar6 = (int)uVar4;
        do {
          uVar4 = uVar4 - 4;
          *(undefined4 *)((int)(undefined4 *)uVar4 + (uVar10 - iVar6)) = *(undefined4 *)uVar4;
        } while ((uVar4 & 0xffffffff) != (param_2 & 0xffffffff));
      }
      uVar7 = (param_3 & 0x3fffffff) * 4 + param_2;
      if ((param_2 & 0xffffffff) != (uVar7 & 0xffffffff)) {
        do {
          *(undefined4 *)param_2 = uVar1;
          param_2 = param_2 + 4;
        } while ((param_2 & 0xffffffff) != (uVar7 & 0xffffffff));
      }
    }
  }
  return;
}

