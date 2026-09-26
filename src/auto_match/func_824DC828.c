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


void fn_824DC828(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = 4;
  if (param_2 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x3b8) + 8))(param_1 + 0x3b8);
    if (iVar1 == 0) {
LAB_824dc8f8:
      iVar1 = 1;
      goto LAB_824dc8fc;
    }
    iVar1 = *(int *)(param_1 + 0x398);
    iVar2 = param_1 + 0x398;
  }
  else if (param_2 < 3) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x164) + 8))(param_1 + 0x164);
    if (iVar1 == 0) goto LAB_824dc8f8;
    iVar1 = *(int *)(param_1 + 0x144);
    iVar2 = param_1 + 0x144;
  }
  else {
    if (param_2 != 3) goto LAB_824dc8fc;
    iVar1 = (**(code **)(*(int *)(param_1 + 0x280) + 8))(param_1 + 0x280);
    if (iVar1 == 0) goto LAB_824dc8f8;
    iVar1 = *(int *)(param_1 + 0x2c0);
    iVar2 = param_1 + 0x2c0;
  }
  uVar3 = (**(code **)(iVar1 + 8))(iVar2);
  iVar1 = ((uint)LZCOUNT(uVar3) >> 5 ^ 1) + 2;
LAB_824dc8fc:
  *(int *)(param_1 + 0x440) = iVar1;
  return;
}

