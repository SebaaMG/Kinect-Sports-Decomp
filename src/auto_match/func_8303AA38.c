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
extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82175460;
extern unsigned int lbl_8217D35C;


void fn_8303AA38(double param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  dVar7 = (double)fn_82F67DE8((double)(float)(param_1 * (double)lbl_8217D35C));
  fVar6 = lbl_82005344;
  fVar5 = lbl_82005340;
  fVar1 = lbl_82002AE0 / (float)dVar7;
  fVar4 = fVar1 * fVar1;
  fVar2 = lbl_82002AE0 - fVar4;
  fVar3 = lbl_82002AE0 - fVar1 * lbl_82175460;
  fVar1 = lbl_82002AE0 / (fVar4 + fVar1 * lbl_82175460 + lbl_82002AE0);
  *param_3 = fVar1;
  param_3[1] = fVar1 * fVar6;
  param_3[2] = fVar2 * fVar1 * fVar5;
  param_3[3] = -((fVar3 + fVar4) * fVar1);
  return;
}

