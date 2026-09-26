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
extern int fn_82F68CC0();


void fn_82631E78(uint *param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1[1] + param_3;
  if ((ulonglong)param_1[2] < (uVar1 & 0xffffffff)) {
    if (param_1[2] != 0) {
      param_1[4] = 0x80004005;
    }
  }
  else if (param_2 != 0) {
    fn_82F68CC0((ulonglong)param_1[1] + (ulonglong)*param_1);
  }
  param_1[1] = (uint)uVar1;
  if ((ulonglong)param_1[3] < (uVar1 & 0xffffffff)) {
    param_1[3] = (uint)uVar1;
  }
  return;
}

