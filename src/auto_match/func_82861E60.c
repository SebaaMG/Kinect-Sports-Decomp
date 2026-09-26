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
extern int fn_82809E58();


void fn_82861E60(double param_1,double param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  
  dVar1 = (double)fn_82809E58((double)(float)((double)(longlong)param_4 /
                                              (double)(longlong)*(int *)(param_3 + 8)));
  *(float *)(param_3 + 0xec) = (float)dVar1;
  dVar1 = (double)fn_82809E58((double)(float)((double)(longlong)*(int *)(param_3 + 0x10) * dVar1));
  *(float *)(param_3 + 0xe4) = (float)dVar1;
  dVar1 = (double)fn_82809E58((double)(float)((double)(longlong)param_5 /
                                              (double)(longlong)*(int *)(param_3 + 0xc)));
  *(float *)(param_3 + 0xf0) = (float)dVar1;
  dVar1 = (double)fn_82809E58((double)(float)((double)(longlong)*(int *)(param_3 + 0x14) * dVar1));
  *(float *)(param_3 + 0xe8) = (float)dVar1;
  *(float *)(param_3 + 0xf4) = (float)param_1;
  *(float *)(param_3 + 0xf8) = (float)param_2;
  return;
}

