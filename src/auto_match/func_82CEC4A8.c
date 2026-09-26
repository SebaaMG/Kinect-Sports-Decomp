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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_821AAD20;


double fn_82CEC4A8(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  pfVar4 = (float *)(param_1 + 0x1c);
  lVar5 = 3;
  fVar1 = lbl_821AAD20;
  do {
    pfVar2 = pfVar4 + -7;
    pfVar3 = pfVar4 + -3;
    pfVar4 = pfVar4 + 1;
    fVar1 = *pfVar4 * *pfVar4 + *pfVar3 * *pfVar3 + *pfVar2 * *pfVar2 + fVar1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return (double)SQRT(fVar1);
}

