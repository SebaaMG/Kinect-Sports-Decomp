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


void fn_82859868(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[1];
  fVar2 = param_1[1];
  fVar3 = *param_2;
  fVar4 = *param_4;
  fVar5 = param_2[1];
  fVar6 = param_4[1];
  fVar7 = *param_1;
  if (*param_3 - *param_1 < 0.0) {
    fVar7 = *param_3;
  }
  *param_5 = fVar7;
  if (fVar1 - fVar2 < 0.0) {
    fVar2 = fVar1;
  }
  param_5[1] = fVar2;
  if (fVar3 - fVar4 < 0.0) {
    fVar3 = fVar4;
  }
  *param_6 = fVar3;
  if (fVar5 - fVar6 < 0.0) {
    fVar5 = fVar6;
  }
  param_6[1] = fVar5;
  return;
}

