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
extern int fn_8276D410();
extern unsigned int stack0x0000001e;
extern unsigned int uStack0000001e;
extern unsigned int uStack_10;


ulonglong fn_8276DD18(longlong param_1,undefined2 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 uStack0000001e;
  ushort uStack_10;
  
  uStack0000001e = param_2;
  iVar1 = fn_8276D410(param_1 + 0x2c,&stack0x0000001e);
  if (iVar1 != 0) {
    uStack_10 = *(ushort *)(iVar1 + 2);
  }
  uVar2 = (ulonglong)uStack_10;
  if (iVar1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

