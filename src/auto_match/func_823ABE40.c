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
extern unsigned int lbl_82195518;


void fn_823ABE40(double param_1,int param_2)

{
  double dVar1;
  
  if (*(int *)(param_2 + 0x68) == 0) {
    return;
  }
  dVar1 = (double)(float)((double)*(float *)(param_2 + 0x8c) - param_1);
  *(float *)(param_2 + 0x94) = (float)(param_1 + (double)*(float *)(param_2 + 0x94));
  if (dVar1 < 0.0) {
    dVar1 = lbl_82195518;
  }
  *(float *)(param_2 + 0x8c) = (float)dVar1;
  return;
}

