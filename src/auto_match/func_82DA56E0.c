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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_20;
extern unsigned int fStack0000001c;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82DA56E0(double param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 in_r0;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  float fStack0000001c;
  undefined1 auStack_20 [32];
  
  fStack0000001c = (float)param_1;
  pfVar2 = (float *)((int)in_r0 + param_4 & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) + 0x1c);
  pcVar1 = *(code **)(*param_2 + 0x50);
  pfVar3 = (float *)((uint)(auStack_20 + (int)in_r0) & 0xfffffff0);
  *pfVar3 = *pfVar2 * in_register_000100c0;
  pfVar3[1] = fVar4 * in_register_000100c4;
  pfVar3[2] = fVar5 * in_register_000100c8;
  pfVar3[3] = fVar6 * in_vr12;
  (*pcVar1)(param_2,ZEXT48(&stack0x00000000) - 0x20,param_5);
  return;
}

