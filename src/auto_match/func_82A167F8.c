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
extern int fn_82A11358();
extern int fn_82A12618();
extern int fn_82A13DD0();
extern int fn_82F6F870();
extern unsigned int lbl_831BB8F0;


void fn_82A167F8(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,undefined8 param_8)

{
  undefined4 uVar1;
  
  uVar1 = lbl_831BB8F0;
  if ((param_7 & 0xffffffff) == 0) {
    param_7 = param_1 + 0x68;
  }
  param_3 = param_3 + param_4;
  fn_82A11358(param_1,param_3,param_5,param_6);
  fn_82A12618(param_1,param_3,param_5,param_6,param_7,0);
  fn_82A13DD0(param_1,0,param_3,param_5,param_6,param_7,param_8);
  fn_82F6F870(uVar1);
  return;
}

