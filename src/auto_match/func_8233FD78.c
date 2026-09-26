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


void fn_8233FD78(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar4 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (pfVar5 = pfVar4 + 2, pfVar5 != param_2) {
    fVar1 = *pfVar5;
    fVar3 = pfVar4[3];
    pfVar6 = pfVar4 + 3;
    pfVar4 = pfVar5;
    if (fVar1 <= *param_1) {
      while( true ) {
        fVar2 = pfVar5[-2];
        if (fVar1 <= fVar2) break;
        *pfVar5 = fVar2;
        pfVar5[1] = pfVar5[-1];
        pfVar5 = pfVar5 + -2;
      }
      *pfVar5 = fVar1;
      pfVar5[1] = fVar3;
    }
    else {
      while (param_1 != pfVar5) {
        pfVar6[-1] = pfVar6[-3];
        *pfVar6 = pfVar6[-2];
        pfVar5 = pfVar6 + -3;
        pfVar6 = pfVar6 + -2;
      }
      *param_1 = fVar1;
      param_1[1] = fVar3;
    }
  }
  return;
}

