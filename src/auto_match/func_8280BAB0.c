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
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_8280BAB0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  float *param_5)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  double dVar17;
  double extraout_f1;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pfVar16 = (float *)fn_82F6A548();
  fVar1 = pfVar16[7];
  dVar17 = (double)fVar1;
  fVar2 = pfVar16[0xb];
  dVar20 = (double)fVar2;
  fVar3 = pfVar16[0xf];
  dVar19 = (double)fVar3;
  fVar4 = pfVar16[3];
  dVar18 = (double)fVar4;
  fVar5 = pfVar16[1];
  fVar6 = pfVar16[5];
  fVar7 = pfVar16[9];
  fVar8 = pfVar16[0xd];
  fVar9 = pfVar16[4];
  fVar10 = pfVar16[8];
  fVar11 = pfVar16[0xc];
  fVar12 = pfVar16[2];
  fVar13 = pfVar16[6];
  fVar14 = pfVar16[10];
  fVar15 = pfVar16[0xe];
  *param_5 = (float)(dVar18 * extraout_f1 + (double)*pfVar16);
  param_5[4] = (float)(dVar17 * extraout_f1 + (double)fVar9);
  param_5[8] = (float)(dVar20 * extraout_f1 + (double)fVar10);
  param_5[0xc] = (float)(dVar19 * extraout_f1 + (double)fVar11);
  param_5[1] = (float)(dVar18 * param_2 + (double)fVar5);
  param_5[5] = (float)(dVar17 * param_2 + (double)fVar6);
  param_5[9] = (float)(dVar20 * param_2 + (double)fVar7);
  param_5[0xd] = (float)(dVar19 * param_2 + (double)fVar8);
  param_5[2] = (float)(dVar18 * param_3 + (double)fVar12);
  param_5[6] = (float)(dVar17 * param_3 + (double)fVar13);
  param_5[10] = (float)(dVar20 * param_3 + (double)fVar14);
  param_5[0xe] = (float)(dVar19 * param_3 + (double)fVar15);
  param_5[3] = fVar4;
  param_5[7] = fVar1;
  param_5[0xb] = fVar2;
  param_5[0xf] = fVar3;
  fn_82F6A594();
  return;
}

