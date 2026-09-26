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
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8287A4E0();


ulonglong fn_8286D788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,longlong param_6,undefined8 param_7)

{
  ulonglong uVar1;
  uint auStack_40 [10];
  
  uVar1 = fn_8265C9E0(0x58);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_8287A4E0(param_1,param_2,param_5,uVar1,param_7);
  }
  auStack_40[0] = (uint)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8257A9F0(param_6 + 4,auStack_40);
    uVar1 = (ulonglong)auStack_40[0];
  }
  return uVar1;
}

