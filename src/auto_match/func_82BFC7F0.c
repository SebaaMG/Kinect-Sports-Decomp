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
extern int fn_82A2A618();
extern int fn_82BFEB30();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82BFC7F0(longlong param_1,uint *param_2,undefined8 param_3,code *param_4,int param_5,
                       ulonglong param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar7;
  longlong lVar6;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  char in_RESERVE;
  byte in_cr0;
  uint *puStack_60;
  
  plVar3 = (longlong *)param_1;
  uVar10 = 0;
  if (*(int *)((int)plVar3 + 0x1c) == 0) {
    lVar5 = param_1 + 8;
    while( true ) {
      plVar7 = (longlong *)lVar5;
      lVar8 = *plVar7;
      puStack_60 = (uint *)((ulonglong)lVar8 >> 0x20);
      if (puStack_60 == (uint *)0x0) {
        return 0x102;
      }
      sync(1);
      if (*plVar7 == lVar8) break;
      lVar8 = storeDoubleWordConditionalIndexed(*plVar7,0,lVar5);
      *plVar7 = lVar8;
    }
    lVar5 = storeDoubleWordConditionalIndexed
                      (((ulonglong)*puStack_60 << 0x20) + (lVar8 + 1U & 0x7fffffff),0,lVar5);
    *plVar7 = lVar5;
    puVar11 = puStack_60;
  }
  else {
    lVar5 = param_1 + 8;
    do {
      plVar7 = (longlong *)lVar5;
      lVar8 = *plVar7;
      puStack_60 = (uint *)((ulonglong)lVar8 >> 0x20);
      if (puStack_60 == (uint *)0x0) {
        if (param_5 != 0) {
          lVar8 = 1000;
          uVar9 = uVar10;
          do {
            do {
              uVar10 = uVar10 - 1;
            } while (-1 < (longlong)uVar10);
            uVar10 = uVar9;
            if ((int)uVar9 < 0x200) {
              uVar10 = (uVar9 & 0x7fffffff) * 2 + 1;
            }
            while( true ) {
              lVar4 = *plVar7;
              puStack_60 = (uint *)((ulonglong)lVar4 >> 0x20);
              if (puStack_60 == (uint *)0x0) break;
              sync(1);
              in_RESERVE = '\x01';
              if (*plVar7 == lVar4) {
                lVar5 = storeDoubleWordConditionalIndexed
                                  (((ulonglong)*puStack_60 << 0x20) + (lVar4 + 1U & 0x7fffffff),0,
                                   lVar5);
                *plVar7 = lVar5;
                puVar11 = puStack_60;
                goto LAB_82bfca60;
              }
              lVar4 = storeDoubleWordConditionalIndexed(*plVar7,0,lVar5);
              *plVar7 = lVar4;
            }
            lVar8 = lVar8 + -1;
            in_cr0 = (lVar8 == 0) << 1;
            uVar9 = uVar10;
          } while (lVar8 != 0);
        }
        lVar8 = param_1 + 0x18;
        do {
          puVar11 = (uint *)lVar8;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar11 + 1,0,lVar8);
            *puVar11 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        do {
          lVar4 = *plVar7;
          puStack_60 = (uint *)((ulonglong)lVar4 >> 0x20);
          if (puStack_60 == (uint *)0x0) {
            do {
              uVar9 = uVar10;
              if (param_5 != 0) {
                do {
                  uVar9 = uVar9 - 1;
                  in_cr0 = (uVar9 == 0) << 1;
                } while (-1 < (longlong)uVar9);
                if ((int)uVar10 < 0x200) {
                  uVar10 = (uVar10 & 0x7fffffff) * 2 + 1;
                }
              }
              if (param_4 == (code *)0x0) {
                if ((param_6 & 0xffffffff) == 0) {
                  uVar9 = 0x102;
                }
                else {
                  uVar9 = fn_82BFEB30(*(undefined4 *)((int)plVar3 + 0x1c),param_6,param_7);
                }
              }
              else {
                uVar9 = (*param_4)(param_3,*(undefined4 *)((int)plVar3 + 0x1c),param_6,param_7);
              }
              if ((uVar9 & 0xffffffff) != 0) {
                do {
                  if (in_RESERVE != '\0') {
                    uVar2 = storeWordConditionalIndexed((ulonglong)*puVar11 - 1,0,lVar8);
                    *puVar11 = uVar2;
                    in_cr0 = 2;
                  }
                } while (!(bool)(in_cr0 >> 1 & 1));
                return uVar9;
              }
              while( true ) {
                lVar4 = *plVar7;
                puStack_60 = (uint *)((ulonglong)lVar4 >> 0x20);
                if (puStack_60 == (uint *)0x0) break;
                sync(1);
                in_RESERVE = '\x01';
                lVar6 = *plVar7;
                if (lVar6 == lVar4) {
                  lVar1 = storeDoubleWordConditionalIndexed
                                    (((ulonglong)*puStack_60 << 0x20) + (lVar4 + 1U & 0x7fffffff),0,
                                     lVar5);
                  *plVar7 = lVar1;
                }
                else {
                  lVar1 = storeDoubleWordConditionalIndexed(lVar6,0,lVar5);
                  *plVar7 = lVar1;
                }
                in_cr0 = 2;
                if (lVar6 == lVar4) goto LAB_82bfca44;
              }
            } while( true );
          }
          sync(1);
          in_RESERVE = '\x01';
          lVar6 = *plVar7;
          if (lVar6 == lVar4) {
            lVar1 = storeDoubleWordConditionalIndexed
                              (((ulonglong)*puStack_60 << 0x20) + (lVar4 + 1U & 0x7fffffff),0,lVar5)
            ;
            *plVar7 = lVar1;
          }
          else {
            lVar1 = storeDoubleWordConditionalIndexed(lVar6,0,lVar5);
            *plVar7 = lVar1;
          }
          in_cr0 = 2;
        } while (lVar6 != lVar4);
LAB_82bfca44:
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar11 - 1,0,lVar8);
        *puVar11 = uVar2;
        puVar11 = puStack_60;
        break;
      }
      sync(1);
      in_RESERVE = '\x01';
      lVar4 = *plVar7;
      if (lVar4 == lVar8) {
        lVar6 = storeDoubleWordConditionalIndexed
                          (((ulonglong)*puStack_60 << 0x20) + (lVar8 + 1U & 0x7fffffff),0,lVar5);
        *plVar7 = lVar6;
      }
      else {
        lVar6 = storeDoubleWordConditionalIndexed(lVar4,0,lVar5);
        *plVar7 = lVar6;
      }
      in_cr0 = 2;
      puVar11 = puStack_60;
    } while (lVar4 != lVar8);
  }
LAB_82bfca60:
  *param_2 = puVar11[1];
  while( true ) {
    lVar5 = *plVar3;
    puStack_60 = (uint *)((ulonglong)lVar5 >> 0x20);
    *puVar11 = (uint)puStack_60;
    sync(1);
    if (*plVar3 == lVar5) break;
    lVar5 = storeDoubleWordConditionalIndexed(*plVar3,0,param_1);
    *plVar3 = lVar5;
  }
  lVar5 = storeDoubleWordConditionalIndexed
                    ((lVar5 + 1U & 0x7fffffff) + (ZEXT48(puVar11) << 0x20),0,param_1);
  *plVar3 = lVar5;
  if (*(int *)((int)plVar3 + 0x14) != 0) {
    puVar11 = (uint *)(param_1 + 0x10);
    lVar5 = (ulonglong)*puVar11 + 1;
    uVar2 = storeWordConditionalIndexed(lVar5,0,param_1 + 0x10);
    *puVar11 = uVar2;
    if ((int)lVar5 < 1) {
      fn_82A2A618(*(undefined4 *)((int)plVar3 + 0x14),1,0);
    }
  }
  return 0;
}

