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
extern int fn_82BFEAD8();
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82BFDD90(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puStack_20;
  
  lVar2 = param_1 + 8;
  lVar5 = param_1 + 0x10;
  while( true ) {
    do {
      while( true ) {
        do {
          plVar6 = (longlong *)lVar5;
          lVar8 = *plVar6;
          plVar3 = (longlong *)lVar2;
          lVar7 = *plVar3;
          puStack_20 = (uint *)((ulonglong)lVar8 >> 0x20);
          puVar9 = puStack_20;
          uVar1 = *puStack_20;
        } while (lVar8 != *plVar6);
        puStack_20 = (uint *)((ulonglong)lVar7 >> 0x20);
        if (puVar9 != puStack_20) break;
        if (uVar1 == 0) {
          return 0x102;
        }
        sync(1);
        if (*plVar3 == lVar7) {
          lVar7 = storeDoubleWordConditionalIndexed
                            (((ulonglong)uVar1 << 0x20) + (lVar7 + 1U & 0x7fffffff),0,lVar2);
          *plVar3 = lVar7;
        }
        else {
          lVar7 = storeDoubleWordConditionalIndexed(*plVar3,0,lVar2);
          *plVar3 = lVar7;
        }
      }
    } while (uVar1 == 0);
    uVar4 = *(undefined8 *)(uVar1 + 8);
    sync(1);
    if (*plVar6 == lVar8) break;
    lVar7 = storeDoubleWordConditionalIndexed(*plVar6,0,lVar5);
    *plVar6 = lVar7;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    (((ulonglong)uVar1 << 0x20) + (lVar8 + 1U & 0x7fffffff),0,lVar5);
  *plVar6 = lVar2;
  *param_2 = uVar4;
  while( true ) {
    plVar3 = (longlong *)param_1;
    lVar2 = *plVar3;
    puStack_20 = (uint *)((ulonglong)lVar2 >> 0x20);
    puVar9[2] = (uint)puStack_20;
    sync(1);
    if (*plVar3 == lVar2) break;
    lVar2 = storeDoubleWordConditionalIndexed(*plVar3,0,param_1);
    *plVar3 = lVar2;
  }
  lVar2 = storeDoubleWordConditionalIndexed
                    ((lVar2 + 1U & 0x7fffffff) + (ZEXT48(puVar9) << 0x20),0,param_1);
  *plVar3 = lVar2;
  if (*(int *)((int)plVar3 + 0x1c) != 0) {
    puVar9 = (uint *)(param_1 + 0x18);
    lVar2 = (ulonglong)*puVar9 + 1;
    uVar1 = storeWordConditionalIndexed(lVar2,0,param_1 + 0x18);
    *puVar9 = uVar1;
    if ((int)lVar2 < 1) {
      fn_82BFEAD8(*(undefined4 *)((int)plVar3 + 0x1c),1);
    }
  }
  return 0;
}

