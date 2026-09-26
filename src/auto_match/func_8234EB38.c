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
extern int fn_82F63CA0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_8234EB38(int *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if ((param_3 & 0xffffffff) != 0) {
    uVar1 = param_1[1];
    uVar11 = (ulonglong)uVar1;
    lVar8 = (longlong)((int)(uVar1 - *param_1) >> 2);
    if ((0x3fffffffU - lVar8 & 0xffffffff) < (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar7 = lVar8 + param_3;
    uVar5 = param_1[2] - *param_1 >> 2;
    iVar2 = (int)param_2;
    if ((ulonglong)uVar5 < (uVar7 & 0xffffffff)) {
      uVar11 = 0;
      if ((ulonglong)uVar5 <= (0x3fffffff - (ulonglong)(uVar5 >> 1) & 0xffffffff)) {
        uVar11 = (ulonglong)(uVar5 >> 1) + (longlong)(int)uVar5;
      }
      if ((uVar11 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        uVar11 = uVar7;
      }
      lVar8 = 0;
      if (((uVar11 & 0xffffffff) != 0) &&
         ((0x3fffffff < (uVar11 & 0xffffffff) ||
          (lVar8 = fn_8265C9E0((uVar11 & 0x3fffffff) << 2), lVar8 == 0)))) {
        uStack_4c = 0;
        ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_50);
      }
      uVar1 = iVar2 - *param_1 >> 2;
      if ((param_3 & 0xffffffff) != 0) {
        lVar10 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + lVar8 + -4;
        uVar7 = param_3;
        do {
          lVar10 = lVar10 + 4;
          *(undefined4 *)lVar10 = *param_4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      fn_82F63CA0(lVar8,*param_1,(iVar2 - *param_1 >> 2) << 2);
      fn_82F63CA0(((longlong)(int)uVar1 + param_3 & 0x3fffffff) * 4 + lVar8,param_2,
                   (param_1[1] - iVar2 >> 2) << 2);
      iVar2 = *param_1;
      iVar3 = param_1[1];
      if (iVar2 != 0) {
        fn_8265CA20();
      }
      iVar12 = (int)lVar8;
      *param_1 = iVar12;
      param_1[2] = (int)((uVar11 & 0xffffffff) << 2) + iVar12;
      param_1[1] = (int)(((longlong)(iVar3 - iVar2 >> 2) + param_3 & 0xffffffff) << 2) + iVar12;
    }
    else {
      uVar4 = *param_4;
      uVar5 = (int)(uVar1 - iVar2) >> 2;
      if ((ulonglong)uVar5 < (param_3 & 0xffffffff)) {
        lVar8 = (param_3 & 0x3fffffff) * 4;
        fn_82F63CA0(lVar8 + param_2,param_2,uVar5 << 2);
        uVar11 = param_3 - (longlong)(param_1[1] - iVar2 >> 2);
        if (uVar11 != 0) {
          puVar9 = (undefined4 *)(param_1[1] + -4);
          uVar7 = uVar11 & 0xffffffff;
          while (uVar7 != 0) {
            puVar9 = puVar9 + 1;
            *puVar9 = uVar4;
            uVar11 = uVar11 - 1;
            uVar7 = uVar11;
          }
        }
        lVar8 = lVar8 + (ulonglong)(uint)param_1[1];
        uVar11 = lVar8 + (param_3 & 0x3fffffff) * -4;
        param_1[1] = (int)lVar8;
        if ((param_2 & 0xffffffff) != (uVar11 & 0xffffffff)) {
          do {
            *(undefined4 *)param_2 = uVar4;
            param_2 = param_2 + 4;
          } while ((param_2 & 0xffffffff) != (uVar11 & 0xffffffff));
        }
      }
      else {
        lVar8 = uVar11 + (param_3 & 0x3fffffff) * -4;
        iVar3 = (int)lVar8;
        iVar12 = ((int)(uVar1 - iVar3) >> 2) * 4;
        iVar6 = fn_82F63CA0(uVar11,lVar8,iVar12);
        param_1[1] = iVar6 + iVar12;
        uVar7 = (ulonglong)(uint)(iVar3 - iVar2 >> 2) & 0x3fffffff;
        fn_82F63CA0(uVar11 + uVar7 * -4,param_2,uVar7 * 4);
        uVar11 = (param_3 & 0x3fffffff) * 4 + param_2;
        if ((param_2 & 0xffffffff) != (uVar11 & 0xffffffff)) {
          do {
            *(undefined4 *)param_2 = uVar4;
            param_2 = param_2 + 4;
          } while ((param_2 & 0xffffffff) != (uVar11 & 0xffffffff));
        }
      }
    }
  }
  return;
}

