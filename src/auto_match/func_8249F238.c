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


void fn_8249F238(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_r10;
  float *pfVar5;
  byte in_cr6;
  
  while (!(bool)(in_cr6 >> 1 & 1)) {
    fVar2 = *in_r10;
    fVar3 = in_r10[1];
    fVar4 = in_r10[2];
    pfVar5 = in_r10;
    if (*param_1 <= fVar2) {
      while (pfVar1 = pfVar5 + -3, fVar2 < *pfVar1) {
        *pfVar5 = *pfVar1;
        pfVar5[1] = pfVar5[-2];
        pfVar5[2] = pfVar5[-1];
        pfVar5 = pfVar1;
      }
      *pfVar5 = fVar2;
      pfVar5[1] = fVar3;
      pfVar5[2] = fVar4;
    }
    else {
      while (param_1 != pfVar5) {
        *pfVar5 = pfVar5[-3];
        pfVar5[1] = pfVar5[-2];
        pfVar5[2] = pfVar5[-1];
        pfVar5 = pfVar5 + -3;
      }
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    in_r10 = in_r10 + 3;
    in_cr6 = (in_r10 == param_2) << 1;
  }
  return;
}

