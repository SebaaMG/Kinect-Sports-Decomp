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
extern int fn_82BFEB30();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82BFD918(longlong param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                       int param_5,ulonglong param_6,undefined8 param_7)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar9;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  longlong *plStack_60;
  
  plVar4 = (longlong *)param_1;
  if (*(int *)((int)plVar4 + 0x1c) == 0) {
    while( true ) {
      lVar10 = *plVar4;
      plStack_60 = (longlong *)((ulonglong)lVar10 >> 0x20);
      if (plStack_60 == (longlong *)0x0) break;
      sync(1);
      if (*plVar4 == lVar10) {
        lVar10 = storeDoubleWordConditionalIndexed
                           (((ulonglong)*(uint *)((int)plStack_60 + 8) << 0x20) +
                            (lVar10 + 1U & 0x7fffffff),0,param_1);
        *plVar4 = lVar10;
        plVar6 = plStack_60;
        goto LAB_82bfd9b4;
      }
      lVar10 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
      *plVar4 = lVar10;
    }
    if ((*(int *)((int)plVar4 + 0x34) == 0) ||
       (plVar6 = (longlong *)fn_82BFCC28(param_1), plVar6 == (longlong *)0x0)) {
      return 0x102;
    }
  }
  else {
    uVar7 = 0;
    plStack_60 = (longlong *)0x0;
    lVar10 = param_1 + 0x18;
    do {
      puVar13 = (uint *)lVar10;
      uVar1 = *puVar13;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,lVar10);
        *puVar13 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)((ulonglong)uVar1 - 1) < 0) {
LAB_82bfdafc:
      if ((*(int *)((int)plVar4 + 0x34) == 0) ||
         (plStack_60 = (longlong *)fn_82BFCC28(param_1), plVar6 = plStack_60,
         plStack_60 == (longlong *)0x0)) {
        if (param_5 != 0) {
          lVar11 = 1000;
          uVar12 = uVar7;
          do {
            do {
              uVar7 = uVar7 - 1;
            } while (-1 < (longlong)uVar7);
            uVar7 = uVar12;
            if ((int)uVar12 < 0x200) {
              uVar7 = (uVar12 & 0x7fffffff) * 2 + 1;
            }
            while( true ) {
              lVar8 = *plVar4;
              plStack_60 = (longlong *)((ulonglong)lVar8 >> 0x20);
              if (plStack_60 == (longlong *)0x0) break;
              sync(1);
              in_RESERVE = '\x01';
              if (*plVar4 == lVar8) {
                lVar10 = storeDoubleWordConditionalIndexed
                                   (((ulonglong)*(uint *)((int)plStack_60 + 8) << 0x20) +
                                    (lVar8 + 1U & 0x7fffffff),0,param_1);
                *plVar4 = lVar10;
                plVar6 = plStack_60;
                goto LAB_82bfd9b4;
              }
              lVar8 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
              *plVar4 = lVar8;
            }
            lVar11 = lVar11 + -1;
            in_cr0 = (lVar11 == 0) << 1;
            uVar12 = uVar7;
          } while (lVar11 != 0);
        }
        plVar6 = plStack_60;
        if (plStack_60 == (longlong *)0x0) {
          do {
            uVar12 = uVar7;
            if (param_5 != 0) {
              do {
                uVar12 = uVar12 - 1;
                in_cr0 = (uVar12 == 0) << 1;
              } while (-1 < (longlong)uVar12);
              if ((int)uVar7 < 0x200) {
                uVar7 = (uVar7 & 0x7fffffff) * 2 + 1;
              }
            }
            if (param_4 == (code *)0x0) {
              if ((param_6 & 0xffffffff) == 0) {
                uVar12 = 0x102;
              }
              else {
                uVar12 = fn_82BFEB30(*(undefined4 *)((int)plVar4 + 0x1c),param_6,param_7);
              }
            }
            else {
              uVar12 = (*param_4)(param_3,*(undefined4 *)((int)plVar4 + 0x1c),param_6,param_7);
            }
            if ((uVar12 & 0xffffffff) != 0) {
              do {
                if (in_RESERVE != '\0') {
                  uVar1 = storeWordConditionalIndexed((ulonglong)*puVar13 + 1,0,lVar10);
                  *puVar13 = uVar1;
                  in_cr0 = 2;
                }
              } while (!(bool)(in_cr0 >> 1 & 1));
              return uVar12;
            }
            while( true ) {
              lVar11 = *plVar4;
              plStack_60 = (longlong *)((ulonglong)lVar11 >> 0x20);
              if (plStack_60 == (longlong *)0x0) break;
              sync(1);
              in_RESERVE = '\x01';
              lVar8 = *plVar4;
              if (lVar8 == lVar11) {
                lVar2 = storeDoubleWordConditionalIndexed
                                  (((ulonglong)*(uint *)((int)plStack_60 + 8) << 0x20) +
                                   (lVar11 + 1U & 0x7fffffff),0,param_1);
                *plVar4 = lVar2;
              }
              else {
                lVar2 = storeDoubleWordConditionalIndexed(lVar8,0,param_1);
                *plVar4 = lVar2;
              }
              in_cr0 = 2;
              plVar6 = plStack_60;
              if (lVar8 == lVar11) goto LAB_82bfd9b4;
            }
          } while( true );
        }
      }
    }
    else {
      do {
        lVar11 = *plVar4;
        plStack_60 = (longlong *)((ulonglong)lVar11 >> 0x20);
        if (plStack_60 == (longlong *)0x0) goto LAB_82bfdafc;
        sync(1);
        in_RESERVE = '\x01';
        lVar8 = *plVar4;
        if (lVar8 == lVar11) {
          lVar2 = storeDoubleWordConditionalIndexed
                            (((ulonglong)*(uint *)((int)plStack_60 + 8) << 0x20) +
                             (lVar11 + 1U & 0x7fffffff),0,param_1);
          *plVar4 = lVar2;
        }
        else {
          lVar2 = storeDoubleWordConditionalIndexed(lVar8,0,param_1);
          *plVar4 = lVar2;
        }
        in_cr0 = 2;
        plVar6 = plStack_60;
      } while (lVar8 != lVar11);
    }
  }
LAB_82bfd9b4:
  *(undefined8 *)((int)plVar6 + 8) = param_2;
  param_1 = param_1 + 8;
  *(undefined4 *)plVar6 = 0;
  *(uint *)((int)plVar6 + 4) = (*(uint *)((int)plVar6 + 4) & 0x7fffffff) + 1;
  while( true ) {
    while( true ) {
      do {
        plVar9 = (longlong *)param_1;
        lVar10 = *plVar9;
        plStack_60 = (longlong *)((ulonglong)lVar10 >> 0x20);
        plVar5 = plStack_60;
        uVar7 = ZEXT48(plStack_60);
        lVar11 = *plStack_60;
      } while (lVar10 != *plVar9);
      plStack_60 = (longlong *)((ulonglong)lVar11 >> 0x20);
      sync(1);
      if (plStack_60 == (longlong *)0x0) break;
      if (*plVar9 == lVar10) {
        lVar10 = storeDoubleWordConditionalIndexed
                           ((ZEXT48(plStack_60) << 0x20) + (lVar10 + 1U & 0x7fffffff),0,param_1);
        *plVar9 = lVar10;
      }
      else {
        lVar10 = storeDoubleWordConditionalIndexed(*plVar9,0,param_1);
        *plVar9 = lVar10;
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
  if (*plVar9 == lVar10) {
    lVar10 = storeDoubleWordConditionalIndexed(lVar11,0,param_1);
    *plVar9 = lVar10;
  }
  else {
    lVar10 = storeDoubleWordConditionalIndexed(*plVar9,0,param_1);
    *plVar9 = lVar10;
  }
  if ((*(int *)((int)plVar4 + 0x24) != 0) && (0 < *(int *)(plVar4 + 4))) {
    fn_82BFEAD8(*(int *)((int)plVar4 + 0x24),1,lVar11,in_MSR);
  }
  return 0;
}

