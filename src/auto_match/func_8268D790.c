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
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1;
extern unsigned int uStack_9;


void fn_8268D790(undefined1 *param_1,float *param_2,byte *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  undefined1 uStack_9;
  undefined1 uStack_1;
  
  fVar1 = param_2[6] * (float)*param_3 + param_2[7];
  if (lbl_82005CCC <= fVar1) {
    fVar1 = lbl_82005CCC;
  }
  if (fVar1 < 0.0) {
    fVar1 = lbl_821AAD20;
  }
  fVar4 = (float)param_3[3] * param_2[4] + param_2[5];
  if (lbl_82005CCC <= fVar4) {
    fVar4 = lbl_82005CCC;
  }
  if (fVar4 < 0.0) {
    fVar4 = lbl_821AAD20;
  }
  fVar3 = (float)param_3[2] * param_2[2] + param_2[3];
  if (lbl_82005CCC <= fVar3) {
    fVar3 = lbl_82005CCC;
  }
  if (fVar3 < 0.0) {
    fVar3 = lbl_821AAD20;
  }
  fVar5 = (float)param_3[1] * *param_2 + param_2[1];
  fVar2 = lbl_82005CCC;
  if (fVar5 < lbl_82005CCC) {
    fVar2 = fVar5;
  }
  uStack_1 = (undefined1)(longlong)fVar1;
  uVar6 = uStack_1;
  uStack_1 = (undefined1)(longlong)fVar3;
  if (fVar2 < 0.0) {
    fVar2 = lbl_821AAD20;
  }
  *param_1 = uVar6;
  uStack_9 = (undefined1)(longlong)fVar4;
  param_1[2] = uStack_1;
  uStack_1 = (undefined1)(longlong)fVar2;
  param_1[1] = uStack_1;
  param_1[3] = uStack_9;
  return;
}

