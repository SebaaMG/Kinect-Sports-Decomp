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
extern int fn_822438B0();
extern int fn_82243CC8();
extern int fn_823AA2A8();
extern int fn_82610EF0();


void fn_82243DA8(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  
  fn_82243CC8(param_1,param_4 != '\0',0);
  fn_822438B0(param_1,1,param_2,8);
  fn_822438B0(param_1,2,param_2 + 0x2c,0x10);
  fn_822438B0(param_1,3,param_2 + 8,0x24);
  if (param_4 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_823AA2A8(param_3);
  }
  fn_82243CC8(param_1,uVar1,4);
  if (param_4 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82610EF0(param_3);
  }
  fn_82243CC8(param_1,uVar1,5);
  return;
}

