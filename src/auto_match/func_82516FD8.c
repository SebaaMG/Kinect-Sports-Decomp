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
extern int fn_82517340();
extern int fn_82517608();


void fn_82516FD8(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = param_1[1];
  if (((ulonglong)uVar1 <= (param_2 & 0xffffffff)) ||
     (bVar3 = true, (param_2 & 0xffffffff) < (ulonglong)*param_1)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *param_1;
    if (uVar1 == param_1[2]) {
      fn_82517340(param_1,1);
    }
    uVar1 = param_1[1];
    param_2 = ((ulonglong)(uint)((int)((int)param_2 - uVar2) >> 4) & 0xfffffff) * 0x10 +
              (ulonglong)*param_1;
  }
  else {
    if (uVar1 == param_1[2]) {
      fn_82517340(param_1,1);
    }
    uVar1 = param_1[1];
  }
  if (uVar1 != 0) {
    fn_82517608(uVar1,param_2,param_2 + 8);
  }
  param_1[1] = param_1[1] + 0x10;
  return;
}

