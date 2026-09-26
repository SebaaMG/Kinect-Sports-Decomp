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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_823850E0();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82386098(double param_1,int param_2,int param_3,undefined8 param_4,int param_5,int param_6
                  ,undefined8 param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 in_r0;
  int iVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_000100d0;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_register_00010480;
  float in_register_00010484;
  float in_register_00010488;
  float in_vr72;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  iVar3 = param_3 * 0x140 + param_2;
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x80);
  fVar12 = in_register_00010480 * in_register_000100d0 + in_register_00010010;
  fVar13 = in_register_00010484 * in_register_000100d0 + in_register_00010014;
  fVar14 = in_register_00010488 * in_register_000100d0 + in_register_00010018;
  fVar15 = in_vr72 * in_register_000100d0 + in_vr1;
  dVar4 = (double)*(float *)(iVar3 + 0x284);
  fVar5 = *(float *)(iVar3 + 0x288);
  pfVar1 = (float *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
  *pfVar1 = fVar12;
  pfVar1[1] = fVar13;
  pfVar1[2] = fVar14;
  pfVar1[3] = fVar15;
  fn_823850E0((double)(float)((double)(float)((double)fVar5 - dVar4) * param_1 + dVar4),
                    param_2,param_7);
  iVar3 = (int)in_r0;
  pfVar1 = (float *)((uint)(auStack_70 + iVar3) & 0xfffffff0);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  pfVar1 = (float *)((uint)(auStack_60 + iVar3) & 0xfffffff0);
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  fVar11 = pfVar1[3];
  pfVar2 = (float *)(iVar3 + param_5 & 0xfffffff0);
  *pfVar2 = fVar12 + *pfVar1;
  pfVar2[1] = fVar13 + fVar9;
  pfVar2[2] = fVar14 + fVar10;
  pfVar2[3] = fVar15 + fVar11;
  pfVar1 = (float *)(iVar3 + param_6 & 0xfffffff0);
  *pfVar1 = fVar12 + fVar5;
  pfVar1[1] = fVar13 + fVar6;
  pfVar1[2] = fVar14 + fVar7;
  pfVar1[3] = fVar15 + fVar8;
  return;
}

