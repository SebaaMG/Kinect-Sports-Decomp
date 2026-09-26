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
extern unsigned int lbl_821CC160;


undefined8 fn_82533578(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = param_2[1];
  fVar4 = *param_3;
  fVar5 = *param_4;
  fVar6 = (fVar5 - fVar2) * (fVar3 - param_1[1]) - (fVar1 - fVar2) * (param_4[1] - param_1[1]);
  if (((param_3[1] - fVar3) * (fVar5 - fVar1) - (fVar4 - fVar1) * (param_4[1] - fVar3)) * fVar6 <
      lbl_821CC160) {
    return 0;
  }
  if (((param_1[1] - param_3[1]) * (fVar5 - fVar4) - (fVar2 - fVar4) * (param_4[1] - param_3[1])) *
      fVar6 < lbl_821CC160) {
    return 0;
  }
  return 1;
}

