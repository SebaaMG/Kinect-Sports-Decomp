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
extern int fn_822CB2D8();
extern int fn_825393A0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();


void fn_82538C10(int *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar2 = (int)param_4 - (int)param_3 >> 3;
  lVar9 = (longlong)(int)uVar2;
  if (lVar9 != 0) {
    puVar5 = (undefined8 *)param_1[1];
    lVar7 = (longlong)((int)puVar5 - *param_1 >> 3);
    if ((0x1fffffffU - lVar7 & 0xffffffff) < (ulonglong)uVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar6 = lVar7 + lVar9;
    uVar1 = param_1[2] - *param_1 >> 3;
    if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
      uVar10 = 0;
      if ((ulonglong)uVar1 <= (0x1fffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
        uVar10 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
      }
      if ((uVar10 & 0xffffffff) < (uVar6 & 0xffffffff)) {
        uVar10 = uVar6;
      }
      uVar3 = fn_822CB2D8(uVar10,0);
      iVar8 = ((int)param_2 - *param_1 >> 3) * 8;
      iVar4 = fn_82F63CA0(uVar3,*param_1,iVar8);
      puVar5 = (undefined8 *)(iVar4 + iVar8);
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *param_3;
        }
        puVar5 = puVar5 + 1;
      }
      fn_82F63CA0(puVar5,param_2,(param_1[1] - (int)param_2 >> 3) << 3);
      iVar4 = *param_1;
      iVar8 = param_1[1];
      if (iVar4 != 0) {
        fn_8265CA20();
      }
      iVar11 = (int)uVar3;
      *param_1 = iVar11;
      iVar4 = (int)(((iVar8 - iVar4 >> 3) + lVar9 & 0xffffffffU) << 3) + iVar11;
      param_1[2] = (int)((uVar10 & 0xffffffff) << 3) + iVar11;
    }
    else {
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = *param_3;
        }
        puVar5 = puVar5 + 1;
      }
      uVar6 = (ulonglong)(uint)param_1[1];
      lVar9 = ((ulonglong)uVar2 & 0x1fffffff) * 8;
      if (((param_2 & 0xffffffff) != uVar6) && (uVar6 != (lVar9 + uVar6 & 0xffffffff))) {
        fn_825393A0(param_2);
      }
      iVar4 = (int)lVar9 + param_1[1];
    }
    param_1[1] = iVar4;
  }
  return;
}

