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


void fn_82A37F68(undefined4 *param_1,undefined4 param_2,longlong param_3,int param_4)

{
  int iVar1;
  
  param_1[0xd] = param_4;
  iVar1 = 0;
  param_1[2] = (int)param_3;
  param_1[3] = 0;
  param_1[1] = param_4 + 4U & 0xfffffff8;
  if ((int)param_3 != 0) {
    do {
      *(undefined4 *)(iVar1 + param_1[1]) = 0xffffffff;
      iVar1 = iVar1 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  RtlInitializeCriticalSection(param_1 + 5);
  *param_1 = param_2;
  param_1[0xc] = 1;
  return;
}

