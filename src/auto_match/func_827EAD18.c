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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int fStack_100;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_d4;
extern unsigned int fStack_e4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_8280ADB0();
extern int fn_8280B240();
extern int fn_8280CB70();
extern int fn_8281CAE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


void fn_827EAD18(undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  dVar1 = (double)lbl_821AAD20;
  if ((double)*param_3 == dVar1) {
    if ((double)param_3[1] != dVar1) {
      fStack_fc = (float)((double)param_3[3] / (double)param_3[1]);
      fStack_100 = lbl_821AAD20;
      fStack_f8 = lbl_821AAD20;
      goto LAB_827eada4;
    }
    if ((double)param_3[2] == dVar1) goto LAB_827eada4;
    fStack_f8 = (float)((double)param_3[3] / (double)param_3[2]);
    fStack_100 = lbl_821AAD20;
  }
  else {
    fStack_100 = (float)((double)param_3[3] / (double)*param_3);
    fStack_f8 = lbl_821AAD20;
  }
  fStack_fc = lbl_821AAD20;
LAB_827eada4:
  fn_8280B240(-(double)*param_2,-(double)param_2[1],-(double)param_2[2],auStack_b0);
  uStack_e0 = param_1[1];
  uStack_d0 = param_1[2];
  uStack_ec = param_1[3];
  uStack_dc = param_1[4];
  uStack_cc = param_1[5];
  uStack_b4 = lbl_82002AE0;
  uStack_e8 = param_1[6];
  uStack_d8 = param_1[7];
  uStack_c8 = param_1[8];
  fStack_c0 = (float)dVar1;
  fStack_bc = (float)dVar1;
  fStack_b8 = (float)dVar1;
  fStack_e4 = (float)dVar1;
  fStack_d4 = (float)dVar1;
  fStack_c4 = (float)dVar1;
  uStack_f0 = *param_1;
  fn_8280CB70(&uStack_f0,auStack_b0,auStack_70);
  fn_8280B240((double)*param_2,(double)param_2[1],(double)param_2[2],auStack_b0);
  fn_8280CB70(auStack_b0,auStack_70,auStack_70);
  fn_8280ADB0(auStack_70,&fStack_100,&fStack_100);
  fn_8281CAE8(param_1,param_3,param_4);
  param_4[3] = *param_4 * fStack_100 + param_4[2] * fStack_f8 + param_4[1] * fStack_fc;
  return;
}

