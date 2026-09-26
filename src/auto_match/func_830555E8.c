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
extern int fn_83052680();
extern int fn_83054FF0();
extern unsigned int uStack_20;


void fn_830555E8(undefined8 param_1)

{
  ulonglong uVar1;
  undefined4 uStack_20;
  float afStack_1c [3];
  
  uVar1 = fn_83052680(param_1,&uStack_20,afStack_1c);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_83054FF0((double)afStack_1c[0],param_1,uVar1,uStack_20);
  }
  return;
}

