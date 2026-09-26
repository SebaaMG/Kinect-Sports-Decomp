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
extern int fn_82813CB8();
extern int fn_82A1E810();
extern unsigned int iStack_24;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82813D80(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong *plVar9;
  char in_RESERVE;
  byte bVar10;
  longlong lStack_40;
  undefined4 *puStack_38;
  longlong *plStack_34;
  undefined8 uStack_30;
  undefined4 *puStack_28;
  int iStack_24;
  
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x30) == '\0') {
    lVar4 = fn_82813CB8(param_1,0x10);
    bVar1 = lVar4 == 0;
    if (!bVar1) {
      puVar5 = (undefined4 *)lVar4;
      *puVar5 = *param_2;
      puVar5[2] = 0;
      do {
        puVar8 = (uint *)(lVar4 + 0xc);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,lVar4 + 0xc);
          *puVar8 = uVar2;
          bVar1 = true;
        }
      } while (!bVar1);
      if (*(longlong *)(iVar3 + 0x10) == 0) {
        sync(1);
      }
      plVar9 = (longlong *)(iVar3 + 0x28);
      do {
        while( true ) {
          do {
            lVar4 = *plVar9;
            lStack_40 = ((((U64)(lStack_40)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)lVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
            iStack_24 = (((U64)(lStack_40) >> 0) & 0xFFFFFFFF) + 8;
            uVar7 = *(undefined8 *)((((U64)(lStack_40) >> 0) & 0xFFFFFFFF) + 8);
          } while (lVar4 != *plVar9);
          uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)((ulonglong)uVar7 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
          lStack_40 = lVar4;
          plStack_34 = plVar9;
          uStack_30 = uVar7;
          if ((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) == 0) break;
          puStack_38 = (undefined4 *)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
          fn_82813428(&lStack_40);
        }
        puStack_28 = puVar5;
        cVar6 = fn_82813428(&uStack_30);
        bVar10 = (cVar6 == '\0') << 1;
      } while (cVar6 == '\0');
      puStack_38 = puVar5;
      fn_82813428(&lStack_40);
      do {
        puVar8 = (uint *)(param_1 + 0x34);
        lVar4 = (ulonglong)*puVar8 + 1;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(lVar4,0,param_1 + 0x34);
          *puVar8 = uVar2;
          bVar10 = 2;
        }
      } while (!(bool)(bVar10 >> 1 & 1));
      if (((int)lVar4 == 1) && (*(int *)(iVar3 + 0x38) != 0)) {
        fn_82A1E810();
      }
      return 1;
    }
  }
  return 0;
}

