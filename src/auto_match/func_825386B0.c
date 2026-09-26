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
extern int fn_82539060();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_5c;


void fn_825386B0(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  uVar4 = ((int)param_4 - (int)param_3) / 0xc4;
  if (uVar4 != 0) {
    uVar6 = (ulonglong)param_1[1];
    lVar2 = (longlong)((int)(param_1[1] - *param_1) / 0xc4);
    if ((0x14e5e0aU - lVar2 & 0xffffffff) < (ulonglong)uVar4) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar1 = lVar2 + (int)uVar4;
    uVar5 = (int)(param_1[2] - *param_1) / 0xc4;
    if ((ulonglong)uVar5 < (uVar1 & 0xffffffff)) {
      uVar6 = 0;
      if ((ulonglong)uVar5 <= (0x14e5e0a - (ulonglong)(uVar5 >> 1) & 0xffffffff)) {
        uVar6 = (ulonglong)(uVar5 >> 1) + (longlong)(int)uVar5;
      }
      if ((uVar6 & 0xffffffff) < (uVar1 & 0xffffffff)) {
        uVar6 = uVar1;
      }
      uVar1 = 0;
      if (((uVar6 & 0xffffffff) != 0) &&
         ((0x14e5e0a < (uVar6 & 0xffffffff) || (uVar1 = fn_8265C9E0(uVar6 * 0xc4), uVar1 == 0)
          ))) {
        uStack_5c = 0;
        ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_60);
      }
      uVar8 = uVar1;
      for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (param_2 & 0xffffffff);
          uVar7 = uVar7 + 0xc4) {
        if ((uVar8 & 0xffffffff) != 0) {
          fn_82F68CC0(uVar8,uVar7,0xc4);
        }
        uVar8 = uVar8 + 0xc4;
      }
      if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
        lVar2 = param_3 - uVar8;
        do {
          if ((uVar8 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar8,lVar2 + uVar8,0xc4);
          }
          uVar8 = uVar8 + 0xc4;
        } while ((lVar2 + uVar8 & 0xffffffff) != (param_4 & 0xffffffff));
      }
      uVar5 = param_1[1];
      if ((param_2 & 0xffffffff) != (ulonglong)uVar5) {
        lVar2 = param_2 - uVar8;
        do {
          if ((uVar8 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar8,lVar2 + uVar8,0xc4);
          }
          uVar8 = uVar8 + 0xc4;
        } while ((lVar2 + uVar8 & 0xffffffff) != (ulonglong)uVar5);
      }
      uVar5 = *param_1;
      iVar3 = param_1[1] - uVar5;
      if (uVar5 != 0) {
        for (; uVar5 != param_1[1]; uVar5 = uVar5 + 0xc4) {
        }
        fn_8265CA20();
      }
      uVar5 = (uint)uVar1;
      *param_1 = uVar5;
      uVar4 = (iVar3 / 0xc4 + uVar4) * 0xc4 + uVar5;
      param_1[2] = (int)uVar6 * 0xc4 + uVar5;
    }
    else {
      if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
        do {
          if ((uVar6 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar6,param_3,0xc4);
          }
          param_3 = param_3 + 0xc4;
          uVar6 = uVar6 + 0xc4;
        } while ((param_3 & 0xffffffff) != (param_4 & 0xffffffff));
      }
      uVar6 = (ulonglong)param_1[1];
      lVar2 = (longlong)(int)uVar4 * 0xc4;
      if (((param_2 & 0xffffffff) != uVar6) && (uVar6 != (lVar2 + uVar6 & 0xffffffff))) {
        fn_82539060(param_2);
      }
      uVar4 = (int)lVar2 + param_1[1];
    }
    param_1[1] = uVar4;
  }
  return;
}

