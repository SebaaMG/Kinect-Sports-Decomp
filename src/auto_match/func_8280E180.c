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
extern int fn_828095F8();
extern int fn_82809950();
extern int fn_8280A550();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_821AAD20;


void fn_8280E180(undefined8 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  double extraout_f1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pfVar1 = (float *)fn_82F6A544();
  dVar3 = (double)lbl_82002AE0;
  dVar4 = (double)(float)(dVar3 - extraout_f1);
  dVar6 = (double)(param_2[2] * pfVar1[2] +
                  param_2[3] * pfVar1[3] + param_2[1] * pfVar1[1] + *pfVar1 * *param_2);
  dVar5 = extraout_f1;
  if (dVar6 < (double)lbl_821AAD20) {
    dVar6 = -dVar6;
    dVar5 = -extraout_f1;
  }
  if (dVar6 < (double)lbl_8201E038) {
    dVar2 = (double)fn_828095F8(dVar6);
    dVar3 = (double)fn_8280A550(-(double)(float)(dVar6 * dVar6 - dVar3));
    dVar4 = (double)fn_82809950((double)(float)(dVar2 * dVar4));
    dVar4 = (double)(float)(dVar4 * dVar3);
    dVar5 = (double)fn_82809950((double)(float)(dVar2 * dVar5));
    dVar5 = (double)(float)(dVar5 * dVar3);
  }
  *param_3 = (float)((double)*pfVar1 * dVar4 + (double)(float)((double)*param_2 * dVar5));
  param_3[1] = (float)((double)param_2[1] * dVar5 + (double)(float)((double)pfVar1[1] * dVar4));
  param_3[2] = (float)((double)param_2[2] * dVar5 + (double)(float)((double)pfVar1[2] * dVar4));
  param_3[3] = (float)((double)param_2[3] * dVar5 + (double)(float)((double)pfVar1[3] * dVar4));
  fn_82F6A590();
  return;
}

