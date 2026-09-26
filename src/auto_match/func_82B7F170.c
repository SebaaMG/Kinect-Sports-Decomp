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
extern int fn_82AB15D0();
extern int fn_82AB6BC8();


undefined8 fn_82B7F170(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0xcb);
  }
  if (param_1[0x12] == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbb88,0xffffffff820dbba0,0xcc);
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    uVar2 = *param_1;
    if (param_1[0xe] != 0) {
      (*(code *)param_1[2])(uVar2);
    }
    if (param_1[0xf] != 0) {
      (*(code *)param_1[2])(uVar2);
    }
    if (param_1[0xc] != 0) {
      fn_82AB6BC8();
    }
    if (param_1[0xd] != 0) {
      fn_82AB6BC8();
    }
    piVar4 = param_1 + 6;
    lVar3 = 6;
    do {
      if (*piVar4 != 0) {
        (*(code *)param_1[2])(uVar2);
      }
      lVar3 = lVar3 + -1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
    (*(code *)param_1[2])(uVar2,param_1);
  }
  return 0;
}

