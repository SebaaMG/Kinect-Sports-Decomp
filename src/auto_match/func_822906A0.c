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
extern int fn_82273C88();
extern int fn_8228E780();
extern int fn_82311AB8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AD03C;
extern unsigned int uStack_3c;


void fn_822906A0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined **appuStack_20 [8];
  
  uVar2 = (int)(param_1[1] - *param_1) >> 4;
  if (0xffffffe < uVar2) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar4 = (longlong)(int)uVar2 + 1;
  uVar2 = (int)(param_1[2] - *param_1) >> 4;
  if ((uVar4 & 0xffffffff) <= (ulonglong)uVar2) {
    return;
  }
  uVar3 = 0;
  if ((ulonglong)uVar2 <= (0xfffffff - (ulonglong)(uVar2 >> 1) & 0xffffffff)) {
    uVar3 = (ulonglong)(uVar2 >> 1) + (longlong)(int)uVar2;
  }
  if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    uVar3 = uVar4;
  }
  if (0xfffffff < (uVar3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) >> 4) < (uVar3 & 0xffffffff)) {
    uVar4 = 0;
    if (((uVar3 & 0xffffffff) != 0) &&
       (uVar4 = fn_8265C9E0((uVar3 & 0xfffffff) << 4), uVar4 == 0)) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_40);
    }
    uVar2 = param_1[1];
    uVar5 = uVar4;
    for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (ulonglong)uVar2; uVar7 = uVar7 + 0x10
        ) {
      if ((uVar5 & 0xffffffff) != 0) {
        fn_8228E780(uVar5,uVar7);
      }
      uVar5 = uVar5 + 0x10;
    }
    uVar2 = *param_1;
    uVar5 = (ulonglong)uVar2;
    uVar1 = param_1[1];
    if (uVar5 != 0) {
      if (uVar5 != uVar1) {
        do {
          fn_82273C88(uVar5);
          uVar5 = uVar5 + 0x10;
        } while ((uVar5 & 0xffffffff) != (ulonglong)uVar1);
      }
      fn_8265CA20(*param_1);
    }
    uVar6 = (uint)uVar4;
    *param_1 = uVar6;
    param_1[2] = (int)((uVar3 & 0xffffffff) << 4) + uVar6;
    param_1[1] = ((int)(uVar1 - uVar2) >> 4) * 0x10 + uVar6;
  }
  return;
}

