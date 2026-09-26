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
extern int fn_82297DA0();
extern int fn_82663B70();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


void fn_82663848(int param_1,uint param_2)

{
  longlong lVar1;
  int iStack00000014;
  uint uStack0000001c;
  undefined2 auStack_20 [4];
  
  auStack_20[0] = 0;
  *(uint *)(param_1 + 0x10) = param_2;
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  lVar1 = fn_82663B70(param_1);
  fn_82297DA0(lVar1 + ((ulonglong)param_2 & 0x7fffffff) * 2,auStack_20);
  return;
}

