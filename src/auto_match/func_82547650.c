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
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern U64 storeDoubleWordConditionalIndexed();


void fn_82547650(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 in_MSR;
  
  uVar2 = lbl_8320A898;
  uVar9 = lbl_8326B498;
  if ((lbl_8326B498 != 0) &&
     (uVar9 = storeDoubleWordConditionalIndexed(0,0,0xffffffff8326b498), lbl_8326B498 != 0)) {
    uVar6 = lbl_8326B498 >> 0x20;
    lVar3 = (ulonglong)lbl_8320A898 + 0x5ea0;
    uVar8 = *(ulonglong *)(lbl_8320A898 + 0x5ea0);
    lbl_8326B498 = uVar9;
    while( true ) {
      uVar7 = uVar8 & ~(1L << (((uVar8 & 0xffffffff) - uVar6) + 0x20 & 0x7f));
      puVar4 = (ulonglong *)lVar3;
      uVar9 = uVar8;
      if (uVar7 == uVar8) break;
      uVar5 = *puVar4;
      if (uVar5 == uVar8) {
        uVar9 = storeDoubleWordConditionalIndexed(uVar7,0,lVar3);
        *puVar4 = uVar9;
      }
      else {
        uVar9 = storeDoubleWordConditionalIndexed(uVar5,0,lVar3);
        *puVar4 = uVar9;
      }
      param_2 = in_MSR;
      uVar9 = uVar7;
      if (uVar8 == uVar5) break;
      uVar8 = *puVar4;
    }
    if (*(int *)(uVar2 + 0x5e8c) == 0) {
      do {
        uVar6 = 0xffffffff80000000;
        uVar8 = LZCOUNT((int)(uVar9 >> 0x20)) + ((uVar9 & 0xffffffff) - 0x20);
        if ((uVar8 & 0x80000000) == 0) {
          uVar6 = uVar8 & 0x7fffffff;
        }
        uVar7 = uVar8 & 0x7fffffff;
        if ((uVar8 & 0x80000000) == 0) {
          uVar7 = 0xffffffff80000000;
        }
        *(ulonglong *)(*(int *)(uVar2 + 0x5e90) + 0x220) = uVar6 << 0x20 | uVar7 & 0xffffffff;
        sync(0);
        if (*(int *)(uVar2 + 0x5e8c) != 0) {
          *(undefined8 *)(*(int *)(uVar2 + 0x5e90) + 0x220) = 0xffffffffffffffff;
          break;
        }
        bVar1 = *puVar4 != uVar9;
        uVar9 = *puVar4;
      } while (bVar1);
    }
    fn_82A1E7D8(lbl_8326B4A8,param_2);
    fn_82A1E810(lbl_8326B4AC);
    uVar9 = lbl_8326B498;
  }
  lbl_8326B498 = uVar9;
  return;
}

