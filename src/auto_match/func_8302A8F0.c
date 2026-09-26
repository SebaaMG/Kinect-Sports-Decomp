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


double fn_8302A8F0(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  ulonglong uVar4;
  int iStack_c;
  
  pfVar2 = *(float **)(param_2 + 4);
  if ((double)*(float *)(param_2 + 0xc) <= param_1) {
    return (double)pfVar2[*(int *)(param_2 + 0x14) + -1];
  }
  if (param_1 <= (double)*(float *)(param_2 + 0x10)) {
    return (double)*pfVar2;
  }
  fVar3 = (float)(param_1 - (double)*(float *)(param_2 + 0x10)) * *(float *)(param_2 + 0x18);
  uVar4 = (ulonglong)fVar3;
  iStack_c = (int)uVar4;
  fVar1 = pfVar2[iStack_c];
  return (double)((fVar3 - (float)(uVar4 & 0xffffffff)) * ((pfVar2 + iStack_c)[1] - fVar1) + fVar1);
}

