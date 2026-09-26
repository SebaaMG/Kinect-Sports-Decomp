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
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82809CB0();
extern int fn_8280A5D8();
extern int fn_82810328();
extern unsigned int lbl_820069B4;


undefined8
fn_827E9E08(float *param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 param_5,
             float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  fn_82810328(param_2,param_5,&fStack_50);
  dVar4 = (double)fn_82809CB0((double)fStack_50);
  dVar5 = (double)lbl_820069B4;
  if (dVar4 <= dVar5) {
    if ((*param_3 <= *param_1) && (*param_1 <= *param_4)) goto LAB_827e9ee0;
LAB_827ea020:
    uVar3 = 0;
  }
  else {
    dVar4 = (double)fn_8280A5D8((double)fStack_50);
    fVar1 = (float)((double)(*param_3 - *param_1) * dVar4);
    fVar2 = (float)((double)(*param_4 - *param_1) * dVar4);
    if (fVar1 <= fVar2) {
      if (*param_6 < fVar1) {
        *param_6 = fVar1;
      }
      if (fVar2 < *param_7) {
        *param_7 = fVar2;
      }
    }
    else {
      if (*param_6 < fVar2) {
        *param_6 = fVar2;
      }
      if (fVar1 < *param_7) {
        *param_7 = fVar1;
      }
    }
LAB_827e9ee0:
    dVar4 = (double)fn_82809CB0((double)fStack_4c);
    if (dVar4 <= dVar5) {
      if ((param_1[1] < param_3[1]) || (param_4[1] < param_1[1])) goto LAB_827ea020;
    }
    else {
      dVar4 = (double)fn_8280A5D8((double)fStack_4c);
      fVar1 = (float)((double)(param_3[1] - param_1[1]) * dVar4);
      fVar2 = (float)((double)(param_4[1] - param_1[1]) * dVar4);
      if (fVar1 <= fVar2) {
        if (*param_6 < fVar1) {
          *param_6 = fVar1;
        }
        if (fVar2 < *param_7) {
          *param_7 = fVar2;
        }
      }
      else {
        if (*param_6 < fVar2) {
          *param_6 = fVar2;
        }
        if (fVar1 < *param_7) {
          *param_7 = fVar1;
        }
      }
    }
    dVar4 = (double)fn_82809CB0((double)fStack_48);
    if (dVar4 <= dVar5) {
      if ((param_1[2] < param_3[2]) || (param_4[2] < param_1[2])) goto LAB_827ea020;
    }
    else {
      dVar4 = (double)fn_8280A5D8((double)fStack_48);
      fVar1 = (float)((double)(param_3[2] - param_1[2]) * dVar4);
      fVar2 = (float)((double)(param_4[2] - param_1[2]) * dVar4);
      if (fVar1 <= fVar2) {
        if (*param_6 < fVar1) {
          *param_6 = fVar1;
        }
        if (fVar2 < *param_7) {
          *param_7 = fVar2;
        }
      }
      else {
        if (*param_6 < fVar2) {
          *param_6 = fVar2;
        }
        if (fVar1 < *param_7) {
          *param_7 = fVar1;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

