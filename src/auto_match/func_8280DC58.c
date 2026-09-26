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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201E038;
extern unsigned int lbl_821AAD20;


void fn_8280DC58(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  double dVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pfVar1 = (float *)fn_82F6A540();
  dVar7 = (double)pfVar1[3];
  dVar6 = (double)lbl_82002AE0;
  dVar5 = (double)(float)(dVar6 - extraout_f1);
  dVar2 = dVar6;
  if (dVar7 < (double)lbl_821AAD20) {
    dVar7 = -dVar7;
    dVar2 = (double)lbl_8200133C;
  }
  dVar4 = extraout_f1;
  if (dVar7 < (double)lbl_8201E038) {
    dVar3 = (double)fn_828095F8(dVar7);
    dVar6 = (double)fn_8280A550(-(double)(float)(dVar7 * dVar7 - dVar6));
    dVar5 = (double)fn_82809950((double)(float)(dVar3 * dVar5));
    dVar5 = (double)(float)(dVar5 * dVar6);
    dVar7 = (double)fn_82809950((double)(float)(dVar3 * dVar4));
    dVar4 = (double)(float)(dVar7 * dVar6);
  }
  dVar2 = (double)(float)(dVar2 * dVar4);
  *param_3 = (float)((double)*pfVar1 * dVar2);
  param_3[1] = (float)((double)pfVar1[1] * dVar2);
  param_3[2] = (float)((double)pfVar1[2] * dVar2);
  param_3[3] = (float)((double)pfVar1[3] * dVar2 + dVar5);
  fn_82F6A58C();
  return;
}

