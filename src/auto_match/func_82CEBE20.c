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


void fn_82CEBE20(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_r0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + param_1 & 0xfffffff0);
  fVar7 = pfVar2[1];
  fVar8 = pfVar2[2];
  fVar9 = pfVar2[3];
  pfVar3 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar7 * fVar4;
  pfVar3[2] = fVar8 * fVar5;
  pfVar3[3] = fVar9 * fVar6;
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar3 = (float *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar4 * fVar7;
  pfVar3[2] = fVar5 * fVar8;
  pfVar3[3] = fVar6 * fVar9;
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar3 = (float *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar4 * fVar7;
  pfVar3[2] = fVar5 * fVar8;
  pfVar3[3] = fVar6 * fVar9;
  return;
}

