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
extern int fn_8227CB30();
extern int fn_82284738();
extern int fn_82284BA0();
extern int fn_82359C18();
extern int fn_82F4DCF8();


void fn_822848B8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar4 = fn_82284738();
  iVar7 = *(int *)(iVar4 + 0x148);
  if (iVar7 != *(int *)(iVar4 + 0x14c)) {
    do {
      iVar11 = *(int *)(iVar7 + 0x430);
      if (iVar11 == param_1) {
        iVar1 = *(int *)(*(int *)(iVar4 + 0x14c) + -0x10);
        iVar2 = *(int *)(iVar4 + 0x14c);
        if (iVar7 + 0x440 != iVar2) {
          iVar7 = iVar7 + 0x858;
          do {
            puVar8 = (undefined2 *)(iVar7 + -0x858);
            iVar9 = (iVar7 - (int)puVar8) + -0x418;
            lVar12 = 0x100;
            do {
              *puVar8 = *(undefined2 *)(iVar9 + (int)puVar8);
              puVar8 = puVar8 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            puVar8 = (undefined2 *)(iVar7 + -0x658);
            lVar12 = 0x100;
            do {
              *puVar8 = *(undefined2 *)(iVar9 + (int)puVar8);
              puVar8 = puVar8 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            fn_8227CB30(iVar7 + -0x458,iVar7 + -0x18);
            fn_8227CB30(iVar7 + -0x440,iVar7);
            *(undefined4 *)(iVar7 + -0x428) = *(undefined4 *)(iVar7 + 0x18);
            *(undefined4 *)(iVar7 + -0x424) = *(undefined4 *)(iVar7 + 0x1c);
            *(undefined4 *)(iVar7 + -0x420) = *(undefined4 *)(iVar7 + 0x20);
            iVar9 = iVar7 + 0x28;
            iVar7 = iVar7 + 0x440;
          } while (iVar9 != iVar2);
        }
        uVar3 = *(uint *)(iVar4 + 0x14c);
        for (uVar10 = (ulonglong)uVar3 - 0x440; (uVar10 & 0xffffffff) != (ulonglong)uVar3;
            uVar10 = uVar10 + 0x440) {
          fn_82359C18(uVar10 + 0x418);
          fn_82359C18(uVar10 + 0x400);
        }
        *(int *)(iVar4 + 0x14c) = *(int *)(iVar4 + 0x14c) + -0x440;
        if ((uint)LZCOUNT(iVar1 - iVar11) >> 5 == 0) {
          return;
        }
        if (*(int *)(iVar4 + 0x148) == *(int *)(iVar4 + 0x14c)) {
          uVar6 = 1;
          uVar5 = 1;
          iVar7 = 0;
          iVar11 = 0;
        }
        else {
          iVar7 = *(int *)(iVar4 + 0x14c);
          *(undefined4 *)(iVar4 + 0x15c) = 0xffffffff;
          iVar11 = iVar7 + -0x440;
          fn_82F4DCF8(0xffffffffffffffff);
          uVar6 = *(undefined4 *)(iVar7 + -8);
          uVar5 = *(undefined4 *)(iVar7 + -0xc);
          iVar7 = iVar7 + -0x240;
        }
        fn_82284BA0(iVar4,iVar11,iVar7,uVar5,uVar6);
        return;
      }
      iVar7 = iVar7 + 0x440;
    } while (iVar7 != *(int *)(iVar4 + 0x14c));
  }
  return;
}

