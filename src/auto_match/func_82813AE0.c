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
extern int fn_82813428();
extern int fn_82813680();
extern int fn_82A1E7D8();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82813AE0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  char in_RESERVE;
  byte bVar12;
  longlong lStack_60;
  undefined4 *puStack_58;
  longlong *plStack_54;
  longlong lStack_50;
  undefined4 *puStack_48;
  longlong *plStack_44;
  
  iVar4 = (int)param_1;
  plVar11 = (longlong *)(iVar4 + 0x20);
  plVar10 = (longlong *)(iVar4 + 0x28);
  while( true ) {
    do {
      do {
        lVar8 = *plVar11;
        lVar6 = *plVar10;
        lStack_60 = ((((U64)(lStack_60)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)((ulonglong)lVar6 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        lStack_50 = ((((U64)(lStack_50)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)((ulonglong)lVar8 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        uVar7 = (ulonglong)(((U64)(lStack_50) >> 0) & 0xFFFFFFFF);
        puVar1 = *(undefined4 **)((((U64)(lStack_50) >> 0) & 0xFFFFFFFF) + 8);
        puStack_48 = (undefined4 *)(((U64)(lStack_50) >> 0) & 0xFFFFFFFF);
        puStack_58 = (undefined4 *)(((U64)(lStack_60) >> 0) & 0xFFFFFFFF);
      } while (lVar8 != *plVar11);
    } while (lVar6 != *plVar10);
    if (puVar1 == (undefined4 *)0x0) break;
    lStack_60 = lVar6;
    plStack_54 = plVar10;
    lStack_50 = lVar8;
    plStack_44 = plVar11;
    if ((((U64)(lStack_60) >> 0) & 0xFFFFFFFF) == (((U64)(lStack_50) >> 0) & 0xFFFFFFFF)) {
      puStack_58 = puVar1;
      fn_82813428(&lStack_60);
    }
    else {
      if (*(longlong *)(iVar4 + 0x10) == 0) {
        sync(1);
      }
      uVar2 = *puVar1;
      puStack_48 = puVar1;
      cVar5 = fn_82813428(&lStack_50);
      bVar12 = (cVar5 == '\0') << 1;
      if (cVar5 != '\0') {
        *param_2 = uVar2;
        lVar6 = uVar7 + 0xc;
        do {
          puVar9 = (uint *)lVar6;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)*puVar9 + 1,0,lVar6);
            *puVar9 = uVar3;
            bVar12 = 2;
          }
        } while (!(bool)(bVar12 >> 1));
        fn_82813680(param_1,uVar7);
        do {
          puVar9 = (uint *)(param_1 + 0x34);
          lVar6 = (ulonglong)*puVar9 - 1;
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(lVar6,0,param_1 + 0x34);
            *puVar9 = uVar3;
            bVar12 = 2;
          }
        } while (!(bool)(bVar12 >> 1 & 1));
        if (((int)lVar6 == 0) && (*(int *)(iVar4 + 0x38) != 0)) {
          fn_82A1E7D8();
        }
        return 1;
      }
    }
  }
  return 0;
}

