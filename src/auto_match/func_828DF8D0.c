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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_828DF6E0();
extern int fn_828E0268();


undefined4 fn_828DF8D0(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  fn_828E0268(auStack_20);
  piVar1 = (int *)fn_828DF6E0(auStack_1c,param_1,auStack_20);
  return *(undefined4 *)(*piVar1 + 0x10);
}

