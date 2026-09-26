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
extern unsigned int uStack_a;


double fn_828171F8(double param_1,ulonglong param_2,undefined8 param_3,short *param_4,
                    ushort *param_5,short *param_6,short *param_7,int param_8)

{
  ulonglong uVar1;
  short sVar2;
  ulonglong uVar3;
  ushort uStack_a;
  
  if (param_8 == 0) {
    param_2 = param_2 - 1;
    param_1 = (double)(param_2 & 0xffffffff) * param_1;
    uStack_a = (ushort)(longlong)param_1;
    *param_5 = uStack_a;
    *param_4 = uStack_a + ((uStack_a == 0) - 1);
    uVar1 = (ulonglong)(param_2 != *param_5) + (ulonglong)*param_5;
    sVar2 = (short)uVar1;
    *param_6 = sVar2;
    *param_7 = (ushort)(param_2 != (uVar1 & 0xffff)) + sVar2;
  }
  else {
    param_1 = (double)(param_2 & 0xffffffff) * param_1;
    uStack_a = (ushort)(longlong)param_1;
    uVar3 = ((longlong)param_1 & 0xffffU) -
            (longlong)(int)((uint)uStack_a / (uint)param_2) * (longlong)(int)(uint)param_2;
    uVar1 = (uVar3 & 0xffff) + 1;
    *param_5 = (ushort)uVar3;
    sVar2 = (short)param_2;
    *param_6 = (short)uVar1 - (short)(uVar1 / (param_2 & 0xffffffff)) * sVar2;
    *param_7 = (short)((ulonglong)*param_5 + 2) -
               (short)(((ulonglong)*param_5 + 2) / (param_2 & 0xffffffff)) * sVar2;
    uVar1 = (*param_5 + param_2) - 1;
    *param_4 = (short)uVar1 - (short)((uVar1 & 0xffffffff) / (param_2 & 0xffffffff)) * sVar2;
  }
  return (double)((float)param_1 - (float)*param_5);
}

