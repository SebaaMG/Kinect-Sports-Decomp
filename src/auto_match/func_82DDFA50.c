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


void fn_82DDFA50(double param_1,double param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_4 * 8 + param_3);
  *param_7 = *pfVar1;
  *param_8 = pfVar1[1];
  *pfVar1 = (float)param_1;
  pfVar1[1] = (float)param_2;
  return;
}

