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
extern int fn_82A8C620();


void fn_82A8DB80(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (uint *)param_2;
  puVar1[1] = 0;
  fn_82A8C620(param_3,param_4,0x20,param_2);
  param_4 = param_4 + 0x20;
  lVar4 = (ulonglong)*puVar1 - 1;
  if (-1 < lVar4) {
    lVar3 = lVar4 * 0xc + param_2 + 8;
    do {
      fn_82A8C620(param_3,param_4,0x20,lVar3 + 4);
      fn_82A8C620(param_3,param_4 + 0x20,0x20,lVar3);
      lVar4 = lVar4 + -1;
      param_4 = param_4 + 0x40;
      lVar3 = lVar3 + -0xc;
    } while (-1 < lVar4);
  }
  uVar2 = (ulonglong)*puVar1;
  if (-1 < (longlong)(uVar2 - 1)) {
    lVar4 = (uVar2 - 1) * 0xc + param_2 + 0x14;
    do {
      lVar4 = lVar4 + -0xc;
      puVar1[1] = *(int *)lVar4 + puVar1[1];
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

