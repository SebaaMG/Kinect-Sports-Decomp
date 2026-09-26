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
extern int fn_82F68240();
extern int fn_82F691F0();
extern int fn_82F70530();
extern int fn_82F70620();


longlong fn_82F861E0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar2;
  longlong lVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (((param_2 & 0xffffffff) == 0) ||
     (trapWord(6,param_2,0), (param_3 & 0xffffffff) <= 0xfffff000 / (param_2 & 0xffffffff))) {
    uVar4 = (longlong)(int)param_2 * (longlong)(int)param_3;
    if ((param_1 & 0xffffffff) != 0) {
      uVar3 = fn_82F70620(param_1);
    }
    lVar1 = fn_82F70530(param_1,uVar4);
    if ((lVar1 != 0) && ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3 + lVar1,0,uVar4 - uVar3);
    }
  }
  else {
    puVar2 = (undefined4 *)fn_82F68240();
    lVar1 = 0;
    *puVar2 = 0xc;
  }
  return lVar1;
}

