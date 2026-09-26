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


undefined8 fn_82CE35B0(uint *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((ulonglong)param_1[2] - (ulonglong)param_1[3] & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar1 = 0xffffffff8007007a;
  }
  else {
    fn_82F68CC0((ulonglong)param_1[3] + (ulonglong)*param_1,param_2,param_3);
    uVar1 = 0;
    param_1[3] = (int)param_3 + param_1[3];
  }
  return uVar1;
}

