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


void fn_82861E40(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,int param_7)

{
  *(float *)(param_7 + 0xe4) = (float)param_1;
  *(float *)(param_7 + 0xe8) = (float)param_2;
  *(float *)(param_7 + 0xec) = (float)param_3;
  *(float *)(param_7 + 0xf0) = (float)param_4;
  *(float *)(param_7 + 0xf4) = (float)param_5;
  *(float *)(param_7 + 0xf8) = (float)param_6;
  return;
}

