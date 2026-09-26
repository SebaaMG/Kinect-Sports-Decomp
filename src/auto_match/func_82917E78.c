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
extern int fn_82917A68();


undefined8 fn_82917E78(undefined8 param_1,ulonglong param_2,ulonglong param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (((param_3 & 0xffffffff) == 0) && (param_4 == (uint *)0x0)) {
    uVar1 = 0xffffffff8876086c;
  }
  else {
    uVar2 = 0;
    uVar4 = 1;
    param_2 = ~param_2;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = (ulonglong)*(uint *)((int)uVar3 + 0x24)) {
      uVar2 = uVar2 + 1;
    }
    if (param_4 != (uint *)0x0) {
      uVar4 = *param_4;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      *param_4 = uVar2;
    }
    if ((param_3 & 0xffffffff) != 0) {
      for (; ((param_2 & 0xffffffff) != 0 && (uVar4 != 0)); uVar4 = uVar4 - 1) {
        uVar1 = fn_82917A68(param_2,param_3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        param_2 = (ulonglong)*(uint *)((int)param_2 + 0x24);
        param_3 = param_3 + 0x30;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

