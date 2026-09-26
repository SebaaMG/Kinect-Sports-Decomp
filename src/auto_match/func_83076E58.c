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
extern unsigned int *auStack_50;
extern int fn_83075D30();
extern int fn_83075D40();
extern int fn_83075D80();
extern int fn_83075D90();


void fn_83076E58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_83075D30(auStack_40,param_1,param_2);
  fn_83075D30(auStack_50,param_1,param_3);
  uVar1 = fn_83075D40(param_1,param_2);
  uVar2 = fn_83075D40(param_1,param_3);
  fn_83075D80(param_1,param_2);
  fn_83075D80(param_1,param_3);
  fn_83075D90(uVar2,param_1,param_2);
  fn_83075D90(uVar1,param_1,param_3);
  return;
}

