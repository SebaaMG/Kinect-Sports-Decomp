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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82759140(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar5 = fVar2 * fVar2;
  param_1[3] = fVar5;
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_82002AE0;
  fVar4 = fVar5 - (fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar4 == lbl_821AAD20) {
    if (fVar3 != lbl_821AAD20) {
      if (lbl_821AAD20 <= fVar3) {
        fVar3 = fVar3 - lbl_82002AE0;
      }
      else {
        fVar3 = fVar3 + lbl_82002AE0;
      }
      param_1[1] = fVar3;
    }
    if (fVar1 != fVar7) {
      if (fVar7 <= fVar1) {
        fVar1 = fVar1 - fVar6;
      }
      else {
        fVar1 = fVar1 + fVar6;
      }
      param_1[2] = fVar1;
    }
    fVar4 = fVar5 - (param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  }
  param_1[4] = fVar2 / fVar4;
  return;
}

