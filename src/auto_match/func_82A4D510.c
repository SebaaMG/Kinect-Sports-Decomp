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
extern int fn_82A3FF60();
extern int fn_82A4D3F0();
extern int fn_82F691F0();


undefined8 fn_82A4D510(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    if (((param_2 & 0xffffffff) == 0) || (0x40 < (param_2 & 0xffffffff))) {
      uVar1 = 0xffffffff88970001;
    }
    else {
      lVar3 = (param_2 & 0x3fffffff) << 2;
      if (0x3fffffff < (param_2 & 0xffffffff)) {
        lVar3 = -1;
      }
      uVar2 = fn_82A3FF60(0xffffffff83219d50,lVar3,0x2097000a,0);
      *(int *)(param_1 + 0x2c) = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2,0,(param_2 & 0x3fffffff) << 2);
      }
      uVar1 = 0xffffffff8007000e;
      fn_82A4D3F0(param_1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

