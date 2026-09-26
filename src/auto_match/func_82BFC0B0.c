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
extern int fn_82BFBBF0();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82BFC0B0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  uint *puStack_30;
  
  plVar4 = (longlong *)param_1;
  if (*(int *)((int)plVar4 + 0x14) == 0) {
    while( true ) {
      lVar8 = *plVar4;
      puStack_30 = (uint *)((ulonglong)lVar8 >> 0x20);
      if (puStack_30 == (uint *)0x0) break;
      sync(1);
      param_3 = ((ulonglong)*puStack_30 << 0x20) + (lVar8 + 1U & 0x7fffffff);
      if (*plVar4 == lVar8) {
        lVar8 = storeDoubleWordConditionalIndexed(param_3,0,param_1);
        *plVar4 = lVar8;
        puVar5 = puStack_30;
        goto LAB_82bfc138;
      }
      lVar8 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
      *plVar4 = lVar8;
      param_4 = in_MSR;
    }
    if ((*(int *)((int)plVar4 + 0x2c) == 0) ||
       (puVar5 = (uint *)fn_82BFBBF0(param_1,param_2,param_3,param_4), puVar5 == (uint *)0x0)) {
      return 0;
    }
  }
  else {
    lVar8 = param_1 + 0x10;
    do {
      puVar10 = (uint *)lVar8;
      uVar1 = *puVar10;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)uVar1 - 1,0,lVar8);
        *puVar10 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)((ulonglong)uVar1 - 1) < 0) {
LAB_82bfc244:
      if ((*(int *)((int)plVar4 + 0x2c) == 0) ||
         (puVar5 = (uint *)fn_82BFBBF0(param_1), puVar5 == (uint *)0x0)) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((ulonglong)*puVar10 + 1,0,lVar8);
            *puVar10 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        return 0;
      }
    }
    else {
      do {
        lVar9 = *plVar4;
        puStack_30 = (uint *)((ulonglong)lVar9 >> 0x20);
        if (puStack_30 == (uint *)0x0) goto LAB_82bfc244;
        sync(1);
        in_RESERVE = '\x01';
        lVar6 = *plVar4;
        if (lVar6 == lVar9) {
          lVar2 = storeDoubleWordConditionalIndexed
                            (((ulonglong)*puStack_30 << 0x20) + (lVar9 + 1U & 0x7fffffff),0,param_1)
          ;
          *plVar4 = lVar2;
        }
        else {
          lVar2 = storeDoubleWordConditionalIndexed(lVar6,0,param_1);
          *plVar4 = lVar2;
        }
        in_cr0 = 2;
        puVar5 = puStack_30;
      } while (lVar6 != lVar9);
    }
  }
LAB_82bfc138:
  puVar5[1] = (uint)param_2;
  param_1 = param_1 + 8;
  while( true ) {
    plVar7 = (longlong *)param_1;
    lVar8 = *plVar7;
    puStack_30 = (uint *)((ulonglong)lVar8 >> 0x20);
    *puVar5 = (uint)puStack_30;
    sync(1);
    if (*plVar7 == lVar8) break;
    lVar8 = storeDoubleWordConditionalIndexed(*plVar7,0,param_1);
    *plVar7 = lVar8;
  }
  lVar8 = storeDoubleWordConditionalIndexed
                    ((lVar8 + 1U & 0x7fffffff) + (ZEXT48(puVar5) << 0x20),0,param_1);
  *plVar7 = lVar8;
  if ((*(int *)((int)plVar4 + 0x1c) != 0) && (0 < *(int *)(plVar4 + 3))) {
    fn_82A2A618(*(int *)((int)plVar4 + 0x1c),1,0);
  }
  return 1;
}

