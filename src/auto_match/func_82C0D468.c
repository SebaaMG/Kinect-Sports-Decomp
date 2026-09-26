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
extern unsigned int *auStack_20;
extern int fn_82A1E108();
extern int fn_82A1E2C0();


void fn_82C0D468(int *param_1,undefined8 param_2)

{
  uint uVar1;
  uint auStack_20 [2];
  
  uVar1 = (**(code **)(*param_1 + 0xfc))();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*(int *)param_1[0xb] + 0x4c))((int *)param_1[0xb],param_2,auStack_20);
    if (5 < (int)auStack_20[0]) {
      fn_82A1E108((ulonglong)auStack_20[0] - 5);
    }
  }
  (**(code **)(*(int *)param_1[0xb] + 0x58))();
  if (param_1[0x3c] != 0) {
    fn_82A1E2C0(param_1[0x44]);
    param_1[0x3c] = 0;
  }
  return;
}

