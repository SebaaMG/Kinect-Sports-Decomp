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
extern int fn_82A1E650();
extern int fn_82A1E7D8();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern U64 storeDoubleWordConditionalIndexed();


void fn_825477C8(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = lbl_8326B498;
  do {
    do {
      do {
        lbl_8326B498 = uVar10;
        fn_82A1E650(lbl_8326B4A8,0xffffffffffffffff);
        iVar3 = fn_82A1E650(lbl_8326B4AC,0x85);
        uVar2 = lbl_8320A898;
        uVar10 = lbl_8326B498;
      } while (iVar3 != 0x102);
      uVar10 = storeDoubleWordConditionalIndexed(0,0,0xffffffff8326b498);
    } while (lbl_8326B498 == 0);
    uVar8 = lbl_8326B498 >> 0x20;
    lVar4 = (ulonglong)lbl_8320A898 + 0x5ea0;
    uVar9 = *(ulonglong *)(lbl_8320A898 + 0x5ea0);
    lbl_8326B498 = uVar10;
    while( true ) {
      uVar7 = uVar9 & ~(1L << (((uVar9 & 0xffffffff) - uVar8) + 0x20 & 0x7f));
      puVar5 = (ulonglong *)lVar4;
      uVar10 = uVar9;
      if (uVar7 == uVar9) break;
      uVar6 = *puVar5;
      if (uVar6 == uVar9) {
        uVar10 = storeDoubleWordConditionalIndexed(uVar7,0,lVar4);
        *puVar5 = uVar10;
      }
      else {
        uVar10 = storeDoubleWordConditionalIndexed(uVar6,0,lVar4);
        *puVar5 = uVar10;
      }
      uVar10 = uVar7;
      if (uVar9 == uVar6) break;
      uVar9 = *puVar5;
    }
    if (*(int *)(uVar2 + 0x5e8c) == 0) {
      do {
        uVar8 = 0xffffffff80000000;
        uVar9 = LZCOUNT((int)(uVar10 >> 0x20)) + ((uVar10 & 0xffffffff) - 0x20);
        if ((uVar9 & 0x80000000) == 0) {
          uVar8 = uVar9 & 0x7fffffff;
        }
        uVar7 = uVar9 & 0x7fffffff;
        if ((uVar9 & 0x80000000) == 0) {
          uVar7 = 0xffffffff80000000;
        }
        *(ulonglong *)(*(int *)(uVar2 + 0x5e90) + 0x220) = uVar8 << 0x20 | uVar7 & 0xffffffff;
        sync(0);
        if (*(int *)(uVar2 + 0x5e8c) != 0) {
          *(undefined8 *)(*(int *)(uVar2 + 0x5e90) + 0x220) = 0xffffffffffffffff;
          break;
        }
        bVar1 = *puVar5 != uVar10;
        uVar10 = *puVar5;
      } while (bVar1);
    }
    fn_82A1E7D8(lbl_8326B4A8);
    uVar10 = lbl_8326B498;
  } while( true );
}

