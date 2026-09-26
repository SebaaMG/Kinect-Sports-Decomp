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
extern int fn_82AD17B0();
extern int fn_82B47420();


void fn_82B47530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,ulonglong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = fn_82AD17B0();
  uVar2 = fn_82AD17B0(param_1,param_4);
  uVar4 = 0;
  if ((param_6 & 0xffffffff) != 0) {
    uVar4 = fn_82AD17B0(param_1,param_6);
  }
  uVar3 = 0;
  if ((param_8 & 0xffffffff) != 0) {
    uVar3 = fn_82AD17B0(param_1,param_8);
  }
  fn_82B47420(param_1,uVar1,param_3,uVar2,param_5,uVar4,param_7,uVar3);
  return;
}

