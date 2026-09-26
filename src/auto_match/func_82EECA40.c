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
extern int fn_82EEDD60();


undefined8 fn_82EECA40(int param_1,short param_2,undefined8 param_3,short *param_4)

{
  undefined8 uVar1;
  int aiStack_20 [4];
  
  param_1 = param_1 - *(int *)(param_1 + -4);
  uVar1 = 0;
  aiStack_20[0] = 0;
  if (param_4 == (short *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else if (param_2 == -1) {
    uVar1 = fn_82EEDD60(param_1 + *(int *)(*(int *)(param_1 + -0x44) + 8) + -0x44,0xffff,
                              param_3,aiStack_20,0,0,1);
    if (-1 < (int)uVar1) {
      *param_4 = *(short *)(aiStack_20[0] + 0x14);
    }
  }
  else {
    *param_4 = param_2;
  }
  return uVar1;
}

