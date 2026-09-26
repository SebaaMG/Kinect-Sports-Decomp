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
extern int fn_82A8C770();


void fn_82A8F228(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = (uint *)param_2;
  puVar1[1] = 0;
  fn_82A8C620(param_3,param_4,0x20,param_2);
  param_4 = param_4 + 0x20;
  lVar4 = (ulonglong)*puVar1 - 1;
  if (-1 < lVar4) {
    lVar5 = lVar4 * 0x9c + param_2 + 0x70;
    do {
      fn_82A8C770(param_1,lVar5 + -0x68,param_3,param_4);
      fn_82A8C770(param_1 + 4,lVar5 + -0x34,param_3,param_4 + 0x92);
      fn_82A8C770(param_1 + 8,lVar5,param_3,param_4 + 0x124);
      lVar4 = lVar4 + -1;
      param_4 = param_4 + 0x1b6;
      lVar5 = lVar5 + -0x9c;
    } while (-1 < lVar4);
  }
  uVar3 = (ulonglong)*puVar1;
  if (-1 < (longlong)(uVar3 - 1)) {
    lVar4 = (uVar3 - 1) * 0x9c + param_2 + 0xcc;
    do {
      iVar2 = (int)lVar4;
      lVar4 = lVar4 + -0x9c;
      puVar1[1] = *(int *)(iVar2 + -100) + *(int *)(iVar2 + -0x60) + *(int *)(iVar2 + -0x68) +
                  *(int *)(iVar2 + -0x34) + *(int *)(iVar2 + -0x94) + *(int *)(iVar2 + -0x30) +
                  *(int *)(iVar2 + -0x98) + *(int *)(iVar2 + -0x2c) + *(int *)lVar4 + puVar1[1];
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

