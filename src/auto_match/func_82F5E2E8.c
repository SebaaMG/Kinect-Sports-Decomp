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


void fn_82F5E2E8(undefined4 *param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == '\0') {
    uVar1 = param_1[3];
    param_1[3] = (int)((ulonglong)uVar1 - 1);
    if ((longlong)((ulonglong)uVar1 - 1) < 0) {
      uVar2 = 0;
      param_1[1] = 0;
      *param_1 = 0xe;
    }
    else {
      uVar2 = param_1[1];
    }
  }
  else {
    uVar2 = 1;
    *param_1 = param_3;
    param_1[1] = 1;
    param_1[3] = 2;
  }
  param_1[2] = uVar2;
  return;
}

