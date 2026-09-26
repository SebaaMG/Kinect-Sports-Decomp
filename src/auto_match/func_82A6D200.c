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
extern int fn_82A6CF00();


undefined8 fn_82A6D200(int param_1,ulonglong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar6 = 0;
  if ((ulonglong)uVar5 < (param_2 & 0xffffffff)) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if ((ulonglong)uVar2 != 0) {
      uVar3 = 0x20 - (ulonglong)uVar5;
      uVar4 = (uint)uVar3;
      if ((ulonglong)uVar2 <= (uVar3 & 0xffffffff)) {
        uVar4 = uVar2;
      }
      uVar2 = uVar2 - uVar4;
      *(uint *)(param_1 + 0x30) = uVar2;
      *(uint *)(param_1 + 0x24) =
           *(uint *)(param_1 + 0x2c) >> (uVar2 & 0x3f) | *(int *)(param_1 + 0x24) << (uVar4 & 0x3f);
      *(uint *)(param_1 + 0x2c) = (1 << (uVar2 & 0x3f)) - 1U & *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x28) = uVar5 + uVar4;
    }
    uVar5 = *(uint *)(param_1 + 0x28);
    while ((uVar5 < 0x19 && (*(int *)(param_1 + 0x20) != 0))) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 8;
      uVar1 = **(undefined1 **)(param_1 + 0x1c);
      *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
      uVar2 = (**(code **)(param_1 + 0x54))(uVar1);
      uVar5 = *(int *)(param_1 + 0x28) + 8;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(uint *)(param_1 + 0x28) = uVar5;
      *(uint *)(param_1 + 0x24) = uVar2 & 0xff | *(uint *)(param_1 + 0x24);
    }
    if (((ulonglong)*(uint *)(param_1 + 0x28) < (param_2 & 0xffffffff)) &&
       (uVar6 = fn_82A6CF00(param_1,2,param_2), (int)uVar6 < 0)) {
      return uVar6;
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - (int)param_2;
  return uVar6;
}

