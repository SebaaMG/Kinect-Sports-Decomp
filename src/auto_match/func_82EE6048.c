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
extern unsigned int *auStack_50;
extern int fn_82F68CC0();


undefined8 fn_82EE6048(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint auStack_50 [20];
  
  if (((param_3 & 0xffffffff) == 0) || ((int)param_4 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else if (((ulonglong)*(uint *)(param_1 + 0x18) < (param_2 + param_4 & 0xffffffff)) ||
          ((param_2 + param_4 & 0xffffffff) < (param_4 & 0xffffffff))) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    auStack_50[0] = 0;
    uVar5 = 0;
    puVar4 = (uint *)(-(uint)(param_1 + 4U != *(uint *)(param_1 + 4)) & *(uint *)(param_1 + 4));
    while ((puVar4 != (uint *)0x0 && ((param_4 & 0xffffffff) != 0))) {
      uVar1 = *puVar4;
      (**(code **)(*(int *)puVar4[2] + 0x14))((int *)puVar4[2],auStack_50,0);
      if ((param_2 & 0xffffffff) <= (puVar4[4] + uVar5 & 0xffffffff)) {
        lVar3 = 0;
        if ((uVar5 & 0xffffffff) < (param_2 & 0xffffffff)) {
          lVar3 = param_2 - uVar5;
        }
        uVar6 = (ulonglong)puVar4[4] - lVar3;
        if ((param_4 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
          uVar6 = param_4;
        }
        fn_82F68CC0(param_3,(ulonglong)puVar4[3] + lVar3 + (ulonglong)auStack_50[0],uVar6);
        param_3 = uVar6 + param_3;
        param_4 = param_4 - uVar6;
      }
      uVar5 = puVar4[4] + uVar5;
      puVar4 = (uint *)(-(uint)(param_1 + 4U != uVar1) & uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

