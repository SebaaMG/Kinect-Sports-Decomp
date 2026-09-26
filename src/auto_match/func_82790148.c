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
extern int fn_82F68CC0();


void fn_82790148(undefined4 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((ulonglong)(uint)param_1[8] < (param_3 + (uint)param_1[9] & 0xffffffff)) {
    uVar3 = (uint)param_1[8] + param_3;
    param_1[8] = (int)uVar3;
    lVar2 = (uVar3 & 0x7fffffff) << 1;
    if (param_1[7] == 0) {
      uVar1 = fn_8267B890(*param_1,lVar2,0);
    }
    else {
      uVar1 = fn_8267BDA8(param_1[7],lVar2);
    }
    param_1[7] = uVar1;
  }
  fn_82F68CC0((ulonglong)(uint)param_1[7] + ((ulonglong)(uint)param_1[9] & 0x7fffffff) * 2,param_2,
               (param_3 & 0x7fffffff) << 1);
  param_1[9] = (int)param_3 + param_1[9];
  return;
}

