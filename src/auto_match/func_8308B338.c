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
extern int fn_82F69148();


void fn_8308B338(uint *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (param_2 & 0x3fffffff) * 4 + (ulonglong)*param_1;
  uVar2 = ((param_3 & 0x3fffffff) * 4 + (ulonglong)*param_1) - 4;
  if ((uVar4 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    lVar3 = (((uVar2 - uVar4) - 1 & 0xffffffff) >> 2) + 1;
    fn_82F69148(uVar4,uVar4 + 4,lVar3 * 4 & 0xfffffffc);
    uVar4 = (lVar3 * 4 & 0xfffffffcU) + uVar4;
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 - 2;
  uVar2 = ((ulonglong)(uVar1 - 2) & 0x3fffffff) * 4 + (ulonglong)*param_1;
  if ((uVar4 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    fn_82F69148(uVar4,uVar4 + 8,((((uVar2 - uVar4) - 1 & 0xffffffff) >> 2) + 1) * 4 & 0xfffffffc);
  }
  return;
}

