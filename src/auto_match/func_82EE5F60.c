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
extern unsigned int *auStack_40;
extern int fn_82F68CC0();


undefined8 fn_82EE5F60(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint auStack_40 [16];
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else if ((ulonglong)*(uint *)(param_1 + 0x18) < (param_3 & 0xffffffff)) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    puVar3 = (uint *)(-(uint)(param_1 + 4U != *(uint *)(param_1 + 4)) & *(uint *)(param_1 + 4));
    for (; (puVar3 != (uint *)0x0 && ((param_3 & 0xffffffff) != 0)); param_3 = param_3 - uVar4) {
      uVar1 = *puVar3;
      (**(code **)(*(int *)puVar3[2] + 0x14))((int *)puVar3[2],auStack_40,0);
      uVar4 = (ulonglong)puVar3[4];
      if ((param_3 & 0xffffffff) <= (ulonglong)puVar3[4]) {
        uVar4 = param_3;
      }
      fn_82F68CC0(param_2,(ulonglong)puVar3[3] + (ulonglong)auStack_40[0],uVar4);
      param_2 = uVar4 + param_2;
      puVar3 = (uint *)(-(uint)(param_1 + 4U != uVar1) & uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

