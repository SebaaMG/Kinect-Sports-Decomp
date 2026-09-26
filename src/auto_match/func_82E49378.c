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
extern int fn_82A1DDC0();


longlong fn_82E49378(int *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == (undefined4 *)0x0)) {
    lVar3 = -0x7fffbffd;
  }
  else {
    uVar1 = param_1[2];
    if (((ulonglong)(uint)param_1[4] < (ulonglong)uVar1) || ((uint)param_1[3] < (uint)param_1[4])) {
      param_1[4] = uVar1;
    }
    if (((ulonglong)(uint)param_1[1] + (ulonglong)uVar1 & 0xffffffff) <
        ((uint)param_1[4] + param_3 & 0xffffffff)) {
      param_3 = (ulonglong)(uint)param_1[1];
    }
    *param_4 = 0;
    uVar2 = ((ulonglong)(uint)param_1[4] - (ulonglong)(uint)param_1[2]) + param_3;
    if (((uVar2 & 0xffffffff) <=
         ((ulonglong)(uint)param_1[3] - (ulonglong)(uint)param_1[2] & 0xffffffff)) ||
       (lVar3 = (**(code **)(*param_1 + 0x14))(param_1,uVar2 & 0xffffffff), -1 < lVar3)) {
      fn_82A1DDC0(param_1[4],param_2,param_3);
      param_1[4] = param_1[4] + (int)param_3;
    }
  }
  return lVar3;
}

