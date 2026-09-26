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
extern int fn_8279A7A8();
extern int fn_8279BAE0();
extern int fn_82F63CA0();


void fn_8279C440(uint *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  fn_8279BAE0(param_1,(ulonglong)param_1[1] + 1);
  if ((param_2 & 0xffffffff) < ((ulonglong)param_1[1] - 1 & 0xffffffff)) {
    lVar1 = param_2 * 0x30 + (ulonglong)*param_1;
    fn_82F63CA0(lVar1 + 0x30,lVar1,((param_1[1] - param_2) + -1) * 0x30);
  }
  lVar1 = param_2 * 0x30 + (ulonglong)*param_1;
  if (lVar1 != 0) {
    fn_8279A7A8(lVar1,param_3);
  }
  return;
}

