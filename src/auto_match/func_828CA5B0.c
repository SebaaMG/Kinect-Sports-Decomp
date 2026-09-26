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
extern int fn_828C9918();
extern int fn_828C9FD8();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


void fn_828CA5B0(int param_1,undefined4 param_2)

{
  undefined4 uStack_20;
  int iStack_1c;
  
  uStack_20 = param_2;
  fn_828C9918(&iStack_1c,param_1 + 8,&uStack_20);
  if (iStack_1c != *(int *)(param_1 + 0xc)) {
    fn_828C9FD8(&iStack_1c,param_1 + 8);
  }
  return;
}

