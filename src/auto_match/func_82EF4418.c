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


undefined8 fn_82EF4418(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char acStack_20 [16];
  
  pcVar2 = *(char **)(param_1 + 0x48);
  uVar3 = 0;
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
    if (pcVar2 == (char *)0x0) {
      pcVar2 = acStack_20;
    }
    uVar4 = 0x7fffffff;
    uVar1 = 0;
    pcVar5 = pcVar2;
    do {
      if (*pcVar5 == '\0') break;
      uVar4 = uVar4 - 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar4 != 0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar3 = 0x7fffffff - uVar4;
    }
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar4 = uVar3 + 1;
    *param_4 = (int)uVar4;
    if ((param_2 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      return 0xffffffffc00d36b1;
    }
    if ((uVar4 & 0xffffffff) < 0x80000000) {
      uVar1 = fn_82936290(param_3,uVar4,pcVar2);
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

