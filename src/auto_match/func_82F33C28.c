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


undefined8 fn_82F33C28(ulonglong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 & 0xffffffff) == 0) || (0xffff < (param_1 & 0xffffffff))) {
    uVar1 = 0xffffffff80070057;
  }
  else if (param_2 == 0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    lVar3 = (param_1 + 2 & 0x1fffffff) * 8 + 0x10;
    lVar2 = fn_82E50BE8(lVar3,0,0,0,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar2,0,lVar3);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

