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
extern int fn_82F534A0();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_82F5E840(undefined8 param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 in_r0;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  fn_82F534A0();
  pfVar1 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
  pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar2 = in_register_00010010 - *pfVar1 * in_register_000100d0;
  pfVar2[1] = in_register_00010014 - fVar3 * in_register_000100d4;
  pfVar2[2] = in_register_00010018 - fVar4 * in_register_000100d8;
  pfVar2[3] = in_vr1 - fVar5 * in_vr13;
  return param_1;
}

