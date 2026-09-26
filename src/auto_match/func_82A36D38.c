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
extern unsigned int *auStack_a0;
extern int fn_82A396A8();
extern int fn_82A396F0();
extern int fn_82F68CC0();


void fn_82A36D38(int param_1,ulonglong param_2,uint *param_3,ulonglong param_4,ulonglong param_5,
                  ulonglong param_6,ulonglong param_7)

{
  short *psVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint auStack_a0 [40];
  
  psVar2 = (short *)param_4;
  uVar7 = (ulonglong)*param_3;
  uVar8 = 0;
  uVar10 = 0;
  if (*psVar2 == 0) {
    uVar10 = param_6 - param_7;
    if (uVar7 <= (param_6 - param_7 & 0xffffffff)) {
      uVar10 = uVar7;
    }
    fn_82F68CC0(param_2,param_4 + param_7 + 2,uVar10);
  }
  else {
    if (((((param_4 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x3000)) &&
         ((param_5 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x3004))) &&
        ((param_6 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x3008))) &&
       ((ulonglong)*(uint *)(param_1 + 0x300c) <= (param_7 & 0xffffffff))) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x301c);
      lVar4 = param_7 - *(uint *)(param_1 + 0x300c);
      uVar9 = *(uint *)(param_1 + 0x3010);
      uVar1 = uVar5 - lVar4;
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x3014);
      param_4 = uVar9 + param_4;
      uVar1 = (((uVar1 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar1 == 0) & uVar1;
      uVar12 = *(uint *)(param_1 + 0x3018) + uVar5;
      uVar10 = uVar1;
      if (uVar7 <= (uVar1 & 0xffffffff)) {
        uVar10 = uVar7;
      }
      uVar1 = uVar12 - uVar1;
      fn_82F68CC0(param_2,(ulonglong)*(uint *)(param_1 + 0x3020) +
                           (ulonglong)*(uint *)(param_1 + 0x3018) + lVar4,uVar10);
      param_2 = uVar10 + param_2;
      uVar11 = param_5 - uVar9;
      uVar6 = uVar10;
      uVar9 = (uint)(uVar5 != 0);
    }
    else {
      fn_82A396A8(param_1 + 0x14);
      uVar12 = (ulonglong)auStack_a0[0];
      uVar6 = (ulonglong)auStack_a0[0];
      uVar1 = (ulonglong)auStack_a0[0];
      uVar11 = param_5;
      uVar9 = auStack_a0[0];
    }
    for (; (1 < (uVar11 & 0xffffffff) && ((uVar10 & 0xffffffff) < uVar7)); uVar10 = uVar6 + uVar10)
    {
      auStack_a0[0] = 0;
      uVar5 = (ulonglong)*(ushort *)param_4;
      if (uVar5 == 0) break;
      uVar12 = param_6 - uVar8;
      if (0x7fff < (uVar12 & 0xffffffff)) {
        uVar12 = 0x8000;
      }
      uVar6 = param_7 - uVar8;
      uVar1 = uVar12;
      if (((((uVar6 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar6 == 0) & uVar6 & 0xffffffff) <
          (uVar12 & 0xffffffff)) {
        uVar1 = (((uVar6 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar6 == 0) & uVar6;
      }
      uVar6 = uVar7 - uVar10;
      if ((uVar12 - uVar1 & 0xffffffff) < (uVar7 - uVar10 & 0xffffffff)) {
        uVar6 = uVar12 - uVar1;
      }
      uVar9 = -(uint)(uVar6 < uVar12) & 1;
      uVar3 = param_2;
      if (uVar9 != 0) {
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x3020);
      }
      fn_82A396F0(param_1 + 0x14,uVar12,param_4 + 2,uVar5,uVar3,uVar12,auStack_a0);
      if (uVar9 != 0) {
        fn_82F68CC0(param_2,*(uint *)(param_1 + 0x3020) + uVar1,uVar6);
      }
      uVar8 = uVar12 + uVar8;
      param_2 = uVar6 + param_2;
      param_4 = uVar5 + param_4 + 2;
      uVar11 = (uVar11 - 2) - uVar5;
    }
    *(short **)(param_1 + 0x3000) = psVar2;
    *(int *)(param_1 + 0x3004) = (int)param_5;
    *(int *)(param_1 + 0x3008) = (int)param_6;
    *(int *)(param_1 + 0x300c) = (int)uVar10 + (int)param_7;
    *(int *)(param_1 + 0x3010) = (int)(ushort *)param_4 - (int)psVar2;
    *(int *)(param_1 + 0x3014) = (int)uVar8;
    if (uVar9 == 0) {
      *(undefined4 *)(param_1 + 0x3018) = 0;
      *(undefined4 *)(param_1 + 0x301c) = 0;
    }
    else {
      *(int *)(param_1 + 0x3018) = (int)uVar1 + (int)uVar6;
      *(int *)(param_1 + 0x301c) = ((int)uVar12 - (int)uVar1) - (int)uVar6;
    }
  }
  *param_3 = (uint)uVar10;
  return;
}

