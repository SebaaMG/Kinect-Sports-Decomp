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
extern unsigned int lbl_82021540;
extern unsigned int lbl_821AAD20;


undefined8
fn_8285D628(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  fVar1 = *param_4;
  fVar2 = *param_1;
  fVar3 = *param_2;
  fVar4 = *param_3;
  fVar5 = param_2[1];
  fVar6 = param_3[1];
  fVar7 = param_4[1];
  fVar8 = param_1[1];
  fVar12 = lbl_82002AE0;
  if (fVar1 - fVar2 < 0.0) {
    fVar12 = lbl_821AAD20;
  }
  fVar11 = lbl_82002AE0;
  if (fVar3 - fVar4 < 0.0) {
    fVar11 = lbl_821AAD20;
  }
  fVar10 = lbl_82002AE0;
  if (fVar5 - fVar6 < 0.0) {
    fVar10 = lbl_821AAD20;
  }
  fVar9 = lbl_82002AE0;
  if (fVar7 - fVar8 < 0.0) {
    fVar9 = lbl_821AAD20;
  }
  if (fVar11 + fVar12 + fVar10 + fVar9 == lbl_82021540) {
    uVar13 = 1;
    if (fVar8 - fVar6 < 0.0) {
      fVar8 = fVar6;
    }
    param_5[1] = fVar8;
    if (fVar7 - fVar5 < 0.0) {
      fVar5 = fVar7;
    }
    param_6[1] = fVar5;
    if (fVar2 - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    *param_5 = fVar2;
    if (fVar1 - fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    *param_6 = fVar3;
  }
  else {
    uVar13 = 0;
  }
  return uVar13;
}

