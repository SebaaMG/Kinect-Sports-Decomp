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
extern int fn_82551B18();
extern int fn_825520B8();
extern unsigned int uStack_50;


void fn_82551260(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 uStack_50;
  
  lVar5 = param_2 - param_1;
  uVar4 = (int)lVar5 >> 3;
  uVar7 = param_2;
  if (0x20 < (int)uVar4) {
    do {
      iVar8 = (int)param_3;
      param_2 = uVar7;
      if (iVar8 < 1) break;
      fn_82551B18(&uStack_50,param_1,uVar7,param_4);
      param_3 = (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar9 = uStack_50 & 0xffffffff;
      param_2 = (ulonglong)(((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
      if ((int)((((U64)(uStack_50) >> 0) & 0xFFFFFFFF) - (int)param_1 & 0xfffffff8) <
          (int)((int)uVar7 - (((U64)(uStack_50) >> 32) & 0xFFFFFFFF) & 0xfffffff8U)) {
        fn_82551260(param_1,param_2,param_3,param_4);
        param_2 = uVar7;
        param_1 = uVar9;
      }
      else {
        fn_82551260(uVar9,uVar7,param_3,param_4);
      }
      lVar5 = param_2 - param_1;
      uVar4 = (int)lVar5 >> 3;
      uVar7 = param_2;
    } while (0x20 < (int)uVar4);
    if (0x20 < (int)uVar4) {
      if ((int)uVar4 < 2) {
        return;
      }
      uVar7 = (longlong)((int)uVar4 >> 1) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      if (0 < (longlong)uVar7) {
        lVar6 = (uVar7 & 0x1fffffff) * 8 + param_1;
        do {
          lVar6 = lVar6 + -8;
          uStack_50 = *(undefined8 *)lVar6;
          uVar7 = uVar7 - 1;
          fn_825520B8(param_1,uVar7,uVar4,&uStack_50,param_4);
        } while (0 < (int)uVar7);
      }
      if ((int)uVar4 < 2) {
        return;
      }
      lVar6 = param_2 - 8;
      do {
        puVar10 = (undefined8 *)lVar6;
        uStack_50 = *puVar10;
        *(undefined4 *)puVar10 = *(undefined4 *)param_1;
        *(undefined4 *)((int)puVar10 + 4) = ((undefined4 *)param_1)[1];
        fn_825520B8(param_1,0,(int)lVar5 + -8 >> 3,&uStack_50,param_4);
        lVar6 = lVar6 + -8;
        lVar5 = (lVar6 - param_1) + 8;
      } while (8 < (int)((uint)lVar5 & 0xfffffff8));
      return;
    }
  }
  if ((1 < (int)uVar4) && (uVar7 = param_1, (param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    while( true ) {
      uVar7 = uVar7 + 8;
      if ((uVar7 & 0xffffffff) == (param_2 & 0xffffffff)) break;
      uVar1 = *(undefined8 *)uVar7;
      uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)uVar1)) & ((U64)0xFFFFFFFF)) << 32));
      if ((((U64)(uStack_50) >> 32) & 0xFFFFFFFF) < *(int *)((int)(undefined8 *)param_1 + 4)) {
        uVar9 = uVar7;
        if ((param_1 & 0xffffffff) != (uVar7 & 0xffffffff)) {
          do {
            uVar2 = uVar9 - 8;
            puVar3 = (undefined4 *)uVar9;
            *puVar3 = *(undefined4 *)uVar2;
            puVar3[1] = puVar3[-1];
            uVar9 = uVar2;
          } while ((uVar2 & 0xffffffff) != (param_1 & 0xffffffff));
        }
        *(undefined8 *)param_1 = uVar1;
      }
      else {
        iVar8 = *(int *)((int)(undefined8 *)uVar7 + -4);
        uVar9 = uVar7;
        while( true ) {
          puVar10 = (undefined8 *)uVar9;
          if (iVar8 <= (((U64)(uStack_50) >> 32) & 0xFFFFFFFF)) break;
          puVar3 = (undefined4 *)(uVar9 - 8);
          *(undefined4 *)puVar10 = *puVar3;
          *(undefined4 *)((int)puVar10 + 4) = puVar3[1];
          iVar8 = puVar3[-1];
          uVar9 = uVar9 - 8;
        }
        *puVar10 = uVar1;
      }
    }
  }
  return;
}

