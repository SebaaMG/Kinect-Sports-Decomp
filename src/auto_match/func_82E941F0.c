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
extern unsigned int lbl_82005710;


void fn_82E941F0(int param_1,int param_2,int param_3)

{
  double dVar1;
  
  dVar1 = ((double)(longlong)(param_2 - param_3) / (double)(longlong)*(int *)(param_1 + 0x560)) /
          (*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838));
  if (dVar1 <= lbl_82005710) {
    return;
  }
  *(double *)(param_1 + 0x7850) = dVar1;
  *(undefined4 *)(param_1 + 0x781c) = 1;
  *(undefined4 *)(param_1 + 0x77a8) = 1;
  return;
}

