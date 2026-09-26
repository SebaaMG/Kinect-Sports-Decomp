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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_824B46C0();


undefined8
fn_824B4730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  int in_r0;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar3 = fn_824B46C0(auStack_50,param_2,param_4);
  pfVar1 = (float *)(in_r0 + iVar3 & 0xfffffff0);
  fVar7 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  iVar3 = fn_824B46C0(auStack_40,param_2,param_3);
  pfVar1 = (float *)(in_r0 + iVar3 & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar2 = *pfVar1 - fVar7;
  pfVar2[1] = fVar4 - fVar8;
  pfVar2[2] = fVar5 - fVar9;
  pfVar2[3] = fVar6 - fVar10;
  return param_1;
}

