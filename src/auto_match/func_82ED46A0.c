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
extern int fn_8265C940();
extern int fn_82ED4038();
extern int fn_82ED4618();


void fn_82ED46A0(int param_1,uint param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar4;
  longlong lVar3;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  fn_82ED4618();
  if (0 < (int)param_2) {
    *(uint *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x14) = param_2 >> 4;
    iVar1 = (param_2 + 0xf >> 4) * (param_3 + 0xfU >> 4) * 4;
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar1 >> 1;
  }
  if ((0x3fd41 < (param_4 & 0xffffffff)) ||
     (lVar2 = param_4 * 0x402c + 4, 0xfffffffb < (param_4 * 0x402c & 0xffffffff))) {
    lVar2 = -1;
  }
  puVar4 = (undefined4 *)fn_8265C940(lVar2,0x248c8000);
  lVar2 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = (int)param_4;
    puVar6 = puVar4 + 1;
    if (-1 < (longlong)(param_4 - 1)) {
      puVar4 = puVar4 + -0x1007;
      uVar8 = param_4;
      do {
        puVar4[0x1008] = 0;
        puVar4[0x1009] = 0;
        puVar4[0x100a] = 0;
        puVar4[0x2010] = 0;
        puVar4[0x2011] = 0;
        puVar4[0x100d] = 0;
        puVar4[0x100c] = 0xffffffff;
        puVar4 = puVar4 + 0x100b;
        *puVar4 = 0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  *(undefined4 **)(param_1 + 0x18) = puVar6;
  *(int *)(param_1 + 0x1c) = (int)param_4;
  if (((param_5 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) <= (param_5 & 0xffffffff))) {
    param_5 = param_4;
  }
  *(int *)(param_1 + 0x28) = (int)param_5;
  lVar3 = (param_5 & 0x3fffffff) << 2;
  if (0x3fffffff < (param_5 & 0xffffffff)) {
    lVar3 = -1;
  }
  uVar5 = fn_8265C940(lVar3,0x248c8000);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      fn_82ED4038(lVar2 + (ulonglong)*(uint *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(param_1 + 0x10));
      uVar7 = uVar7 + 1;
      lVar2 = lVar2 + 0x402c;
    } while (uVar7 < *(uint *)(param_1 + 0x1c));
  }
  return;
}

