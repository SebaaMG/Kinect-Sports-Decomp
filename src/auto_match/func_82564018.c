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
extern unsigned int lbl_8218EC10;


void fn_82564018(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = lbl_8218EC10;
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((((fVar1 <= *param_2) || (fVar2 <= fVar1)) && ((*param_2 <= fVar1 || (fVar1 <= fVar2)))) &&
     (lbl_8218EC10 <= ABS(fVar2 - fVar1))) {
    fVar1 = fVar2;
  }
  *param_3 = fVar1;
  fVar1 = param_1[1];
  fVar2 = param_3[1];
  if ((((fVar1 <= param_2[1]) || (fVar2 <= fVar1)) && ((param_2[1] <= fVar1 || (fVar1 <= fVar2))))
     && (fVar3 <= ABS(fVar2 - fVar1))) {
    fVar1 = fVar2;
  }
  param_3[1] = fVar1;
  fVar1 = param_3[2];
  fVar2 = param_1[2];
  if ((((fVar2 <= param_2[2]) || (fVar1 <= fVar2)) && ((param_2[2] <= fVar2 || (fVar2 <= fVar1))))
     && (fVar3 <= ABS(fVar1 - fVar2))) {
    fVar2 = fVar1;
  }
  param_3[2] = fVar2;
  return;
}

