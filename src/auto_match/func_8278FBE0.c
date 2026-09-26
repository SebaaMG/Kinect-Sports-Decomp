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
extern int fn_8267B890();
extern int fn_8267BDA8();
extern int fn_82F63CA0();


longlong fn_8278FBE0(uint *param_1,int param_2,ulonglong param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1[1];
  uVar2 = uVar3 + param_4;
  if ((ulonglong)param_1[2] < (uVar2 & 0xffffffff)) {
    if (*param_1 == 0) {
      uVar1 = fn_8267B890(*(undefined4 *)(param_2 + 0x1c),(uVar2 & 0x7fffffff) << 1,0);
    }
    else {
      uVar1 = fn_8267BDA8(*param_1,(uVar2 & 0x7fffffff) << 1);
    }
    uVar3 = (ulonglong)param_1[1];
    *param_1 = uVar1;
    param_1[2] = param_1[1] + (int)param_4;
  }
  if (uVar3 - param_3 != 0) {
    fn_82F63CA0((param_3 + param_4 & 0x7fffffff) * 2 + (ulonglong)*param_1,
                 (param_3 & 0x7fffffff) * 2 + (ulonglong)*param_1,
                 (uVar3 - param_3 & 0x7fffffff) << 1);
  }
  param_1[1] = (int)param_4 + param_1[1];
  return (param_3 & 0x7fffffff) * 2 + (ulonglong)*param_1;
}

