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
extern int fn_82230040();
extern int fn_8250F498();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_8250F358(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0x7ffffff < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) >> 5) < (param_2 & 0xffffffff)) {
    lVar4 = 0;
    if (((param_2 & 0xffffffff) != 0) &&
       (lVar4 = fn_8265C9E0((param_2 & 0x7ffffff) << 5), lVar4 == 0)) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    uVar5 = param_1[1];
    lVar6 = lVar4;
    for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (ulonglong)uVar5; uVar7 = uVar7 + 0x20
        ) {
      fn_8250F498(lVar6,uVar7);
      lVar6 = lVar6 + 0x20;
    }
    uVar5 = *param_1;
    uVar1 = param_1[1];
    iVar2 = uVar1 - uVar5;
    if (uVar5 != 0) {
      for (; uVar5 != uVar1; uVar5 = uVar5 + 0x20) {
        iVar3 = *(int *)(uVar5 + 0x10);
        if (iVar3 != 0) {
          for (; iVar3 != *(int *)(uVar5 + 0x14); iVar3 = iVar3 + 0x20) {
          }
          fn_8265CA20(*(undefined4 *)(uVar5 + 0x10));
        }
        *(undefined4 *)(uVar5 + 0x10) = 0;
        *(undefined4 *)(uVar5 + 0x14) = 0;
        *(undefined4 *)(uVar5 + 0x18) = 0;
      }
      fn_8265CA20(*param_1);
    }
    uVar5 = (uint)lVar4;
    *param_1 = uVar5;
    param_1[2] = (int)((param_2 & 0xffffffff) << 5) + uVar5;
    param_1[1] = (iVar2 >> 5) * 0x20 + uVar5;
  }
  return;
}

