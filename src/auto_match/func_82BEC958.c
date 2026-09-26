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
extern int fn_82F64020();
extern int fn_82F6D460();
extern unsigned int lbl_8317546C;


undefined8 fn_82BEC958(ulonglong param_1,undefined8 param_2)

{
  uint uVar2;
  undefined8 uVar1;
  
  fn_82F64020(param_1,0x104,0xffffffff8204e24c,param_2,lbl_8317546C);
  if (((param_1 & 0xffffffff) == 0) || (uVar2 = fn_82F6D460(param_1,0x104), uVar2 < 0x104)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

