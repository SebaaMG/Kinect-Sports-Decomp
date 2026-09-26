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
extern unsigned int fStack_30;
extern int fn_8253FDC8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821917CC;
extern unsigned int lbl_82195668;
extern unsigned int lbl_8219566C;
extern unsigned int lbl_821CC160;


void fn_825B3620(double param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fStack_30;
  float afStack_2c [5];
  
  dVar5 = (double)lbl_8218E8E8;
  fn_8253FDC8((double)(float)(param_1 * dVar5),param_2,afStack_2c,&fStack_30);
  fVar2 = lbl_821917B4;
  fVar1 = fStack_30 * lbl_821917B4;
  *param_3 = fVar1;
  param_3[3] = fVar1;
  fVar1 = lbl_821CC160;
  fVar4 = lbl_82195668;
  fVar3 = lbl_821917CC;
  fStack_30 = fStack_30 * lbl_82195668;
  param_3[6] = lbl_821CC160;
  param_3[7] = fVar1;
  fVar1 = afStack_2c[0] * lbl_8219566C;
  param_3[1] = afStack_2c[0] * fVar2;
  param_3[2] = afStack_2c[0] * fVar3;
  param_3[4] = (float)((double)(afStack_2c[0] * fVar4 + fStack_30) + dVar5);
  param_3[5] = (float)((double)(fVar1 + fStack_30) + dVar5);
  return;
}

