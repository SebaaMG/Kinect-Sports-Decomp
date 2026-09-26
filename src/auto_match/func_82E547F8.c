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
extern int fn_82E50BE8();
extern int fn_82F691F0();


undefined4 * fn_82E547F8(undefined4 *param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar3 = 0x80070057;
  }
  else {
    lVar1 = (param_2 & 0x7fffffff) << 1;
    if (0x7fffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    uVar2 = fn_82E50BE8(lVar1,0,0,0,0);
    *param_1 = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,(param_2 & 0x7fffffff) << 1);
    }
    uVar3 = 0x8007000e;
  }
  *param_3 = uVar3;
  return param_1;
}

