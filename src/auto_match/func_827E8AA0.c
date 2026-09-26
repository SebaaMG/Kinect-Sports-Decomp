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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_7c;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_827E8798();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810558();
extern int fn_828105C8();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827E8AA0(undefined8 param_1,undefined8 param_2,double param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_r6;
  undefined8 in_r7;
  float *pfVar3;
  undefined8 in_r8;
  float *pfVar4;
  int *in_r9;
  double dVar5;
  double dVar6;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [4];
  float fStack_7c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  dVar5 = (double)fn_82F6A548();
  uVar2 = fn_827E8798();
  if ((int)uVar2 != 0) {
    iVar1 = *in_r9;
    pfVar3 = (float *)in_r6;
    if (iVar1 == 1) {
      pfVar4 = (float *)in_r8;
      *pfVar4 = *pfVar3;
      pfVar4[1] = (float)((double)pfVar3[1] - param_3);
      pfVar4[2] = pfVar3[2];
      fn_82810B78(in_r8,in_r8);
      pfVar3 = (float *)in_r7;
      *pfVar3 = (float)((double)*pfVar4 * dVar5);
      pfVar3[1] = (float)(dVar5 * (double)pfVar4[1] + param_3);
      pfVar3[2] = (float)((double)pfVar4[2] * dVar5);
    }
    else if (iVar1 == 2) {
      fn_82810B78(in_r6,in_r8);
      fn_828102A8(param_2,in_r8,in_r7);
    }
    else if (iVar1 == 3) {
      dVar6 = (double)lbl_821AAD20;
      fn_828105C8(dVar6,(double)lbl_82002AE0,dVar6,auStack_60);
      fStack_b0 = *pfVar3;
      fStack_a8 = pfVar3[2];
      fStack_ac = (float)dVar6;
      fn_82810B78(&fStack_b0,&fStack_b0);
      fn_828102A8(dVar5,&fStack_b0,auStack_80);
      fStack_7c = (float)param_3;
      fn_828102A8(param_2,&fStack_b0,auStack_90);
      fn_82810328(auStack_80,auStack_90,auStack_a0);
      fn_82810328(in_r6,auStack_90,auStack_70);
      fn_82810B78(auStack_a0,auStack_a0);
      fn_82810280(auStack_70,auStack_a0);
      fn_82810558(auStack_a0,auStack_90);
      fn_82810240(auStack_90,auStack_60,auStack_50);
      fn_82810240(auStack_a0,auStack_50,in_r8);
    }
    uVar2 = 1;
  }
  fn_82F6A594(uVar2);
  return;
}

