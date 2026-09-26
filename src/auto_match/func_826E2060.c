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
extern unsigned int *auStack_20;
extern int fn_826AA460();
extern int fn_826E1778();
extern int fn_826FB010();


void fn_826E2060(int param_1)

{
  undefined8 uVar1;
  undefined4 auStack_20 [2];
  
  uVar1 = fn_826E1778();
  fn_826FB010(uVar1,param_1);
  auStack_20[0] = (undefined4)uVar1;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,auStack_20);
  return;
}

