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
extern int fn_82F63CA0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002f;


longlong fn_8265D600(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  int iStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  undefined1 uStack0000002f;
  
  uVar1 = param_2 - param_1 >> 2;
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002f = param_4;
  fn_82F63CA0((ulonglong)param_3 + ((ulonglong)uVar1 & 0x3fffffff) * -4,param_1,uVar1 << 2);
  return (ulonglong)uStack00000024 + ((ulonglong)uVar1 & 0x3fffffff) * -4;
}

