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
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


uint fn_82BFC6A0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puStack_20;
  
  lVar4 = param_1 + 8;
  while( true ) {
    plVar5 = (longlong *)lVar4;
    lVar6 = *plVar5;
    puStack_20 = (uint *)((ulonglong)lVar6 >> 0x20);
    puVar7 = puStack_20;
    if (puStack_20 == (uint *)0x0) {
      return 0;
    }
    sync(1);
    if (*plVar5 == lVar6) break;
    lVar6 = storeDoubleWordConditionalIndexed(*plVar5,0,lVar4);
    *plVar5 = lVar6;
  }
  lVar4 = storeDoubleWordConditionalIndexed
                    (((ulonglong)*puStack_20 << 0x20) + (lVar6 + 1U & 0x7fffffff),0,lVar4);
  *plVar5 = lVar4;
  uVar1 = puStack_20[1];
  uVar3 = ZEXT48(puStack_20);
  while( true ) {
    plVar5 = (longlong *)param_1;
    lVar4 = *plVar5;
    puStack_20 = (uint *)((ulonglong)lVar4 >> 0x20);
    *puVar7 = (uint)puStack_20;
    sync(1);
    if (*plVar5 == lVar4) break;
    lVar4 = storeDoubleWordConditionalIndexed(*plVar5,0,param_1);
    *plVar5 = lVar4;
  }
  lVar4 = storeDoubleWordConditionalIndexed((lVar4 + 1U & 0x7fffffff) + (uVar3 << 0x20),0,param_1);
  *plVar5 = lVar4;
  if (*(int *)((int)plVar5 + 0x14) != 0) {
    puVar7 = (uint *)(param_1 + 0x10);
    lVar4 = (ulonglong)*puVar7 + 1;
    uVar2 = storeWordConditionalIndexed(lVar4,0,param_1 + 0x10);
    *puVar7 = uVar2;
    if ((int)lVar4 < 1) {
      fn_82A2A618(*(undefined4 *)((int)plVar5 + 0x14),1,0);
    }
  }
  return uVar1;
}

