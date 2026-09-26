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
extern int fn_82311AB8();
extern int fn_8265CA20();
extern int fn_828780F8();
extern int fn_828782A8();
extern int fn_828783B8();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_82878778(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined **appuStack_20 [8];
  
  uVar1 = (int)(param_1[1] - *param_1) / 0x2c;
  if ((0x5d1745dU - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar5 = (int)uVar1 + param_2;
  uVar1 = (int)(param_1[2] - *param_1) / 0x2c;
  if ((uVar5 & 0xffffffff) <= (ulonglong)uVar1) {
    return;
  }
  uVar4 = 0;
  if ((ulonglong)uVar1 <= (0x5d1745d - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
    uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
  }
  if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    uVar4 = uVar5;
  }
  if (0x5d1745d < (uVar4 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x2c) < (uVar4 & 0xffffffff)) {
    uVar3 = fn_828780F8(uVar4,0);
    uVar1 = param_1[1];
    uVar5 = uVar3;
    for (uVar7 = (ulonglong)*param_1; (uVar7 & 0xffffffff) != (ulonglong)uVar1; uVar7 = uVar7 + 0x2c
        ) {
      if ((uVar5 & 0xffffffff) != 0) {
        fn_828783B8(uVar5,uVar7);
      }
      uVar5 = uVar5 + 0x2c;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_828782A8(uVar1,uVar2,param_1 + 3);
      fn_8265CA20(*param_1);
    }
    uVar6 = (uint)uVar3;
    *param_1 = uVar6;
    param_1[2] = (int)uVar4 * 0x2c + uVar6;
    param_1[1] = ((int)(uVar2 - uVar1) / 0x2c) * 0x2c + uVar6;
  }
  return;
}

