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
extern unsigned int *auStack_10;
extern unsigned int *auStack_c;
extern int fn_82F85C08();
extern unsigned int uStack_e;


ulonglong fn_82297198(longlong param_1,undefined1 param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 auStack_10 [2];
  ushort uStack_e;
  undefined4 auStack_c [3];
  
  auStack_c[0] = 0;
  auStack_10[0] = param_2;
  iVar2 = fn_82F85C08(&uStack_e,auStack_10,1,auStack_c,param_1 + 0x18);
  uVar1 = 0xffffffffffffffff;
  if (-1 < iVar2) {
    uVar1 = (ulonglong)uStack_e;
  }
  return uVar1;
}

