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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82BFCC28();
extern int fn_82BFEAD8();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82BFD650(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  longlong *plStack_30;
  
  plVar4 = (longlong *)param_1;
  if (*(int *)((int)plVar4 + 0x1c) == 0) {
    while( true ) {
      lVar10 = *plVar4;
      plStack_30 = (longlong *)((ulonglong)lVar10 >> 0x20);
      if (plStack_30 == (longlong *)0x0) break;
      sync(1);
      if (*plVar4 == lVar10) {
        lVar10 = storeDoubleWordConditionalIndexed
                           (((ulonglong)*(uint *)((int)plStack_30 + 8) << 0x20) +
                            (lVar10 + 1U & 0x7fffffff),0,param_1);
        *plVar4 = lVar10;
        plVar6 = plStack_30;
        goto LAB_82bfd6d8;
      }
      lVar10 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
      *plVar4 = lVar10;
    }
    if ((*(int *)((int)plVar4 + 0x34) == 0) ||
       (plVar6 = (longlong *)fn_82BFCC28(param_1), plVar6 == (longlong *)0x0)) {
      return 0;
    }
  }
  else {
    lVar10 = param_1 + 0x18;
    do {
      puVar12 = (uint *)lVar10;
      uVar1 = *puVar12;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,lVar10);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)((ulonglong)uVar1 - 1) < 0) {
LAB_82bfd818:
      if ((*(int *)((int)plVar4 + 0x34) == 0) ||
         (plVar6 = (longlong *)fn_82BFCC28(param_1), plVar6 == (longlong *)0x0)) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((ulonglong)*puVar12 + 1,0,lVar10);
            *puVar12 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        return 0;
      }
    }
    else {
      do {
        lVar11 = *plVar4;
        plStack_30 = (longlong *)((ulonglong)lVar11 >> 0x20);
        if (plStack_30 == (longlong *)0x0) goto LAB_82bfd818;
        sync(1);
        in_RESERVE = '\x01';
        lVar9 = *plVar4;
        if (lVar9 == lVar11) {
          lVar2 = storeDoubleWordConditionalIndexed
                            (((ulonglong)*(uint *)((int)plStack_30 + 8) << 0x20) +
                             (lVar11 + 1U & 0x7fffffff),0,param_1);
          *plVar4 = lVar2;
        }
        else {
          lVar2 = storeDoubleWordConditionalIndexed(lVar9,0,param_1);
          *plVar4 = lVar2;
        }
        in_cr0 = 2;
        plVar6 = plStack_30;
      } while (lVar9 != lVar11);
    }
  }
LAB_82bfd6d8:
  *(undefined8 *)((int)plVar6 + 8) = param_2;
  param_1 = param_1 + 8;
  *(undefined4 *)plVar6 = 0;
  *(uint *)((int)plVar6 + 4) = (*(uint *)((int)plVar6 + 4) & 0x7fffffff) + 1;
  while( true ) {
    while( true ) {
      do {
        plVar8 = (longlong *)param_1;
        lVar10 = *plVar8;
        plStack_30 = (longlong *)((ulonglong)lVar10 >> 0x20);
        plVar5 = plStack_30;
        uVar7 = ZEXT48(plStack_30);
        lVar11 = *plStack_30;
      } while (lVar10 != *plVar8);
      plStack_30 = (longlong *)((ulonglong)lVar11 >> 0x20);
      sync(1);
      if (plStack_30 == (longlong *)0x0) break;
      if (*plVar8 == lVar10) {
        lVar10 = storeDoubleWordConditionalIndexed
                           ((ZEXT48(plStack_30) << 0x20) + (lVar10 + 1U & 0x7fffffff),0,param_1);
        *plVar8 = lVar10;
      }
      else {
        lVar10 = storeDoubleWordConditionalIndexed(*plVar8,0,param_1);
        *plVar8 = lVar10;
      }
    }
    if (*plVar5 == lVar11) break;
    lVar10 = storeDoubleWordConditionalIndexed(*plVar5,0,uVar7);
    *plVar5 = lVar10;
  }
  lVar11 = storeDoubleWordConditionalIndexed
                     ((lVar11 + 1U & 0x7fffffff) + (ZEXT48(plVar6) << 0x20),0,uVar7);
  *plVar5 = lVar11;
  sync(1);
  lVar11 = (lVar10 + 1U & 0x7fffffff) + (ZEXT48(plVar6) << 0x20);
  if (*plVar8 == lVar10) {
    lVar10 = storeDoubleWordConditionalIndexed(lVar11,0,param_1);
    *plVar8 = lVar10;
  }
  else {
    lVar10 = storeDoubleWordConditionalIndexed(*plVar8,0,param_1);
    *plVar8 = lVar10;
  }
  if ((*(int *)((int)plVar4 + 0x24) != 0) && (0 < *(int *)(plVar4 + 4))) {
    fn_82BFEAD8(*(int *)((int)plVar4 + 0x24),1,lVar11,in_MSR);
  }
  return 1;
}

