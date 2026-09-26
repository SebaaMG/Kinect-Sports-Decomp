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
extern int fn_82EEB658();
extern int fn_82F691F0();


undefined8 fn_82E7AE00(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int aiStack_50 [20];
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    aiStack_50[0] = 0;
    fn_82EEB658(param_1 + 0x1e4,aiStack_50);
    if (aiStack_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(aiStack_50[0],0,0x148);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

