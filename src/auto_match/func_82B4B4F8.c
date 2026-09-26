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
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82B47B90();


undefined8 fn_82B4B4F8(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 >> 2 & 1) == 0) {
    uVar1 = fn_82ACA920(param_1,param_2,param_2[3]);
  }
  else {
    uVar1 = fn_82B47B90(param_1,param_2,param_2);
    uVar1 = fn_82AD17B0(param_1,uVar1);
  }
  fn_82AD1270(uVar1,2);
  return uVar1;
}

