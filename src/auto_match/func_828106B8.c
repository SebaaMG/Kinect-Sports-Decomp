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
extern unsigned int lbl_821AAD20;


void fn_828106B8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = lbl_821AAD20;
  fVar1 = *param_1;
  if (fVar1 < lbl_821AAD20) {
    fVar1 = -fVar1;
  }
  fVar2 = param_1[1];
  fVar5 = fVar2;
  if (fVar2 < lbl_821AAD20) {
    fVar5 = -fVar2;
  }
  fVar3 = param_1[2];
  fVar6 = fVar3;
  if (fVar3 < lbl_821AAD20) {
    fVar6 = -fVar3;
  }
  if ((fVar5 < fVar1) || (fVar6 < fVar1)) {
    if ((fVar1 < fVar5) || (fVar6 < fVar5)) {
      *param_2 = fVar2;
      param_2[1] = -*param_1;
      param_2[2] = fVar4;
      goto LAB_82810764;
    }
    param_2[1] = lbl_821AAD20;
    *param_2 = -fVar3;
    fVar1 = *param_1;
  }
  else {
    *param_2 = lbl_821AAD20;
    param_2[1] = param_1[2];
    fVar1 = -param_1[1];
  }
  param_2[2] = fVar1;
LAB_82810764:
  if (param_3 != (float *)0x0) {
    fVar1 = param_2[2];
    fVar4 = *param_1;
    fVar2 = param_1[2];
    fVar5 = param_2[1];
    fVar3 = *param_2;
    fVar6 = param_1[1];
    param_3[1] = fVar3 * fVar2 - fVar1 * fVar4;
    *param_3 = fVar6 * fVar1 - fVar5 * fVar2;
    param_3[2] = fVar5 * fVar4 - fVar6 * fVar3;
    return;
  }
  return;
}

