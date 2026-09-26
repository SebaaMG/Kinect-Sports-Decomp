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
extern int fn_82F64318();
extern int fn_82F643F8();
extern unsigned int lbl_82002C5C;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82CE5690(double param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 in_r0;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  dVar3 = (double)(float)(param_1 * (double)lbl_82002C5C);
  fn_82F64318(dVar3);
  pfVar1 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
  pfVar2 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  *pfVar2 = *pfVar1 * in_register_000100c0;
  pfVar2[1] = fVar4 * in_register_000100c4;
  pfVar2[2] = fVar5 * in_register_000100c8;
  pfVar2[3] = fVar6 * in_vr12;
  dVar3 = (double)fn_82F643F8(dVar3);
  *(float *)(param_2 + 0xc) = (float)dVar3;
  return;
}

