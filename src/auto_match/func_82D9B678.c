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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CEC730();


void fn_82D9B678(int param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  int in_r0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  pfVar1 = (float *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar2 = (float *)(param_1 + 0x20U & 0xfffffff0);
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar10 = pfVar2[3];
  pfVar2 = (float *)(param_1 + 0x30U & 0xfffffff0);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar2 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar2 = in_register_000100d0 * *pfVar1;
  pfVar2[1] = in_register_000100d4 * fVar11;
  pfVar2[2] = in_register_000100d8 * fVar12;
  pfVar2[3] = in_vr13 * fVar13;
  pfVar1 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_000100b0 * fVar7;
  pfVar1[1] = in_register_000100b4 * fVar8;
  pfVar1[2] = in_register_000100b8 * fVar9;
  pfVar1[3] = in_vr11 * fVar10;
  pfVar1 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar1 = in_register_00010090 * fVar3;
  pfVar1[1] = in_register_00010094 * fVar4;
  pfVar1[2] = in_register_00010098 * fVar5;
  pfVar1[3] = in_vr9 * fVar6;
  fn_82CEC730(param_2,auStack_40);
  return;
}

