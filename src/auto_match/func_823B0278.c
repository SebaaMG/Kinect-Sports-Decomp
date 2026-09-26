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
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern int fn_82A1DD38();
extern int fn_82F6A510();
extern int fn_82F6A55C();
extern unsigned int lbl_821CC160;


void fn_823B0278(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  double extraout_f1;
  double dVar6;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  
  iVar2 = fn_82F6A510();
  if (param_4 == 0) {
    if (param_5 == 0) {
      if (param_6 == 0) {
        if (*(int *)(iVar2 + 0xbc) == 0) {
          pfVar4 = (float *)0x831c9d24;
          pfVar3 = (float *)0x831c9d6c;
        }
        else {
          pfVar4 = (float *)0x831c9e44;
          pfVar3 = (float *)0x831c9e8c;
        }
      }
      else {
        pfVar4 = (float *)0x831c9fac;
        pfVar3 = (float *)0x831c9fac;
      }
    }
    else {
      pfVar4 = (float *)0x831c9f64;
      pfVar3 = (float *)0x831c9f64;
    }
  }
  else if (*(int *)(iVar2 + 0xc4) == 0) {
    if (*(int *)(iVar2 + 0xbc) == 0) {
      pfVar4 = (float *)0x831c9db4;
      pfVar3 = (float *)0x831c9dfc;
    }
    else {
      pfVar4 = (float *)0x831c9ed4;
      pfVar3 = (float *)0x831c9f1c;
    }
  }
  else {
    pfVar4 = (float *)0x831c9ff4;
    pfVar3 = (float *)0x831ca03c;
  }
  fVar1 = *(float *)(iVar2 + 0x14c);
  if (fVar1 <= lbl_821CC160) {
    if (lbl_821CC160 <= fVar1) {
      dVar6 = (double)pfVar4[4];
    }
    else {
      dVar6 = (double)pfVar4[0x11];
    }
  }
  else {
    dVar6 = (double)pfVar4[0xc];
  }
  if (fVar1 <= lbl_821CC160) {
    if (lbl_821CC160 <= fVar1) {
      dVar5 = (double)pfVar3[4];
    }
    else {
      dVar5 = (double)pfVar3[0x11];
    }
  }
  else {
    dVar5 = (double)pfVar3[0xc];
  }
  fStack_d0 = (float)((double)(float)(dVar5 - dVar6) * extraout_f1 + dVar6);
  fStack_e0 = (float)((double)(float)((double)*pfVar3 - (double)*pfVar4) * extraout_f1 +
                     (double)*pfVar4);
  fStack_dc = (float)((double)(float)((double)pfVar3[1] - (double)pfVar4[1]) * extraout_f1 +
                     (double)pfVar4[1]);
  fStack_d8 = (float)((double)(float)((double)pfVar3[2] - (double)pfVar4[2]) * extraout_f1 +
                     (double)pfVar4[2]);
  fStack_d4 = (float)((double)(float)((double)pfVar3[3] - (double)pfVar4[3]) * extraout_f1 +
                     (double)pfVar4[3]);
  fStack_cc = (float)((double)(float)((double)pfVar3[5] - (double)pfVar4[5]) * extraout_f1 +
                     (double)pfVar4[5]);
  fStack_c8 = (float)((double)(float)((double)pfVar3[6] - (double)pfVar4[6]) * extraout_f1 +
                     (double)pfVar4[6]);
  fStack_c4 = (float)((double)(float)((double)pfVar3[7] - (double)pfVar4[7]) * extraout_f1 +
                     (double)pfVar4[7]);
  fStack_c0 = (float)((double)(float)((double)pfVar3[8] - (double)pfVar4[8]) * extraout_f1 +
                     (double)pfVar4[8]);
  fStack_ac = (float)((double)(float)((double)pfVar3[0xd] - (double)pfVar4[0xd]) * extraout_f1 +
                     (double)pfVar4[0xd]);
  fStack_bc = (float)((double)(float)((double)pfVar3[9] - (double)pfVar4[9]) * extraout_f1 +
                     (double)pfVar4[9]);
  fStack_a8 = (float)((double)(float)((double)pfVar3[0xe] - (double)pfVar4[0xe]) * extraout_f1 +
                     (double)pfVar4[0xe]);
  fStack_b8 = (float)((double)(float)((double)pfVar3[10] - (double)pfVar4[10]) * extraout_f1 +
                     (double)pfVar4[10]);
  fStack_a4 = (float)((double)(float)((double)pfVar3[0xf] - (double)pfVar4[0xf]) * extraout_f1 +
                     (double)pfVar4[0xf]);
  fStack_b4 = (float)((double)(float)((double)pfVar3[0xb] - (double)pfVar4[0xb]) * extraout_f1 +
                     (double)pfVar4[0xb]);
  fStack_a0 = (float)((double)(float)((double)pfVar3[0x10] - (double)pfVar4[0x10]) * extraout_f1 +
                     (double)pfVar4[0x10]);
  fn_82A1DD38(param_2,&fStack_e0,0x48);
  fn_82F6A55C();
  return;
}

