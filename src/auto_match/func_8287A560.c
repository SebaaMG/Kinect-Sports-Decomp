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
extern int fn_8287A6B8();


void fn_8287A560(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 != param_2) {
    dVar2 = (double)*(float *)(param_1 + 4);
    dVar1 = (double)*(float *)(param_1 + 0xc);
    fn_8287A6B8();
    *(float *)(param_1 + 0xc) = (float)dVar1;
    *(float *)(param_1 + 4) = (float)dVar2;
  }
  return;
}

