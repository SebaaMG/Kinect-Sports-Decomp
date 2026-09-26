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


undefined8 fn_827EAC50(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_1;
  fVar2 = *param_2;
  fVar3 = *param_3;
  if (lbl_821AAD20 <= fVar1) {
    fVar8 = fVar2 - fVar3;
    fVar3 = fVar3 + fVar2;
  }
  else {
    fVar8 = fVar3 + fVar2;
    fVar3 = fVar2 - fVar3;
  }
  fVar2 = param_1[1];
  fVar4 = param_2[1];
  fVar5 = param_3[1];
  if (lbl_821AAD20 <= fVar2) {
    fVar10 = fVar4 - fVar5;
    fVar5 = fVar5 + fVar4;
  }
  else {
    fVar10 = fVar5 + fVar4;
    fVar5 = fVar4 - fVar5;
  }
  fVar4 = param_1[2];
  fVar6 = param_2[2];
  fVar7 = param_3[2];
  if (lbl_821AAD20 <= fVar4) {
    fVar9 = fVar6 - fVar7;
    fVar7 = fVar7 + fVar6;
  }
  else {
    fVar9 = fVar7 + fVar6;
    fVar7 = fVar6 - fVar7;
  }
  if (lbl_821AAD20 < (fVar1 * fVar8 + fVar4 * fVar9 + fVar2 * fVar10) - param_1[3]) {
    return 3;
  }
  if (lbl_821AAD20 < (fVar1 * fVar3 + fVar4 * fVar7 + fVar2 * fVar5) - param_1[3]) {
    return 1;
  }
  return 0;
}

