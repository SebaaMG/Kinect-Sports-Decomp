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
extern int fn_82936290();


undefined8
fn_82EF41B8(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4,char *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  char acStack_20 [16];
  
  uVar2 = 0;
  acStack_20[0] = '\0';
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_4 != (undefined4 *)0x0) {
    if ((param_3 & 0xffffffff) == 0) {
      if ((param_2 & 0xffffffff) != 0) {
        return 0xffffffff80070057;
      }
    }
    else if ((param_2 & 0xffffffff) == 0) {
      return 0xffffffff80070057;
    }
    if (param_5 == (char *)0x0) {
      param_5 = acStack_20;
    }
    uVar3 = 0x7fffffff;
    uVar1 = 0;
    pcVar4 = param_5;
    do {
      if (*pcVar4 == '\0') break;
      uVar3 = uVar3 - 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 != 0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar2 = 0x7fffffff - uVar3;
    }
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar3 = uVar2 + 1;
    *param_4 = (int)uVar3;
    if ((param_2 & 0xffffffff) <= (uVar2 & 0xffffffff)) {
      return 0xffffffffc00d36b1;
    }
    if ((uVar3 & 0xffffffff) < 0x80000000) {
      uVar1 = fn_82936290(param_3,uVar3,param_5);
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

