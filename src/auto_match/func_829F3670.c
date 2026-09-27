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
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82079FB0;
extern unsigned int lbl_82079FB8;
extern unsigned int lbl_820885C8;
extern float lbl_83218BFC;
extern unsigned int lbl_83218C00;


void fn_829F3670(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float *in_r6;
  double dVar3;
  
  if ((lbl_83218C00 & 1) == 0) {
    lbl_83218C00 = lbl_83218C00 | 1;
    dVar3 = (double)fn_82F67DE8(lbl_82079FB0);
    lbl_83218BFC = (float)dVar3 * lbl_82079FB8;
  }
  fVar2 = lbl_82002AE0;
  dVar3 = (double)lbl_82015B38;
  *in_r6 = (float)((double)((float)(param_1 - (double)lbl_820885C8) * lbl_83218BFC) * param_3);
  fVar1 = (float)(dVar3 - param_2) * lbl_83218BFC;
  in_r6[2] = (float)param_3;
  in_r6[3] = fVar2;
  in_r6[1] = (float)((double)fVar1 * param_3);
  return;
}

