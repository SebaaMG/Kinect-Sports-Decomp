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
extern int fn_828D4D68();
extern int fn_828D7C30();
extern int fn_828D87E0();
extern int fn_828E2448();
extern int fn_828E2620();


void fn_828D8900(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [40];
  
  uVar1 = fn_828D4D68();
  fn_828E2620(auStack_40,uVar1,param_2);
  fn_828D87E0(param_1 + 0xc,auStack_40);
  fn_828D7C30(param_1);
  fn_828E2448(auStack_40);
  return;
}

