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
extern int fn_82A774D8();
extern int fn_82F68CC0();


ulonglong fn_82A77FA8(int param_1,ulonglong param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar1 = *(uint **)(param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0xbc);
  uVar4 = 0;
  if (((((ulonglong)puVar1[7] + (ulonglong)puVar1[6]) - (ulonglong)uVar2) + (ulonglong)*puVar1 &
      0xffffffff) < (param_2 & 0xffffffff)) {
    if (*param_3 == 0) {
      *param_3 = *(uint *)(*(int *)(param_1 + 4) + 0x214);
    }
    uVar3 = (ulonglong)*param_3;
    while (((param_2 & 0xffffffff) != 0 && (*(int *)(param_1 + 0xc0) != 0))) {
      puVar1 = *(uint **)(param_1 + 0xb8);
      uVar5 = (((ulonglong)puVar1[7] + (ulonglong)puVar1[6]) - (ulonglong)*(uint *)(param_1 + 0xbc))
              + (ulonglong)*puVar1;
      if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar5 = param_2;
      }
      fn_82F68CC0(uVar3,(ulonglong)*(uint *)(param_1 + 0xbc),uVar5);
      param_2 = param_2 - uVar5;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (int)uVar5;
      uVar4 = uVar5 + uVar4;
      uVar3 = uVar5 + uVar3;
      fn_82A774D8(param_1);
    }
  }
  else {
    if (*param_3 == 0) {
      *param_3 = uVar2;
    }
    else {
      fn_82F68CC0(*param_3,(ulonglong)uVar2,param_2);
    }
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (int)param_2;
    fn_82A774D8(param_1);
    uVar4 = param_2;
  }
  *(ulonglong *)(param_1 + 200) = (uVar4 & 0xffffffff) + *(longlong *)(param_1 + 200);
  return uVar4;
}

