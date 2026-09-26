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
extern int fn_82A26800();
extern int fn_82A27010();
extern unsigned int stack0x0000003c;
extern unsigned int uStack0000003c;


undefined8
fn_82A27888(undefined2 *param_1,undefined2 *param_2,byte param_3,undefined4 param_4,
             undefined2 *param_5,uint param_6,uint param_7)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uStack0000003c;
  int aiStack_60 [24];
  
  uVar4 = param_7 - (int)param_5;
  uVar1 = (int)param_2 + 0x57U & 0xfffffff0;
  iVar7 = ((int)uVar4 >> 0x10) + (uint)((int)uVar4 < 0 && (uVar4 & 0xffff) != 0);
  if (param_1 == param_5) {
    uVar6 = *param_1;
  }
  else {
    uVar6 = 0;
  }
  if (uVar1 + 0x10 < param_6) {
LAB_82a27940:
    param_7 = param_7 - param_6;
    param_2[1] = uVar6;
    *param_2 = (short)((int)(uVar1 - (int)param_2) >> 4);
    *(byte *)(param_2 + 2) = param_3;
    *(undefined4 *)(param_2 + 10) = param_4;
    uVar5 = (longlong)((int)param_7 >> 0x10) +
            (ulonglong)((int)param_7 < 0 && (param_7 & 0xffff) != 0);
    *(undefined2 **)(param_2 + 0xc) = param_1;
    *(undefined2 **)(param_2 + 0x10) = param_5;
    *(uint *)(param_2 + 0x14) = uVar1;
    *(undefined1 *)((int)param_2 + 5) = 1;
    *(undefined4 *)(param_2 + 8) = 0xffeeffee;
    *(undefined2 **)(param_2 + 0x16) = param_5 + iVar7 * 0x8000;
    *(int *)(param_2 + 0x12) = iVar7;
    *(int *)(param_2 + 0x18) = (int)uVar5;
    uStack0000003c = param_6;
    if (uVar5 != 0) {
      fn_82A26800(param_2,param_6,(uVar5 & 0xffff) << 0x10);
    }
    *(undefined2 **)(param_1 + (param_3 + 0x18) * 2) = param_2;
    uVar6 = *param_2;
    *(undefined1 *)(uVar1 + 5) = 0x10;
    *(uint *)(param_2 + 0x20) = uVar1;
    *(byte *)(uVar1 + 4) = param_3;
    *(undefined2 *)(uVar1 + 2) = uVar6;
    fn_82A27010(param_1,uVar1,(int)(uStack0000003c - uVar1) >> 4);
    uVar2 = 1;
  }
  else {
    if (uVar1 + 0x10 < param_7) {
      aiStack_60[0] = (uVar1 - param_6) + 0x10;
      uStack0000003c = param_6;
      iVar3 = NtAllocateVirtualMemory
                        (&stack0x0000003c,aiStack_60,0x60001000,4,*(undefined4 *)(param_1 + 0x2c8));
      if (-1 < iVar3) {
        param_6 = aiStack_60[0] + uStack0000003c;
        goto LAB_82a27940;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

