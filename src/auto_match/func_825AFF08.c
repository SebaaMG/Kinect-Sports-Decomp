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
extern int fn_8254A870();
extern unsigned int lbl_82193A34;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825AFF08(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  
  pfVar7 = param_2 + 2;
  pfVar6 = param_2 + 1;
  fn_8254A870((double)*param_2,(double)*pfVar6,(double)*pfVar7);
  fVar2 = *pfVar6;
  fVar1 = (float)(param_1 * (double)*pfVar7);
  fVar3 = *param_2;
  *pfVar7 = fVar1;
  if (fVar2 == lbl_821CC160) {
    *pfVar7 = fVar1;
    *pfVar6 = fVar1;
    *param_2 = fVar1;
    return;
  }
  fVar3 = fVar3 * lbl_82193A34;
  uVar8 = (uint)fVar3;
  if (fVar3 < (float)(longlong)(int)uVar8) {
    uVar8 = uVar8 - 1;
  }
  fVar4 = (lbl_821CA460 - fVar2) * fVar1;
  fVar5 = -((fVar3 - (float)(longlong)(int)uVar8) * fVar2 - lbl_821CA460) * fVar1;
  fVar2 = -((lbl_821CA460 - (fVar3 - (float)(longlong)(int)uVar8)) * fVar2 - lbl_821CA460) * fVar1;
  if (uVar8 == 0) {
    *param_2 = fVar1;
    *pfVar6 = fVar2;
  }
  else {
    if (uVar8 != 1) {
      if (uVar8 < 3) {
        *param_2 = fVar4;
        *pfVar6 = fVar1;
        *pfVar7 = fVar2;
        return;
      }
      if (uVar8 == 3) {
        *param_2 = fVar4;
        *pfVar6 = fVar5;
      }
      else {
        if (4 < uVar8) {
          *param_2 = fVar1;
          *pfVar6 = fVar4;
          *pfVar7 = fVar5;
          return;
        }
        *param_2 = fVar2;
        *pfVar6 = fVar4;
      }
      *pfVar7 = fVar1;
      return;
    }
    *param_2 = fVar5;
    *pfVar6 = fVar1;
  }
  *pfVar7 = fVar4;
  return;
}

