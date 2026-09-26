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
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_824AFC78();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;


void fn_824AF940(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar4;
  ulonglong uVar3;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint auStack_60 [2];
  uint *puStack_58;
  uint uStack_54;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  auStack_60[1] = 200;
  if ((int)(param_1[1] - *param_1) / 0xf0 != 200) {
    uVar1 = fn_8265C9E0(48000);
    if (uVar1 == 0) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    auStack_60[0] = param_1[4];
    uVar7 = 0;
    if (auStack_60[0] != 0) {
      uVar7 = (ulonglong)param_1[2];
    }
    puVar4 = auStack_60;
    if (199 < auStack_60[0]) {
      puVar4 = auStack_60 + 1;
    }
    uVar5 = *puVar4;
    uVar2 = (ulonglong)uVar5;
    uStack_54 = (uint)uVar7;
    puStack_58 = param_1;
    if ((int)uVar5 < 1) {
      uVar3 = uVar7;
      if ((int)uVar5 < 0) {
        fn_824AFC78(&puStack_58,-uVar2);
        uVar3 = (ulonglong)uStack_54;
      }
    }
    else {
      if ((int)(param_1[1] - uStack_54) / 0xf0 <= (int)uVar5) {
        uVar2 = uVar2 - (longlong)((int)(param_1[1] - *param_1) / 0xf0);
      }
      uVar3 = uVar2 * 0xf0 + uVar7;
      uStack_54 = (uint)uVar3;
      if ((uVar3 & 0xffffffff) == (ulonglong)param_1[3]) {
        uStack_54 = 0;
        uVar3 = 0;
      }
    }
    uVar2 = uVar1;
    if (uVar7 != (uVar3 & 0xffffffff)) {
      do {
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82F68CC0(uVar2,uVar7,0xf0);
        }
        uVar7 = uVar7 + 0xf0;
        if ((uVar7 & 0xffffffff) == (ulonglong)param_1[1]) {
          uVar7 = (ulonglong)*param_1;
        }
        uVar2 = uVar2 + 0xf0;
        uVar7 = -(ulonglong)(param_1[3] != uVar7) & uVar7;
      } while ((uVar7 & 0xffffffff) != (uVar3 & 0xffffffff));
    }
    uVar5 = 0;
    if (param_1[4] != 0) {
      do {
        uVar6 = param_1[2];
        uVar5 = uVar5 + 1;
        param_1[2] = uVar6 + 0xf0;
        if (uVar6 + 0xf0 == param_1[1]) {
          param_1[2] = *param_1;
        }
      } while (uVar5 < param_1[4]);
    }
    if (*param_1 != 0) {
      fn_8265CA20();
    }
    uVar5 = (uint)uVar1;
    *param_1 = uVar5;
    param_1[2] = uVar5;
    param_1[1] = (uint)(uVar1 + 48000);
    param_1[4] = (int)((uint)uVar2 - uVar5) / 0xf0;
    uVar6 = (uint)uVar2;
    if ((uVar2 & 0xffffffff) == (uVar1 + 48000 & 0xffffffff)) {
      uVar6 = uVar5;
    }
    param_1[3] = uVar6;
  }
  return;
}

