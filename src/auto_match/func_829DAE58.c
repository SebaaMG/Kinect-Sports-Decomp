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
extern int fn_82F67FE8();
extern int fn_82F68958();


ulonglong fn_829DAE58(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = fn_82F68958(param_2,0xffffffff82196fac);
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82F67FE8(uVar1,0xffffffff821c5504,param_1);
    uVar1 = (ulonglong)(iVar2 == 1);
  }
  return uVar1;
}

