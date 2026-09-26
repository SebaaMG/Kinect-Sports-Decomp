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


void fn_8280ADB0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
  fVar10 = param_1[0xe];
  fVar11 = param_1[0xd];
  fVar12 = lbl_82002AE0 /
           (param_1[0xb] * fVar2 + param_1[3] * fVar3 + param_1[7] * fVar1 + param_1[0xf]);
  *param_3 = (*param_1 * fVar3 + param_1[4] * fVar1 + param_1[8] * fVar2 + param_1[0xc]) * fVar12;
  param_3[1] = fVar12 * (fVar8 * fVar2 + fVar6 * fVar3 + fVar4 * fVar1 + fVar11);
  param_3[2] = fVar12 * (fVar9 * fVar2 + fVar7 * fVar3 + fVar5 * fVar1 + fVar10);
  return;
}

