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
extern int fn_82EDEBE8();
extern int fn_82EDFEC0();
extern int fn_82F45068();
extern int fn_82F45228();


undefined8
fn_82F175E8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             int param_8)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  if ((param_1 == (int *)0x0) || (param_3 == 0)) {
    return 1;
  }
  if (param_2 == 0) {
    iVar7 = param_1[0xe47];
    uVar2 = param_1[0xe48];
    sVar1 = *(short *)(*param_1 + 0xe);
    iVar6 = *(int *)(*param_1 + 0x10);
  }
  else {
    iVar7 = *(int *)(param_2 + 4);
    uVar2 = *(uint *)(param_2 + 8);
    sVar1 = *(short *)(param_2 + 0xe);
    iVar6 = *(int *)(param_2 + 0x10);
  }
  if (param_4 < 0) {
    return 1;
  }
  if (param_5 < 0) {
    return 1;
  }
  if (param_8 < 0) {
    return 1;
  }
  if (in_stack_00000054 < 0) {
    return 1;
  }
  if (param_6 < 0) {
    return 1;
  }
  if (param_7 < 0) {
    return 1;
  }
  if (iVar7 < param_4 + param_8) {
    return 1;
  }
  if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < param_5 + in_stack_00000054) {
    return 1;
  }
  if (*(int *)(param_3 + 4) < param_6 + param_8) {
    return 1;
  }
  uVar3 = (int)*(uint *)(param_3 + 8) >> 0x1f;
  if ((int)((*(uint *)(param_3 + 8) ^ uVar3) - uVar3) < param_7 + in_stack_00000054) {
    return 1;
  }
  iVar5 = 0;
  if (param_1[0xe4b] != param_4) {
    param_1[0xe4b] = param_4;
    iVar5 = 2;
  }
  if (param_1[0xe4c] != param_5) {
    param_1[0xe4c] = param_5;
    iVar5 = 2;
  }
  if (param_1[0xe4d] != param_6) {
    param_1[0xe4d] = param_6;
    iVar5 = 2;
  }
  if (param_1[0xe4e] != param_7) {
    param_1[0xe4e] = param_7;
    iVar5 = 2;
  }
  if (param_1[0xe2c] != param_8) {
    iVar5 = 2;
    *(int *)(*param_1 + 4) = param_8;
    param_1[0xe2c] = param_8;
  }
  if (param_1[0xe2d] != in_stack_00000054) {
    iVar5 = 2;
    *(int *)(*param_1 + 8) = in_stack_00000054;
    param_1[0xe2d] = in_stack_00000054;
  }
  if (param_1[0xe23] != param_8) {
    iVar5 = 2;
    *(int *)(param_1[1] + 4) = param_8;
    param_1[0xe23] = param_8;
  }
  if (param_1[0xe24] != in_stack_00000054) {
    iVar5 = 2;
    *(int *)(param_1[1] + 8) = in_stack_00000054;
    param_1[0xe24] = in_stack_00000054;
  }
  if (param_1[0xe47] != iVar7) {
    param_1[0xe47] = iVar7;
    iVar5 = (iVar5 == 2) + 1;
  }
  if (param_1[0xe48] != uVar2) {
    param_1[0xe48] = uVar2;
    iVar5 = 2;
  }
  if (param_1[0xe49] != *(int *)(param_3 + 4)) {
    param_1[0xe49] = *(int *)(param_3 + 4);
    iVar5 = (iVar5 == 2) + 1;
  }
  if (param_1[0xe4a] != *(int *)(param_3 + 8)) {
    param_1[0xe4a] = *(int *)(param_3 + 8);
    iVar5 = 2;
  }
  if (*(int *)(*param_1 + 0x10) != iVar6) {
    *(int *)(*param_1 + 0x10) = iVar6;
    iVar5 = 2;
  }
  if (*(int *)(param_1[1] + 0x10) != *(int *)(param_3 + 0x10)) {
    *(int *)(param_1[1] + 0x10) = *(int *)(param_3 + 0x10);
    iVar5 = 2;
  }
  if (*(short *)(*param_1 + 0xe) != sVar1) {
    *(short *)(*param_1 + 0xe) = sVar1;
    iVar5 = 2;
  }
  sVar1 = *(short *)(param_3 + 0xe);
  if (*(short *)(param_1[1] + 0xe) != sVar1) {
    *(short *)(param_1[1] + 0xe) = sVar1;
    iVar5 = 2;
  }
  if (param_1[0xe50] != in_stack_00000064) {
    param_1[0xe50] = in_stack_00000064;
    iVar5 = (iVar5 == 2) + 1;
  }
  if (param_1[0xe51] != in_stack_0000006c) {
    param_1[0xe51] = in_stack_0000006c;
    iVar5 = (iVar5 == 2) + 1;
  }
  if (param_1[0xe52] != in_stack_00000074) {
    param_1[0xe52] = in_stack_00000074;
    iVar5 = ((uint)LZCOUNT(iVar5 + -2) >> 5) + 1;
  }
  if (param_1[0xe4f] == in_stack_0000005c) {
    if (iVar5 != 2) {
      if (iVar5 != 1) {
        return 0;
      }
      fn_82EDEBE8(param_1,param_1[0xe47],param_1[0xe48],param_1[0xe49],param_1[0xe4a],sVar1);
      return 0;
    }
  }
  else {
    param_1[0xe4f] = in_stack_0000005c;
  }
  uVar4 = fn_82F45068(param_1);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = fn_82EDFEC0(param_1);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = fn_82F45228(param_1);
  if ((int)uVar4 == 0) {
    return 0;
  }
  return uVar4;
}

