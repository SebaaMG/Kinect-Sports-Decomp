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
extern int fn_826A18A8();
extern int fn_826C0330();
extern int fn_826C1620();


void fn_82740F38(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  
  uVar1 = fn_826A18A8((ulonglong)*param_2 + 0x13c,param_3,-(6 < *(byte *)(param_2 + 1)) & 1);
  if (((uVar1 & 0xff) == 0) &&
     (cVar2 = fn_826A18A8((ulonglong)*param_2 + 0x138,param_3,
                                -(6 < *(byte *)(param_2 + 1)) & 1), cVar2 == '\0')) {
    fn_826C0330(param_1,param_2,param_3,param_4);
  }
  else {
    fn_826C1620(param_1 + 0x34,param_1 + -0x10,param_2,param_3,param_4,uVar1);
  }
  return;
}

