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
extern int fn_82D401F8();
extern unsigned int lbl_82132D70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_82D45730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  pfVar1 = (float *)((uint)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  pfVar1 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar2 * in_register_000100b0;
  pfVar1[1] = fVar3 * in_register_000100b4;
  pfVar1[2] = fVar4 * in_register_000100b8;
  pfVar1[3] = fVar5 * in_vr11;
  pfVar1 = (float *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar2 * in_register_00010090;
  pfVar1[1] = fVar3 * in_register_00010094;
  pfVar1[2] = fVar4 * in_register_00010098;
  pfVar1[3] = fVar5 * in_vr9;
  fn_82D401F8(param_2,auStack_20,auStack_30,param_4,param_4);
  return;
}

