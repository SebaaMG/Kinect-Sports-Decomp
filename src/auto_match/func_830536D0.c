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
extern unsigned int *auStack_30;
extern int fn_830514A8();
extern int fn_830540C0();


ulonglong fn_830536D0(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auStack_30 [4];
  int aiStack_2c;
  
  piVar3 = param_1 + 0xe;
  *param_3 = param_1 + 6;
  RtlEnterCriticalSection(piVar3);
  if (((param_1[0x1d] & 0x8000000U) == 0) && (((uint)param_1[0x1d] >> 0x18 & 1) != 0)) {
    uVar4 = *(uint *)(param_1[0x18] + 0x84);
    if ((uint)param_1[0x1a] <= *(uint *)(param_1[0x18] + 0x84)) {
      uVar4 = param_1[0x1a];
    }
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    if ((param_1[0x24] != 0) &&
       (uVar1 = (longlong)param_1[0x1b] * (longlong)param_1[8] & 0xffffffff,
       (uint)param_1[0x24] + uVar1 <= uVar2)) {
      uVar2 = (uint)param_1[0x23] + uVar1;
    }
    uVar2 = fn_830540C0(param_1,param_2,uVar2,uVar4,0,&aiStack_2c,auStack_30);
    if ((uVar2 & 0xffffffff) != 0) {
      param_1[0x26] = param_1[0x26] + aiStack_2c;
      fn_830514A8(param_1);
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1[0x18] + 0x50);
    }
    RtlLeaveCriticalSection(piVar3);
  }
  else {
    RtlLeaveCriticalSection(piVar3);
    uVar2 = 0;
  }
  return uVar2;
}

