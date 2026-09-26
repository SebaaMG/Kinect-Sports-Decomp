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
extern int fn_8280A580();


void fn_8226B170(double param_1,int param_2)

{
  float fVar1;
  double dVar2;
  
  *(float *)(param_2 + 0x1c) =
       (float)((double)*(float *)(param_2 + 0x48) * param_1 + (double)*(float *)(param_2 + 0x1c));
  dVar2 = (double)fn_8280A580();
  fVar1 = (float)((double)*(float *)(param_2 + 0x60) * param_1 + (double)*(float *)(param_2 + 0x20))
  ;
  *(float *)(param_2 + 0x1c) = (float)dVar2;
  *(float *)(param_2 + 0x20) = fVar1;
  dVar2 = (double)fn_8280A580((double)fVar1);
  fVar1 = (float)((double)*(float *)(param_2 + 0x78) * param_1 + (double)*(float *)(param_2 + 0x24))
  ;
  *(float *)(param_2 + 0x20) = (float)dVar2;
  *(float *)(param_2 + 0x24) = fVar1;
  dVar2 = (double)fn_8280A580((double)fVar1);
  *(float *)(param_2 + 0x24) = (float)dVar2;
  return;
}

