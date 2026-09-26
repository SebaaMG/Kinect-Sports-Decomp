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
extern unsigned int *auStack_60;
extern int fn_82A5C010();


longlong fn_82A4AFD8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  longlong lVar1;
  int *piVar2;
  undefined4 *in_stack_0000005c;
  undefined4 auStack_60 [24];
  
  piVar2 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar2);
  lVar1 = param_6 + 4;
  if ((param_6 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  auStack_60[0] = 0;
  lVar1 = fn_82A5C010(param_1 + 4,lVar1,auStack_60,param_2,param_3,param_4,param_5,param_7);
  if (-1 < lVar1) {
    *in_stack_0000005c = auStack_60[0];
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  return lVar1;
}

