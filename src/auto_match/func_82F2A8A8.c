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


longlong fn_82F2A8A8(undefined8 param_1,ulonglong param_2,ulonglong param_3,int *param_4,
                      uint *param_5,uint *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)((int)param_3 >> 0x1f);
  lVar3 = 0;
  uVar2 = (param_3 ^ uVar2) - uVar2;
  if ((ulonglong)(uint)param_4[4] < (param_2 & 0xffffffff)) {
    if ((uVar2 & 0xffffffff) <= (ulonglong)(uint)param_4[5]) {
      uVar1 = *(uint *)((int)((uVar2 & 0xffffffff) << 2) + param_4[1]);
      if ((param_2 & 0xffffffff) <= ((ulonglong)uVar1 & 0x7fffffff) << 1) {
        param_2 = (param_2 - uVar1) - 1;
        lVar3 = (ulonglong)*(uint *)(param_4[6] * 8 + param_4[3] + 4) + 2;
        goto LAB_82f2a95c;
      }
    }
    uVar1 = *(uint *)(param_4[6] * 8 + param_4[3] + 4);
LAB_82f2a99c:
    if ((ulonglong)*param_5 < (param_2 & 0xffffffff)) {
      *param_5 = (uint)param_2;
    }
    if ((ulonglong)*param_6 < (uVar2 & 0xffffffff)) {
      *param_6 = (uint)uVar2;
    }
    return (ulonglong)uVar1 + 0x11;
  }
  uVar1 = *(uint *)((int)((param_2 & 0xffffffff) << 2) + *param_4);
  if ((ulonglong)uVar1 < (uVar2 & 0xffffffff)) {
    if (((ulonglong)uVar1 & 0x7fffffff) << 1 < (uVar2 & 0xffffffff)) {
      uVar1 = *(uint *)(param_4[6] * 8 + param_4[3] + 4);
      goto LAB_82f2a99c;
    }
    uVar2 = uVar2 - uVar1;
    lVar3 = (ulonglong)*(uint *)(param_4[6] * 8 + param_4[3] + 4) + 1;
  }
LAB_82f2a95c:
  return (ulonglong)
         *(uint *)((int)((*(uint *)((int)((param_2 & 0xffffffff) << 2) + param_4[2]) + uVar2 &
                         0xffffffff) << 3) + param_4[3] + -4) + lVar3 + 1;
}

