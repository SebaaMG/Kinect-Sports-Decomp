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
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_8280A668();
extern unsigned int lbl_821AAD20;


void fn_8280F9E8(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_20;
  float fStack_1c;
  
  fn_8280A668(param_1,&fStack_1c,&fStack_20);
  fVar7 = lbl_821AAD20;
  fVar1 = *param_1;
  fVar6 = -(fVar1 * fStack_20 - fVar1);
  fVar2 = param_1[2];
  fVar3 = param_1[1];
  fVar5 = -(fVar3 * fStack_20 - fVar3);
  fVar4 = -(fVar2 * fStack_20 - fVar2);
  *param_3 = fVar1 * fVar6 + fStack_20;
  param_3[3] = fVar6 * param_1[1] - fVar2 * fStack_1c;
  param_3[6] = param_1[2] * fVar6 + fVar3 * fStack_1c;
  param_3[9] = fVar7;
  param_3[1] = *param_1 * fVar5 + fVar2 * fStack_1c;
  param_3[4] = fVar5 * param_1[1] + fStack_20;
  param_3[7] = param_1[2] * fVar5 - fVar1 * fStack_1c;
  param_3[10] = fVar7;
  param_3[2] = *param_1 * fVar4 - fVar3 * fStack_1c;
  param_3[5] = fVar4 * param_1[1] + fVar1 * fStack_1c;
  param_3[8] = param_1[2] * fVar4 + fStack_20;
  param_3[0xb] = fVar7;
  return;
}

