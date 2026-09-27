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
extern float fRam83218bf4;
extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82079F24;
extern unsigned int lbl_82079FB0;
extern unsigned int uRam83218bf8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_829F3590(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float *in_r6;
  double dVar3;
  
  if ((uRam83218bf8 & 1) == 0) {
    uRam83218bf8 = uRam83218bf8 | 1;
    dVar3 = (double)fn_82F67DE8(lbl_82079FB0);
    fRam83218bf4 = (float)dVar3 * lbl_82079F24;
  }
  fVar2 = lbl_82002AE0;
  dVar3 = (double)lbl_82015BD8;
  *in_r6 = (float)((double)((float)(param_1 - (double)lbl_82015BD0) * fRam83218bf4) * param_3);
  fVar1 = (float)(dVar3 - param_2) * fRam83218bf4;
  in_r6[2] = (float)param_3;
  in_r6[3] = fVar2;
  in_r6[1] = (float)((double)fVar1 * param_3);
  return;
}

