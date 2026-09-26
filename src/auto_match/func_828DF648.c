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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_828E0268();
extern int fn_828E02A0();
extern int fn_828EA790();


longlong fn_828DF648(int param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_30 [4];
  uint auStack_2c [11];
  
  lVar3 = 0;
  auStack_2c[0] = **(uint **)(param_1 + 4);
  uVar2 = (ulonglong)auStack_2c[0];
  fn_828E0268(auStack_30);
  cVar1 = fn_828E02A0(uVar2 + 0xc,auStack_30);
  while (cVar1 != '\0') {
    fn_828EA790(auStack_2c);
    lVar3 = lVar3 + 1;
    fn_828E0268(auStack_30,param_2);
    cVar1 = fn_828E02A0((ulonglong)auStack_2c[0] + 0xc,auStack_30);
  }
  return lVar3;
}

