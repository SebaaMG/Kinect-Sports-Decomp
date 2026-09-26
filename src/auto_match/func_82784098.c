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


void fn_82784098(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (*(int *)(param_5 + 8) == 0) {
    return;
  }
  do {
    uVar1 = uVar3 >> 6;
    uVar2 = uVar3 & 0xff;
    uVar3 = uVar3 + 1;
    pfVar4 = (float *)(*(int *)((uVar1 & 0x3fffffc) + *(int *)(param_5 + 0x14)) + uVar2 * 8);
    *pfVar4 = (float)((double)*pfVar4 * param_1 + param_3);
    pfVar4[1] = (float)((double)pfVar4[1] * param_2 + param_4);
  } while (uVar3 < *(uint *)(param_5 + 8));
  return;
}

