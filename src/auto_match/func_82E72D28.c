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
extern unsigned int *auStack_40;
extern int fn_82F691F0();


undefined8 fn_82E72D28(int *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ulonglong auStack_40 [8];
  
  if (param_1[3] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (undefined4 *)0x0) ||
          (((param_3 & 0xffffffff) != 0 && ((param_2 & 0xffffffff) == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,auStack_40,0);
    if (auStack_40[0] < 0x100000000) {
      *param_4 = (int)auStack_40[0];
      if ((auStack_40[0] & 0xffffffff) <= (param_3 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2,0,param_3);
      }
      uVar1 = 0xffffffffc00d36b1;
    }
    else {
      uVar1 = 0xffffffffc00d3a9a;
    }
  }
  return uVar1;
}

