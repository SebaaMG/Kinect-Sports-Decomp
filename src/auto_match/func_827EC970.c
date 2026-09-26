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


undefined8
fn_827EC970(double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_4;
  fVar2 = *param_2;
  if ((fVar2 < fVar1) || (fVar5 = lbl_821AAD20, fVar1 = *param_5, *param_5 < fVar2)) {
    fVar5 = (fVar2 - fVar1) * (fVar2 - fVar1);
  }
  fVar1 = param_4[1];
  fVar2 = param_2[1];
  if ((fVar2 < fVar1) || (fVar4 = lbl_821AAD20, fVar1 = param_5[1], param_5[1] < fVar2)) {
    fVar4 = (fVar2 - fVar1) * (fVar2 - fVar1);
  }
  fVar1 = param_4[2];
  fVar2 = param_2[2];
  if ((fVar2 < fVar1) || (fVar3 = lbl_821AAD20, fVar1 = param_5[2], param_5[2] < fVar2)) {
    fVar3 = (fVar2 - fVar1) * (fVar2 - fVar1);
  }
  if ((float)(param_1 * param_1) < fVar3 + fVar4 + fVar5) {
    return 0;
  }
  return 1;
}

