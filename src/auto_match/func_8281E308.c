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
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8281E308(float *param_1,float *param_2)

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
  
  fVar6 = lbl_821AAD20;
  fVar7 = lbl_82005344;
  fVar1 = param_1[2];
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar4 = param_1[3];
  fVar5 = fVar1 * lbl_82005344;
  fVar8 = fVar2 * lbl_82005344;
  param_2[9] = lbl_821AAD20;
  param_2[10] = fVar6;
  param_2[0xb] = fVar6;
  fVar9 = lbl_82002AE0;
  fVar1 = fVar1 * fVar5;
  fVar6 = fVar3 * fVar3 * fVar7;
  fVar7 = fVar4 * fVar3 * fVar7;
  param_2[3] = fVar3 * fVar8 - fVar4 * fVar5;
  param_2[1] = fVar3 * fVar8 + fVar4 * fVar5;
  param_2[7] = fVar2 * fVar5 - fVar7;
  param_2[5] = fVar2 * fVar5 + fVar7;
  param_2[6] = fVar3 * fVar5 + fVar4 * fVar8;
  *param_2 = fVar9 - (fVar1 + fVar2 * fVar8);
  param_2[4] = fVar9 - (fVar1 + fVar6);
  param_2[2] = fVar3 * fVar5 - fVar4 * fVar8;
  param_2[8] = fVar9 - (fVar2 * fVar8 + fVar6);
  return;
}

