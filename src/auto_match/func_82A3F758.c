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


undefined8 fn_82A3F758(short *param_1,ulonglong param_2,int param_3)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 & 0xffffffff) == 0) {
    return 0xffffffff80070057;
  }
  param_3 = param_3 - (int)param_1;
  do {
    sVar1 = *(short *)(param_3 + (int)param_1);
    if (sVar1 == 0) break;
    *param_1 = sVar1;
    param_2 = param_2 - 1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  if ((param_2 & 0xffffffff) == 0) {
    param_1 = param_1 + -1;
    uVar2 = 0xffffffff8007007a;
  }
  *param_1 = 0;
  return uVar2;
}

