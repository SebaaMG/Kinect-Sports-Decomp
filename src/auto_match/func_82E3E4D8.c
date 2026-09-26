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
extern int fn_82E3C860();
extern int fn_82E50BE8();
extern int fn_82F691F0();


undefined8 fn_82E3E4D8(int *param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else if ((param_1[1] & 1U) == 0) {
    if (*param_1 == 0) {
      lVar2 = (param_2 & 0x3fffffff) << 2;
      if (0x3fffffff < (param_2 & 0xffffffff)) {
        lVar2 = -1;
      }
      uVar3 = fn_82E50BE8(lVar2,0,0,0,0);
      *param_1 = (int)uVar3;
      if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar3,0,(param_2 & 0x3fffffff) << 2);
      }
      uVar1 = 0xffffffff8007000e;
    }
    else {
      uVar1 = 0xffffffff8000ffff;
    }
  }
  else {
    fn_82E3C860(param_1 + 4,8);
    param_1[3] = param_3;
    uVar1 = 0;
    param_1[2] = 0;
  }
  return uVar1;
}

