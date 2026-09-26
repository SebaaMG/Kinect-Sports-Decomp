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


longlong fn_82E2CBB8(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  uint auStack_50 [20];
  
  uVar3 = 0;
  if ((int)param_5 != 0) {
    uVar3 = (**(code **)(*(int *)(param_1 - 4) + 0x1c))(param_1 - 4,0xffffffff821536b8,auStack_50);
    uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_50[0];
    lVar1 = (**(code **)(*(int *)(param_1 - 4) + 0x54))(param_1 - 4,0xffffffff821536b8,param_5);
    if (lVar1 < 0) {
      return lVar1;
    }
  }
  piVar2 = (int *)(-(uint)(param_1 != 4) & param_1);
  lVar1 = (**(code **)(*piVar2 + 0x90))(piVar2,param_2,param_3,param_4);
  if ((int)param_5 != 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(*(int *)(param_1 - 4) + 0x4c))();
    }
    else {
      (**(code **)(*(int *)(param_1 - 4) + 0x54))(param_1 - 4,0xffffffff821536b8,uVar3);
    }
  }
  return lVar1;
}

