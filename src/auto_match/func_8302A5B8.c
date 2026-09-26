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
extern unsigned int iStack_c;


double fn_8302A5B8(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  ulonglong uVar4;
  int iStack_c;
  
  fVar2 = (float)(param_1 - (double)*(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x18);
  uVar4 = (ulonglong)fVar2;
  iStack_c = (int)uVar4;
  pfVar3 = (float *)(iStack_c * 4 + *(int *)(param_2 + 4));
  fVar1 = *pfVar3;
  return (double)((fVar2 - (float)(uVar4 & 0xffffffff)) * (pfVar3[1] - fVar1) + fVar1);
}

