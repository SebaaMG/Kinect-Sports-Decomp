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
extern unsigned int lbl_8315D2C4;


void fn_82A1E9A0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  RtlEnterCriticalSection(0xffffffff8315d2a8);
  ppuVar2 = (undefined **)lbl_8315D2C4;
  while (ppuVar2 != &lbl_8315D2C4) {
    ppuVar1 = (undefined **)*ppuVar2;
    (*(code *)ppuVar2[2])(param_1);
    ppuVar2 = ppuVar1;
  }
  RtlLeaveCriticalSection(0xffffffff8315d2a8);
  return;
}

