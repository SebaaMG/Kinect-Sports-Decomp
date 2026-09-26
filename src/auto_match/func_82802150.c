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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


void fn_82802150(double param_1,double param_2,double param_3,uint *param_4)

{
  float *in_r7;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (double)lbl_82002C5C;
  dVar3 = (double)(float)((double)(float)((double)*param_4 + param_3) * param_2);
  dVar4 = (double)(float)((double)(float)((double)param_4[2] + param_3) * param_2);
  dVar6 = (double)(float)((double)(float)((double)param_4[1] + param_3) * param_2);
  dVar5 = (double)(float)((double)(float)((double)(float)((double)param_4[3] + param_3) * param_2) *
                         dVar1);
  dVar2 = (double)(float)(dVar3 * dVar1);
  *in_r7 = (float)((double)(float)((double)(float)((double)((float)(dVar6 * (double)lbl_820145BC -
                                                                   (double)(float)(dVar4 * (double)
                                                  lbl_820145BC)) + (float)(dVar5 - dVar2)) * param_1
                                                  + (double)(-(float)(dVar6 * (double)lbl_82016290 -
                                                                     dVar3) +
                                                            (float)(dVar4 * (double)lbl_82005344 -
                                                                   dVar5))) * param_1 +
                                  (double)(float)(dVar4 * dVar1 - dVar2)) * param_1 + dVar6);
  return;
}

