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


void fn_82837060(uint *param_1,uint *param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = param_3 - 7;
  uVar5 = param_4 - 7;
  uVar1 = ((int)((uVar2 & 0xffffffff) >> 0x1f) + -1 + (uint)(uVar2 == 0) & (uint)uVar2) + 7 &
          0xfffffff8;
  uVar3 = (int)param_3 + param_5;
  *param_2 = uVar1;
  param_2[1] = ((int)((uVar5 & 0xffffffff) >> 0x1f) + -1 + (uint)(uVar5 == 0) & (uint)uVar5) + 7 &
               0xfffffff8;
  if ((int)param_7 <= (int)uVar3) {
    uVar3 = param_7;
  }
  uVar4 = (int)param_4 + param_6;
  uVar3 = uVar3 + 7 & 0xfffffff8;
  param_2[2] = uVar3;
  if ((int)param_8 <= (int)uVar4) {
    uVar4 = param_8;
  }
  uVar4 = uVar4 + 7 & 0xfffffff8;
  param_2[3] = uVar4;
  if (((int)param_7 < (int)uVar3) || ((int)param_8 < (int)uVar4)) {
    param_2[2] = param_7;
    param_2[3] = param_8;
  }
  *param_1 = uVar1;
  param_1[1] = param_2[1];
  return;
}

